/* Copyright (c) 2018-2021, The Linux Foundation. All rights reserved.
 * Copyright (c) 2022-2023, Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/compiler.h>
#include <linux/rcupdate.h>
#include <linux/jhash.h>
#include <linux/spinlock.h>
#include "rmnet_descriptor.h"
#include "rmnet_handlers.h"
#include "rmnet_map.h"
#include "rmnet_module.h"
#include "rmnet_offload_main.h"
#include "rmnet_offload_state.h"
#include "rmnet_offload_engine.h"
#include "rmnet_offload_stats.h"
static char*verinfo[]={"\x63\x38\x61\x63\x61\x66\x38\x35",
"\x65\x32\x31\x38\x66\x34\x35\x31","\x32\x61\x34\x34\x66\x36\x62\x65",
"\x37\x34\x31\x35\x39\x32\x31\x63","\x34\x31\x32\x39\x36\x62\x30\x39"};
module_param_array(verinfo,charp,NULL,(0xcb7+5769-0x221c));MODULE_PARM_DESC(
verinfo,
"\x56\x65\x72\x73\x69\x6f\x6e\x20\x6f\x66\x20\x74\x68\x65\x20\x64\x72\x69\x76\x65\x72"
);static DEFINE_SPINLOCK(DATARMNET0b5e447f18);static u32 DATARMNETcb7325e02d(
struct DATARMNETd812bcdbb5*DATARMNET458b70e7e5){struct DATARMNET4287f07234*
DATARMNET8814564ab9=&DATARMNET458b70e7e5->DATARMNET144d119066;__be32 
DATARMNETdfd47b00ff[(0xd20+231-0xdfc)];u32 DATARMNET5ebf661879;__be16 
DATARMNET08e913477e=(0xd2d+202-0xdf7),DATARMNETda7f7fa492=(0xd2d+202-0xdf7);if(
DATARMNET8814564ab9->DATARMNET7fa8b2acbf==DATARMNETa656f324b2||
DATARMNET8814564ab9->DATARMNET7fa8b2acbf==DATARMNETfd5c3d30e5){
DATARMNET08e913477e=DATARMNET8814564ab9->DATARMNETa60d2ae3f6;DATARMNETda7f7fa492
=DATARMNET8814564ab9->DATARMNET5e7452ec23;}if(DATARMNET8814564ab9->
DATARMNET388842c721==(0xd11+230-0xdf3)){DATARMNETdfd47b00ff[(0xd2d+202-0xdf7)]=
DATARMNET8814564ab9->DATARMNET0a28fa80f4;DATARMNETdfd47b00ff[(0xd26+209-0xdf6)]=
DATARMNET8814564ab9->DATARMNET1a2be7b6c2;DATARMNETdfd47b00ff[(0xd1f+216-0xdf5)]=
DATARMNET8814564ab9->DATARMNET7fa8b2acbf;DATARMNETdfd47b00ff[(0xd18+223-0xdf4)]=
DATARMNETda7f7fa492;DATARMNETdfd47b00ff[(0xd11+230-0xdf3)]=DATARMNET08e913477e;
DATARMNET5ebf661879=(0xd0a+237-0xdf2);}else{memcpy(&DATARMNETdfd47b00ff[
(0xd2d+202-0xdf7)],&DATARMNET8814564ab9->DATARMNET45ec858bc5[(0xd2d+202-0xdf7)],
sizeof(DATARMNET8814564ab9->DATARMNET45ec858bc5));memcpy(&DATARMNETdfd47b00ff[
(0xd0a+237-0xdf2)],&DATARMNET8814564ab9->DATARMNET949c2754de[(0xd2d+202-0xdf7)],
sizeof(DATARMNET8814564ab9->DATARMNET45ec858bc5));DATARMNETdfd47b00ff[
(0xd35+210-0xdff)]=DATARMNET8814564ab9->DATARMNET7fa8b2acbf;DATARMNETdfd47b00ff[
9]=DATARMNETda7f7fa492;DATARMNETdfd47b00ff[(0xd27+224-0xdfd)]=
DATARMNET08e913477e;DATARMNET5ebf661879=(0xd20+231-0xdfc);}return jhash2(
DATARMNETdfd47b00ff,DATARMNET5ebf661879,(0xd2d+202-0xdf7));}static void 
DATARMNETe26a68d20e(u32 DATARMNET5affe290b8){u32 DATARMNET2991ac9aa9;if(
DATARMNET5affe290b8>50000)DATARMNET2991ac9aa9=DATARMNETa121404606;else if(
DATARMNET5affe290b8>30000)DATARMNET2991ac9aa9=DATARMNET787b04223a;else if(
DATARMNET5affe290b8>23000)DATARMNET2991ac9aa9=DATARMNET8e1480cff2;else if(
DATARMNET5affe290b8>14500)DATARMNET2991ac9aa9=DATARMNETf335e26298;else if(
DATARMNET5affe290b8>7000)DATARMNET2991ac9aa9=DATARMNET3067ea3199;else if(
DATARMNET5affe290b8>(0x5b4+1875-0x78f))DATARMNET2991ac9aa9=DATARMNETa76d93355c;
else DATARMNET2991ac9aa9=DATARMNET92f3434694;DATARMNETa00cda79d0(
DATARMNET2991ac9aa9);}static bool DATARMNET1a7ed9a6a2(struct 
rmnet_frag_descriptor*DATARMNET9d1b321642,struct DATARMNETd812bcdbb5*
DATARMNET458b70e7e5){struct DATARMNET4287f07234*DATARMNET8814564ab9=&
DATARMNET458b70e7e5->DATARMNET144d119066;u8*DATARMNETdf2dbc641f;u16 
DATARMNET5affe290b8;u16 DATARMNETdaa9248df1;DATARMNET5affe290b8=
DATARMNET9d1b321642->len;DATARMNET458b70e7e5->DATARMNET3eb91ee54d=true;if(
unlikely(!(DATARMNET9d1b321642->dev->features&NETIF_F_RXCSUM))){goto 
DATARMNETaabe3a05f8;}if(DATARMNET9d1b321642->hdrs_valid){struct 
DATARMNET0b82084e89*DATARMNET75be5f3406,DATARMNETc82d2f4e16;struct 
DATARMNETd2991e8952*DATARMNET2e7cc88971,DATARMNETd1ff6cd568;DATARMNET8814564ab9
->DATARMNET388842c721=DATARMNET9d1b321642->ip_proto;DATARMNET8814564ab9->
DATARMNET4ca5ac9de1=DATARMNET9d1b321642->ip_len;DATARMNET8814564ab9->
DATARMNET7fa8b2acbf=DATARMNET9d1b321642->trans_proto;DATARMNET8814564ab9->
DATARMNET0aeee57ceb=DATARMNET9d1b321642->trans_len;DATARMNET5affe290b8=
DATARMNET9d1b321642->len;if(DATARMNET8814564ab9->DATARMNET388842c721==
(0xd11+230-0xdf3)){struct DATARMNET308c06fca6*DATARMNET86f1f2cdc9,
DATARMNETbf6548198e;DATARMNET86f1f2cdc9=rmnet_frag_header_ptr(
DATARMNET9d1b321642,(0xd2d+202-0xdf7),sizeof(*DATARMNET86f1f2cdc9),&
DATARMNETbf6548198e);if(!DATARMNET86f1f2cdc9)goto DATARMNETaabe3a05f8;
DATARMNET8814564ab9->DATARMNET1a2be7b6c2=DATARMNET86f1f2cdc9->
DATARMNET9bbd2ca483;DATARMNET8814564ab9->DATARMNET0a28fa80f4=DATARMNET86f1f2cdc9
->DATARMNET11ef55b2bb;DATARMNET8814564ab9->DATARMNET19b03754c4=
DATARMNET86f1f2cdc9->DATARMNET1eb6c27583;DATARMNET8814564ab9->
DATARMNET57bf608183=DATARMNET86f1f2cdc9->DATARMNET03e081f69f;DATARMNET8814564ab9
->DATARMNETcf915688f5=DATARMNET86f1f2cdc9->DATARMNET2c091223da;}else{struct 
DATARMNET64bb8f616e*DATARMNETbf55123e5b,DATARMNETcf1d9e2c1e;DATARMNETbf55123e5b=
rmnet_frag_header_ptr(DATARMNET9d1b321642,(0xd2d+202-0xdf7),sizeof(*
DATARMNETbf55123e5b),&DATARMNETcf1d9e2c1e);if(!DATARMNETbf55123e5b)goto 
DATARMNETaabe3a05f8;memcpy(&DATARMNET8814564ab9->DATARMNET949c2754de[
(0xd2d+202-0xdf7)],&DATARMNETbf55123e5b->DATARMNET31202449fc[(0xd2d+202-0xdf7)],
sizeof(DATARMNETbf55123e5b->DATARMNET31202449fc));memcpy(&DATARMNET8814564ab9->
DATARMNET45ec858bc5[(0xd2d+202-0xdf7)],&DATARMNETbf55123e5b->DATARMNETc657c0a139
[(0xd2d+202-0xdf7)],sizeof(DATARMNETbf55123e5b->DATARMNETc657c0a139));
DATARMNET8814564ab9->DATARMNETabd58f7f89=DATARMNETbf55123e5b->
DATARMNET0687f7ecdc;if(DATARMNET8814564ab9->DATARMNET4ca5ac9de1>sizeof(*
DATARMNETbf55123e5b)){int DATARMNET0afb05821a;__be16 DATARMNET833503918f;bool 
DATARMNETcd214ed34c;u8 DATARMNET615595a09c=DATARMNETbf55123e5b->
DATARMNET7244bfdc4f;DATARMNET0afb05821a=rmnet_frag_ipv6_skip_exthdr(
DATARMNET9d1b321642,sizeof(*DATARMNETbf55123e5b),&DATARMNET615595a09c,&
DATARMNET833503918f,&DATARMNETcd214ed34c);if(DATARMNET0afb05821a<
(0xd2d+202-0xdf7)||DATARMNET833503918f||DATARMNETcd214ed34c){if(
DATARMNET615595a09c==DATARMNET5b166167a8)DATARMNET8814564ab9->
DATARMNET4ca5ac9de1+=(0xd35+210-0xdff);DATARMNETa00cda79d0(DATARMNET807e4dad18);
goto DATARMNETaabe3a05f8;}}}DATARMNET75be5f3406=rmnet_frag_header_ptr(
DATARMNET9d1b321642,DATARMNET8814564ab9->DATARMNET4ca5ac9de1,sizeof(*
DATARMNET75be5f3406),&DATARMNETc82d2f4e16);if(!DATARMNET75be5f3406)goto 
DATARMNETaabe3a05f8;DATARMNET8814564ab9->DATARMNETa60d2ae3f6=DATARMNET75be5f3406
->DATARMNET1b1c406ae9;DATARMNET8814564ab9->DATARMNET5e7452ec23=
DATARMNET75be5f3406->DATARMNETdf0e8545ee;if(DATARMNET8814564ab9->
DATARMNET7fa8b2acbf==DATARMNETfd5c3d30e5){__be32 DATARMNET0849981c7c;
DATARMNET2e7cc88971=rmnet_frag_header_ptr(DATARMNET9d1b321642,
DATARMNET8814564ab9->DATARMNET4ca5ac9de1,sizeof(*DATARMNET2e7cc88971),&
DATARMNETd1ff6cd568);if(!DATARMNET2e7cc88971)goto DATARMNETaabe3a05f8;if(
DATARMNET9d1b321642->tcp_seq_set)DATARMNET0849981c7c=DATARMNET9d1b321642->
tcp_seq;else DATARMNET0849981c7c=DATARMNET2e7cc88971->DATARMNETb3e70104e0;
DATARMNET8814564ab9->DATARMNETbc28a5970f=ntohl(DATARMNET0849981c7c);}
DATARMNET458b70e7e5->DATARMNET645e8912b8=DATARMNETcb7325e02d(DATARMNET458b70e7e5
);DATARMNET458b70e7e5->DATARMNET1ef22e4c76=DATARMNET9d1b321642->len-
DATARMNET9d1b321642->ip_len-DATARMNET9d1b321642->trans_len;DATARMNET458b70e7e5->
DATARMNET719f68fb88=DATARMNET9d1b321642;DATARMNET458b70e7e5->DATARMNET3eb91ee54d
=false;return false;}DATARMNETdf2dbc641f=rmnet_frag_data_ptr(DATARMNET9d1b321642
);if(unlikely(!DATARMNETdf2dbc641f))return true;DATARMNET8814564ab9->
DATARMNET388842c721=(DATARMNETdf2dbc641f[(0xd2d+202-0xdf7)]&(0xbf7+4405-0x1c3c))
>>(0xd11+230-0xdf3);if(DATARMNET8814564ab9->DATARMNET388842c721==
(0xd11+230-0xdf3)){struct DATARMNET308c06fca6*DATARMNET86f1f2cdc9,
DATARMNETbf6548198e;DATARMNET86f1f2cdc9=rmnet_frag_header_ptr(
DATARMNET9d1b321642,(0xd2d+202-0xdf7),sizeof(*DATARMNET86f1f2cdc9),&
DATARMNETbf6548198e);if(!DATARMNET86f1f2cdc9)goto DATARMNETaabe3a05f8;
DATARMNET8814564ab9->DATARMNET4ca5ac9de1=DATARMNET86f1f2cdc9->
DATARMNET610d06a887*(0xd11+230-0xdf3);DATARMNET8814564ab9->DATARMNET7fa8b2acbf=
DATARMNET86f1f2cdc9->DATARMNET953d32410f;DATARMNET8814564ab9->
DATARMNET1a2be7b6c2=DATARMNET86f1f2cdc9->DATARMNET9bbd2ca483;DATARMNET8814564ab9
->DATARMNET0a28fa80f4=DATARMNET86f1f2cdc9->DATARMNET11ef55b2bb;
DATARMNET8814564ab9->DATARMNET19b03754c4=DATARMNET86f1f2cdc9->
DATARMNET1eb6c27583;DATARMNET8814564ab9->DATARMNET57bf608183=DATARMNET86f1f2cdc9
->DATARMNET03e081f69f;DATARMNET8814564ab9->DATARMNETcf915688f5=
DATARMNET86f1f2cdc9->DATARMNET2c091223da;if(DATARMNET86f1f2cdc9->
DATARMNET2c091223da&htons(16383)){DATARMNETa00cda79d0(DATARMNET807e4dad18);goto 
DATARMNETaabe3a05f8;}DATARMNETdaa9248df1=ntohs(DATARMNET86f1f2cdc9->
DATARMNET8e175ac02d);DATARMNET458b70e7e5->DATARMNET8f59f5a745=
DATARMNETdaa9248df1!=DATARMNET5affe290b8;}else if(DATARMNET8814564ab9->
DATARMNET388842c721==(0xd03+244-0xdf1)){struct DATARMNET64bb8f616e*
DATARMNETbf55123e5b,DATARMNETcf1d9e2c1e;int DATARMNET0549c61885;__be16 
DATARMNET833503918f;bool DATARMNETcd214ed34c;u8 DATARMNET3f56a2bcf4;
DATARMNETbf55123e5b=rmnet_frag_header_ptr(DATARMNET9d1b321642,(0xd2d+202-0xdf7),
sizeof(*DATARMNETbf55123e5b),&DATARMNETcf1d9e2c1e);if(!DATARMNETbf55123e5b)goto 
DATARMNETaabe3a05f8;DATARMNET3f56a2bcf4=DATARMNETbf55123e5b->DATARMNET7244bfdc4f
;DATARMNET0549c61885=rmnet_frag_ipv6_skip_exthdr(DATARMNET9d1b321642,sizeof(*
DATARMNETbf55123e5b),&DATARMNET3f56a2bcf4,&DATARMNET833503918f,&
DATARMNETcd214ed34c);if(DATARMNET0549c61885<(0xd2d+202-0xdf7)){goto 
DATARMNETaabe3a05f8;}DATARMNET8814564ab9->DATARMNET4ca5ac9de1=(u16)
DATARMNET0549c61885;DATARMNET8814564ab9->DATARMNET7fa8b2acbf=DATARMNET3f56a2bcf4
;memcpy(&DATARMNET8814564ab9->DATARMNET949c2754de[(0xd2d+202-0xdf7)],&
DATARMNETbf55123e5b->DATARMNET31202449fc[(0xd2d+202-0xdf7)],sizeof(
DATARMNETbf55123e5b->DATARMNET31202449fc));memcpy(&DATARMNET8814564ab9->
DATARMNET45ec858bc5[(0xd2d+202-0xdf7)],&DATARMNETbf55123e5b->DATARMNETc657c0a139
[(0xd2d+202-0xdf7)],sizeof(DATARMNETbf55123e5b->DATARMNETc657c0a139));
DATARMNET8814564ab9->DATARMNETabd58f7f89=DATARMNETbf55123e5b->
DATARMNET0687f7ecdc;if(DATARMNET833503918f||DATARMNETcd214ed34c){if(
DATARMNET8814564ab9->DATARMNET7fa8b2acbf==DATARMNET5b166167a8)
DATARMNET8814564ab9->DATARMNET4ca5ac9de1+=(0xd35+210-0xdff);DATARMNETa00cda79d0(
DATARMNET807e4dad18);goto DATARMNETaabe3a05f8;}DATARMNETdaa9248df1=ntohs(
DATARMNETbf55123e5b->DATARMNETaa340485c5)+sizeof(*DATARMNETbf55123e5b);
DATARMNET458b70e7e5->DATARMNET8f59f5a745=DATARMNETdaa9248df1!=
DATARMNET5affe290b8;}else{return true;}if(DATARMNET8814564ab9->
DATARMNET7fa8b2acbf==DATARMNETfd5c3d30e5){struct DATARMNETd2991e8952*
DATARMNET2e7cc88971,DATARMNETd1ff6cd568;DATARMNET2e7cc88971=
rmnet_frag_header_ptr(DATARMNET9d1b321642,DATARMNET8814564ab9->
DATARMNET4ca5ac9de1,sizeof(*DATARMNET2e7cc88971),&DATARMNETd1ff6cd568);if(!
DATARMNET2e7cc88971)goto DATARMNETaabe3a05f8;DATARMNET8814564ab9->
DATARMNET0aeee57ceb=DATARMNET2e7cc88971->DATARMNETcf2e43ad69*(0xd11+230-0xdf3);
DATARMNET8814564ab9->DATARMNETa60d2ae3f6=DATARMNET2e7cc88971->
DATARMNET6acbeeebb1;DATARMNET8814564ab9->DATARMNET5e7452ec23=DATARMNET2e7cc88971
->DATARMNET29b8c05d14;DATARMNET8814564ab9->DATARMNETbc28a5970f=ntohl(
DATARMNET2e7cc88971->DATARMNETb3e70104e0);}else if(DATARMNET8814564ab9->
DATARMNET7fa8b2acbf==DATARMNETa656f324b2){struct DATARMNET0b82084e89*
DATARMNET75be5f3406,DATARMNETc82d2f4e16;DATARMNET75be5f3406=
rmnet_frag_header_ptr(DATARMNET9d1b321642,DATARMNET8814564ab9->
DATARMNET4ca5ac9de1,sizeof(*DATARMNET75be5f3406),&DATARMNETc82d2f4e16);if(!
DATARMNET75be5f3406)goto DATARMNETaabe3a05f8;DATARMNET8814564ab9->
DATARMNET0aeee57ceb=sizeof(*DATARMNET75be5f3406);DATARMNET8814564ab9->
DATARMNETa60d2ae3f6=DATARMNET75be5f3406->DATARMNET1b1c406ae9;DATARMNET8814564ab9
->DATARMNET5e7452ec23=DATARMNET75be5f3406->DATARMNETdf0e8545ee;}else{goto 
DATARMNETaabe3a05f8;}DATARMNET458b70e7e5->DATARMNET3eb91ee54d=false;
DATARMNET458b70e7e5->DATARMNET645e8912b8=DATARMNETcb7325e02d(DATARMNET458b70e7e5
);if(!DATARMNET458b70e7e5->DATARMNET8f59f5a745){DATARMNET9d1b321642->ip_proto=
DATARMNET8814564ab9->DATARMNET388842c721;DATARMNET9d1b321642->ip_len=
DATARMNET8814564ab9->DATARMNET4ca5ac9de1;DATARMNET9d1b321642->trans_proto=
DATARMNET8814564ab9->DATARMNET7fa8b2acbf;DATARMNET9d1b321642->trans_len=
DATARMNET8814564ab9->DATARMNET0aeee57ceb;DATARMNET9d1b321642->hdrs_valid=
(0xd26+209-0xdf6);}DATARMNETaabe3a05f8:DATARMNET458b70e7e5->DATARMNET1ef22e4c76=
DATARMNET5affe290b8-DATARMNET8814564ab9->DATARMNET4ca5ac9de1-DATARMNET8814564ab9
->DATARMNET0aeee57ceb;if(DATARMNET458b70e7e5->DATARMNET8f59f5a745)
DATARMNETa00cda79d0(DATARMNET52b7da9033);DATARMNET458b70e7e5->
DATARMNET719f68fb88=DATARMNET9d1b321642;return false;}static void 
DATARMNETb56d685c50(struct rmnet_frag_descriptor*DATARMNET9d1b321642,struct 
rmnet_port*DATARMNETf0d9de7e2f){struct DATARMNET70f3b87b5d*DATARMNETe05748b000=
DATARMNETc2a630b113();struct DATARMNETd812bcdbb5 DATARMNET458b70e7e5;LIST_HEAD(
DATARMNET6f9bfa17e6);memset(&DATARMNET458b70e7e5,(0xd2d+202-0xdf7),sizeof(
DATARMNET458b70e7e5));DATARMNET664568fcd0();DATARMNETe05748b000->
DATARMNET403589239f=DATARMNETf0d9de7e2f;if(DATARMNET1a7ed9a6a2(
DATARMNET9d1b321642,&DATARMNET458b70e7e5)){DATARMNETa00cda79d0(
DATARMNET1cddffce49);rmnet_recycle_frag_descriptor(DATARMNET9d1b321642,
DATARMNETf0d9de7e2f);goto DATARMNETbf4095f79e;}DATARMNETa00cda79d0(
DATARMNET9b3fdb0e16);if(DATARMNET458b70e7e5.DATARMNET3eb91ee54d){goto 
DATARMNET806c6f8e60;}else if(DATARMNET458b70e7e5.DATARMNET8f59f5a745){
DATARMNETc38c135c9f(DATARMNET458b70e7e5.DATARMNET645e8912b8,&DATARMNET6f9bfa17e6
);goto DATARMNET806c6f8e60;}if(!DATARMNET9d1b321642->csum_valid){goto 
DATARMNET806c6f8e60;}if(!DATARMNETfbf5798e15(&DATARMNET458b70e7e5,&
DATARMNET6f9bfa17e6))goto DATARMNET806c6f8e60;goto DATARMNETbf4095f79e;
DATARMNET806c6f8e60:DATARMNET19d190f2bd(&DATARMNET458b70e7e5,&
DATARMNET6f9bfa17e6);DATARMNETbf4095f79e:DATARMNET6a76048590();
DATARMNETc70e73c8d4(&DATARMNET6f9bfa17e6);}static void DATARMNET29e8d137c4(
struct list_head*DATARMNETb5730f5283,struct rmnet_port*DATARMNETf0d9de7e2f){
struct rmnet_frag_descriptor*DATARMNETced5b4128f,*DATARMNET0386f6f82a;
list_for_each_entry_safe(DATARMNETced5b4128f,DATARMNET0386f6f82a,
DATARMNETb5730f5283,list){list_del_init(&DATARMNETced5b4128f->list);
DATARMNETb56d685c50(DATARMNETced5b4128f,DATARMNETf0d9de7e2f);}}void 
DATARMNET664568fcd0(void){spin_lock_bh(&DATARMNET0b5e447f18);}void 
DATARMNET6a76048590(void){spin_unlock_bh(&DATARMNET0b5e447f18);}static const 
struct rmnet_module_hook_register_info DATARMNET162e7a2013={.hooknum=
RMNET_MODULE_HOOK_OFFLOAD_INGRESS,.func=DATARMNET29e8d137c4,};void 
DATARMNET818b960147(void){rcu_assign_pointer(rmnet_perf_desc_entry,
DATARMNETb56d685c50);rmnet_module_hook_register(&DATARMNET162e7a2013,
(0xd26+209-0xdf6));}void DATARMNETba38823a2f(void){rcu_assign_pointer(
rmnet_perf_desc_entry,NULL);rmnet_module_hook_unregister_no_sync(&
DATARMNET162e7a2013,(0xd26+209-0xdf6));}void DATARMNETc70e73c8d4(struct 
list_head*DATARMNETb5730f5283){struct DATARMNET70f3b87b5d*DATARMNETe05748b000=
DATARMNETc2a630b113();struct rmnet_frag_descriptor*DATARMNET9d1b321642,*
DATARMNET0386f6f82a;list_for_each_entry_safe(DATARMNET9d1b321642,
DATARMNET0386f6f82a,DATARMNETb5730f5283,list){DATARMNETe26a68d20e(
DATARMNET9d1b321642->len);DATARMNETa00cda79d0(DATARMNET65843ad009);list_del_init
(&DATARMNET9d1b321642->list);rmnet_frag_deliver(DATARMNET9d1b321642,
DATARMNETe05748b000->DATARMNET403589239f);}}void DATARMNET19d190f2bd(struct 
DATARMNETd812bcdbb5*DATARMNET458b70e7e5,struct list_head*DATARMNET6f9bfa17e6){
struct rmnet_frag_descriptor*DATARMNET9d1b321642=DATARMNET458b70e7e5->
DATARMNET719f68fb88;u32 DATARMNET5affe290b8=DATARMNET458b70e7e5->
DATARMNET1ef22e4c76+DATARMNET458b70e7e5->DATARMNET144d119066.DATARMNET4ca5ac9de1
+DATARMNET458b70e7e5->DATARMNET144d119066.DATARMNET0aeee57ceb;if(
DATARMNET5affe290b8>65536)return;if(!DATARMNET458b70e7e5->DATARMNET3eb91ee54d)
DATARMNET9d1b321642->hash=DATARMNET458b70e7e5->DATARMNET645e8912b8;list_add_tail
(&DATARMNET9d1b321642->list,DATARMNET6f9bfa17e6);}void DATARMNET9292bebdd3(void*
DATARMNETf0d9de7e2f){}void DATARMNETb7e47d7254(void*DATARMNETf0d9de7e2f){}void 
DATARMNET95e1703026(struct rmnet_map_dl_ind_hdr*DATARMNET7c7748ef7a,struct 
rmnet_map_control_command_header*DATARMNET8b07ee3e82){struct DATARMNET70f3b87b5d
*DATARMNETe05748b000=DATARMNETc2a630b113();LIST_HEAD(DATARMNET6f9bfa17e6);(void)
DATARMNET8b07ee3e82;DATARMNET664568fcd0();if(DATARMNETe05748b000->
DATARMNETa9f2b2f677.DATARMNETb165d2c5c4&&DATARMNETae70636c90(&
DATARMNET6f9bfa17e6))DATARMNETa00cda79d0(DATARMNET372ef39ae4);
DATARMNETe05748b000->DATARMNETa9f2b2f677.DATARMNETb165d2c5c4=true;
DATARMNETe05748b000->DATARMNETa9f2b2f677.DATARMNETe2251ce433=DATARMNET7c7748ef7a
->le.seq;DATARMNETe05748b000->DATARMNETa9f2b2f677.DATARMNET7f59b108db=
DATARMNET7c7748ef7a->le.pkts;DATARMNET6a76048590();DATARMNETc70e73c8d4(&
DATARMNET6f9bfa17e6);}void DATARMNETc9dd320f49(struct rmnet_map_dl_ind_trl*
DATARMNET2541770fea,struct rmnet_map_control_command_header*DATARMNET8b07ee3e82)
{struct DATARMNET70f3b87b5d*DATARMNETe05748b000=DATARMNETc2a630b113();LIST_HEAD(
DATARMNET6f9bfa17e6);(void)DATARMNET8b07ee3e82;DATARMNET664568fcd0();if(
DATARMNETe05748b000->DATARMNETa9f2b2f677.DATARMNETe2251ce433!=
DATARMNET2541770fea->seq_le)DATARMNETa00cda79d0(DATARMNET30a4d88ea6);if(
DATARMNETae70636c90(&DATARMNET6f9bfa17e6))DATARMNETa00cda79d0(
DATARMNETa03ed3629e);DATARMNETe05748b000->DATARMNETa9f2b2f677.
DATARMNETb165d2c5c4=false;DATARMNETe05748b000->DATARMNETa9f2b2f677.
DATARMNETe2251ce433=(0xd2d+202-0xdf7);DATARMNETe05748b000->DATARMNETa9f2b2f677.
DATARMNET7f59b108db=(0xd2d+202-0xdf7);DATARMNET6a76048590();DATARMNETc70e73c8d4(
&DATARMNET6f9bfa17e6);}
