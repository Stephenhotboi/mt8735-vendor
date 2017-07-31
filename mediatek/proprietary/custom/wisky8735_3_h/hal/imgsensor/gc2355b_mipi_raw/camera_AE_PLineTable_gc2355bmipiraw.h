/* Copyright Statement:
*
* This software/firmware and related documentation ("MediaTek Software") are
* protected under relevant copyright laws. The information contained herein
* is confidential and proprietary to MediaTek Inc. and/or its licensors.
* Without the prior written permission of MediaTek inc. and/or its licensors,
* any reproduction, modification, use or disclosure of MediaTek Software,
* and information contained herein, in whole or in part, shall be strictly prohibited.
*/
/* MediaTek Inc. (C) 2010. All rights reserved.
*
* BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
* THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
* RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
* AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
* NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
* SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
* SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
* THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
* THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
* CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
* SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
* STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
* CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
* AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
* OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
* MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
* The following software/firmware and/or related documentation ("MediaTek Software")
* have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
*/

#ifndef _CAMERA_AE_PLINETABLE_GC2355BMIPIRAW_H
#define _CAMERA_AE_PLINETABLE_GC2355BMIPIRAW_H

#include "camera_custom_AEPlinetable.h"
static strEvPline sPreviewPLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {25000,1152,1048, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1280,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1280,1088, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.21
    {25000,1408,1056, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1152,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.87  BV=3.01
    {33320,1152,1112, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1280,1072, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {41680,1152,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.85  BV=2.71
    {41680,1152,1096, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.95  BV=2.61
    {41680,1280,1056, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.04  BV=2.51
    {50000,1152,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1152,1128, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.31
    {58320,1152,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.86  BV=2.21
    {58320,1152,1104, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.96  BV=2.11
    {66680,1152,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.86  BV=2.02
    {66680,1152,1112, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.97  BV=1.91
    {66680,1280,1080, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.08  BV=1.80
    {66680,1408,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.16  BV=1.72
    {66680,1536,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.27  BV=1.60
    {66680,1536,1104, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.37  BV=1.51
    {66680,1664,1088, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.47  BV=1.41
    {66680,1792,1088, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.57  BV=1.30
    {66680,2048,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.68  BV=1.20
    {66680,2176,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.77  BV=1.11
    {75000,2048,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.70  BV=1.01
    {75000,2176,1048, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.80  BV=0.91
    {83320,2048,1080, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=5.75  BV=0.80
    {91680,2048,1048, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=5.71  BV=0.71
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2176,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.78  BV=0.52
    {100000,2304,1056, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.89  BV=0.40
    {100000,2432,1064, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.98  BV=0.31
    {100000,2688,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.08  BV=0.21
    {100000,2816,1064, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.19  BV=0.10
    {100000,3072,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.30  BV=-0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3584,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.49  BV=-0.19
    {100000,3840,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.58  BV=-0.29
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {108320,4096,1024, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.68  BV=-0.50
    {108320,4352,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.78  BV=-0.60
    {116680,4352,1024, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=6.77  BV=-0.70
    {133320,4096,1024, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=6.68  BV=-0.80
    {141680,4096,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.70  BV=-0.91
    {141680,4352,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.79  BV=-1.00
    {141680,4736,1024, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.89  BV=-1.10
    {141680,4992,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.99  BV=-1.20
    {150000,5120,1024, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.00  BV=-1.29
    {158320,5120,1040, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=7.02  BV=-1.39
    {166640,5248,1032, 0, 0, 0},  //TV = 2.59(4166 lines)  AV=2.97  SV=7.05  BV=-1.49
    {183320,5120,1032, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=7.01  BV=-1.59
    {191640,5248,1032, 0, 0, 0},  //TV = 2.38(4791 lines)  AV=2.97  SV=7.05  BV=-1.69
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sPreviewPLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2176,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.80  BV=3.82
    {20000,1152,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.90  BV=3.71
    {20000,1280,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.00  BV=3.61
    {20000,1280,1112, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.12  BV=3.50
    {20000,1408,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.20  BV=3.41
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1664,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.40  BV=3.21
    {30000,1152,1080, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.10
    {30000,1280,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.02  BV=3.01
    {30000,1280,1112, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.12  BV=2.91
    {30000,1408,1088, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.22  BV=2.80
    {40000,1152,1064, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=4.90  BV=2.71
    {40000,1280,1032, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.01  BV=2.60
    {40000,1280,1104, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.11  BV=2.51
    {50000,1152,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1152,1128, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.31
    {50000,1280,1088, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.09  BV=2.21
    {60000,1152,1080, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=4.92  BV=2.10
    {60000,1280,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.02  BV=2.01
    {60000,1280,1112, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.12  BV=1.91
    {60000,1408,1088, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.22  BV=1.80
    {60000,1536,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.32  BV=1.71
    {60000,1664,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.42  BV=1.61
    {60000,1792,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.52  BV=1.51
    {60000,1920,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.62  BV=1.41
    {60000,2048,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2176,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.82  BV=1.21
    {70000,2048,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.70  BV=1.11
    {70000,2176,1048, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.80  BV=1.01
    {80000,2048,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.70  BV=0.91
    {80000,2176,1056, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.81  BV=0.80
    {90000,2048,1072, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=5.74  BV=0.70
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2176,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.78  BV=0.52
    {100000,2304,1056, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.89  BV=0.40
    {100000,2432,1064, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.98  BV=0.31
    {100000,2688,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.08  BV=0.21
    {100000,2816,1064, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.19  BV=0.10
    {100000,3072,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.30  BV=-0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3584,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.49  BV=-0.19
    {100000,3840,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.58  BV=-0.29
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4352,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.50
    {110000,4224,1048, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=6.76  BV=-0.60
    {120000,4224,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.73  BV=-0.70
    {130000,4096,1048, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=6.71  BV=-0.80
    {140000,4096,1048, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=6.71  BV=-0.90
    {140000,4480,1024, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=6.81  BV=-1.00
    {140000,4736,1040, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=6.91  BV=-1.10
    {140000,5120,1032, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.01  BV=-1.20
    {150000,5120,1024, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.00  BV=-1.29
    {160000,5120,1032, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=7.01  BV=-1.40
    {170000,5120,1040, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=7.02  BV=-1.50
    {180000,5248,1024, 0, 0, 0},  //TV = 2.47(4500 lines)  AV=2.97  SV=7.04  BV=-1.59
    {190000,5248,1040, 0, 0, 0},  //TV = 2.40(4750 lines)  AV=2.97  SV=7.06  BV=-1.69
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_PreviewAutoTable =
{
    AETABLE_RPEVIEW_AUTO,    //eAETableID
    117,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -17,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sPreviewPLineTable_60Hz,
    sPreviewPLineTable_50Hz,
    NULL,
};

static strEvPline sCapturePLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {25000,1152,1048, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1280,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1280,1088, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.21
    {25000,1408,1056, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1152,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.87  BV=3.01
    {33320,1152,1112, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1280,1072, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {41680,1152,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.85  BV=2.71
    {41680,1152,1096, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.95  BV=2.61
    {41680,1280,1056, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.04  BV=2.51
    {50000,1152,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1152,1128, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.31
    {58320,1152,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.86  BV=2.21
    {58320,1152,1104, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.96  BV=2.11
    {66680,1152,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.86  BV=2.02
    {66680,1152,1112, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.97  BV=1.91
    {66680,1280,1080, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.08  BV=1.80
    {66680,1408,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.16  BV=1.72
    {66680,1536,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.27  BV=1.60
    {66680,1536,1104, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.37  BV=1.51
    {66680,1664,1088, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.47  BV=1.41
    {66680,1792,1088, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.57  BV=1.30
    {66680,2048,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.68  BV=1.20
    {66680,2176,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.77  BV=1.11
    {75000,2048,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.70  BV=1.01
    {75000,2176,1048, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.80  BV=0.91
    {83320,2048,1080, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=5.75  BV=0.80
    {91680,2048,1048, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=5.71  BV=0.71
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2176,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.78  BV=0.52
    {100000,2304,1056, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.89  BV=0.40
    {100000,2432,1064, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.98  BV=0.31
    {100000,2688,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.08  BV=0.21
    {100000,2816,1064, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.19  BV=0.10
    {100000,3072,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.30  BV=-0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3584,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.49  BV=-0.19
    {100000,3840,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.58  BV=-0.29
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {108320,4096,1024, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.68  BV=-0.50
    {108320,4352,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.78  BV=-0.60
    {116680,4352,1024, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=6.77  BV=-0.70
    {133320,4096,1024, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=6.68  BV=-0.80
    {141680,4096,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.70  BV=-0.91
    {141680,4352,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.79  BV=-1.00
    {141680,4736,1024, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.89  BV=-1.10
    {141680,4992,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.99  BV=-1.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCapturePLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2176,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.80  BV=3.82
    {20000,1152,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.90  BV=3.71
    {20000,1280,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.00  BV=3.61
    {20000,1280,1112, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.12  BV=3.50
    {20000,1408,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.20  BV=3.41
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1664,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.40  BV=3.21
    {30000,1152,1080, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.10
    {30000,1280,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.02  BV=3.01
    {30000,1280,1112, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.12  BV=2.91
    {30000,1408,1088, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.22  BV=2.80
    {40000,1152,1064, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=4.90  BV=2.71
    {40000,1280,1032, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.01  BV=2.60
    {40000,1280,1104, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.11  BV=2.51
    {50000,1152,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1152,1128, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.31
    {50000,1280,1088, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.09  BV=2.21
    {60000,1152,1080, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=4.92  BV=2.10
    {60000,1280,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.02  BV=2.01
    {60000,1280,1112, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.12  BV=1.91
    {60000,1408,1088, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.22  BV=1.80
    {60000,1536,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.32  BV=1.71
    {60000,1664,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.42  BV=1.61
    {60000,1792,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.52  BV=1.51
    {60000,1920,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.62  BV=1.41
    {60000,2048,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2176,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.82  BV=1.21
    {70000,2048,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.70  BV=1.11
    {70000,2176,1048, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.80  BV=1.01
    {80000,2048,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.70  BV=0.91
    {80000,2176,1056, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.81  BV=0.80
    {90000,2048,1072, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=5.74  BV=0.70
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2176,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.78  BV=0.52
    {100000,2304,1056, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.89  BV=0.40
    {100000,2432,1064, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.98  BV=0.31
    {100000,2688,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.08  BV=0.21
    {100000,2816,1064, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.19  BV=0.10
    {100000,3072,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.30  BV=-0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3584,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.49  BV=-0.19
    {100000,3840,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.58  BV=-0.29
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4352,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.50
    {110000,4224,1048, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=6.76  BV=-0.60
    {120000,4224,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.73  BV=-0.70
    {130000,4096,1048, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=6.71  BV=-0.80
    {140000,4096,1048, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=6.71  BV=-0.90
    {140000,4480,1024, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=6.81  BV=-1.00
    {140000,4736,1040, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=6.91  BV=-1.10
    {140000,5120,1032, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.01  BV=-1.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureAutoTable =
{
    AETABLE_CAPTURE_AUTO,    //eAETableID
    112,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -12,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCapturePLineTable_60Hz,
    sCapturePLineTable_50Hz,
    NULL,
};

static strEvPline sVideoPLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {25000,1152,1048, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1280,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1280,1088, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.21
    {25000,1408,1056, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33200,1152,1040, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=4.87  BV=3.01
    {33200,1152,1120, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=4.98  BV=2.91
    {33200,1280,1080, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.08  BV=2.81
    {33200,1408,1048, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.17  BV=2.71
    {33200,1536,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.27  BV=2.61
    {33200,1664,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.38  BV=2.51
    {33200,1664,1096, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.48  BV=2.41
    {33200,1792,1088, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.57  BV=2.31
    {33200,2048,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.68  BV=2.21
    {33200,2176,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.77  BV=2.12
    {33200,2304,1048, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.88  BV=2.00
    {33200,2432,1064, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.98  BV=1.90
    {41680,2048,1080, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.75  BV=1.80
    {41680,2304,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.85  BV=1.71
    {50000,2048,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.69  BV=1.60
    {50000,2176,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.78  BV=1.52
    {50000,2304,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.89  BV=1.40
    {50000,2432,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.98  BV=1.31
    {50000,2688,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.08  BV=1.21
    {50000,2816,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.19  BV=1.10
    {50000,3072,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.29  BV=1.01
    {50000,3328,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.38  BV=0.91
    {50000,3584,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.49  BV=0.81
    {50000,3840,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.58  BV=0.71
    {50000,4096,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.69  BV=0.60
    {50000,4352,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.79  BV=0.50
    {50000,4736,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.89  BV=0.41
    {58320,4352,1024, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=6.77  BV=0.31
    {58320,4608,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=6.86  BV=0.21
    {66520,4352,1032, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=6.78  BV=0.10
    {66520,4736,1024, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=6.89  BV=-0.01
    {66520,4992,1040, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=6.99  BV=-0.10
    {66520,5376,1032, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=7.08  BV=-0.20
    {66520,5760,1032, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=7.18  BV=-0.30
    {66520,6144,1032, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=7.27  BV=-0.39
    {66520,6656,1032, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=7.39  BV=-0.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoPLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2176,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.80  BV=3.82
    {20000,1152,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.90  BV=3.71
    {20000,1280,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.00  BV=3.61
    {20000,1280,1112, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.12  BV=3.50
    {20000,1408,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.20  BV=3.41
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1664,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.40  BV=3.21
    {30000,1152,1080, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.10
    {30000,1280,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.02  BV=3.01
    {30000,1280,1112, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.12  BV=2.91
    {30000,1408,1088, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.22  BV=2.80
    {30000,1536,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.32  BV=2.71
    {30000,1664,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.42  BV=2.61
    {30000,1792,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.52  BV=2.51
    {30000,1920,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.62  BV=2.41
    {30000,2048,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.72  BV=2.31
    {30000,2176,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.82  BV=2.21
    {30000,2304,1072, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.91  BV=2.12
    {30000,2560,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.02  BV=2.01
    {40000,2048,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.70  BV=1.91
    {40000,2176,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.81  BV=1.80
    {40000,2304,1072, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.91  BV=1.70
    {50000,2048,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.69  BV=1.60
    {50000,2176,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.78  BV=1.52
    {50000,2304,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.89  BV=1.40
    {50000,2432,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.98  BV=1.31
    {50000,2688,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.08  BV=1.21
    {50000,2816,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.19  BV=1.10
    {50000,3072,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.29  BV=1.01
    {50000,3328,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.38  BV=0.91
    {50000,3584,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.49  BV=0.81
    {50000,3840,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.58  BV=0.71
    {50000,4096,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.69  BV=0.60
    {50000,4352,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.79  BV=0.50
    {50000,4736,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.89  BV=0.41
    {60000,4224,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.72  BV=0.31
    {60000,4480,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.82  BV=0.21
    {60000,4864,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.93  BV=0.10
    {60000,5248,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.04  BV=-0.01
    {60000,5504,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.13  BV=-0.10
    {60000,6016,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.23  BV=-0.20
    {60000,6400,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.32  BV=-0.29
    {60000,6784,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.43  BV=-0.40
    {60000,7086,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.52  BV=-0.49
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoAutoTable =
{
    AETABLE_VIDEO_AUTO,    //eAETableID
    105,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -5,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideoPLineTable_60Hz,
    sVideoPLineTable_50Hz,
    NULL,
};

static strEvPline sVideo1PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1536,1104, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.37  BV=4.51
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,1920,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.67  BV=4.21
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {8320,2304,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.87  BV=4.01
    {8320,2432,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.98  BV=3.90
    {8320,2688,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.07  BV=3.81
    {8320,2816,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.17  BV=3.71
    {8320,3072,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.27  BV=3.61
    {8320,3200,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.37  BV=3.51
    {8320,3456,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.48  BV=3.40
    {8320,3712,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.57  BV=3.31
    {8320,3968,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.67  BV=3.21
    {8320,4352,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.77  BV=3.11
    {8320,4608,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.87  BV=3.01
    {8320,4992,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.97  BV=2.91
    {8320,5376,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.07  BV=2.81
    {8320,5760,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.17  BV=2.71
    {8320,6144,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.27  BV=2.61
    {8320,6528,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.37  BV=2.51
    {8320,7040,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.47  BV=2.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo1PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1536,1104, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.37  BV=4.51
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,1920,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.67  BV=4.21
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {8320,2304,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.87  BV=4.01
    {8320,2432,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.98  BV=3.90
    {8320,2688,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.07  BV=3.81
    {8320,2816,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.17  BV=3.71
    {8320,3072,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.27  BV=3.61
    {8320,3200,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.37  BV=3.51
    {8320,3456,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.48  BV=3.40
    {8320,3712,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.57  BV=3.31
    {8320,3968,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.67  BV=3.21
    {8320,4352,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.77  BV=3.11
    {8320,4608,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.87  BV=3.01
    {8320,4992,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.97  BV=2.91
    {8320,5376,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.07  BV=2.81
    {8320,5760,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.17  BV=2.71
    {8320,6144,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.27  BV=2.61
    {8320,6528,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.37  BV=2.51
    {8320,7040,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.47  BV=2.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video1AutoTable =
{
    AETABLE_VIDEO1_AUTO,    //eAETableID
    76,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    24,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideo1PLineTable_60Hz,
    sVideo1PLineTable_50Hz,
    NULL,
};

static strEvPline sVideo2PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.89  BV=3.98
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {16680,1664,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1792,1080, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.56  BV=3.31
    {16680,1920,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.67  BV=3.20
    {16680,2176,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2432,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.97  BV=2.91
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.17  BV=2.71
    {16680,3072,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.26  BV=2.61
    {16680,3200,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3456,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.47  BV=2.41
    {16680,3712,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,3968,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.21
    {16680,4352,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.11
    {25000,3072,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.29  BV=2.01
    {25000,3328,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.38  BV=1.91
    {25000,3584,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.49  BV=1.81
    {25000,3840,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33200,3072,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.27  BV=1.61
    {33200,3200,1056, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.37  BV=1.52
    {33200,3456,1048, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.47  BV=1.42
    {33200,3712,1056, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.58  BV=1.30
    {33200,4096,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.68  BV=1.21
    {33200,4352,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.78  BV=1.11
    {33200,4608,1040, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.87  BV=1.01
    {33200,4992,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.97  BV=0.91
    {33200,5376,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.07  BV=0.81
    {33200,5760,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.17  BV=0.71
    {33200,6144,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.27  BV=0.61
    {33200,6656,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.38  BV=0.51
    {33200,7040,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.47  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo2PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.63  BV=3.99
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2176,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.80  BV=3.82
    {10000,2304,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.71
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2688,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2944,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.20  BV=3.41
    {10000,3072,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.31  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3584,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.51  BV=3.11
    {10000,3840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.61  BV=3.01
    {10000,4096,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.71  BV=2.90
    {10000,4480,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4736,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.91  BV=2.70
    {10000,5120,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.00  BV=2.61
    {10000,5504,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.10  BV=2.51
    {10000,5888,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.20  BV=2.41
    {20000,3072,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.31  BV=2.31
    {20000,3328,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.40  BV=2.21
    {20000,3584,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.51  BV=2.11
    {20000,3840,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.01
    {20000,4096,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4480,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3200,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.32  BV=1.71
    {30000,3328,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3584,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3840,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.62  BV=1.41
    {30000,4224,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4480,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4864,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.93  BV=1.10
    {30000,5120,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5504,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5888,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6272,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6784,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.42  BV=0.61
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video2AutoTable =
{
    AETABLE_VIDEO2_AUTO,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideo2PLineTable_60Hz,
    sVideo2PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom1PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {16680,1664,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1792,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.57  BV=3.30
    {16680,1920,1080, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.66  BV=3.21
    {16680,2176,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2432,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.16  BV=2.72
    {16680,3072,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.26  BV=2.61
    {16680,3200,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3456,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.47  BV=2.41
    {16680,3712,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,3968,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.21
    {16680,4352,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.11
    {25000,3072,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.29  BV=2.01
    {25000,3328,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.38  BV=1.91
    {25000,3584,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.49  BV=1.81
    {25000,3840,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33320,3072,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.27  BV=1.60
    {33320,3200,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.37  BV=1.51
    {33320,3456,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.47  BV=1.41
    {33320,3712,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.57  BV=1.31
    {33320,3968,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.67  BV=1.21
    {33320,4352,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4608,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4992,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.96  BV=0.91
    {33320,5376,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.07  BV=0.81
    {33320,5760,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.17  BV=0.71
    {33320,6144,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.27  BV=0.60
    {33320,6528,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.37  BV=0.51
    {33320,7040,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.46  BV=0.42
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom1PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2176,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.80
    {10000,2304,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.71
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2688,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2944,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.40
    {10000,3072,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.31  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3584,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.51  BV=3.11
    {10000,3840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.61  BV=3.01
    {10000,4096,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4480,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4736,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.90  BV=2.72
    {10000,5120,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.00  BV=2.61
    {10000,5504,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.10  BV=2.51
    {10000,5888,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.20  BV=2.41
    {20000,3072,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.31  BV=2.31
    {20000,3328,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.40  BV=2.21
    {20000,3584,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.51  BV=2.11
    {20000,3840,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.01
    {20000,4096,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4480,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3200,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.32  BV=1.71
    {30000,3328,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3584,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3840,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.62  BV=1.41
    {30000,4224,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4480,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4864,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.93  BV=1.10
    {30000,5120,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5504,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5888,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6272,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6784,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.42  BV=0.61
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom1AutoTable =
{
    AETABLE_CUSTOM1_AUTO,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom1PLineTable_60Hz,
    sCustom1PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom2PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {16680,1664,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1792,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.57  BV=3.30
    {16680,1920,1080, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.66  BV=3.21
    {16680,2176,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2432,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.16  BV=2.72
    {16680,3072,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.26  BV=2.61
    {16680,3200,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3456,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.47  BV=2.41
    {16680,3712,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,3968,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.21
    {16680,4352,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.11
    {25000,3072,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.29  BV=2.01
    {25000,3328,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.38  BV=1.91
    {25000,3584,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.49  BV=1.81
    {25000,3840,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33320,3072,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.27  BV=1.60
    {33320,3200,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.37  BV=1.51
    {33320,3456,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.47  BV=1.41
    {33320,3712,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.57  BV=1.31
    {33320,3968,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.67  BV=1.21
    {33320,4352,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4608,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4992,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.96  BV=0.91
    {33320,5376,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.07  BV=0.81
    {33320,5760,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.17  BV=0.71
    {33320,6144,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.27  BV=0.60
    {33320,6528,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.37  BV=0.51
    {33320,7040,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.46  BV=0.42
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom2PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2176,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.80
    {10000,2304,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.71
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2688,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2944,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.40
    {10000,3072,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.31  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3584,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.51  BV=3.11
    {10000,3840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.61  BV=3.01
    {10000,4096,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4480,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4736,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.90  BV=2.72
    {10000,5120,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.00  BV=2.61
    {10000,5504,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.10  BV=2.51
    {10000,5888,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.20  BV=2.41
    {20000,3072,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.31  BV=2.31
    {20000,3328,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.40  BV=2.21
    {20000,3584,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.51  BV=2.11
    {20000,3840,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.01
    {20000,4096,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4480,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3200,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.32  BV=1.71
    {30000,3328,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3584,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3840,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.62  BV=1.41
    {30000,4224,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4480,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4864,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.93  BV=1.10
    {30000,5120,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5504,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5888,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6272,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6784,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.42  BV=0.61
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom2AutoTable =
{
    AETABLE_CUSTOM2_AUTO,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom2PLineTable_60Hz,
    sCustom2PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom3PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {16680,1664,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1792,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.57  BV=3.30
    {16680,1920,1080, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.66  BV=3.21
    {16680,2176,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2432,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.16  BV=2.72
    {16680,3072,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.26  BV=2.61
    {16680,3200,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3456,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.47  BV=2.41
    {16680,3712,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,3968,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.21
    {16680,4352,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.11
    {25000,3072,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.29  BV=2.01
    {25000,3328,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.38  BV=1.91
    {25000,3584,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.49  BV=1.81
    {25000,3840,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33320,3072,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.27  BV=1.60
    {33320,3200,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.37  BV=1.51
    {33320,3456,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.47  BV=1.41
    {33320,3712,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.57  BV=1.31
    {33320,3968,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.67  BV=1.21
    {33320,4352,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4608,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4992,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.96  BV=0.91
    {33320,5376,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.07  BV=0.81
    {33320,5760,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.17  BV=0.71
    {33320,6144,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.27  BV=0.60
    {33320,6528,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.37  BV=0.51
    {33320,7040,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.46  BV=0.42
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom3PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2176,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.80
    {10000,2304,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.71
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2688,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2944,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.40
    {10000,3072,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.31  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3584,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.51  BV=3.11
    {10000,3840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.61  BV=3.01
    {10000,4096,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4480,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4736,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.90  BV=2.72
    {10000,5120,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.00  BV=2.61
    {10000,5504,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.10  BV=2.51
    {10000,5888,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.20  BV=2.41
    {20000,3072,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.31  BV=2.31
    {20000,3328,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.40  BV=2.21
    {20000,3584,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.51  BV=2.11
    {20000,3840,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.01
    {20000,4096,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4480,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3200,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.32  BV=1.71
    {30000,3328,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3584,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3840,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.62  BV=1.41
    {30000,4224,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4480,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4864,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.93  BV=1.10
    {30000,5120,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5504,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5888,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6272,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6784,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.42  BV=0.61
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom3AutoTable =
{
    AETABLE_CUSTOM3_AUTO,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom3PLineTable_60Hz,
    sCustom3PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom4PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {16680,1664,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1792,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.57  BV=3.30
    {16680,1920,1080, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.66  BV=3.21
    {16680,2176,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2432,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.16  BV=2.72
    {16680,3072,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.26  BV=2.61
    {16680,3200,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3456,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.47  BV=2.41
    {16680,3712,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,3968,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.21
    {16680,4352,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.11
    {25000,3072,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.29  BV=2.01
    {25000,3328,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.38  BV=1.91
    {25000,3584,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.49  BV=1.81
    {25000,3840,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33320,3072,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.27  BV=1.60
    {33320,3200,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.37  BV=1.51
    {33320,3456,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.47  BV=1.41
    {33320,3712,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.57  BV=1.31
    {33320,3968,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.67  BV=1.21
    {33320,4352,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4608,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4992,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.96  BV=0.91
    {33320,5376,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.07  BV=0.81
    {33320,5760,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.17  BV=0.71
    {33320,6144,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.27  BV=0.60
    {33320,6528,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.37  BV=0.51
    {33320,7040,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.46  BV=0.42
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom4PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2176,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.80
    {10000,2304,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.71
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2688,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2944,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.40
    {10000,3072,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.31  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3584,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.51  BV=3.11
    {10000,3840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.61  BV=3.01
    {10000,4096,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4480,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4736,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.90  BV=2.72
    {10000,5120,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.00  BV=2.61
    {10000,5504,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.10  BV=2.51
    {10000,5888,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.20  BV=2.41
    {20000,3072,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.31  BV=2.31
    {20000,3328,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.40  BV=2.21
    {20000,3584,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.51  BV=2.11
    {20000,3840,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.01
    {20000,4096,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4480,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3200,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.32  BV=1.71
    {30000,3328,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3584,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3840,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.62  BV=1.41
    {30000,4224,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4480,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4864,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.93  BV=1.10
    {30000,5120,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5504,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5888,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6272,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6784,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.42  BV=0.61
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom4AutoTable =
{
    AETABLE_CUSTOM4_AUTO,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom4PLineTable_60Hz,
    sCustom4PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom5PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {16680,1664,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1792,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.57  BV=3.30
    {16680,1920,1080, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.66  BV=3.21
    {16680,2176,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2432,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.16  BV=2.72
    {16680,3072,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.26  BV=2.61
    {16680,3200,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3456,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.47  BV=2.41
    {16680,3712,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,3968,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.21
    {16680,4352,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.11
    {25000,3072,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.29  BV=2.01
    {25000,3328,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.38  BV=1.91
    {25000,3584,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.49  BV=1.81
    {25000,3840,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33320,3072,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.27  BV=1.60
    {33320,3200,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.37  BV=1.51
    {33320,3456,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.47  BV=1.41
    {33320,3712,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.57  BV=1.31
    {33320,3968,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.67  BV=1.21
    {33320,4352,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4608,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4992,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.96  BV=0.91
    {33320,5376,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.07  BV=0.81
    {33320,5760,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.17  BV=0.71
    {33320,6144,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.27  BV=0.60
    {33320,6528,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.37  BV=0.51
    {33320,7040,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.46  BV=0.42
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom5PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2176,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.80
    {10000,2304,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.71
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2688,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2944,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.40
    {10000,3072,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.31  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3584,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.51  BV=3.11
    {10000,3840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.61  BV=3.01
    {10000,4096,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4480,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4736,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.90  BV=2.72
    {10000,5120,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.00  BV=2.61
    {10000,5504,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.10  BV=2.51
    {10000,5888,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.20  BV=2.41
    {20000,3072,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.31  BV=2.31
    {20000,3328,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.40  BV=2.21
    {20000,3584,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.51  BV=2.11
    {20000,3840,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.01
    {20000,4096,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4480,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3200,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.32  BV=1.71
    {30000,3328,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3584,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3840,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.62  BV=1.41
    {30000,4224,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4480,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4864,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.93  BV=1.10
    {30000,5120,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5504,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5888,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6272,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6784,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.42  BV=0.61
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom5AutoTable =
{
    AETABLE_CUSTOM5_AUTO,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom5PLineTable_60Hz,
    sCustom5PLineTable_50Hz,
    NULL,
};

static strEvPline sVideoNightPLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {16680,1664,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1792,1088, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.57  BV=3.30
    {16680,1920,1080, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.66  BV=3.21
    {16680,2176,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2432,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.16  BV=2.72
    {16680,3072,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.26  BV=2.61
    {16680,3200,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3456,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.47  BV=2.41
    {16680,3712,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,3968,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.21
    {16680,4352,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.11
    {25000,3072,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.29  BV=2.01
    {25000,3328,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.38  BV=1.91
    {25000,3584,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.49  BV=1.81
    {25000,3840,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33200,3072,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.27  BV=1.61
    {33200,3200,1056, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.37  BV=1.52
    {33200,3456,1048, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.47  BV=1.42
    {33200,3712,1056, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.58  BV=1.30
    {33200,4096,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.68  BV=1.21
    {33200,4352,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.78  BV=1.11
    {33200,4608,1040, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.87  BV=1.01
    {33200,4992,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.97  BV=0.91
    {33200,5376,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.07  BV=0.81
    {33200,5760,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.17  BV=0.71
    {33200,6144,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.27  BV=0.61
    {33200,6656,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.38  BV=0.51
    {33200,7040,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.47  BV=0.41
    {33200,7086,1096, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.57  BV=0.32
    {33200,7086,1176, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.67  BV=0.22
    {33200,7086,1264, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.77  BV=0.11
    {41680,7086,1080, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=7.55  BV=0.01
    {41680,7086,1168, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=7.66  BV=-0.10
    {50000,7086,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.49  BV=-0.20
    {50000,7086,1120, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.60  BV=-0.31
    {58320,7040,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=7.47  BV=-0.40
    {58320,7086,1096, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=7.57  BV=-0.50
    {66520,7086,1032, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=7.48  BV=-0.60
    {66520,7086,1112, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=7.59  BV=-0.71
    {75000,7086,1056, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=7.51  BV=-0.81
    {75000,7086,1128, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=7.61  BV=-0.90
    {83320,7086,1080, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=7.55  BV=-0.99
    {91680,7086,1064, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=7.52  BV=-1.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoNightPLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2176,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.80
    {10000,2304,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.71
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2688,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2944,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.40
    {10000,3072,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.31  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3584,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.51  BV=3.11
    {10000,3840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.61  BV=3.01
    {10000,4096,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4480,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4736,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.90  BV=2.72
    {10000,5120,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.00  BV=2.61
    {10000,5504,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.10  BV=2.51
    {10000,5888,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.20  BV=2.41
    {20000,3072,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.31  BV=2.31
    {20000,3328,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.40  BV=2.21
    {20000,3584,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.51  BV=2.11
    {20000,3840,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.01
    {20000,4096,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4480,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3200,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.32  BV=1.71
    {30000,3328,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3584,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3840,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.62  BV=1.41
    {30000,4224,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4480,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4864,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.93  BV=1.10
    {30000,5120,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5504,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5888,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6272,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6784,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.42  BV=0.61
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {30000,7086,1216, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.72  BV=0.31
    {30000,7086,1304, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.82  BV=0.21
    {40000,7086,1048, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.50  BV=0.11
    {40000,7086,1136, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.62  BV=-0.00
    {40000,7086,1208, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.71  BV=-0.09
    {50000,7086,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.49  BV=-0.20
    {50000,7086,1120, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.60  BV=-0.31
    {50000,7086,1192, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.69  BV=-0.40
    {60000,7086,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.52  BV=-0.49
    {60000,7086,1152, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.64  BV=-0.61
    {70000,7086,1048, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=7.50  BV=-0.69
    {70000,7086,1128, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=7.61  BV=-0.80
    {80000,7086,1064, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=7.52  BV=-0.91
    {80000,7086,1136, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=7.62  BV=-1.00
    {90000,7086,1080, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=7.55  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoNightTable =
{
    AETABLE_VIDEO_NIGHT,    //eAETableID
    111,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -11,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideoNightPLineTable_60Hz,
    sVideoNightPLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO100PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {25000,1152,1048, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1280,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1280,1088, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.21
    {25000,1408,1056, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1152,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.87  BV=3.01
    {33320,1152,1112, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1280,1072, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {41680,1152,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.85  BV=2.71
    {41680,1152,1096, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.95  BV=2.61
    {41680,1280,1056, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.04  BV=2.51
    {50000,1152,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1152,1128, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.31
    {58320,1152,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.86  BV=2.21
    {58320,1152,1104, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.96  BV=2.11
    {66680,1152,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.86  BV=2.02
    {66680,1152,1112, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.97  BV=1.91
    {75000,1152,1064, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=4.90  BV=1.80
    {83320,1152,1024, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=4.85  BV=1.71
    {83320,1152,1096, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=4.95  BV=1.61
    {91680,1152,1072, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=4.91  BV=1.50
    {100000,1152,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=4.88  BV=1.41
    {108320,1152,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=4.86  BV=1.32
    {116680,1152,1032, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=4.86  BV=1.21
    {125000,1152,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=4.86  BV=1.11
    {133320,1152,1032, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=4.86  BV=1.02
    {141680,1152,1048, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=4.88  BV=0.91
    {150000,1152,1064, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=4.90  BV=0.80
    {166640,1152,1024, 0, 0, 0},  //TV = 2.59(4166 lines)  AV=2.97  SV=4.85  BV=0.71
    {175000,1152,1040, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=4.87  BV=0.62
    {191640,1152,1024, 0, 0, 0},  //TV = 2.38(4791 lines)  AV=2.97  SV=4.85  BV=0.51
    {200000,1152,1048, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=4.88  BV=0.41
    {216640,1152,1032, 0, 0, 0},  //TV = 2.21(5416 lines)  AV=2.97  SV=4.86  BV=0.32
    {233320,1152,1032, 0, 0, 0},  //TV = 2.10(5833 lines)  AV=2.97  SV=4.86  BV=0.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO100PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2176,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.80  BV=3.82
    {20000,1152,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.90  BV=3.71
    {20000,1280,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.00  BV=3.61
    {20000,1280,1112, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.12  BV=3.50
    {20000,1408,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.20  BV=3.41
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1664,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.40  BV=3.21
    {30000,1152,1080, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.10
    {30000,1280,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.03  BV=3.00
    {30000,1280,1112, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.12  BV=2.91
    {30000,1408,1088, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.22  BV=2.80
    {40000,1152,1064, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=4.90  BV=2.71
    {40000,1280,1024, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.00  BV=2.61
    {40000,1280,1104, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.11  BV=2.51
    {50000,1152,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1152,1128, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.31
    {50000,1280,1088, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.09  BV=2.21
    {60000,1152,1088, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=4.94  BV=2.09
    {60000,1280,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.02  BV=2.01
    {70000,1152,1064, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=4.90  BV=1.90
    {70000,1280,1024, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.00  BV=1.81
    {80000,1152,1064, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=4.90  BV=1.71
    {80000,1280,1024, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.00  BV=1.61
    {90000,1152,1088, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=4.94  BV=1.51
    {100000,1152,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=4.88  BV=1.41
    {110000,1152,1024, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=4.85  BV=1.31
    {110000,1152,1096, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=4.95  BV=1.21
    {120000,1152,1080, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=4.92  BV=1.10
    {130000,1152,1064, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=4.90  BV=1.01
    {140000,1152,1064, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=4.90  BV=0.90
    {150000,1152,1064, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=4.90  BV=0.80
    {160000,1152,1064, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=4.90  BV=0.71
    {180000,1152,1024, 0, 0, 0},  //TV = 2.47(4500 lines)  AV=2.97  SV=4.85  BV=0.60
    {190000,1152,1024, 0, 0, 0},  //TV = 2.40(4750 lines)  AV=2.97  SV=4.85  BV=0.52
    {200000,1152,1048, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=4.88  BV=0.41
    {220000,1152,1024, 0, 0, 0},  //TV = 2.18(5500 lines)  AV=2.97  SV=4.85  BV=0.31
    {230000,1152,1048, 0, 0, 0},  //TV = 2.12(5750 lines)  AV=2.97  SV=4.88  BV=0.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO100Table =
{
    AETABLE_CAPTURE_ISO100,    //eAETableID
    98,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    2,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_100, //ISO SPEED
    sCaptureISO100PLineTable_60Hz,
    sCaptureISO100PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO200PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1152,1128, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1280,1088, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.09  BV=8.91
    {480,1408,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1664,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1792,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.50  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2176,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {520,2176,1024, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=5.77  BV=8.11
    {560,2176,1024, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=5.77  BV=8.01
    {600,2176,1024, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=5.77  BV=7.91
    {680,2048,1024, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=5.68  BV=7.81
    {720,2048,1048, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=5.71  BV=7.70
    {760,2048,1056, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=5.72  BV=7.61
    {840,2048,1024, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=5.68  BV=7.51
    {880,2048,1048, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=5.71  BV=7.41
    {960,2048,1032, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=5.69  BV=7.31
    {1000,2048,1064, 0, 0, 0},  //TV = 9.97(25 lines)  AV=2.97  SV=5.73  BV=7.20
    {1080,2048,1048, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=5.71  BV=7.11
    {1160,2048,1048, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=5.71  BV=7.01
    {1240,2048,1056, 0, 0, 0},  //TV = 9.66(31 lines)  AV=2.97  SV=5.72  BV=6.90
    {1360,2048,1024, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=5.68  BV=6.81
    {1440,2048,1040, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=5.70  BV=6.71
    {1560,2048,1032, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=5.69  BV=6.61
    {1680,2048,1024, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=5.68  BV=6.51
    {1800,2048,1024, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=5.68  BV=6.41
    {1920,2048,1032, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=5.69  BV=6.31
    {2040,2048,1040, 0, 0, 0},  //TV = 8.94(51 lines)  AV=2.97  SV=5.70  BV=6.21
    {2200,2048,1032, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=5.69  BV=6.11
    {2360,2048,1032, 0, 0, 0},  //TV = 8.73(59 lines)  AV=2.97  SV=5.69  BV=6.01
    {2520,2048,1040, 0, 0, 0},  //TV = 8.63(63 lines)  AV=2.97  SV=5.70  BV=5.90
    {2720,2048,1024, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=5.68  BV=5.81
    {2920,2048,1032, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=5.69  BV=5.70
    {3120,2048,1032, 0, 0, 0},  //TV = 8.32(78 lines)  AV=2.97  SV=5.69  BV=5.61
    {3360,2048,1024, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=5.68  BV=5.51
    {3600,2048,1024, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=5.68  BV=5.41
    {3880,2048,1024, 0, 0, 0},  //TV = 8.01(97 lines)  AV=2.97  SV=5.68  BV=5.30
    {4160,2048,1024, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=5.68  BV=5.20
    {4440,2048,1024, 0, 0, 0},  //TV = 7.82(111 lines)  AV=2.97  SV=5.68  BV=5.11
    {4760,2048,1024, 0, 0, 0},  //TV = 7.71(119 lines)  AV=2.97  SV=5.68  BV=5.01
    {5080,2048,1024, 0, 0, 0},  //TV = 7.62(127 lines)  AV=2.97  SV=5.68  BV=4.91
    {5440,2048,1024, 0, 0, 0},  //TV = 7.52(136 lines)  AV=2.97  SV=5.68  BV=4.81
    {5840,2048,1024, 0, 0, 0},  //TV = 7.42(146 lines)  AV=2.97  SV=5.68  BV=4.71
    {6280,2048,1024, 0, 0, 0},  //TV = 7.32(157 lines)  AV=2.97  SV=5.68  BV=4.61
    {6760,2048,1024, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=5.68  BV=4.50
    {7240,2048,1024, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=5.68  BV=4.40
    {7760,2048,1024, 0, 0, 0},  //TV = 7.01(194 lines)  AV=2.97  SV=5.68  BV=4.30
    {8280,2048,1024, 0, 0, 0},  //TV = 6.92(207 lines)  AV=2.97  SV=5.68  BV=4.21
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {8320,2304,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.87  BV=4.01
    {8320,2432,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.97  BV=3.91
    {8320,2688,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.07  BV=3.81
    {8320,2816,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.17  BV=3.71
    {8320,3072,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.27  BV=3.61
    {8320,3200,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.37  BV=3.51
    {8320,3456,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.47  BV=3.41
    {8320,3712,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.57  BV=3.31
    {8320,3968,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.67  BV=3.21
    {16680,2176,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2432,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.17  BV=2.71
    {25000,2048,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.68  BV=2.61
    {25000,2176,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.79  BV=2.50
    {25000,2304,1056, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.89  BV=2.40
    {25000,2432,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.98  BV=2.31
    {25000,2688,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.08  BV=2.21
    {33320,2176,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.77  BV=2.11
    {33320,2304,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.87  BV=2.01
    {33320,2432,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.97  BV=1.91
    {41680,2048,1072, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.74  BV=1.81
    {41680,2304,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.85  BV=1.71
    {50000,2048,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.69  BV=1.60
    {50000,2176,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.78  BV=1.52
    {50000,2304,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.88  BV=1.41
    {58320,2176,1024, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=5.77  BV=1.31
    {58320,2304,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=5.86  BV=1.21
    {66680,2176,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.77  BV=1.11
    {75000,2048,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.70  BV=1.01
    {75000,2176,1048, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.80  BV=0.91
    {83320,2048,1072, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=5.74  BV=0.81
    {91680,2048,1048, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=5.71  BV=0.71
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2176,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.78  BV=0.52
    {108320,2176,1024, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=5.77  BV=0.41
    {116680,2176,1024, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=5.77  BV=0.30
    {125000,2176,1024, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=5.77  BV=0.21
    {141680,2048,1024, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=5.68  BV=0.11
    {150000,2048,1048, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=5.71  BV=-0.00
    {158320,2048,1064, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=5.73  BV=-0.10
    {175000,2048,1032, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=5.69  BV=-0.20
    {183320,2048,1056, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=5.72  BV=-0.30
    {200000,2048,1040, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=5.70  BV=-0.41
    {216640,2048,1024, 0, 0, 0},  //TV = 2.21(5416 lines)  AV=2.97  SV=5.68  BV=-0.50
    {225000,2048,1056, 0, 0, 0},  //TV = 2.15(5625 lines)  AV=2.97  SV=5.72  BV=-0.60
    {241640,2048,1056, 0, 0, 0},  //TV = 2.05(6041 lines)  AV=2.97  SV=5.72  BV=-0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO200PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1152,1128, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1280,1088, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.09  BV=8.91
    {480,1408,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1664,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1792,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.50  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2176,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {520,2176,1024, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=5.77  BV=8.11
    {560,2176,1024, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=5.77  BV=8.01
    {600,2176,1024, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=5.77  BV=7.91
    {680,2048,1024, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=5.68  BV=7.81
    {720,2048,1048, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=5.71  BV=7.70
    {760,2048,1056, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=5.72  BV=7.61
    {840,2048,1024, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=5.68  BV=7.51
    {880,2048,1048, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=5.71  BV=7.41
    {960,2048,1032, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=5.69  BV=7.31
    {1000,2048,1064, 0, 0, 0},  //TV = 9.97(25 lines)  AV=2.97  SV=5.73  BV=7.20
    {1080,2048,1048, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=5.71  BV=7.11
    {1160,2048,1048, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=5.71  BV=7.01
    {1240,2048,1056, 0, 0, 0},  //TV = 9.66(31 lines)  AV=2.97  SV=5.72  BV=6.90
    {1360,2048,1024, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=5.68  BV=6.81
    {1440,2048,1040, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=5.70  BV=6.71
    {1560,2048,1032, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=5.69  BV=6.61
    {1680,2048,1024, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=5.68  BV=6.51
    {1800,2048,1024, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=5.68  BV=6.41
    {1920,2048,1032, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=5.69  BV=6.31
    {2040,2048,1040, 0, 0, 0},  //TV = 8.94(51 lines)  AV=2.97  SV=5.70  BV=6.21
    {2200,2048,1032, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=5.69  BV=6.11
    {2360,2048,1032, 0, 0, 0},  //TV = 8.73(59 lines)  AV=2.97  SV=5.69  BV=6.01
    {2520,2048,1040, 0, 0, 0},  //TV = 8.63(63 lines)  AV=2.97  SV=5.70  BV=5.90
    {2720,2048,1024, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=5.68  BV=5.81
    {2920,2048,1032, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=5.69  BV=5.70
    {3120,2048,1032, 0, 0, 0},  //TV = 8.32(78 lines)  AV=2.97  SV=5.69  BV=5.61
    {3360,2048,1024, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=5.68  BV=5.51
    {3600,2048,1024, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=5.68  BV=5.41
    {3880,2048,1024, 0, 0, 0},  //TV = 8.01(97 lines)  AV=2.97  SV=5.68  BV=5.30
    {4160,2048,1024, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=5.68  BV=5.20
    {4440,2048,1024, 0, 0, 0},  //TV = 7.82(111 lines)  AV=2.97  SV=5.68  BV=5.11
    {4760,2048,1024, 0, 0, 0},  //TV = 7.71(119 lines)  AV=2.97  SV=5.68  BV=5.01
    {5080,2048,1024, 0, 0, 0},  //TV = 7.62(127 lines)  AV=2.97  SV=5.68  BV=4.91
    {5440,2048,1024, 0, 0, 0},  //TV = 7.52(136 lines)  AV=2.97  SV=5.68  BV=4.81
    {5840,2048,1024, 0, 0, 0},  //TV = 7.42(146 lines)  AV=2.97  SV=5.68  BV=4.71
    {6280,2048,1024, 0, 0, 0},  //TV = 7.32(157 lines)  AV=2.97  SV=5.68  BV=4.61
    {6760,2048,1024, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=5.68  BV=4.50
    {7240,2048,1024, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=5.68  BV=4.40
    {7760,2048,1024, 0, 0, 0},  //TV = 7.01(194 lines)  AV=2.97  SV=5.68  BV=4.30
    {8280,2048,1024, 0, 0, 0},  //TV = 6.92(207 lines)  AV=2.97  SV=5.68  BV=4.21
    {8880,2048,1024, 0, 0, 0},  //TV = 6.82(222 lines)  AV=2.97  SV=5.68  BV=4.11
    {9520,2048,1024, 0, 0, 0},  //TV = 6.71(238 lines)  AV=2.97  SV=5.68  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2176,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.80  BV=3.82
    {10000,2304,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.71
    {10000,2560,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.00  BV=3.61
    {10000,2688,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2944,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.20  BV=3.41
    {10000,3072,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.31  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3584,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.51  BV=3.11
    {10000,3840,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.60  BV=3.02
    {20000,2048,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.70  BV=2.91
    {20000,2176,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.81  BV=2.80
    {20000,2304,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.90  BV=2.71
    {20000,2560,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.01  BV=2.60
    {20000,2688,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.10  BV=2.51
    {20000,2944,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.21  BV=2.40
    {30000,2048,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.72  BV=2.31
    {30000,2176,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.82  BV=2.21
    {30000,2432,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.93  BV=2.10
    {30000,2560,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.02  BV=2.01
    {40000,2048,1048, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.71  BV=1.90
    {40000,2176,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.81  BV=1.80
    {40000,2304,1064, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.90  BV=1.71
    {50000,2048,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.69  BV=1.60
    {50000,2176,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.78  BV=1.52
    {50000,2304,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.88  BV=1.41
    {60000,2048,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2176,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.82  BV=1.21
    {70000,2048,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.70  BV=1.11
    {70000,2176,1048, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.80  BV=1.01
    {80000,2048,1048, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.71  BV=0.90
    {80000,2176,1056, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.81  BV=0.80
    {90000,2048,1064, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=5.73  BV=0.71
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2176,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.78  BV=0.52
    {110000,2048,1072, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=5.74  BV=0.41
    {120000,2048,1056, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=5.72  BV=0.31
    {130000,2048,1048, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=5.71  BV=0.20
    {140000,2048,1040, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=5.70  BV=0.11
    {150000,2048,1048, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=5.71  BV=-0.00
    {160000,2048,1056, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=5.72  BV=-0.11
    {170000,2048,1064, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=5.73  BV=-0.21
    {180000,2048,1072, 0, 0, 0},  //TV = 2.47(4500 lines)  AV=2.97  SV=5.74  BV=-0.30
    {200000,2048,1040, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=5.70  BV=-0.41
    {210000,2048,1056, 0, 0, 0},  //TV = 2.25(5250 lines)  AV=2.97  SV=5.72  BV=-0.50
    {230000,2048,1032, 0, 0, 0},  //TV = 2.12(5750 lines)  AV=2.97  SV=5.69  BV=-0.60
    {240000,2048,1064, 0, 0, 0},  //TV = 2.06(6000 lines)  AV=2.97  SV=5.73  BV=-0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO200Table =
{
    AETABLE_CAPTURE_ISO200,    //eAETableID
    107,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -7,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_200, //ISO SPEED
    sCaptureISO200PLineTable_60Hz,
    sCaptureISO200PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO400PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1152,1128, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1280,1088, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.09  BV=8.91
    {480,1408,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1664,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1792,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.50  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2176,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {480,2304,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.89  BV=8.10
    {480,2432,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.98  BV=8.01
    {480,2688,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.09  BV=7.90
    {480,2816,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.19  BV=7.80
    {480,3072,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.29  BV=7.71
    {480,3328,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.38  BV=7.62
    {480,3584,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.49  BV=7.51
    {480,3840,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.58  BV=7.41
    {480,4096,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.69  BV=7.31
    {480,4352,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.79  BV=7.21
    {520,4352,1024, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=6.77  BV=7.11
    {560,4352,1024, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=6.77  BV=7.01
    {600,4352,1024, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=6.77  BV=6.91
    {680,4096,1024, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=6.68  BV=6.81
    {720,4096,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=6.70  BV=6.71
    {760,4224,1024, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=6.72  BV=6.61
    {840,4096,1024, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=6.68  BV=6.51
    {880,4096,1048, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=6.71  BV=6.41
    {960,4096,1032, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=6.69  BV=6.31
    {1000,4224,1024, 0, 0, 0},  //TV = 9.97(25 lines)  AV=2.97  SV=6.72  BV=6.21
    {1080,4096,1048, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=6.71  BV=6.11
    {1160,4096,1048, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=6.71  BV=6.01
    {1240,4224,1024, 0, 0, 0},  //TV = 9.66(31 lines)  AV=2.97  SV=6.72  BV=5.90
    {1360,4096,1024, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=6.68  BV=5.81
    {1440,4096,1040, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=6.70  BV=5.71
    {1560,4096,1024, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=6.68  BV=5.62
    {1680,4096,1024, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=6.68  BV=5.51
    {1800,4096,1024, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=6.68  BV=5.41
    {1920,4096,1032, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=6.69  BV=5.31
    {2040,4096,1040, 0, 0, 0},  //TV = 8.94(51 lines)  AV=2.97  SV=6.70  BV=5.21
    {2200,4096,1032, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=6.69  BV=5.11
    {2360,4096,1032, 0, 0, 0},  //TV = 8.73(59 lines)  AV=2.97  SV=6.69  BV=5.01
    {2520,4096,1032, 0, 0, 0},  //TV = 8.63(63 lines)  AV=2.97  SV=6.69  BV=4.91
    {2720,4096,1024, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=6.68  BV=4.81
    {2920,4096,1024, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=6.68  BV=4.71
    {3120,4096,1032, 0, 0, 0},  //TV = 8.32(78 lines)  AV=2.97  SV=6.69  BV=4.61
    {3360,4096,1024, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=6.68  BV=4.51
    {3600,4096,1024, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=6.68  BV=4.41
    {3840,4096,1024, 0, 0, 0},  //TV = 8.02(96 lines)  AV=2.97  SV=6.68  BV=4.32
    {4160,4096,1024, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=6.68  BV=4.20
    {4440,4096,1024, 0, 0, 0},  //TV = 7.82(111 lines)  AV=2.97  SV=6.68  BV=4.11
    {4760,4096,1024, 0, 0, 0},  //TV = 7.71(119 lines)  AV=2.97  SV=6.68  BV=4.01
    {5080,4096,1024, 0, 0, 0},  //TV = 7.62(127 lines)  AV=2.97  SV=6.68  BV=3.91
    {5440,4096,1024, 0, 0, 0},  //TV = 7.52(136 lines)  AV=2.97  SV=6.68  BV=3.81
    {5840,4096,1024, 0, 0, 0},  //TV = 7.42(146 lines)  AV=2.97  SV=6.68  BV=3.71
    {6240,4096,1024, 0, 0, 0},  //TV = 7.32(156 lines)  AV=2.97  SV=6.68  BV=3.62
    {6760,4096,1024, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=6.68  BV=3.50
    {7240,4096,1024, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=6.68  BV=3.40
    {7760,4096,1024, 0, 0, 0},  //TV = 7.01(194 lines)  AV=2.97  SV=6.68  BV=3.30
    {8280,4096,1024, 0, 0, 0},  //TV = 6.92(207 lines)  AV=2.97  SV=6.68  BV=3.21
    {8320,4352,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.77  BV=3.11
    {8320,4608,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.87  BV=3.01
    {8320,4992,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.97  BV=2.91
    {8320,5376,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.07  BV=2.81
    {8320,5760,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.17  BV=2.71
    {8320,6144,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.26  BV=2.62
    {8320,6528,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.37  BV=2.51
    {8320,7040,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.47  BV=2.41
    {8320,7086,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.57  BV=2.31
    {8320,7086,1176, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.67  BV=2.21
    {16680,4352,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.11
    {16680,4608,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.86  BV=2.02
    {16680,4992,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.97  BV=1.90
    {16680,5376,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.07  BV=1.81
    {16680,5760,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.17  BV=1.71
    {25000,4096,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.69  BV=1.60
    {25000,4352,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.79  BV=1.50
    {25000,4736,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.89  BV=1.41
    {25000,4992,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.99  BV=1.31
    {25000,5376,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.08  BV=1.21
    {33320,4352,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4608,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4992,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.97  BV=0.90
    {41680,4224,1040, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.74  BV=0.81
    {41680,4608,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.85  BV=0.71
    {50000,4096,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.69  BV=0.60
    {50000,4352,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.79  BV=0.50
    {50000,4736,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.89  BV=0.41
    {58320,4352,1024, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=6.77  BV=0.31
    {58320,4608,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=6.86  BV=0.21
    {66680,4352,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.77  BV=0.11
    {75000,4096,1048, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.71  BV=-0.00
    {75000,4480,1024, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.81  BV=-0.10
    {83320,4224,1048, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=6.76  BV=-0.20
    {91680,4224,1024, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=6.72  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {108320,4096,1024, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.68  BV=-0.50
    {108320,4352,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.78  BV=-0.60
    {116680,4352,1024, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=6.77  BV=-0.70
    {133320,4096,1024, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=6.68  BV=-0.80
    {141680,4096,1032, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.69  BV=-0.90
    {150000,4096,1048, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=6.71  BV=-1.00
    {158320,4224,1032, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=6.73  BV=-1.10
    {175000,4096,1032, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=6.69  BV=-1.20
    {183320,4224,1024, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=6.72  BV=-1.30
    {200000,4096,1032, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=6.69  BV=-1.40
    {216640,4096,1024, 0, 0, 0},  //TV = 2.21(5416 lines)  AV=2.97  SV=6.68  BV=-1.50
    {225000,4224,1024, 0, 0, 0},  //TV = 2.15(5625 lines)  AV=2.97  SV=6.72  BV=-1.60
    {241640,4224,1024, 0, 0, 0},  //TV = 2.05(6041 lines)  AV=2.97  SV=6.72  BV=-1.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO400PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1152,1128, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1280,1088, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.09  BV=8.91
    {480,1408,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1664,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1792,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.50  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2176,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {480,2304,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.89  BV=8.10
    {480,2432,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.98  BV=8.01
    {480,2688,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.09  BV=7.90
    {480,2816,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.19  BV=7.80
    {480,3072,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.29  BV=7.71
    {480,3328,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.38  BV=7.62
    {480,3584,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.49  BV=7.51
    {480,3840,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.58  BV=7.41
    {480,4096,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.69  BV=7.31
    {480,4352,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.79  BV=7.21
    {520,4352,1024, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=6.77  BV=7.11
    {560,4352,1024, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=6.77  BV=7.01
    {600,4352,1024, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=6.77  BV=6.91
    {680,4096,1024, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=6.68  BV=6.81
    {720,4096,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=6.70  BV=6.71
    {760,4224,1024, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=6.72  BV=6.61
    {840,4096,1024, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=6.68  BV=6.51
    {880,4096,1048, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=6.71  BV=6.41
    {960,4096,1032, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=6.69  BV=6.31
    {1000,4224,1024, 0, 0, 0},  //TV = 9.97(25 lines)  AV=2.97  SV=6.72  BV=6.21
    {1080,4096,1048, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=6.71  BV=6.11
    {1160,4096,1048, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=6.71  BV=6.01
    {1240,4224,1024, 0, 0, 0},  //TV = 9.66(31 lines)  AV=2.97  SV=6.72  BV=5.90
    {1360,4096,1024, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=6.68  BV=5.81
    {1440,4096,1040, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=6.70  BV=5.71
    {1560,4096,1024, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=6.68  BV=5.62
    {1680,4096,1024, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=6.68  BV=5.51
    {1800,4096,1024, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=6.68  BV=5.41
    {1920,4096,1032, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=6.69  BV=5.31
    {2040,4096,1040, 0, 0, 0},  //TV = 8.94(51 lines)  AV=2.97  SV=6.70  BV=5.21
    {2200,4096,1032, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=6.69  BV=5.11
    {2360,4096,1032, 0, 0, 0},  //TV = 8.73(59 lines)  AV=2.97  SV=6.69  BV=5.01
    {2520,4096,1032, 0, 0, 0},  //TV = 8.63(63 lines)  AV=2.97  SV=6.69  BV=4.91
    {2720,4096,1024, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=6.68  BV=4.81
    {2920,4096,1024, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=6.68  BV=4.71
    {3120,4096,1032, 0, 0, 0},  //TV = 8.32(78 lines)  AV=2.97  SV=6.69  BV=4.61
    {3360,4096,1024, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=6.68  BV=4.51
    {3600,4096,1024, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=6.68  BV=4.41
    {3840,4096,1024, 0, 0, 0},  //TV = 8.02(96 lines)  AV=2.97  SV=6.68  BV=4.32
    {4160,4096,1024, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=6.68  BV=4.20
    {4440,4096,1024, 0, 0, 0},  //TV = 7.82(111 lines)  AV=2.97  SV=6.68  BV=4.11
    {4760,4096,1024, 0, 0, 0},  //TV = 7.71(119 lines)  AV=2.97  SV=6.68  BV=4.01
    {5080,4096,1024, 0, 0, 0},  //TV = 7.62(127 lines)  AV=2.97  SV=6.68  BV=3.91
    {5440,4096,1024, 0, 0, 0},  //TV = 7.52(136 lines)  AV=2.97  SV=6.68  BV=3.81
    {5840,4096,1024, 0, 0, 0},  //TV = 7.42(146 lines)  AV=2.97  SV=6.68  BV=3.71
    {6240,4096,1024, 0, 0, 0},  //TV = 7.32(156 lines)  AV=2.97  SV=6.68  BV=3.62
    {6760,4096,1024, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=6.68  BV=3.50
    {7240,4096,1024, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=6.68  BV=3.40
    {7760,4096,1024, 0, 0, 0},  //TV = 7.01(194 lines)  AV=2.97  SV=6.68  BV=3.30
    {8280,4096,1024, 0, 0, 0},  //TV = 6.92(207 lines)  AV=2.97  SV=6.68  BV=3.21
    {8880,4096,1024, 0, 0, 0},  //TV = 6.82(222 lines)  AV=2.97  SV=6.68  BV=3.11
    {9520,4096,1024, 0, 0, 0},  //TV = 6.71(238 lines)  AV=2.97  SV=6.68  BV=3.01
    {10000,4096,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4480,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4736,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.90  BV=2.72
    {10000,5120,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.00  BV=2.61
    {10000,5504,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.10  BV=2.51
    {10000,5888,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.20  BV=2.41
    {10000,6272,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.30  BV=2.31
    {10000,6784,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.41  BV=2.21
    {10000,7086,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.51  BV=2.10
    {10000,7086,1128, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.61  BV=2.01
    {20000,4096,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.71  BV=1.90
    {20000,4352,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.80  BV=1.82
    {20000,4736,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.91  BV=1.70
    {20000,5120,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.01  BV=1.60
    {20000,5504,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.10  BV=1.51
    {20000,5888,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.21  BV=1.40
    {30000,4224,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4480,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4864,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.93  BV=1.10
    {30000,5120,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {40000,4096,1048, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.71  BV=0.90
    {40000,4480,1024, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.81  BV=0.81
    {40000,4736,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.91  BV=0.70
    {50000,4096,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.69  BV=0.60
    {50000,4352,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.79  BV=0.50
    {50000,4736,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.89  BV=0.41
    {60000,4224,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.72  BV=0.31
    {60000,4480,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.82  BV=0.21
    {70000,4096,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.70  BV=0.11
    {70000,4480,1024, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.81  BV=0.00
    {80000,4096,1048, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.71  BV=-0.10
    {80000,4480,1032, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.82  BV=-0.20
    {90000,4224,1040, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=6.74  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4352,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.50
    {110000,4224,1048, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=6.76  BV=-0.60
    {120000,4224,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.73  BV=-0.70
    {130000,4096,1048, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=6.71  BV=-0.80
    {140000,4096,1048, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=6.71  BV=-0.90
    {150000,4096,1048, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=6.71  BV=-1.00
    {160000,4096,1048, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=6.71  BV=-1.10
    {170000,4224,1024, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=6.72  BV=-1.20
    {180000,4224,1040, 0, 0, 0},  //TV = 2.47(4500 lines)  AV=2.97  SV=6.74  BV=-1.30
    {200000,4096,1032, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=6.69  BV=-1.40
    {210000,4224,1024, 0, 0, 0},  //TV = 2.25(5250 lines)  AV=2.97  SV=6.72  BV=-1.50
    {230000,4096,1032, 0, 0, 0},  //TV = 2.12(5750 lines)  AV=2.97  SV=6.69  BV=-1.60
    {240000,4224,1024, 0, 0, 0},  //TV = 2.06(6000 lines)  AV=2.97  SV=6.72  BV=-1.69
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO400Table =
{
    AETABLE_CAPTURE_ISO400,    //eAETableID
    117,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -17,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_400, //ISO SPEED
    sCaptureISO400PLineTable_60Hz,
    sCaptureISO400PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO800PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1152,1128, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1280,1088, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.09  BV=8.91
    {480,1408,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1664,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1792,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.50  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2176,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {480,2304,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.89  BV=8.10
    {480,2432,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.98  BV=8.01
    {480,2688,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.09  BV=7.90
    {480,2816,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.19  BV=7.80
    {480,3072,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.29  BV=7.71
    {480,3328,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.38  BV=7.62
    {480,3584,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.49  BV=7.51
    {480,3840,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.58  BV=7.41
    {480,4096,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.69  BV=7.31
    {480,4352,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.79  BV=7.21
    {480,4736,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.89  BV=7.11
    {480,4992,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.99  BV=7.01
    {480,5376,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.09  BV=6.90
    {480,5760,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.19  BV=6.80
    {480,6272,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.29  BV=6.70
    {480,6656,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.39  BV=6.61
    {480,7086,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.48  BV=6.52
    {520,7040,1032, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=7.47  BV=6.41
    {560,7040,1024, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.46  BV=6.31
    {560,7086,1088, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.56  BV=6.22
    {640,7040,1032, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=7.47  BV=6.11
    {680,7086,1032, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=7.48  BV=6.01
    {720,7086,1048, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=7.50  BV=5.91
    {760,7086,1064, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=7.52  BV=5.81
    {840,7040,1032, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=7.47  BV=5.72
    {880,7086,1056, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=7.51  BV=5.61
    {960,7086,1040, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=7.49  BV=5.50
    {1040,7040,1032, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=7.47  BV=5.41
    {1080,7086,1056, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=7.51  BV=5.31
    {1160,7086,1056, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=7.51  BV=5.21
    {1280,7040,1032, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=7.47  BV=5.11
    {1360,7086,1032, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=7.48  BV=5.01
    {1440,7086,1048, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=7.50  BV=4.91
    {1560,7086,1032, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=7.48  BV=4.82
    {1680,7086,1032, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=7.48  BV=4.71
    {1800,7040,1040, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=7.48  BV=4.61
    {1920,7086,1040, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=7.49  BV=4.50
    {2080,7040,1032, 0, 0, 0},  //TV = 8.91(52 lines)  AV=2.97  SV=7.47  BV=4.41
    {2200,7086,1040, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=7.49  BV=4.31
    {2400,7040,1032, 0, 0, 0},  //TV = 8.70(60 lines)  AV=2.97  SV=7.47  BV=4.20
    {2560,7040,1032, 0, 0, 0},  //TV = 8.61(64 lines)  AV=2.97  SV=7.47  BV=4.11
    {2720,7086,1032, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=7.48  BV=4.01
    {2920,7040,1040, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=7.48  BV=3.91
    {3160,7040,1032, 0, 0, 0},  //TV = 8.31(79 lines)  AV=2.97  SV=7.47  BV=3.81
    {3360,7040,1040, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=7.48  BV=3.71
    {3600,7040,1040, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=7.48  BV=3.61
    {3880,7040,1032, 0, 0, 0},  //TV = 8.01(97 lines)  AV=2.97  SV=7.47  BV=3.51
    {4160,7040,1032, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=7.47  BV=3.41
    {4480,7040,1032, 0, 0, 0},  //TV = 7.80(112 lines)  AV=2.97  SV=7.47  BV=3.30
    {4800,7040,1024, 0, 0, 0},  //TV = 7.70(120 lines)  AV=2.97  SV=7.46  BV=3.21
    {5120,7040,1032, 0, 0, 0},  //TV = 7.61(128 lines)  AV=2.97  SV=7.47  BV=3.11
    {5480,7040,1032, 0, 0, 0},  //TV = 7.51(137 lines)  AV=2.97  SV=7.47  BV=3.01
    {5880,7040,1032, 0, 0, 0},  //TV = 7.41(147 lines)  AV=2.97  SV=7.47  BV=2.91
    {6280,7040,1032, 0, 0, 0},  //TV = 7.32(157 lines)  AV=2.97  SV=7.47  BV=2.82
    {6760,7040,1032, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=7.47  BV=2.71
    {7240,7040,1032, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=7.47  BV=2.61
    {7800,7040,1032, 0, 0, 0},  //TV = 7.00(195 lines)  AV=2.97  SV=7.47  BV=2.50
    {8320,7040,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.47  BV=2.41
    {8320,7086,1104, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.58  BV=2.30
    {8320,7086,1176, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.67  BV=2.21
    {8320,7086,1264, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.77  BV=2.11
    {8320,7086,1352, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.87  BV=2.01
    {8320,7086,1448, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.97  BV=1.91
    {8320,7086,1552, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.07  BV=1.81
    {8320,7086,1664, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.17  BV=1.71
    {8320,7086,1784, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.27  BV=1.61
    {8320,7086,1912, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.37  BV=1.51
    {16680,7040,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.46  BV=1.42
    {16680,7086,1096, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.57  BV=1.31
    {16680,7086,1168, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.66  BV=1.22
    {16680,7086,1256, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.76  BV=1.11
    {16680,7086,1344, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.86  BV=1.02
    {16680,7086,1440, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.96  BV=0.92
    {25000,7086,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.49  BV=0.80
    {25000,7086,1112, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.59  BV=0.71
    {25000,7086,1192, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.69  BV=0.60
    {25000,7086,1280, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.79  BV=0.50
    {33320,7040,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.47  BV=0.41
    {33320,7086,1104, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.58  BV=0.30
    {33320,7086,1176, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.67  BV=0.21
    {33320,7086,1264, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.77  BV=0.11
    {41680,7086,1088, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=7.56  BV=-0.00
    {41680,7086,1168, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=7.66  BV=-0.10
    {50000,7086,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.49  BV=-0.20
    {50000,7086,1120, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.60  BV=-0.31
    {58320,7040,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=7.47  BV=-0.40
    {58320,7086,1104, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=7.58  BV=-0.51
    {66680,7040,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=7.48  BV=-0.60
    {66680,7086,1104, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=7.58  BV=-0.70
    {75000,7086,1056, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=7.51  BV=-0.81
    {75000,7086,1128, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=7.61  BV=-0.90
    {83320,7086,1088, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=7.56  BV=-1.00
    {91680,7086,1064, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=7.52  BV=-1.11
    {100000,7086,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.49  BV=-1.20
    {108320,7040,1040, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=7.48  BV=-1.30
    {116680,7040,1032, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=7.47  BV=-1.40
    {125000,7040,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.47  BV=-1.50
    {133320,7040,1040, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=7.48  BV=-1.60
    {141680,7086,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=7.49  BV=-1.70
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {158320,7086,1072, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=7.53  BV=-1.90
    {175000,7086,1040, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=7.49  BV=-2.01
    {183320,7086,1064, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=7.52  BV=-2.11
    {200000,7086,1040, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=7.49  BV=-2.20
    {216640,7040,1040, 0, 0, 0},  //TV = 2.21(5416 lines)  AV=2.97  SV=7.48  BV=-2.30
    {233320,7040,1032, 0, 0, 0},  //TV = 2.10(5833 lines)  AV=2.97  SV=7.47  BV=-2.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO800PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1152,1128, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1280,1088, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.09  BV=8.91
    {480,1408,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1664,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1792,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.50  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2176,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {480,2304,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.89  BV=8.10
    {480,2432,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.98  BV=8.01
    {480,2688,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.09  BV=7.90
    {480,2816,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.19  BV=7.80
    {480,3072,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.29  BV=7.71
    {480,3328,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.38  BV=7.62
    {480,3584,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.49  BV=7.51
    {480,3840,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.58  BV=7.41
    {480,4096,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.69  BV=7.31
    {480,4352,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.79  BV=7.21
    {480,4736,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.89  BV=7.11
    {480,4992,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.99  BV=7.01
    {480,5376,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.09  BV=6.90
    {480,5760,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.19  BV=6.80
    {480,6272,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.29  BV=6.70
    {480,6656,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.39  BV=6.61
    {480,7086,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.48  BV=6.52
    {520,7040,1032, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=7.47  BV=6.41
    {560,7040,1024, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.46  BV=6.31
    {560,7086,1088, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.56  BV=6.22
    {640,7040,1032, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=7.47  BV=6.11
    {680,7086,1032, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=7.48  BV=6.01
    {720,7086,1048, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=7.50  BV=5.91
    {760,7086,1064, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=7.52  BV=5.81
    {840,7040,1032, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=7.47  BV=5.72
    {880,7086,1056, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=7.51  BV=5.61
    {960,7086,1040, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=7.49  BV=5.50
    {1040,7040,1032, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=7.47  BV=5.41
    {1080,7086,1056, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=7.51  BV=5.31
    {1160,7086,1056, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=7.51  BV=5.21
    {1280,7040,1032, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=7.47  BV=5.11
    {1360,7086,1032, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=7.48  BV=5.01
    {1440,7086,1048, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=7.50  BV=4.91
    {1560,7086,1032, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=7.48  BV=4.82
    {1680,7086,1032, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=7.48  BV=4.71
    {1800,7040,1040, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=7.48  BV=4.61
    {1920,7086,1040, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=7.49  BV=4.50
    {2080,7040,1032, 0, 0, 0},  //TV = 8.91(52 lines)  AV=2.97  SV=7.47  BV=4.41
    {2200,7086,1040, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=7.49  BV=4.31
    {2400,7040,1032, 0, 0, 0},  //TV = 8.70(60 lines)  AV=2.97  SV=7.47  BV=4.20
    {2560,7040,1032, 0, 0, 0},  //TV = 8.61(64 lines)  AV=2.97  SV=7.47  BV=4.11
    {2720,7086,1032, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=7.48  BV=4.01
    {2920,7040,1040, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=7.48  BV=3.91
    {3160,7040,1032, 0, 0, 0},  //TV = 8.31(79 lines)  AV=2.97  SV=7.47  BV=3.81
    {3360,7040,1040, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=7.48  BV=3.71
    {3600,7040,1040, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=7.48  BV=3.61
    {3880,7040,1032, 0, 0, 0},  //TV = 8.01(97 lines)  AV=2.97  SV=7.47  BV=3.51
    {4160,7040,1032, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=7.47  BV=3.41
    {4480,7040,1032, 0, 0, 0},  //TV = 7.80(112 lines)  AV=2.97  SV=7.47  BV=3.30
    {4800,7040,1024, 0, 0, 0},  //TV = 7.70(120 lines)  AV=2.97  SV=7.46  BV=3.21
    {5120,7040,1032, 0, 0, 0},  //TV = 7.61(128 lines)  AV=2.97  SV=7.47  BV=3.11
    {5480,7040,1032, 0, 0, 0},  //TV = 7.51(137 lines)  AV=2.97  SV=7.47  BV=3.01
    {5880,7040,1032, 0, 0, 0},  //TV = 7.41(147 lines)  AV=2.97  SV=7.47  BV=2.91
    {6280,7040,1032, 0, 0, 0},  //TV = 7.32(157 lines)  AV=2.97  SV=7.47  BV=2.82
    {6760,7040,1032, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=7.47  BV=2.71
    {7240,7040,1032, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=7.47  BV=2.61
    {7800,7040,1032, 0, 0, 0},  //TV = 7.00(195 lines)  AV=2.97  SV=7.47  BV=2.50
    {8360,7040,1032, 0, 0, 0},  //TV = 6.90(209 lines)  AV=2.97  SV=7.47  BV=2.40
    {8960,7040,1032, 0, 0, 0},  //TV = 6.80(224 lines)  AV=2.97  SV=7.47  BV=2.30
    {9600,7040,1024, 0, 0, 0},  //TV = 6.70(240 lines)  AV=2.97  SV=7.46  BV=2.21
    {10000,7086,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.50  BV=2.11
    {10000,7086,1128, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.61  BV=2.01
    {10000,7086,1208, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.71  BV=1.91
    {10000,7086,1288, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.80  BV=1.81
    {10000,7086,1384, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.90  BV=1.71
    {10000,7086,1480, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.00  BV=1.61
    {10000,7086,1592, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.11  BV=1.51
    {10000,7086,1704, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.20  BV=1.41
    {10000,7086,1824, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.30  BV=1.31
    {10000,7086,1960, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.41  BV=1.21
    {20000,7086,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.50  BV=1.11
    {20000,7086,1128, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.61  BV=1.01
    {20000,7086,1208, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.71  BV=0.91
    {20000,7086,1288, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.80  BV=0.81
    {20000,7086,1392, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.91  BV=0.70
    {20000,7086,1488, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=8.01  BV=0.61
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {30000,7086,1224, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.73  BV=0.30
    {30000,7086,1312, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.83  BV=0.20
    {40000,7086,1048, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.50  BV=0.11
    {40000,7086,1136, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.62  BV=-0.00
    {40000,7086,1216, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.72  BV=-0.10
    {50000,7086,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.49  BV=-0.20
    {50000,7086,1120, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.60  BV=-0.31
    {50000,7086,1200, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.70  BV=-0.40
    {60000,7086,1072, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.53  BV=-0.51
    {60000,7086,1144, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.63  BV=-0.60
    {70000,7086,1056, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=7.51  BV=-0.71
    {70000,7086,1128, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=7.61  BV=-0.80
    {80000,7086,1056, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=7.51  BV=-0.90
    {80000,7086,1136, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=7.62  BV=-1.00
    {90000,7086,1080, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=7.55  BV=-1.10
    {100000,7086,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.49  BV=-1.20
    {100000,7086,1120, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.60  BV=-1.31
    {110000,7086,1088, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=7.56  BV=-1.40
    {120000,7086,1072, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.53  BV=-1.51
    {130000,7086,1056, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=7.51  BV=-1.60
    {140000,7086,1056, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.51  BV=-1.71
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {160000,7086,1056, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=7.51  BV=-1.90
    {170000,7086,1064, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=7.52  BV=-2.00
    {190000,7040,1032, 0, 0, 0},  //TV = 2.40(4750 lines)  AV=2.97  SV=7.47  BV=-2.10
    {200000,7086,1040, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=7.49  BV=-2.20
    {210000,7086,1064, 0, 0, 0},  //TV = 2.25(5250 lines)  AV=2.97  SV=7.52  BV=-2.30
    {230000,7086,1040, 0, 0, 0},  //TV = 2.12(5750 lines)  AV=2.97  SV=7.49  BV=-2.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO800Table =
{
    AETABLE_CAPTURE_ISO800,    //eAETableID
    124,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -24,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_800, //ISO SPEED
    sCaptureISO800PLineTable_60Hz,
    sCaptureISO800PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO1600PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1152,1128, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1280,1088, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.09  BV=8.91
    {480,1408,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1664,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1792,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.50  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2176,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {480,2304,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.89  BV=8.10
    {480,2432,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.98  BV=8.01
    {480,2688,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.09  BV=7.90
    {480,2816,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.19  BV=7.80
    {480,3072,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.29  BV=7.71
    {480,3328,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.38  BV=7.62
    {480,3584,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.49  BV=7.51
    {480,3840,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.58  BV=7.41
    {480,4096,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.69  BV=7.31
    {480,4352,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.79  BV=7.21
    {480,4736,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.89  BV=7.11
    {480,4992,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.99  BV=7.01
    {480,5376,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.09  BV=6.90
    {480,5760,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.19  BV=6.80
    {480,6272,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.29  BV=6.70
    {480,6656,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.39  BV=6.61
    {480,7086,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.48  BV=6.52
    {520,7040,1032, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=7.47  BV=6.41
    {560,7040,1024, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.46  BV=6.31
    {560,7086,1088, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.56  BV=6.22
    {640,7040,1032, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=7.47  BV=6.11
    {680,7086,1032, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=7.48  BV=6.01
    {720,7086,1048, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=7.50  BV=5.91
    {760,7086,1064, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=7.52  BV=5.81
    {840,7040,1032, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=7.47  BV=5.72
    {880,7086,1056, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=7.51  BV=5.61
    {960,7086,1040, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=7.49  BV=5.50
    {1040,7040,1032, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=7.47  BV=5.41
    {1080,7086,1056, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=7.51  BV=5.31
    {1160,7086,1056, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=7.51  BV=5.21
    {1280,7040,1032, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=7.47  BV=5.11
    {1360,7086,1032, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=7.48  BV=5.01
    {1440,7086,1048, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=7.50  BV=4.91
    {1560,7086,1032, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=7.48  BV=4.82
    {1680,7086,1032, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=7.48  BV=4.71
    {1800,7040,1040, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=7.48  BV=4.61
    {1920,7086,1040, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=7.49  BV=4.50
    {2080,7040,1032, 0, 0, 0},  //TV = 8.91(52 lines)  AV=2.97  SV=7.47  BV=4.41
    {2200,7086,1040, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=7.49  BV=4.31
    {2400,7040,1032, 0, 0, 0},  //TV = 8.70(60 lines)  AV=2.97  SV=7.47  BV=4.20
    {2560,7040,1032, 0, 0, 0},  //TV = 8.61(64 lines)  AV=2.97  SV=7.47  BV=4.11
    {2720,7086,1032, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=7.48  BV=4.01
    {2920,7040,1040, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=7.48  BV=3.91
    {3160,7040,1032, 0, 0, 0},  //TV = 8.31(79 lines)  AV=2.97  SV=7.47  BV=3.81
    {3360,7040,1040, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=7.48  BV=3.71
    {3600,7040,1040, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=7.48  BV=3.61
    {3880,7040,1032, 0, 0, 0},  //TV = 8.01(97 lines)  AV=2.97  SV=7.47  BV=3.51
    {4160,7040,1032, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=7.47  BV=3.41
    {4480,7040,1032, 0, 0, 0},  //TV = 7.80(112 lines)  AV=2.97  SV=7.47  BV=3.30
    {4800,7040,1024, 0, 0, 0},  //TV = 7.70(120 lines)  AV=2.97  SV=7.46  BV=3.21
    {5120,7040,1032, 0, 0, 0},  //TV = 7.61(128 lines)  AV=2.97  SV=7.47  BV=3.11
    {5480,7040,1032, 0, 0, 0},  //TV = 7.51(137 lines)  AV=2.97  SV=7.47  BV=3.01
    {5880,7040,1032, 0, 0, 0},  //TV = 7.41(147 lines)  AV=2.97  SV=7.47  BV=2.91
    {6280,7040,1032, 0, 0, 0},  //TV = 7.32(157 lines)  AV=2.97  SV=7.47  BV=2.82
    {6760,7040,1032, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=7.47  BV=2.71
    {7240,7040,1032, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=7.47  BV=2.61
    {7800,7040,1032, 0, 0, 0},  //TV = 7.00(195 lines)  AV=2.97  SV=7.47  BV=2.50
    {8320,7040,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.47  BV=2.41
    {8320,7086,1104, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.58  BV=2.30
    {8320,7086,1176, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.67  BV=2.21
    {8320,7086,1264, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.77  BV=2.11
    {8320,7086,1352, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.87  BV=2.01
    {8320,7086,1448, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.97  BV=1.91
    {8320,7086,1552, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.07  BV=1.81
    {8320,7086,1664, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.17  BV=1.71
    {8320,7086,1784, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.27  BV=1.61
    {8320,7086,1912, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.37  BV=1.51
    {16680,7040,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.46  BV=1.42
    {16680,7086,1096, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.57  BV=1.31
    {16680,7086,1168, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.66  BV=1.22
    {16680,7086,1256, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.76  BV=1.11
    {16680,7086,1344, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.86  BV=1.02
    {16680,7086,1440, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.96  BV=0.92
    {25000,7086,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.49  BV=0.80
    {25000,7086,1112, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.59  BV=0.71
    {25000,7086,1192, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.69  BV=0.60
    {25000,7086,1280, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.79  BV=0.50
    {33320,7040,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.47  BV=0.41
    {33320,7086,1104, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.58  BV=0.30
    {33320,7086,1176, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.67  BV=0.21
    {33320,7086,1264, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.77  BV=0.11
    {41680,7086,1088, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=7.56  BV=-0.00
    {41680,7086,1168, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=7.66  BV=-0.10
    {50000,7086,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.49  BV=-0.20
    {50000,7086,1120, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.60  BV=-0.31
    {58320,7040,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=7.47  BV=-0.40
    {58320,7086,1104, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=7.58  BV=-0.51
    {66680,7040,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=7.48  BV=-0.60
    {66680,7086,1104, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=7.58  BV=-0.70
    {75000,7086,1056, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=7.51  BV=-0.81
    {75000,7086,1128, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=7.61  BV=-0.90
    {83320,7086,1088, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=7.56  BV=-1.00
    {91680,7086,1064, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=7.52  BV=-1.11
    {100000,7086,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.49  BV=-1.20
    {108320,7040,1040, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=7.48  BV=-1.30
    {116680,7040,1032, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=7.47  BV=-1.40
    {125000,7040,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.47  BV=-1.50
    {133320,7040,1040, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=7.48  BV=-1.60
    {141680,7086,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=7.49  BV=-1.70
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {158320,7086,1072, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=7.53  BV=-1.90
    {175000,7086,1040, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=7.49  BV=-2.01
    {183320,7086,1064, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=7.52  BV=-2.11
    {200000,7086,1040, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=7.49  BV=-2.20
    {216640,7040,1040, 0, 0, 0},  //TV = 2.21(5416 lines)  AV=2.97  SV=7.48  BV=-2.30
    {233320,7040,1032, 0, 0, 0},  //TV = 2.10(5833 lines)  AV=2.97  SV=7.47  BV=-2.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO1600PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1152,1128, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1280,1088, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.09  BV=8.91
    {480,1408,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1664,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1792,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.50  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2176,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {480,2304,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.89  BV=8.10
    {480,2432,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.98  BV=8.01
    {480,2688,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.09  BV=7.90
    {480,2816,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.19  BV=7.80
    {480,3072,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.29  BV=7.71
    {480,3328,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.38  BV=7.62
    {480,3584,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.49  BV=7.51
    {480,3840,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.58  BV=7.41
    {480,4096,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.69  BV=7.31
    {480,4352,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.79  BV=7.21
    {480,4736,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.89  BV=7.11
    {480,4992,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.99  BV=7.01
    {480,5376,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.09  BV=6.90
    {480,5760,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.19  BV=6.80
    {480,6272,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.29  BV=6.70
    {480,6656,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.39  BV=6.61
    {480,7086,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.48  BV=6.52
    {520,7040,1032, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=7.47  BV=6.41
    {560,7040,1024, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.46  BV=6.31
    {560,7086,1088, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.56  BV=6.22
    {640,7040,1032, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=7.47  BV=6.11
    {680,7086,1032, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=7.48  BV=6.01
    {720,7086,1048, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=7.50  BV=5.91
    {760,7086,1064, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=7.52  BV=5.81
    {840,7040,1032, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=7.47  BV=5.72
    {880,7086,1056, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=7.51  BV=5.61
    {960,7086,1040, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=7.49  BV=5.50
    {1040,7040,1032, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=7.47  BV=5.41
    {1080,7086,1056, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=7.51  BV=5.31
    {1160,7086,1056, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=7.51  BV=5.21
    {1280,7040,1032, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=7.47  BV=5.11
    {1360,7086,1032, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=7.48  BV=5.01
    {1440,7086,1048, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=7.50  BV=4.91
    {1560,7086,1032, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=7.48  BV=4.82
    {1680,7086,1032, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=7.48  BV=4.71
    {1800,7040,1040, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=7.48  BV=4.61
    {1920,7086,1040, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=7.49  BV=4.50
    {2080,7040,1032, 0, 0, 0},  //TV = 8.91(52 lines)  AV=2.97  SV=7.47  BV=4.41
    {2200,7086,1040, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=7.49  BV=4.31
    {2400,7040,1032, 0, 0, 0},  //TV = 8.70(60 lines)  AV=2.97  SV=7.47  BV=4.20
    {2560,7040,1032, 0, 0, 0},  //TV = 8.61(64 lines)  AV=2.97  SV=7.47  BV=4.11
    {2720,7086,1032, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=7.48  BV=4.01
    {2920,7040,1040, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=7.48  BV=3.91
    {3160,7040,1032, 0, 0, 0},  //TV = 8.31(79 lines)  AV=2.97  SV=7.47  BV=3.81
    {3360,7040,1040, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=7.48  BV=3.71
    {3600,7040,1040, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=7.48  BV=3.61
    {3880,7040,1032, 0, 0, 0},  //TV = 8.01(97 lines)  AV=2.97  SV=7.47  BV=3.51
    {4160,7040,1032, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=7.47  BV=3.41
    {4480,7040,1032, 0, 0, 0},  //TV = 7.80(112 lines)  AV=2.97  SV=7.47  BV=3.30
    {4800,7040,1024, 0, 0, 0},  //TV = 7.70(120 lines)  AV=2.97  SV=7.46  BV=3.21
    {5120,7040,1032, 0, 0, 0},  //TV = 7.61(128 lines)  AV=2.97  SV=7.47  BV=3.11
    {5480,7040,1032, 0, 0, 0},  //TV = 7.51(137 lines)  AV=2.97  SV=7.47  BV=3.01
    {5880,7040,1032, 0, 0, 0},  //TV = 7.41(147 lines)  AV=2.97  SV=7.47  BV=2.91
    {6280,7040,1032, 0, 0, 0},  //TV = 7.32(157 lines)  AV=2.97  SV=7.47  BV=2.82
    {6760,7040,1032, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=7.47  BV=2.71
    {7240,7040,1032, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=7.47  BV=2.61
    {7800,7040,1032, 0, 0, 0},  //TV = 7.00(195 lines)  AV=2.97  SV=7.47  BV=2.50
    {8360,7040,1032, 0, 0, 0},  //TV = 6.90(209 lines)  AV=2.97  SV=7.47  BV=2.40
    {8960,7040,1032, 0, 0, 0},  //TV = 6.80(224 lines)  AV=2.97  SV=7.47  BV=2.30
    {9600,7040,1024, 0, 0, 0},  //TV = 6.70(240 lines)  AV=2.97  SV=7.46  BV=2.21
    {10000,7086,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.50  BV=2.11
    {10000,7086,1128, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.61  BV=2.01
    {10000,7086,1208, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.71  BV=1.91
    {10000,7086,1288, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.80  BV=1.81
    {10000,7086,1384, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.90  BV=1.71
    {10000,7086,1480, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.00  BV=1.61
    {10000,7086,1592, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.11  BV=1.51
    {10000,7086,1704, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.20  BV=1.41
    {10000,7086,1824, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.30  BV=1.31
    {10000,7086,1960, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.41  BV=1.21
    {20000,7086,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.50  BV=1.11
    {20000,7086,1128, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.61  BV=1.01
    {20000,7086,1208, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.71  BV=0.91
    {20000,7086,1288, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.80  BV=0.81
    {20000,7086,1392, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.91  BV=0.70
    {20000,7086,1488, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=8.01  BV=0.61
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {30000,7086,1224, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.73  BV=0.30
    {30000,7086,1312, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.83  BV=0.20
    {40000,7086,1048, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.50  BV=0.11
    {40000,7086,1136, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.62  BV=-0.00
    {40000,7086,1216, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.72  BV=-0.10
    {50000,7086,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.49  BV=-0.20
    {50000,7086,1120, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.60  BV=-0.31
    {50000,7086,1200, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.70  BV=-0.40
    {60000,7086,1072, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.53  BV=-0.51
    {60000,7086,1144, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.63  BV=-0.60
    {70000,7086,1056, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=7.51  BV=-0.71
    {70000,7086,1128, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=7.61  BV=-0.80
    {80000,7086,1056, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=7.51  BV=-0.90
    {80000,7086,1136, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=7.62  BV=-1.00
    {90000,7086,1080, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=7.55  BV=-1.10
    {100000,7086,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.49  BV=-1.20
    {100000,7086,1120, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.60  BV=-1.31
    {110000,7086,1088, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=7.56  BV=-1.40
    {120000,7086,1072, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.53  BV=-1.51
    {130000,7086,1056, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=7.51  BV=-1.60
    {140000,7086,1056, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.51  BV=-1.71
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {160000,7086,1056, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=7.51  BV=-1.90
    {170000,7086,1064, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=7.52  BV=-2.00
    {190000,7040,1032, 0, 0, 0},  //TV = 2.40(4750 lines)  AV=2.97  SV=7.47  BV=-2.10
    {200000,7086,1040, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=7.49  BV=-2.20
    {210000,7086,1064, 0, 0, 0},  //TV = 2.25(5250 lines)  AV=2.97  SV=7.52  BV=-2.30
    {230000,7086,1040, 0, 0, 0},  //TV = 2.12(5750 lines)  AV=2.97  SV=7.49  BV=-2.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO1600Table =
{
    AETABLE_CAPTURE_ISO1600,    //eAETableID
    124,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -24,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_1600, //ISO SPEED
    sCaptureISO1600PLineTable_60Hz,
    sCaptureISO1600PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureStrobePLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {25000,1152,1048, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1280,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1280,1088, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.21
    {25000,1408,1056, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1152,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.87  BV=3.01
    {33320,1152,1112, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1280,1072, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {41680,1152,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.85  BV=2.71
    {41680,1152,1096, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.95  BV=2.61
    {41680,1280,1056, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.04  BV=2.51
    {50000,1152,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1152,1128, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.31
    {58320,1152,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.86  BV=2.21
    {58320,1152,1104, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.96  BV=2.11
    {66680,1152,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.86  BV=2.02
    {66680,1152,1112, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.97  BV=1.91
    {66680,1280,1080, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.08  BV=1.80
    {66680,1408,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.16  BV=1.72
    {66680,1536,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.27  BV=1.60
    {66680,1536,1104, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.37  BV=1.51
    {66680,1664,1088, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.47  BV=1.41
    {66680,1792,1088, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.57  BV=1.30
    {66680,2048,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.68  BV=1.20
    {66680,2176,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.77  BV=1.11
    {66680,2304,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.87  BV=1.01
    {66680,2432,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.96  BV=0.92
    {66680,2688,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.07  BV=0.81
    {66680,2816,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.17  BV=0.71
    {66680,3072,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.26  BV=0.61
    {66680,3200,1056, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.37  BV=0.51
    {66680,3456,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.47  BV=0.41
    {66680,3712,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.57  BV=0.31
    {66680,3968,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.67  BV=0.21
    {66680,4352,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.77  BV=0.11
    {75000,4096,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.70  BV=0.01
    {75000,4480,1024, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.81  BV=-0.10
    {83320,4352,1024, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=6.77  BV=-0.21
    {91680,4224,1024, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=6.72  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4352,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.50
    {100000,4736,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.89  BV=-0.59
    {100000,4992,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.99  BV=-0.69
    {100000,5376,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100000,5760,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100000,6272,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.29  BV=-1.00
    {100000,6656,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.39  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureStrobePLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2176,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.80  BV=3.82
    {20000,1152,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.90  BV=3.71
    {20000,1280,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.00  BV=3.61
    {20000,1280,1112, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.12  BV=3.50
    {20000,1408,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.20  BV=3.41
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1664,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.40  BV=3.21
    {30000,1152,1080, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.10
    {30000,1280,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.03  BV=3.00
    {30000,1280,1112, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.12  BV=2.91
    {30000,1408,1088, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.22  BV=2.80
    {40000,1152,1064, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=4.90  BV=2.71
    {40000,1280,1024, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.00  BV=2.61
    {40000,1280,1104, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.11  BV=2.51
    {50000,1152,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1152,1128, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.31
    {50000,1280,1088, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.09  BV=2.21
    {60000,1152,1088, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=4.94  BV=2.09
    {60000,1280,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.02  BV=2.01
    {60000,1280,1112, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.12  BV=1.91
    {60000,1408,1088, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.22  BV=1.80
    {60000,1536,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.32  BV=1.71
    {60000,1664,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.42  BV=1.61
    {60000,1792,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.52  BV=1.51
    {60000,1920,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.62  BV=1.41
    {60000,2048,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2176,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.82  BV=1.21
    {60000,2432,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.93  BV=1.10
    {60000,2560,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.02  BV=1.01
    {60000,2688,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.11  BV=0.91
    {60000,2944,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.22  BV=0.81
    {60000,3200,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.32  BV=0.71
    {60000,3328,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.42  BV=0.61
    {60000,3584,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.52  BV=0.51
    {60000,3840,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.62  BV=0.41
    {60000,4224,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.72  BV=0.31
    {60000,4480,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.82  BV=0.21
    {70000,4096,1032, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.69  BV=0.12
    {70000,4480,1024, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.81  BV=0.00
    {80000,4224,1024, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.72  BV=-0.11
    {80000,4480,1024, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.81  BV=-0.19
    {90000,4224,1040, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=6.74  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4352,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.50
    {100000,4736,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.89  BV=-0.59
    {100000,4992,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.99  BV=-0.69
    {100000,5376,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100000,5760,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100000,6272,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.29  BV=-1.00
    {100000,6656,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.39  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_StrobeTable =
{
    AETABLE_STROBE,    //eAETableID
    111,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -11,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCaptureStrobePLineTable_60Hz,
    sCaptureStrobePLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene1PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {25000,1152,1048, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1280,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1280,1088, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.21
    {25000,1408,1056, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1152,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.87  BV=3.01
    {33320,1152,1112, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1280,1072, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {41680,1152,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.85  BV=2.71
    {41680,1152,1096, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.95  BV=2.61
    {41680,1280,1056, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.04  BV=2.51
    {50000,1152,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1152,1128, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.31
    {58320,1152,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.86  BV=2.21
    {58320,1152,1104, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.96  BV=2.11
    {66680,1152,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.86  BV=2.02
    {66680,1152,1112, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.97  BV=1.91
    {66680,1280,1080, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.08  BV=1.80
    {66680,1408,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.16  BV=1.72
    {66680,1536,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.27  BV=1.60
    {66680,1536,1104, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.37  BV=1.51
    {66680,1664,1088, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.47  BV=1.41
    {66680,1792,1088, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.57  BV=1.30
    {66680,2048,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.68  BV=1.20
    {66680,2176,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.77  BV=1.11
    {66680,2304,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.87  BV=1.01
    {66680,2432,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.96  BV=0.92
    {66680,2688,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.07  BV=0.81
    {66680,2816,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.17  BV=0.71
    {66680,3072,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.27  BV=0.60
    {66680,3200,1056, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.37  BV=0.51
    {75000,3072,1048, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.30  BV=0.41
    {75000,3328,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.40  BV=0.31
    {83320,3200,1040, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=6.34  BV=0.21
    {91680,3072,1056, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=6.31  BV=0.11
    {100000,3072,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.30  BV=-0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3584,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.50  BV=-0.20
    {100000,3840,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.60  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {108320,4096,1024, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.68  BV=-0.50
    {108320,4352,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.78  BV=-0.60
    {116680,4352,1024, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=6.77  BV=-0.70
    {125000,4352,1024, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=6.77  BV=-0.79
    {125000,4608,1040, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=6.87  BV=-0.90
    {125000,4992,1024, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=6.96  BV=-0.99
    {125000,5376,1024, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.07  BV=-1.10
    {125000,5760,1024, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.17  BV=-1.20
    {125000,6144,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.27  BV=-1.30
    {125000,6656,1024, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.38  BV=-1.41
    {125000,7040,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.47  BV=-1.50
    {133320,7086,1032, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=7.48  BV=-1.60
    {141680,7086,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=7.49  BV=-1.70
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {158320,7086,1072, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=7.53  BV=-1.90
    {175000,7086,1040, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=7.49  BV=-2.01
    {183320,7086,1064, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=7.52  BV=-2.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene1PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2176,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.80  BV=3.82
    {20000,1152,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.90  BV=3.71
    {20000,1280,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.00  BV=3.61
    {20000,1280,1112, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.12  BV=3.50
    {20000,1408,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.20  BV=3.41
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1664,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.40  BV=3.21
    {30000,1152,1080, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.10
    {30000,1280,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.02  BV=3.01
    {30000,1280,1112, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.12  BV=2.91
    {30000,1408,1088, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.22  BV=2.80
    {40000,1152,1064, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=4.90  BV=2.71
    {40000,1280,1032, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.01  BV=2.60
    {40000,1280,1104, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.11  BV=2.51
    {50000,1152,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1152,1128, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.31
    {50000,1280,1088, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.09  BV=2.21
    {60000,1152,1080, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=4.92  BV=2.10
    {60000,1280,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.02  BV=2.01
    {60000,1280,1112, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.12  BV=1.91
    {60000,1408,1088, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.22  BV=1.80
    {60000,1536,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.32  BV=1.71
    {60000,1664,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.42  BV=1.61
    {60000,1792,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.52  BV=1.51
    {60000,1920,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.62  BV=1.41
    {60000,2048,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2176,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.82  BV=1.21
    {60000,2432,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.93  BV=1.10
    {60000,2560,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.02  BV=1.01
    {60000,2688,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.11  BV=0.91
    {60000,2944,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.22  BV=0.81
    {60000,3200,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.32  BV=0.71
    {60000,3328,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.42  BV=0.61
    {70000,3072,1048, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.30  BV=0.51
    {70000,3328,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.40  BV=0.41
    {80000,3072,1056, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.31  BV=0.31
    {80000,3328,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.40  BV=0.21
    {90000,3200,1032, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=6.33  BV=0.11
    {100000,3072,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.30  BV=-0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3584,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.50  BV=-0.20
    {100000,3840,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.60  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4352,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.50
    {110000,4224,1048, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=6.76  BV=-0.60
    {120000,4224,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.73  BV=-0.70
    {120000,4480,1040, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.83  BV=-0.80
    {120000,4864,1024, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.93  BV=-0.90
    {120000,5120,1040, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.02  BV=-0.99
    {120000,5504,1040, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.13  BV=-1.10
    {120000,6016,1024, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.23  BV=-1.20
    {120000,6400,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.33  BV=-1.30
    {120000,6912,1024, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.43  BV=-1.40
    {120000,7086,1072, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.53  BV=-1.51
    {130000,7086,1056, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=7.51  BV=-1.60
    {140000,7086,1056, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.51  BV=-1.71
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {160000,7086,1056, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=7.51  BV=-1.90
    {170000,7086,1072, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=7.53  BV=-2.01
    {190000,7040,1032, 0, 0, 0},  //TV = 2.40(4750 lines)  AV=2.97  SV=7.47  BV=-2.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable1 =
{
    AETABLE_SCENE_INDEX1,    //eAETableID
    121,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -21,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene1PLineTable_60Hz,
    sAEScene1PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene2PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1536,1104, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.37  BV=4.51
    {8320,1664,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.47  BV=4.41
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,1920,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.67  BV=4.21
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1080, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.08  BV=3.80
    {16680,1408,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {25000,1152,1048, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1152,1128, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.99  BV=3.31
    {25000,1280,1088, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.21
    {25000,1408,1056, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1152,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.87  BV=3.01
    {33320,1152,1112, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1280,1072, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {33320,1408,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.16  BV=2.72
    {33320,1536,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.27  BV=2.60
    {33320,1536,1104, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.37  BV=2.51
    {33320,1664,1096, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.48  BV=2.40
    {33320,1792,1088, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.57  BV=2.31
    {33320,2048,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.68  BV=2.20
    {33320,2176,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.77  BV=2.11
    {33320,2304,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.87  BV=2.01
    {33320,2432,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.97  BV=1.91
    {33320,2688,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.07  BV=1.81
    {33320,2816,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.17  BV=1.71
    {33320,3072,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.26  BV=1.62
    {33320,3328,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.38  BV=1.50
    {33320,3456,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.47  BV=1.41
    {33320,3712,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.57  BV=1.31
    {33320,3968,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.67  BV=1.21
    {33320,4352,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4608,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4992,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.97  BV=0.90
    {33320,5376,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.07  BV=0.81
    {33320,5760,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.17  BV=0.71
    {33320,6144,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.27  BV=0.60
    {33320,6528,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.37  BV=0.51
    {33320,7040,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.46  BV=0.42
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene2PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.40  BV=4.21
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2176,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.80
    {20000,1152,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.90  BV=3.71
    {20000,1280,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.00  BV=3.61
    {20000,1280,1104, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.11  BV=3.51
    {20000,1408,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.20  BV=3.41
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1664,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.41  BV=3.20
    {30000,1152,1080, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.10
    {30000,1280,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.02  BV=3.01
    {30000,1280,1112, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.12  BV=2.91
    {30000,1408,1088, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.22  BV=2.80
    {30000,1536,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.32  BV=2.71
    {30000,1664,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.42  BV=2.61
    {30000,1792,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.52  BV=2.51
    {30000,1920,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.62  BV=2.41
    {30000,2048,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.72  BV=2.31
    {30000,2176,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.82  BV=2.21
    {30000,2432,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.93  BV=2.10
    {30000,2560,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.02  BV=2.01
    {30000,2688,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.11  BV=1.91
    {30000,2944,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.22  BV=1.81
    {30000,3200,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.32  BV=1.71
    {30000,3328,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3584,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3840,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.62  BV=1.41
    {30000,4224,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4480,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4736,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.92  BV=1.11
    {30000,5120,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.01  BV=1.02
    {30000,5504,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.13  BV=0.90
    {30000,5888,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.22  BV=0.81
    {30000,6400,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6784,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.42  BV=0.61
    {30000,7086,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.51  BV=0.52
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable2 =
{
    AETABLE_SCENE_INDEX2,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene2PLineTable_60Hz,
    sAEScene2PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene3PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {25000,1152,1048, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1280,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1280,1088, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.21
    {25000,1408,1056, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1152,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.87  BV=3.01
    {33320,1152,1112, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1280,1072, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {33320,1408,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.16  BV=2.72
    {33320,1536,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.27  BV=2.60
    {33320,1536,1104, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.37  BV=2.51
    {33320,1664,1096, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.48  BV=2.40
    {33320,1792,1088, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.57  BV=2.31
    {33320,2048,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.68  BV=2.20
    {33320,2176,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.77  BV=2.11
    {33320,2304,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.87  BV=2.01
    {33320,2432,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.97  BV=1.91
    {41680,2048,1080, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.75  BV=1.80
    {41680,2304,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.85  BV=1.71
    {50000,2048,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.68  BV=1.61
    {50000,2176,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.79  BV=1.50
    {50000,2304,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.89  BV=1.40
    {58320,2176,1024, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=5.77  BV=1.31
    {58320,2304,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=5.86  BV=1.21
    {66680,2176,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.77  BV=1.11
    {66680,2304,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.87  BV=1.01
    {66680,2432,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.96  BV=0.92
    {66680,2688,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.07  BV=0.81
    {66680,2816,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.17  BV=0.71
    {66680,3072,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.26  BV=0.61
    {66680,3200,1056, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.37  BV=0.51
    {66680,3456,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.47  BV=0.41
    {66680,3712,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.57  BV=0.31
    {66680,3968,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.67  BV=0.21
    {66680,4352,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.77  BV=0.11
    {75000,4096,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.70  BV=0.01
    {75000,4480,1024, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.81  BV=-0.10
    {83320,4352,1024, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=6.77  BV=-0.21
    {91680,4224,1024, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=6.72  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4352,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.50
    {100000,4736,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.89  BV=-0.59
    {100000,4992,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.99  BV=-0.69
    {100000,5376,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100000,5760,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100000,6272,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.29  BV=-1.00
    {100000,6656,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.39  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene3PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2176,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.80  BV=3.82
    {20000,1152,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.90  BV=3.71
    {20000,1280,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.00  BV=3.61
    {20000,1280,1112, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.12  BV=3.50
    {20000,1408,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.20  BV=3.41
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1664,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.40  BV=3.21
    {30000,1152,1080, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.10
    {30000,1280,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.02  BV=3.01
    {30000,1280,1112, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.12  BV=2.91
    {30000,1408,1088, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.22  BV=2.80
    {30000,1536,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.32  BV=2.71
    {30000,1664,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.42  BV=2.61
    {30000,1792,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.52  BV=2.51
    {30000,1920,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.62  BV=2.41
    {30000,2048,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.72  BV=2.31
    {30000,2176,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.82  BV=2.21
    {30000,2304,1072, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.91  BV=2.12
    {30000,2560,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.02  BV=2.01
    {40000,2048,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.70  BV=1.91
    {40000,2176,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.81  BV=1.80
    {40000,2304,1072, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.91  BV=1.70
    {50000,2048,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.68  BV=1.61
    {50000,2176,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.79  BV=1.50
    {50000,2304,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.89  BV=1.40
    {60000,2048,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2176,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.82  BV=1.21
    {60000,2432,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.93  BV=1.10
    {60000,2560,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.02  BV=1.01
    {60000,2688,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.11  BV=0.91
    {60000,2944,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.22  BV=0.81
    {60000,3200,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.32  BV=0.71
    {60000,3328,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.42  BV=0.61
    {60000,3584,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.52  BV=0.51
    {60000,3840,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.63  BV=0.40
    {60000,4224,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.72  BV=0.31
    {60000,4480,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.82  BV=0.21
    {70000,4096,1032, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.69  BV=0.12
    {70000,4480,1024, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.81  BV=0.00
    {80000,4224,1024, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.72  BV=-0.11
    {80000,4480,1024, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.81  BV=-0.19
    {90000,4224,1040, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=6.74  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4352,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.50
    {100000,4736,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.89  BV=-0.59
    {100000,4992,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.99  BV=-0.69
    {100000,5376,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100000,5760,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100000,6272,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.29  BV=-1.00
    {100000,6656,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.39  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable3 =
{
    AETABLE_SCENE_INDEX3,    //eAETableID
    111,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -11,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene3PLineTable_60Hz,
    sAEScene3PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene4PLineTable_60Hz =
{
{
    {250000,1664,1048, 0, 0, 0},  //TV = 2.00(6250 lines)  AV=2.97  SV=5.41  BV=-0.44
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene4PLineTable_50Hz =
{
{
    {250000,1664,1048, 0, 0, 0},  //TV = 2.00(6250 lines)  AV=2.97  SV=5.41  BV=-0.44
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable4 =
{
    AETABLE_SCENE_INDEX4,    //eAETableID
    1,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    -4,    //i4MaxBV
    -4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene4PLineTable_60Hz,
    sAEScene4PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene5PLineTable_60Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1152,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1152,1112, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1280,1072, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1408,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1664,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1664,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1792,1088, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2048,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2176,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1152,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1152,1112, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1280,1072, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.81
    {16680,1408,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.16  BV=3.72
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1536,1104, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.37  BV=3.51
    {25000,1152,1048, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1280,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1280,1088, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.21
    {25000,1408,1056, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1152,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.87  BV=3.01
    {33320,1152,1112, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1280,1072, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {41680,1152,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.85  BV=2.71
    {41680,1152,1096, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.95  BV=2.61
    {41680,1280,1056, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.04  BV=2.51
    {41680,1408,1032, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.15  BV=2.41
    {41680,1408,1104, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.25  BV=2.31
    {41680,1536,1088, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.35  BV=2.20
    {41680,1664,1072, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.44  BV=2.11
    {41680,1792,1064, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.54  BV=2.01
    {41680,1920,1064, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.64  BV=1.92
    {41680,2048,1080, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.75  BV=1.80
    {41680,2304,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.85  BV=1.71
    {41680,2432,1040, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.95  BV=1.61
    {41680,2560,1064, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.06  BV=1.50
    {41680,2816,1032, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.15  BV=1.41
    {41680,2944,1056, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.25  BV=1.31
    {41680,3200,1040, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.34  BV=1.21
    {41680,3456,1032, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.44  BV=1.11
    {41680,3712,1032, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.55  BV=1.01
    {41680,3968,1032, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.64  BV=0.91
    {41680,4224,1040, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.74  BV=0.81
    {41680,4608,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.85  BV=0.71
    {50000,4096,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.68  BV=0.61
    {50000,4352,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.78  BV=0.52
    {50000,4608,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.88  BV=0.41
    {58320,4224,1048, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=6.76  BV=0.31
    {58320,4608,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=6.86  BV=0.21
    {66680,4352,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.77  BV=0.11
    {75000,4096,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.70  BV=0.01
    {75000,4480,1024, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.81  BV=-0.10
    {83320,4224,1048, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=6.76  BV=-0.20
    {91680,4096,1048, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=6.71  BV=-0.29
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4352,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.50
    {100000,4736,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.89  BV=-0.59
    {100000,4992,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.99  BV=-0.69
    {100000,5376,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100000,5760,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100000,6272,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.29  BV=-1.00
    {100000,6656,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.39  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene5PLineTable_50Hz =
{
{
    {280,1152,1032, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.86  BV=9.91
    {280,1152,1104, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.96  BV=9.82
    {320,1152,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.87  BV=9.71
    {320,1152,1112, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1152,1064, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.90  BV=9.51
    {400,1152,1024, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.85  BV=9.41
    {400,1152,1104, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.96  BV=9.30
    {440,1152,1072, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.91  BV=9.21
    {480,1152,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1152,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.87  BV=9.01
    {560,1152,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.86  BV=8.91
    {600,1152,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.86  BV=8.81
    {640,1152,1040, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.87  BV=8.71
    {680,1152,1048, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1152,1064, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.90  BV=8.51
    {800,1152,1024, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.85  BV=8.41
    {840,1152,1048, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1152,1024, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1152,1048, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1152,1040, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.87  BV=8.01
    {1120,1152,1032, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.86  BV=7.91
    {1200,1152,1032, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.86  BV=7.81
    {1280,1152,1040, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.87  BV=7.71
    {1400,1152,1024, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1152,1032, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.86  BV=7.51
    {1600,1152,1024, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.85  BV=7.41
    {1720,1152,1024, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.31
    {1840,1152,1024, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1152,1024, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.85  BV=7.12
    {2120,1152,1024, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1152,1024, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1152,1024, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1152,1024, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.85  BV=6.71
    {2800,1152,1024, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1152,1024, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1024,1144, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1152,1024, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.31
    {3680,1152,1024, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1152,1024, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1152,1024, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1024,1144, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1024,1144, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1152,1024, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1024,1144, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1024,1144, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1152,1024, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1024,1144, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1152,1024, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1152,1024, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1152,1024, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1024,1144, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1024,1144, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1152,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.90  BV=4.71
    {10000,1280,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.00  BV=4.61
    {10000,1280,1104, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.51
    {10000,1408,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.20  BV=4.41
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1664,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.20
    {10000,1792,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2176,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.80  BV=3.82
    {20000,1152,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.90  BV=3.71
    {20000,1280,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.00  BV=3.61
    {20000,1280,1112, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.12  BV=3.50
    {20000,1408,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.20  BV=3.41
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1664,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.40  BV=3.21
    {30000,1152,1080, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.10
    {30000,1280,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.03  BV=3.00
    {30000,1280,1112, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.12  BV=2.91
    {30000,1408,1088, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.22  BV=2.80
    {40000,1152,1064, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=4.90  BV=2.71
    {40000,1280,1024, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.00  BV=2.61
    {40000,1280,1104, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.11  BV=2.51
    {40000,1408,1072, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.20  BV=2.41
    {40000,1536,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.31  BV=2.31
    {40000,1664,1048, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.41  BV=2.20
    {40000,1792,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.51  BV=2.11
    {40000,1920,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.61  BV=2.01
    {40000,2048,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.70  BV=1.91
    {40000,2176,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.81  BV=1.80
    {40000,2304,1064, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.90  BV=1.71
    {40000,2560,1024, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.00  BV=1.61
    {40000,2688,1048, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.10  BV=1.51
    {40000,2944,1032, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.21  BV=1.40
    {40000,3072,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.31  BV=1.31
    {40000,3328,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.40  BV=1.21
    {40000,3584,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.51  BV=1.11
    {40000,3840,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.61  BV=1.01
    {40000,4096,1048, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.71  BV=0.90
    {40000,4480,1024, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.81  BV=0.81
    {40000,4736,1032, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.90  BV=0.72
    {50000,4096,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.68  BV=0.61
    {50000,4352,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.78  BV=0.52
    {50000,4608,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.88  BV=0.41
    {60000,4224,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.72  BV=0.31
    {60000,4480,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.82  BV=0.21
    {70000,4096,1032, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.69  BV=0.12
    {70000,4480,1024, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.81  BV=0.00
    {80000,4096,1048, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.71  BV=-0.10
    {80000,4480,1024, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.81  BV=-0.19
    {90000,4224,1040, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=6.74  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4352,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.50
    {100000,4736,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.89  BV=-0.59
    {100000,4992,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.99  BV=-0.69
    {100000,5376,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100000,5760,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100000,6272,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.29  BV=-1.00
    {100000,6656,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.39  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable5 =
{
    AETABLE_SCENE_INDEX5,    //eAETableID
    111,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -11,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene5PLineTable_60Hz,
    sAEScene5PLineTable_50Hz,
    NULL,
};

static strEvPline sAESceneReservePLineTable =
{
{
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};
static strAETable g_AE_ReserveSceneTable =
{
	AETABLE_SCENE_MAX,    //eAETableID
	0,    //u4TotalIndex
	20,    //u4StrobeTrigerBV
	0,    //i4MaxBV
	0,    //i4MinBV
	90,    //i4EffectiveMaxBV
	0,      //i4EffectiveMinBV
	LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
	sAESceneReservePLineTable,
	sAESceneReservePLineTable,
	NULL,
};
static strAESceneMapping g_AEScenePLineMapping = 
{
{
    {LIB3A_AE_SCENE_AUTO, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX5}},
    {LIB3A_AE_SCENE_NIGHT, {AETABLE_SCENE_INDEX1, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ACTION, {AETABLE_SCENE_INDEX2, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_BEACH, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_CANDLELIGHT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_FIREWORKS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX4, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX4}},
    {LIB3A_AE_SCENE_LANDSCAPE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_NIGHT_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_PARTY, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_SNOW, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_SPORTS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_STEADYPHOTO, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_SUNSET, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_THEATRE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ISO_ANTI_SHAKE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_ISO100, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO100, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO100}},
    {LIB3A_AE_SCENE_ISO200, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO200, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO200}},
    {LIB3A_AE_SCENE_ISO400, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO400, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO400}},
    {LIB3A_AE_SCENE_ISO800, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO800, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO800}},
    {LIB3A_AE_SCENE_ISO1600 , {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO1600, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO1600}},
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
},
};

static strAEPLineTable g_strAEPlineTable =
{
{
// PLINE Table
g_AE_PreviewAutoTable,
g_AE_CaptureAutoTable,
g_AE_VideoAutoTable,
g_AE_Video1AutoTable,
g_AE_Video2AutoTable,
g_AE_Custom1AutoTable,
g_AE_Custom2AutoTable,
g_AE_Custom3AutoTable,
g_AE_Custom4AutoTable,
g_AE_Custom5AutoTable,
g_AE_VideoNightTable,
g_AE_CaptureISO100Table,
g_AE_CaptureISO200Table,
g_AE_CaptureISO400Table,
g_AE_CaptureISO800Table,
g_AE_CaptureISO1600Table,
g_AE_StrobeTable,
g_AE_SceneTable1,
g_AE_SceneTable2,
g_AE_SceneTable3,
g_AE_SceneTable4,
g_AE_SceneTable5,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
},
};

static strAEPLineNumInfo g_strAEPreviewAutoPLineInfo =
{
    AETABLE_RPEVIEW_AUTO,
    90,
    -10,
    {
        {1,3500,30,1144,1144},
        {2,30,15,1144,1144},
        {3,15,15,1144,2048},
        {4,15,10,2048,2048},
        {5,10,10,2048,4096},
        {6,10,7,4096,4096},
        {7,7,7,4096,5120},
        {8,7,5,5120,5120},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureAutoPLineInfo =
{
    AETABLE_CAPTURE_AUTO,
    90,
    0,
    {
        {1,3500,30,1144,1144},
        {2,30,15,1144,1144},
        {3,15,15,1144,2048},
        {4,15,10,2048,2048},
        {5,10,10,2048,4096},
        {6,10,7,4096,4096},
        {7,7,7,4096,5120},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoAutoPLineInfo =
{
    AETABLE_VIDEO_AUTO,
    90,
    0,
    {
        {1,3500,30,1144,1144},
        {2,30,30,1144,2048},
        {3,30,20,2048,2048},
        {4,20,20,2048,4096},
        {5,20,15,4096,4096},
        {6,15,15,4096,7086},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo1AutoPLineInfo =
{
    AETABLE_VIDEO1_AUTO,
    90,
    0,
    {
        {1,3500,120,1144,1144},
        {2,120,120,1144,7086},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo2AutoPLineInfo =
{
    AETABLE_VIDEO2_AUTO,
    90,
    0,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom1AutoPLineInfo =
{
    AETABLE_CUSTOM1_AUTO,
    90,
    0,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom2AutoPLineInfo =
{
    AETABLE_CUSTOM2_AUTO,
    90,
    0,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom3AutoPLineInfo =
{
    AETABLE_CUSTOM3_AUTO,
    90,
    0,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom4AutoPLineInfo =
{
    AETABLE_CUSTOM4_AUTO,
    90,
    0,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom5AutoPLineInfo =
{
    AETABLE_CUSTOM5_AUTO,
    90,
    0,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoNightPLineInfo =
{
    AETABLE_VIDEO_NIGHT,
    90,
    -10,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,30,10,7086,7086},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO100PLineInfo =
{
    AETABLE_CAPTURE_ISO100,
    90,
    0,
    {
        {1,3500,4,1144,1144},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO200PLineInfo =
{
    AETABLE_CAPTURE_ISO200,
    90,
    0,
    {
        {1,3500,2000,1144,1144},
        {2,2000,2000,1144,2048},
        {3,2000,4,2048,2048},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO400PLineInfo =
{
    AETABLE_CAPTURE_ISO400,
    90,
    0,
    {
        {1,3500,2000,1144,1144},
        {2,2000,2000,1144,4096},
        {3,2000,4,4096,4096},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO800PLineInfo =
{
    AETABLE_CAPTURE_ISO800,
    90,
    0,
    {
        {1,3500,2000,1144,1144},
        {2,2000,2000,1144,7086},
        {3,2000,4,7086,7086},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO1600PLineInfo =
{
    AETABLE_CAPTURE_ISO1600,
    90,
    0,
    {
        {1,3500,2000,1144,1144},
        {2,2000,2000,1144,7086},
        {3,2000,4,7086,7086},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEStrobePLineInfo =
{
    AETABLE_STROBE,
    90,
    0,
    {
        {1,3500,15,1144,1144},
        {2,15,15,1144,4096},
        {3,15,10,4096,4096},
        {4,10,10,4096,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene1PLineInfo =
{
    AETABLE_SCENE_INDEX1,
    90,
    -10,
    {
        {1,3500,30,1144,1144},
        {2,30,15,1144,1144},
        {3,15,15,1144,3072},
        {4,15,10,3072,3072},
        {5,10,10,3072,4096},
        {6,10,8,4096,4096},
        {7,8,8,4096,7086},
        {8,8,5,7086,7086},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene2PLineInfo =
{
    AETABLE_SCENE_INDEX2,
    90,
    0,
    {
        {1,3500,100,1144,1144},
        {2,100,30,1144,1144},
        {3,30,30,1144,7086},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene3PLineInfo =
{
    AETABLE_SCENE_INDEX3,
    90,
    0,
    {
        {1,3500,30,1144,1144},
        {2,30,30,1144,2048},
        {3,30,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,7086},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene4PLineInfo =
{
    AETABLE_SCENE_INDEX4,
    90,
    0,
    {
        {1,4,4,1706,1706},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene5PLineInfo =
{
    AETABLE_SCENE_INDEX5,
    90,
    0,
    {
        {1,3500,24,1144,1144},
        {2,24,24,1144,4096},
        {3,24,10,4096,4096},
        {4,10,10,4096,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};





























static strAEPLineNumInfo g_strAENoScenePLineInfo =
{
    AETABLE_SCENE_MAX,
    90,
    0,
    {
        {1,0,0,0,0},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};
static strAEPLineInfomation g_strAEPlineInfo =
{
MTRUE,   // FALSE mean the sampling
{
// PLINE Info
g_strAEPreviewAutoPLineInfo,
g_strAECaptureAutoPLineInfo,
g_strAEVideoAutoPLineInfo,
g_strAEVideo1AutoPLineInfo,
g_strAEVideo2AutoPLineInfo,
g_strAECustom1AutoPLineInfo,
g_strAECustom2AutoPLineInfo,
g_strAECustom3AutoPLineInfo,
g_strAECustom4AutoPLineInfo,
g_strAECustom5AutoPLineInfo,
g_strAEVideoNightPLineInfo,
g_strAECaptureISO100PLineInfo,
g_strAECaptureISO200PLineInfo,
g_strAECaptureISO400PLineInfo,
g_strAECaptureISO800PLineInfo,
g_strAECaptureISO1600PLineInfo,
g_strAEStrobePLineInfo,
g_strAEScene1PLineInfo,
g_strAEScene2PLineInfo,
g_strAEScene3PLineInfo,
g_strAEScene4PLineInfo,
g_strAEScene5PLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
},
};

static strAEPLineGainList g_strAEGainList =
{
0,
{
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
}
};

static AE_PLINETABLE_T g_PlineTableMapping =
{
g_AEScenePLineMapping,
g_strAEPlineTable,
g_strAEPlineInfo,
g_strAEGainList
};
#endif


#if 0 //Save the P-line info to file for debug
MinGain,1144 
MaxGain,7086 
MiniISOGain,80 
GainStepUnitInTotalRange,128 
PreviewExposureLineUnit,40000 
PreviewMaxFrameRate,30 
VideoExposureLineUnit,40000 
VideoMaxFrameRate,30 
VideoToPreviewSensitivityRatio,1024 
CaptureExposureLineUnit,40000 
CaptureMaxFrameRate,30 
CaptureToPreviewSensitivityRatio,1024 
Video1ExposureLineUnit,40000 
Video1MaxFrameRate,30 
Video1ToPreviewSensitivityRatio,1024 
Video2ExposureLineUnit,40000 
Video2MaxFrameRate,30 
Video2ToPreviewSensitivityRatio,1024 
Custom1ExposureLineUnit,40000 
Custom1MaxFrameRate,30 
Custom1ToPreviewSensitivityRatio,1024 
Custom2ExposureLineUnit,40000 
Custom2MaxFrameRate,30 
Custom2ToPreviewSensitivityRatio,1024 
Custom3ExposureLineUnit,40000 
Custom3MaxFrameRate,30 
Custom3ToPreviewSensitivityRatio,1024 
Custom4ExposureLineUnit,40000 
Custom4MaxFrameRate,30 
Custom4ToPreviewSensitivityRatio,1024 
Custom5ExposureLineUnit,40000 
Custom5MaxFrameRate,30 
Custom5ToPreviewSensitivityRatio,1024 
FocusLength,350 
Fno,28 

// Preview table -- Use preview sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_RPEVIEW_AUTO
90,-10
1,3500,30,1144,1144
2,30,15,1144,1144
3,15,15,1144,2048
4,15,10,2048,2048
5,10,10,2048,4096
6,10,7,4096,4096
7,7,7,4096,5120
8,7,5,5120,5120
AETABLE_END

// Capture table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_AUTO
90,0
1,3500,30,1144,1144
2,30,15,1144,1144
3,15,15,1144,2048
4,15,10,2048,2048
5,10,10,2048,4096
6,10,7,4096,4096
7,7,7,4096,5120
AETABLE_END

// Video table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_AUTO
90,0
1,3500,30,1144,1144
2,30,30,1144,2048
3,30,20,2048,2048
4,20,20,2048,4096
5,20,15,4096,4096
6,15,15,4096,7086
AETABLE_END

// Video1 table -- Use Video1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO1_AUTO
90,0
1,3500,120,1144,1144
2,120,120,1144,7086
AETABLE_END

// Video2 table -- Use Video2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO2_AUTO
90,0
1,3500,60,1144,1144
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom1 table -- Use Custom1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM1_AUTO
90,0
1,3500,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom2 table -- Use Custom2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM2_AUTO
90,0
1,3500,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom3 table -- Use Custom3 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM3_AUTO
90,0
1,3500,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom4 table -- Use Custom4 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM4_AUTO
90,0
1,3500,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom5 table -- Use Custom5 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM5_AUTO
90,0
1,3500,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Video Night table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_NIGHT
90,-10
1,3500,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
5,30,10,7086,7086
AETABLE_END

// Capture ISO100 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO100
90,0
1,3500,4,1144,1144
AETABLE_END

// Capture ISO200 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO200
90,0
1,3500,2000,1144,1144
2,2000,2000,1144,2048
3,2000,4,2048,2048
AETABLE_END

// Capture ISO400 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO400
90,0
1,3500,2000,1144,1144
2,2000,2000,1144,4096
3,2000,4,4096,4096
AETABLE_END

// Capture ISO800 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO800
90,0
1,3500,2000,1144,1144
2,2000,2000,1144,7086
3,2000,4,7086,7086
AETABLE_END

// Capture ISO1600 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO1600
90,0
1,3500,2000,1144,1144
2,2000,2000,1144,7086
3,2000,4,7086,7086
AETABLE_END

// Strobe table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_STROBE
90,0
1,3500,15,1144,1144
2,15,15,1144,4096
3,15,10,4096,4096
4,10,10,4096,7086
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX1
90,-10
1,3500,30,1144,1144
2,30,15,1144,1144
3,15,15,1144,3072
4,15,10,3072,3072
5,10,10,3072,4096
6,10,8,4096,4096
7,8,8,4096,7086
8,8,5,7086,7086
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX2
90,0
1,3500,100,1144,1144
2,100,30,1144,1144
3,30,30,1144,7086
AETABLE_END

// Table1 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX3
90,0
1,3500,30,1144,1144
2,30,30,1144,2048
3,30,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,7086
AETABLE_END

// Table2 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX4
90,0
1,4,4,1706,1706
AETABLE_END

// Table3 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX5
90,0
1,3500,24,1144,1144
2,24,24,1144,4096
3,24,10,4096,4096
4,10,10,4096,7086
AETABLE_END

// Table4 PLine -- Use capture sensor setting

// Table5 PLine -- Use capture sensor setting

// Table6 PLine -- Use capture sensor setting

// Table7 PLine -- Use capture sensor setting

// Table8 PLine -- Use capture sensor setting

// Table9 PLine -- Use capture sensor setting

// Table10 PLine -- Use capture sensor setting

// Table11 PLine -- Use capture sensor setting

// Table12 PLine -- Use capture sensor setting

// Table13 PLine -- Use capture sensor setting

// Table14 PLine -- Use capture sensor setting

// Table15 PLine -- Use capture sensor setting

// Table16 PLine -- Use capture sensor setting

// Table17 PLine -- Use capture sensor setting

// Table18 PLine -- Use capture sensor setting

// Table19 PLine -- Use capture sensor setting

// Table20 PLine -- Use capture sensor setting

// Table21 PLine -- Use capture sensor setting

// Table22 PLine -- Use capture sensor setting

// Table23 PLine -- Use capture sensor setting

// Table24 PLine -- Use capture sensor setting

// Table25 PLine -- Use capture sensor setting

// Table26 PLine -- Use capture sensor setting

// Table27 PLine -- Use capture sensor setting

// Table28 PLine -- Use capture sensor setting

// Table29 PLine -- Use capture sensor setting

// Table30 PLine -- Use capture sensor setting

// Table31 PLine -- Use capture sensor setting

AE_SCENE_AUTO,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX5
AE_SCENE_NIGHT,AETABLE_SCENE_INDEX1,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ACTION,AETABLE_SCENE_INDEX2,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_BEACH,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_CANDLELIGHT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_FIREWORKS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX4,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX4
AE_SCENE_LANDSCAPE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_NIGHT_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_PARTY,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_SNOW,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_SPORTS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_STEADYPHOTO,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_SUNSET,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_THEATRE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ISO_ANTI_SHAKE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_ISO100,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO100,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO100
AE_SCENE_ISO200,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO200,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO200
AE_SCENE_ISO400,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO400,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO400
AE_SCENE_ISO800,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO800,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO800
AE_SCENE_ISO1600 ,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO1600,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO1600
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
#endif
