
/*
 * Copyright (c) 2022 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

 

#ifndef _RX_PPDU_END_USER_STATS_EXT_H_
#define _RX_PPDU_END_USER_STATS_EXT_H_
#if !defined(__ASSEMBLER__)
#endif

#include "rx_rxpcu_classification_overview.h"
#define NUM_OF_DWORDS_RX_PPDU_END_USER_STATS_EXT 8

#define NUM_OF_QWORDS_RX_PPDU_END_USER_STATS_EXT 4

struct rx_ppdu_end_user_stats_ext {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   rx_rxpcu_classification_overview                          rxpcu_classification_details;
             uint32_t fcs_ok_bitmap_95_64                                     : 32;  
             uint32_t fcs_ok_bitmap_127_96                                    : 32;  
             uint32_t fcs_ok_bitmap_159_128                                   : 32;  
             uint32_t fcs_ok_bitmap_191_160                                   : 32;  
             uint32_t fcs_ok_bitmap_223_192                                   : 32;  
             uint32_t fcs_ok_bitmap_255_224                                   : 32;  
             uint32_t corrupted_due_to_fifo_delay                             :  1,  
                      reserved_7a                                             : 31;  
#else
             struct   rx_rxpcu_classification_overview                          rxpcu_classification_details;
             uint32_t fcs_ok_bitmap_95_64                                     : 32;  
             uint32_t fcs_ok_bitmap_127_96                                    : 32;  
             uint32_t fcs_ok_bitmap_159_128                                   : 32;  
             uint32_t fcs_ok_bitmap_191_160                                   : 32;  
             uint32_t fcs_ok_bitmap_223_192                                   : 32;  
             uint32_t fcs_ok_bitmap_255_224                                   : 32;  
             uint32_t reserved_7a                                             : 31,  
                      corrupted_due_to_fifo_delay                             :  1;  
#endif
};

#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_OFFSET 0x0000000000000000
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_LSB 0
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_MSB 0
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_MASK 0x0000000000000001

#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_FCS_OK_OFFSET 0x0000000000000000
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_FCS_OK_LSB 1
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_FCS_OK_MSB 1
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_FCS_OK_MASK 0x0000000000000002

#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_OFFSET 0x0000000000000000
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_LSB 2
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_MSB 2
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_MASK 0x0000000000000004

#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_FCS_OK_OFFSET 0x0000000000000000
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_FCS_OK_LSB 3
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_FCS_OK_MSB 3
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_FCS_OK_MASK 0x0000000000000008

#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_OFFSET 0x0000000000000000
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_LSB 4
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_MSB 4
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_MASK 0x0000000000000010

#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_FCS_OK_OFFSET 0x0000000000000000
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_FCS_OK_LSB 5
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_FCS_OK_MSB 5
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_FCS_OK_MASK 0x0000000000000020

#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_PHYRX_ABORT_RECEIVED_OFFSET 0x0000000000000000
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_PHYRX_ABORT_RECEIVED_LSB 6
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_PHYRX_ABORT_RECEIVED_MSB 6
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_PHYRX_ABORT_RECEIVED_MASK 0x0000000000000040

#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MONITOR_OVRD_MPDUS_OFFSET 0x0000000000000000
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MONITOR_OVRD_MPDUS_LSB 7
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MONITOR_OVRD_MPDUS_MSB 7
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MONITOR_OVRD_MPDUS_MASK 0x0000000000000080

#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MONITOR_OVRD_MPDUS_FCS_OK_OFFSET 0x0000000000000000
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MONITOR_OVRD_MPDUS_FCS_OK_LSB 8
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MONITOR_OVRD_MPDUS_FCS_OK_MSB 8
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MONITOR_OVRD_MPDUS_FCS_OK_MASK 0x0000000000000100

#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_RESERVED_0_OFFSET   0x0000000000000000
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_RESERVED_0_LSB      9
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_RESERVED_0_MSB      15
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_RESERVED_0_MASK     0x000000000000fe00

#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_PHY_PPDU_ID_OFFSET  0x0000000000000000
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_PHY_PPDU_ID_LSB     16
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_PHY_PPDU_ID_MSB     31
#define RX_PPDU_END_USER_STATS_EXT_RXPCU_CLASSIFICATION_DETAILS_PHY_PPDU_ID_MASK    0x00000000ffff0000

#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_95_64_OFFSET                       0x0000000000000000
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_95_64_LSB                          32
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_95_64_MSB                          63
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_95_64_MASK                         0xffffffff00000000

#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_127_96_OFFSET                      0x0000000000000008
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_127_96_LSB                         0
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_127_96_MSB                         31
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_127_96_MASK                        0x00000000ffffffff

#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_159_128_OFFSET                     0x0000000000000008
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_159_128_LSB                        32
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_159_128_MSB                        63
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_159_128_MASK                       0xffffffff00000000

#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_191_160_OFFSET                     0x0000000000000010
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_191_160_LSB                        0
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_191_160_MSB                        31
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_191_160_MASK                       0x00000000ffffffff

#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_223_192_OFFSET                     0x0000000000000010
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_223_192_LSB                        32
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_223_192_MSB                        63
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_223_192_MASK                       0xffffffff00000000

#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_255_224_OFFSET                     0x0000000000000018
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_255_224_LSB                        0
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_255_224_MSB                        31
#define RX_PPDU_END_USER_STATS_EXT_FCS_OK_BITMAP_255_224_MASK                       0x00000000ffffffff

#define RX_PPDU_END_USER_STATS_EXT_CORRUPTED_DUE_TO_FIFO_DELAY_OFFSET               0x0000000000000018
#define RX_PPDU_END_USER_STATS_EXT_CORRUPTED_DUE_TO_FIFO_DELAY_LSB                  32
#define RX_PPDU_END_USER_STATS_EXT_CORRUPTED_DUE_TO_FIFO_DELAY_MSB                  32
#define RX_PPDU_END_USER_STATS_EXT_CORRUPTED_DUE_TO_FIFO_DELAY_MASK                 0x0000000100000000

#define RX_PPDU_END_USER_STATS_EXT_RESERVED_7A_OFFSET                               0x0000000000000018
#define RX_PPDU_END_USER_STATS_EXT_RESERVED_7A_LSB                                  33
#define RX_PPDU_END_USER_STATS_EXT_RESERVED_7A_MSB                                  63
#define RX_PPDU_END_USER_STATS_EXT_RESERVED_7A_MASK                                 0xfffffffe00000000

#endif
