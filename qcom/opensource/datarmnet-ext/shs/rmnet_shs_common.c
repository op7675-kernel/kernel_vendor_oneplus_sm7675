/* Copyright (c) 2020-2021 The Linux Foundation. All rights reserved.
 * Copyright (c) 2022-2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include "rmnet_shs.h"
#include "rmnet_shs_wq.h"
#include "rmnet_shs_modules.h"
#include <net/ip.h>
#include <linux/cpu.h>
#include <linux/bitmap.h>
#include <linux/netdevice.h>
#include <linux/kernel.h>
#include <linux/smp.h>
#include <linux/ipv6.h>
#include <linux/netdevice.h>
#define DATARMNET48a89fcc16 (0xd26+209-0xdf6)
#define DATARMNETbfe901fc62 (0xd2d+202-0xdf7)
void DATARMNET4095253347(struct DATARMNET9b44b71ee9*ep){trace_rmnet_shs_wq_low(
DATARMNET5e796836fb,DATARMNET7fc202c4c1,(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),
(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),ep,NULL);list_add(&ep->DATARMNET0763436b8d
,&DATARMNET30a3e83974);}void DATARMNETf7d317ed55(struct DATARMNET9b44b71ee9*ep){
trace_rmnet_shs_wq_low(DATARMNET5e796836fb,DATARMNET7643ab0f49,
(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),ep,
NULL);list_del_init(&ep->DATARMNET0763436b8d);}void DATARMNET36e5e526fa(struct 
DATARMNET6c78e47d24*DATARMNETd2a694d52a){trace_rmnet_shs_wq_low(
DATARMNET238d08f0df,DATARMNET3f2d29c867,(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),
(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),DATARMNETd2a694d52a,NULL);spin_lock_bh(&
DATARMNETfbdbab2ef6);list_add_rcu(&DATARMNETd2a694d52a->DATARMNET6de26f0feb,&
DATARMNET9825511866);spin_unlock_bh(&DATARMNETfbdbab2ef6);}void 
DATARMNET2fe780019f(struct DATARMNET6c78e47d24*DATARMNETd2a694d52a){
trace_rmnet_shs_wq_low(DATARMNET238d08f0df,DATARMNET5a3ea29c57,
(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),
DATARMNETd2a694d52a,NULL);spin_lock_bh(&DATARMNETfbdbab2ef6);list_del_rcu(&
DATARMNETd2a694d52a->DATARMNET6de26f0feb);spin_unlock_bh(&DATARMNETfbdbab2ef6);}
void DATARMNETb4a6870b3b(struct DATARMNET6c78e47d24*DATARMNETd2a694d52a){
trace_rmnet_shs_wq_low(DATARMNET92b282b12c,DATARMNETdb9197631d,
(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),
DATARMNETd2a694d52a,NULL);spin_lock_bh(&DATARMNETfbdbab2ef6);list_del_init(&
DATARMNETd2a694d52a->DATARMNET742867e97a);spin_unlock_bh(&DATARMNETfbdbab2ef6);}
void DATARMNETd8a6375e9c(struct DATARMNET6c78e47d24*DATARMNETd2a694d52a,struct 
list_head*head){trace_rmnet_shs_wq_low(DATARMNET92b282b12c,DATARMNET4b58d51c6a,
(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),
DATARMNETd2a694d52a,NULL);spin_lock_bh(&DATARMNETfbdbab2ef6);list_add(&
DATARMNETd2a694d52a->DATARMNET742867e97a,head);spin_unlock_bh(&
DATARMNETfbdbab2ef6);}void DATARMNET9914e9761e(struct DATARMNET6c78e47d24*
DATARMNETd2a694d52a,struct list_head*head){trace_rmnet_shs_wq_low(
DATARMNET92b282b12c,DATARMNETfd4d416388,DATARMNETd2a694d52a->DATARMNET7c894c2f8f
,(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),DATARMNETd2a694d52a,
NULL);spin_lock_bh(&DATARMNETfbdbab2ef6);list_move(&DATARMNETd2a694d52a->
DATARMNET742867e97a,head);spin_unlock_bh(&DATARMNETfbdbab2ef6);}void 
DATARMNET6bf538fa23(void){spin_lock_bh(&DATARMNETec2a4f5211);}void 
DATARMNETaea4c85748(void){spin_unlock_bh(&DATARMNETec2a4f5211);}void 
DATARMNETe46c480d71(void){u8 mask=DATARMNET752465942a;u8 DATARMNET998de79791=
(0xd2d+202-0xdf7);struct DATARMNET9b44b71ee9*ep;list_for_each_entry(ep,&
DATARMNET30a3e83974,DATARMNET0763436b8d){if(!ep->DATARMNET4a4e6f66b5)continue;if
(ep->DATARMNET9fb369ce5f){mask&=ep->DATARMNET9fb369ce5f;DATARMNET998de79791=
(0xd26+209-0xdf6);}}if(!DATARMNET998de79791){DATARMNETecc0627c70.map_mask=
(0xd2d+202-0xdf7);DATARMNETecc0627c70.map_len=(0xd2d+202-0xdf7);return;}else if(
DATARMNETecc0627c70.map_mask!=mask){DATARMNETecc0627c70.map_mask=mask;
DATARMNETecc0627c70.map_len=DATARMNET310c3eb16e(mask);pr_info(
"\x72\x6d\x6e\x65\x74\x5f\x73\x68\x73\x3a\x20\x20\x6d\x61\x73\x6b\x3a\x20\x30\x78\x25\x78\x20\x6d\x61\x70\x6c\x65\x6e\x3a\x20\x25\x64"
,DATARMNETecc0627c70.map_mask,DATARMNETecc0627c70.map_len);}}void 
DATARMNETde8ee16f92(struct DATARMNET63d7680df2*DATARMNET63b1a086d5){
DATARMNETda96251102(DATARMNETd5eb6398da,DATARMNETe9a79499ac,(0x16e8+787-0xc0c),
(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),NULL,NULL);
list_del_init(&DATARMNET63b1a086d5->DATARMNET04c88b8191);DATARMNET349c3a0cab(
DATARMNET63b1a086d5->map_cpu,DATARMNETbfe901fc62);}void DATARMNET3e37ad2816(
struct DATARMNET63d7680df2*DATARMNET63b1a086d5,struct list_head*
DATARMNET4d030eb9b5){DATARMNETda96251102(DATARMNETd5eb6398da,DATARMNET16a68afc17
,(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),
NULL,NULL);list_add(&DATARMNET63b1a086d5->DATARMNET04c88b8191,
DATARMNET4d030eb9b5);DATARMNET349c3a0cab(DATARMNET63b1a086d5->map_cpu,
DATARMNET48a89fcc16);}void DATARMNETe102b3a798(struct DATARMNET63d7680df2*
DATARMNET63b1a086d5,struct list_head*DATARMNET4d030eb9b5,int DATARMNETa7a5705ab0
){DATARMNETda96251102(DATARMNETd5eb6398da,DATARMNET916f444e0a,(0x16e8+787-0xc0c)
,(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),NULL,NULL);list_move(&
DATARMNET63b1a086d5->DATARMNET04c88b8191,DATARMNET4d030eb9b5);
DATARMNET349c3a0cab(DATARMNET63b1a086d5->map_cpu,DATARMNET48a89fcc16);
DATARMNET349c3a0cab((u16)DATARMNETa7a5705ab0,DATARMNETbfe901fc62);}void 
DATARMNET4bde88919f(u8 cpu,int count){if(cpu<DATARMNETc6782fed88){
DATARMNET443cf5aaaf[cpu]+=count;}}u64 DATARMNETfc888b4d3e(u16 cpu){if(cpu>=
DATARMNETc6782fed88){DATARMNET68d84e7b98[DATARMNET54b67b8a75]++;return
(0xd2d+202-0xdf7);}return DATARMNET713717107f[cpu];}inline int 
DATARMNET362b15f941(u16 cpu){return!(((0xd26+209-0xdf6)<<cpu)&
DATARMNETbc3c416b77);}u32 DATARMNETadb0248bd4(u8 DATARMNET42a992465f){u32 ret=
(0xd2d+202-0xdf7);if(DATARMNET42a992465f<DATARMNETc6782fed88)ret=
DATARMNET0997c5650d[DATARMNET42a992465f].DATARMNETae196235f2;DATARMNETda96251102
(DATARMNET75d955c408,DATARMNET9f467b9ce4,DATARMNET42a992465f,ret,
(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),NULL,NULL);return ret;}u32 
DATARMNETeb3978575d(u8 DATARMNET42a992465f){u32 ret=(0xd2d+202-0xdf7);if(
DATARMNET42a992465f<DATARMNETc6782fed88)ret=DATARMNET0997c5650d[
DATARMNET42a992465f].qtail;DATARMNETda96251102(DATARMNET75d955c408,
DATARMNETc154fd2d48,DATARMNET42a992465f,ret,(0x16e8+787-0xc0c),
(0x16e8+787-0xc0c),NULL,NULL);return ret;}u32 DATARMNETeea3cef5b6(u8 
DATARMNET42a992465f){u32 ret=(0xd2d+202-0xdf7);if(DATARMNET42a992465f<
DATARMNETc6782fed88)ret=DATARMNET0997c5650d[DATARMNET42a992465f].
DATARMNET96571b28de;DATARMNETda96251102(DATARMNET75d955c408,DATARMNETc154fd2d48,
DATARMNET42a992465f,ret,(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),NULL,NULL);return 
ret;}int DATARMNET4e292977da(void*priv,const struct list_head*
DATARMNET9cf7d31274,const struct list_head*DATARMNET5444bd3b6f){struct 
DATARMNETe176be7f7c*DATARMNET40e125212a;struct DATARMNETe176be7f7c*
DATARMNETdcaff77beb;if(!DATARMNET9cf7d31274||!DATARMNET5444bd3b6f)return
(0xd2d+202-0xdf7);DATARMNET40e125212a=list_entry(DATARMNET9cf7d31274,struct 
DATARMNETe176be7f7c,DATARMNET7287946e7b);DATARMNETdcaff77beb=list_entry(
DATARMNET5444bd3b6f,struct DATARMNETe176be7f7c,DATARMNET7287946e7b);if(
DATARMNET40e125212a->DATARMNET253a9fc708>DATARMNETdcaff77beb->
DATARMNET253a9fc708)return-(0xd26+209-0xdf6);else if(DATARMNET40e125212a->
DATARMNET253a9fc708<DATARMNETdcaff77beb->DATARMNET253a9fc708)return
(0xd26+209-0xdf6);return(0xd2d+202-0xdf7);}int DATARMNET3c489db64a(void*priv,
const struct list_head*DATARMNET9cf7d31274,const struct list_head*
DATARMNET5444bd3b6f){struct DATARMNET13c47d154e*DATARMNET40e125212a;struct 
DATARMNET13c47d154e*DATARMNETdcaff77beb;if(!DATARMNET9cf7d31274||!
DATARMNET5444bd3b6f)return(0xd2d+202-0xdf7);DATARMNET40e125212a=list_entry(
DATARMNET9cf7d31274,struct DATARMNET13c47d154e,DATARMNETec0e3cb8f0);
DATARMNETdcaff77beb=list_entry(DATARMNET5444bd3b6f,struct DATARMNET13c47d154e,
DATARMNETec0e3cb8f0);if(DATARMNET40e125212a->DATARMNET253a9fc708>
DATARMNETdcaff77beb->DATARMNET253a9fc708)return-(0xd26+209-0xdf6);else if(
DATARMNET40e125212a->DATARMNET253a9fc708<DATARMNETdcaff77beb->
DATARMNET253a9fc708)return(0xd26+209-0xdf6);return(0xd2d+202-0xdf7);}int 
DATARMNETd5c15f1ff3(void*priv,const struct list_head*DATARMNET9cf7d31274,const 
struct list_head*DATARMNET5444bd3b6f){struct DATARMNET09a412b1c6*
DATARMNET40e125212a;struct DATARMNET09a412b1c6*DATARMNETdcaff77beb;if(!
DATARMNET9cf7d31274||!DATARMNET5444bd3b6f)return(0xd2d+202-0xdf7);
DATARMNET40e125212a=list_entry(DATARMNET9cf7d31274,struct DATARMNET09a412b1c6,
DATARMNETd502c0412a);DATARMNETdcaff77beb=list_entry(DATARMNET5444bd3b6f,struct 
DATARMNET09a412b1c6,DATARMNETd502c0412a);if(DATARMNET40e125212a->
DATARMNET253a9fc708>DATARMNETdcaff77beb->DATARMNET253a9fc708)return-
(0xd26+209-0xdf6);else if(DATARMNET40e125212a->DATARMNET253a9fc708<
DATARMNETdcaff77beb->DATARMNET253a9fc708)return(0xd26+209-0xdf6);return
(0xd2d+202-0xdf7);}int DATARMNET85af86a36d(void*priv,const struct list_head*
DATARMNET9cf7d31274,const struct list_head*DATARMNET5444bd3b6f){struct 
DATARMNET47a6995138*DATARMNETdad817a72a;struct DATARMNET47a6995138*
DATARMNET11d167e92b;if(!DATARMNET9cf7d31274||!DATARMNET5444bd3b6f)return
(0xd2d+202-0xdf7);DATARMNETdad817a72a=list_entry(DATARMNET9cf7d31274,struct 
DATARMNET47a6995138,DATARMNET02523bfb57);DATARMNET11d167e92b=list_entry(
DATARMNET5444bd3b6f,struct DATARMNET47a6995138,DATARMNET02523bfb57);if(
DATARMNETdad817a72a->DATARMNET4da6031170>DATARMNET11d167e92b->
DATARMNET4da6031170)return-(0xd26+209-0xdf6);else if(DATARMNETdad817a72a->
DATARMNET4da6031170<DATARMNET11d167e92b->DATARMNET4da6031170)return
(0xd26+209-0xdf6);return(0xd2d+202-0xdf7);}int DATARMNETf181a18009(struct 
net_device*dev){u8 DATARMNETde5894dad9;u8 DATARMNETd9e9d4ff7e;int 
DATARMNET895df156d7=-(0xd26+209-0xdf6);u8 is_match_found=(0xd2d+202-0xdf7);
struct DATARMNET9b44b71ee9*ep=NULL;if(!dev){DATARMNET68d84e7b98[
DATARMNETf5157a9b85]++;return DATARMNET895df156d7;}spin_lock_bh(&
DATARMNETec2a4f5211);list_for_each_entry(ep,&DATARMNET30a3e83974,
DATARMNET0763436b8d){if(!ep->DATARMNET4a4e6f66b5)continue;if(ep->ep==dev){
is_match_found=(0xd26+209-0xdf6);break;}}if(!is_match_found){DATARMNET68d84e7b98
[DATARMNETb8fe2c0e64]++;spin_unlock_bh(&DATARMNETec2a4f5211);return 
DATARMNET895df156d7;}DATARMNETde5894dad9=ep->DATARMNET6bda8fe27e;
DATARMNETd9e9d4ff7e=ep->DATARMNETd7a83774f8;while(DATARMNETde5894dad9<
DATARMNETd9e9d4ff7e){if(ep->DATARMNET5af04d0405[DATARMNETde5894dad9]>=
(0xd2d+202-0xdf7)){DATARMNET895df156d7=ep->DATARMNET5af04d0405[
DATARMNETde5894dad9];break;}DATARMNETde5894dad9++;}if((DATARMNET895df156d7>=
(0xd2d+202-0xdf7))||((ep->DATARMNET6bda8fe27e+(0xd26+209-0xdf6))>=ep->
DATARMNETd7a83774f8))ep->DATARMNET6bda8fe27e=((ep->DATARMNET6bda8fe27e+
(0xd26+209-0xdf6))%ep->DATARMNETd7a83774f8);spin_unlock_bh(&DATARMNETec2a4f5211)
;return DATARMNET895df156d7;}int DATARMNET98b2a0ce62(struct net_device*dev){
struct DATARMNET9b44b71ee9*ep=NULL;int DATARMNET895df156d7=-(0xd26+209-0xdf6);u8
 DATARMNETcc5b7cd962;u8 DATARMNET15bde5cb53;u8 is_match_found=(0xd2d+202-0xdf7);
if(!dev){DATARMNET68d84e7b98[DATARMNETf5157a9b85]++;return DATARMNET895df156d7;}
spin_lock_bh(&DATARMNETec2a4f5211);list_for_each_entry(ep,&DATARMNET30a3e83974,
DATARMNET0763436b8d){if(!ep->DATARMNET4a4e6f66b5)continue;if(ep->ep==dev){
is_match_found=(0xd26+209-0xdf6);break;}}if(!is_match_found){DATARMNET68d84e7b98
[DATARMNETb8fe2c0e64]++;spin_unlock_bh(&DATARMNETec2a4f5211);return 
DATARMNET895df156d7;}DATARMNETcc5b7cd962=ep->DATARMNET121a654efd;
DATARMNET15bde5cb53=ep->DATARMNET847276e5af;while(DATARMNETcc5b7cd962<
DATARMNET15bde5cb53){if(ep->DATARMNET7167e10d99[DATARMNETcc5b7cd962]>=
(0xd2d+202-0xdf7)){DATARMNET895df156d7=ep->DATARMNET7167e10d99[
DATARMNETcc5b7cd962];break;}DATARMNETcc5b7cd962++;}if(DATARMNET895df156d7>=
(0xd2d+202-0xdf7))ep->DATARMNET121a654efd=((DATARMNETcc5b7cd962+
(0xd26+209-0xdf6))%DATARMNET15bde5cb53);spin_unlock_bh(&DATARMNETec2a4f5211);
return DATARMNET895df156d7;}void DATARMNET7f1d9480cb(void*port){
DATARMNET4063c95208();}void DATARMNETa4bd2ef52c(void*port){DATARMNET7b6c061b06()
;}u8 DATARMNET928c931df9(struct rps_map*map){u8 mask=(0xd2d+202-0xdf7);u8 i;for(
i=(0xd2d+202-0xdf7);i<map->len;i++)mask|=(0xd26+209-0xdf6)<<map->cpus[i];return 
mask;}int DATARMNET310c3eb16e(u8 mask){u8 i;u8 DATARMNETc2284e5688=
(0xd2d+202-0xdf7);for(i=(0xd2d+202-0xdf7);i<DATARMNETc6782fed88;i++){if(mask&(
(0xd26+209-0xdf6)<<i))DATARMNETc2284e5688++;}return DATARMNETc2284e5688;}int 
DATARMNET04e8d1b862(u8 cpu,u8 mask){int ret=DATARMNETb91aee91fd;u8 idx=
(0xd2d+202-0xdf7);u8 i;if(!(mask&(0xd26+209-0xdf6)<<cpu))return ret;for(i=
(0xd2d+202-0xdf7);i<DATARMNETc6782fed88;i++){if(i==cpu&&(mask&((0xd26+209-0xdf6)
<<i))){ret=idx;break;}if(mask&((0xd26+209-0xdf6)<<i))idx++;}return ret;}int 
DATARMNET217fe38119(u64 DATARMNETab155dfd5d,struct net_device*dev){int 
DATARMNETf54fdb137b=DATARMNETb91aee91fd;if(DATARMNETab155dfd5d<
DATARMNETd82a2ed45e)DATARMNETf54fdb137b=DATARMNETf181a18009(dev);if(
DATARMNETf54fdb137b==DATARMNETb91aee91fd||DATARMNETab155dfd5d>=
DATARMNETd82a2ed45e)DATARMNETf54fdb137b=DATARMNET98b2a0ce62(dev);
DATARMNET52de1f3dc0(DATARMNET720469c0a9,DATARMNET7e63a08ad4,DATARMNETf54fdb137b,
DATARMNETab155dfd5d,(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),NULL,NULL);return 
DATARMNETf54fdb137b;}void*DATARMNETefcaf5fbe9(struct sk_buff*skb,u32 offset,u32 
DATARMNET567bdc7221,void*buf){struct skb_shared_info*shinfo=skb_shinfo(skb);
skb_frag_t*frag;u32 DATARMNETedc267a909=offset;int i;if(offset>skb->len||
DATARMNET567bdc7221>skb->len||offset+DATARMNET567bdc7221>skb->len)return NULL;if
(skb_headlen(skb)>=offset+DATARMNET567bdc7221)return skb->data+offset;offset-=
skb_headlen(skb);for(i=(0xd2d+202-0xdf7);i<shinfo->nr_frags;i++){u32 frag_size;
frag=&shinfo->frags[i];frag_size=skb_frag_size(frag);if(offset>=frag_size){
offset-=frag_size;continue;}if(frag_size>=offset+DATARMNET567bdc7221)return 
skb_frag_address(frag)+offset;}if(skb_copy_bits(skb,(int)DATARMNETedc267a909,buf
,(int)DATARMNET567bdc7221))return NULL;return buf;}void DATARMNET44459105b4(
struct sk_buff*skb,struct DATARMNET63d7680df2*node_p){struct iphdr*ip4h,
DATARMNETc00baf31c3;struct ipv6hdr*ip6h,DATARMNETcf1d9e2c1e;struct tcphdr*tp,
DATARMNETd1ff6cd568;struct udphdr*up,DATARMNETc82d2f4e16;int len=
(0xd2d+202-0xdf7);u16 ip_len=(0xd2d+202-0xdf7);__be16 frag_off;u8 protocol;
switch(skb->protocol){case htons(ETH_P_IP):ip4h=DATARMNETefcaf5fbe9(skb,
(0xd2d+202-0xdf7),sizeof(*ip4h),&DATARMNETc00baf31c3);if(!ip4h)return;node_p->
DATARMNET1e9d25d9ff=ip4h->protocol;memcpy(&(node_p->ip_hdr.DATARMNETac9bbaad7c),
ip4h,sizeof(*ip4h));ip_len=ip4h->ihl*(0xd11+230-0xdf3);break;case htons(
ETH_P_IPV6):ip6h=DATARMNETefcaf5fbe9(skb,(0xd2d+202-0xdf7),sizeof(*ip6h),&
DATARMNETcf1d9e2c1e);if(!ip6h)return;node_p->DATARMNET1e9d25d9ff=ip6h->nexthdr;
memcpy(&(node_p->ip_hdr.DATARMNET1688a97aa4),ip6h,sizeof(*ip6h));protocol=ip6h->
nexthdr;len=ipv6_skip_exthdr(skb,sizeof(*ip6h),&protocol,&frag_off);if(len<
(0xd2d+202-0xdf7)){return;}ip_len=(u16)len;break;default:break;}if(node_p->
DATARMNET1e9d25d9ff==IPPROTO_TCP){tp=DATARMNETefcaf5fbe9(skb,ip_len,sizeof(*tp),
&DATARMNETd1ff6cd568);if(!tp)return;memcpy(&(node_p->DATARMNETe33b41dad9.tp),tp,
sizeof(struct tcphdr));}else if(node_p->DATARMNET1e9d25d9ff==IPPROTO_UDP){up=
DATARMNETefcaf5fbe9(skb,ip_len,sizeof(*up),&DATARMNETc82d2f4e16);if(!up)return;
memcpy(&(node_p->DATARMNETe33b41dad9.up),up,sizeof(struct udphdr));}else{}}u32 
DATARMNET8532ab3089(u32 index,u32 DATARMNET0258668025,u32 hash,u8 
DATARMNET72067bf727){int DATARMNETebbd4cd1d9[DATARMNETc6782fed88/
(0xd1f+216-0xdf5)]={(0xd35+210-0xdff),(0xd11+230-0xdf3),(0xd18+223-0xdf4),
(0xd1f+216-0xdf5)};u32 ret=(0xd2d+202-0xdf7);if(!DATARMNET0258668025){
DATARMNET68d84e7b98[DATARMNETef8cbfa62f]++;return ret;}if(DATARMNET0258668025<
DATARMNETc6782fed88)ret=((((index+((DATARMNET0258668025%(0xd1f+216-0xdf5))?
(0xd26+209-0xdf6):(0xd2d+202-0xdf7))))<<(0xec7+1122-0x130d))*DATARMNETebbd4cd1d9
[(DATARMNET0258668025-(0xd26+209-0xdf6))>>(0xd26+209-0xdf6)])|(hash&16777215);if
(DATARMNET72067bf727)ret=(ret&~1048575)|DATARMNET94fa0a43a2;DATARMNETda96251102(
DATARMNETf3aaad06eb,DATARMNET4e91ddb48a,ret,hash,index,DATARMNET0258668025,NULL,
NULL);return ret;}
