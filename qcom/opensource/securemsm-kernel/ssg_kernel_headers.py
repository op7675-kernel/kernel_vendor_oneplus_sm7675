# Copyright (c) 2020-2021, The Linux Foundation. All rights reserved.
# Copyright (c) 2022-2023 Qualcomm Innovation Center, Inc. All rights reserved.
#
# This program is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License version 2 as published by
# the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
# more details.
#
# You should have received a copy of the GNU General Public License along with
# this program.  If not, see <http://www.gnu.org/licenses/>.

import argparse
import filecmp
import os
import re
import subprocess
import sys

def run_headers_install(verbose, gen_dir, headers_install, unifdef, prefix, h):
    if not h.startswith(prefix):
        print('error: expected prefix [%s] on header [%s]' % (prefix, h))
        return False

    # out_h is combining the relative path to the header file (made in gen_smcinvoke_headers()) to the gen_dir out/soong/.temp/sbox/<temp hash value>/out/
    # ex. out/soong/.temp/sbox/<temp hash value>/out/linux/smcinvoke.h
    # After the build is complete, you can find the headers that you exposed located in the following gen path:
    # out/soong/.intermediates/.../qti_generate_smcinvoke_kernel_headers/gen/
    if 'include/uapi' in h:
        out_h = os.path.join(gen_dir,'include', h[len(prefix):])
    else:
        out_h = os.path.join(gen_dir, h[len(prefix):])
    (out_h_dirname, out_h_basename) = os.path.split(out_h)
    env = os.environ.copy()
    env["LOC_UNIFDEF"] = unifdef
    cmd = ["sh", headers_install, h, out_h]

    if verbose:
        print('run_headers_install: cmd is %s' % cmd)

    result = subprocess.call(cmd, env=env)

    if result != 0:
        print('error: run_headers_install: cmd %s failed %d' % (cmd, result))
        return False
    return True

def gen_smcinvoke_headers(verbose, gen_dir, headers_install, unifdef, smcinvoke_headers_to_expose):
    error_count = 0
    # smcinvoke_headers_to_expose is a string list of individual paths to headers to expose
    # They are passed using Android.bp variable substition: $(locations <label>) ex. $(locations linux/*.h)
    # Note <label> has to be a rule to find the file, it cannot be the file itself.
    for h in smcinvoke_headers_to_expose:
        # h will be the relative path from the repo root directory securemsm-kernel ex. <parent directory structure>/securemsm-kernel/linux/smcinvoke.h
        # So we need to split the string and keep the directory structure we want to expose i.e. just linux/smcinvoke.h
        topDirectory = 'securemsm-kernel'
        if 'include/uapi' in h:
            directorySplitLocation = '/'+ topDirectory +'/'
            smcinvoke_headers_to_expose_prefix = os.path.join(h.split(directorySplitLocation)[0], topDirectory, 'include', 'uapi') + os.sep
            if not run_headers_install(verbose, gen_dir, headers_install, unifdef, smcinvoke_headers_to_expose_prefix, h):
                    error_count += 1
        else:
            directorySplitLocation = '/'+ topDirectory +'/'
            smcinvoke_headers_to_expose_prefix = os.path.join(h.split(directorySplitLocation)[0], topDirectory) + os.sep
            if not run_headers_install(verbose, gen_dir, headers_install, unifdef, smcinvoke_headers_to_expose_prefix, h):
                    error_count += 1
    return error_count

def main():
    """Parse command line arguments and perform top level control."""
    parser = argparse.ArgumentParser(
            description=__doc__,
            formatter_class=argparse.RawDescriptionHelpFormatter)

    # Arguments that apply to every invocation of this script.
    parser.add_argument(
            '--verbose', action='store_true',
            help='Print output that describes the workings of this script.')
    parser.add_argument(
            '--header_arch', required=True,
            help='The arch for which to generate headers.')
    parser.add_argument(
            '--gen_dir', required=True,
            help='Where to place the generated files.')
    parser.add_argument(
            '--smcinvoke_headers_to_expose', required=True, nargs='*',
            help='The list of smcinvoke header files.')
    parser.add_argument(
            '--headers_install', required=True,
            help='The headers_install tool to process input headers.')
    parser.add_argument(
            '--unifdef',
            required=True,
            help='The unifdef tool used by headers_install.')

    args = parser.parse_args()

    if args.verbose:
        print('header_arch [%s]' % args.header_arch)
        print('gen_dir [%s]' % args.gen_dir)
        print('smcinvoke_headers_to_expose [%s]' % args.smcinvoke_headers_to_expose)
        print('headers_install [%s]' % args.headers_install)
        print('unifdef [%s]' % args.unifdef)


    return gen_smcinvoke_headers(args.verbose, args.gen_dir,
            args.headers_install, args.unifdef, args.smcinvoke_headers_to_expose)

if __name__ == '__main__':
    sys.exit(main())
