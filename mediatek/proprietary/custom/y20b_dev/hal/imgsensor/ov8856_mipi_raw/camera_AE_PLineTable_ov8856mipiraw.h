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

#ifndef _CAMERA_AE_PLINETABLE_OV8856MIPIRAW_H
#define _CAMERA_AE_PLINETABLE_OV8856MIPIRAW_H

#include "camera_custom_AEPlinetable.h"
static strEvPline sPreviewPLineTable_60Hz =
{
{
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8320,1140,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.28  BV=3.90
    {8320,1216,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.38  BV=3.81
    {8320,1328,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.47  BV=3.71
    {8320,1424,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.57  BV=3.61
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.67  BV=3.52
    {8320,1632,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.78  BV=3.41
    {8320,1728,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.88  BV=3.30
    {8320,1840,1064, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.98  BV=3.20
    {8320,1936,1080, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.08  BV=3.10
    {8320,2144,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.17  BV=3.01
    {16666,1140,1048, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.27  BV=2.91
    {16666,1216,1056, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.38  BV=2.81
    {16666,1328,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.47  BV=2.71
    {16666,1424,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.57  BV=2.61
    {16666,1536,1024, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.67  BV=2.51
    {16666,1632,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.77  BV=2.41
    {24986,1140,1056, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.28  BV=2.31
    {24986,1216,1064, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.39  BV=2.21
    {24986,1328,1048, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.49  BV=2.11
    {24986,1424,1040, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.58  BV=2.02
    {33332,1140,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.27  BV=1.91
    {33332,1216,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.38  BV=1.81
    {33332,1328,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.47  BV=1.71
    {33332,1424,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.57  BV=1.61
    {33332,1536,1024, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.67  BV=1.51
    {33332,1632,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.77  BV=1.41
    {33332,1728,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.86  BV=1.32
    {33332,1840,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.97  BV=1.21
    {33332,1936,1072, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.07  BV=1.11
    {33332,2144,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.17  BV=1.01
    {33332,2240,1064, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.27  BV=0.91
    {33332,2448,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.36  BV=0.82
    {33332,2656,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.47  BV=0.71
    {33332,2864,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.58  BV=0.60
    {33332,3072,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.68  BV=0.50
    {33332,3200,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.77  BV=0.41
    {33332,3456,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.87  BV=0.31
    {33332,3712,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58318,3072,1032, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58318,3200,1056, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66664,3072,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66664,3328,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66664,3456,1056, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66664,3712,1056, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66664,4096,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66664,4352,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66664,4608,1048, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66664,4992,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.38  BV=-1.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8450,1140,1032, 0, 0, 0},  //TV = 6.89(325 lines)  AV=2.28  SV=5.25  BV=3.91
    {9048,1140,1032, 0, 0, 0},  //TV = 6.79(348 lines)  AV=2.28  SV=5.25  BV=3.81
    {9698,1140,1032, 0, 0, 0},  //TV = 6.69(373 lines)  AV=2.28  SV=5.25  BV=3.71
    {10010,1140,1072, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.30  BV=3.61
    {10010,1216,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.41  BV=3.51
    {10010,1328,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.50  BV=3.41
    {10010,1424,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.60  BV=3.31
    {10010,1536,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.71  BV=3.20
    {10010,1632,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.81  BV=3.11
    {10010,1728,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.92  BV=3.00
    {10010,1936,1032, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.01  BV=2.90
    {10010,2048,1040, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.11  BV=2.81
    {10010,2144,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.21  BV=2.71
    {19994,1140,1072, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.30  BV=2.61
    {19994,1216,1080, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.41  BV=2.51
    {19994,1328,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.51  BV=2.40
    {19994,1424,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.62  BV=2.30
    {19994,1536,1056, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.71  BV=2.21
    {19994,1632,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.81  BV=2.11
    {30004,1140,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.33  BV=2.01
    {30004,1216,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.42  BV=1.91
    {30004,1328,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.53  BV=1.81
    {30004,1424,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.63  BV=1.71
    {30004,1536,1064, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.72  BV=1.61
    {30004,1632,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.82  BV=1.51
    {30004,1728,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.93  BV=1.41
    {30004,1936,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.03  BV=1.31
    {30004,2048,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.13  BV=1.21
    {30004,2240,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.22  BV=1.11
    {30004,2352,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.33  BV=1.01
    {30004,2560,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.43  BV=0.91
    {30004,2752,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.52  BV=0.81
    {30004,2960,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.63  BV=0.71
    {30004,3200,1024, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.73  BV=0.61
    {30004,3328,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.83  BV=0.50
    {30004,3584,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.92  BV=0.41
    {30004,3840,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=7.02  BV=0.31
    {39988,3072,1056, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.71  BV=0.21
    {39988,3328,1040, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.81  BV=0.11
    {39988,3584,1048, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.92  BV=-0.01
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49998,3584,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.90  BV=-0.31
    {60008,3200,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.73  BV=-0.39
    {60008,3328,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.83  BV=-0.50
    {60008,3584,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.94  BV=-0.60
    {60008,3840,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.04  BV=-0.70
    {60008,4224,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.13  BV=-0.79
    {60008,4480,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.24  BV=-0.90
    {60008,4864,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.33  BV=-1.00
    {60008,5120,1048, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.44  BV=-1.11
    {60008,5504,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.53  BV=-1.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    109,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -12,    //i4MinBV
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {41652,1216,1032, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=5.34  BV=1.52
    {41652,1328,1024, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=5.46  BV=1.40
    {49987,1140,1056, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=5.28  BV=1.31
    {49987,1216,1064, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=5.39  BV=1.21
    {58323,1140,1048, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=5.27  BV=1.10
    {58323,1216,1048, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=5.37  BV=1.01
    {66658,1140,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=5.27  BV=0.91
    {66658,1216,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=5.38  BV=0.81
    {66658,1328,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=5.47  BV=0.71
    {66658,1424,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=5.57  BV=0.61
    {66658,1536,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=5.67  BV=0.51
    {66658,1632,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=5.77  BV=0.41
    {66658,1728,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=5.88  BV=0.30
    {66658,1840,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=5.97  BV=0.21
    {66658,1936,1072, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.07  BV=0.11
    {66658,2144,1040, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.17  BV=0.01
    {66658,2352,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.28  BV=-0.10
    {66658,2448,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.37  BV=-0.19
    {66658,2656,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.49  BV=-0.31
    {66658,2864,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.58  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3200,1064, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1040, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.28  BV=-1.09
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {66658,5760,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.59  BV=-1.41
    {66658,6144,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.68  BV=-1.50
    {66658,6544,1040, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.78  BV=-1.60
    {66658,7072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.88  BV=-1.70
    {66658,7472,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.98  BV=-1.80
    {66658,8192,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=8.08  BV=-1.90
    {66658,8720,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=8.17  BV=-1.99
    {66658,9344,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=8.27  BV=-2.09
    {66658,9696,1064, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=8.38  BV=-2.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {40011,1140,1072, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=5.30  BV=1.61
    {40011,1216,1080, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=5.41  BV=1.51
    {40011,1328,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=5.50  BV=1.41
    {49987,1140,1056, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=5.28  BV=1.31
    {49987,1216,1064, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=5.39  BV=1.21
    {49987,1328,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=5.49  BV=1.10
    {59990,1216,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=5.33  BV=1.00
    {59990,1216,1096, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=5.43  BV=0.90
    {59990,1328,1072, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=5.53  BV=0.81
    {59990,1424,1080, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=5.64  BV=0.70
    {59990,1536,1064, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=5.72  BV=0.61
    {59990,1632,1072, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=5.82  BV=0.51
    {59990,1728,1088, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=5.93  BV=0.41
    {59990,1936,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.03  BV=0.31
    {59990,2048,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.13  BV=0.21
    {59990,2240,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.22  BV=0.11
    {59990,2352,1064, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.34  BV=-0.00
    {59990,2560,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.44  BV=-0.11
    {59990,2752,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.53  BV=-0.20
    {59990,2960,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.63  BV=-0.29
    {59990,3200,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.74  BV=-0.41
    {59990,3328,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.83  BV=-0.49
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.43  BV=-1.09
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {59990,5888,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.63  BV=-1.30
    {59990,6384,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.74  BV=-1.40
    {59990,6896,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.84  BV=-1.50
    {59990,7280,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.94  BV=-1.60
    {59990,7936,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=8.04  BV=-1.70
    {59990,8448,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=8.13  BV=-1.79
    {59990,9040,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=8.24  BV=-1.90
    {59990,9696,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=8.33  BV=-1.99
    {59990,10080,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=8.43  BV=-2.09
    {59990,10240,1120, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=8.54  BV=-2.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    119,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -22,    //i4MinBV
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8320,1140,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.28  BV=3.90
    {8320,1216,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.38  BV=3.81
    {8320,1328,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.47  BV=3.71
    {8320,1424,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.57  BV=3.61
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.67  BV=3.52
    {8320,1632,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.78  BV=3.41
    {8320,1728,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.88  BV=3.30
    {8320,1840,1064, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.98  BV=3.20
    {8320,1936,1080, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.08  BV=3.10
    {8320,2144,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.17  BV=3.01
    {16666,1140,1048, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.27  BV=2.91
    {16666,1216,1056, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.38  BV=2.81
    {16666,1328,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.47  BV=2.71
    {16666,1424,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.57  BV=2.61
    {16666,1536,1024, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.67  BV=2.51
    {16666,1632,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.77  BV=2.41
    {24986,1140,1056, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.28  BV=2.31
    {24986,1216,1064, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.39  BV=2.21
    {24986,1328,1048, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.49  BV=2.11
    {24986,1424,1040, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.58  BV=2.02
    {33254,1140,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.28  BV=1.90
    {33254,1216,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.38  BV=1.81
    {33254,1328,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.47  BV=1.72
    {33254,1424,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.57  BV=1.61
    {33254,1536,1024, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.67  BV=1.52
    {33254,1632,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.77  BV=1.42
    {33254,1728,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.87  BV=1.31
    {33254,1840,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.97  BV=1.21
    {33254,1936,1072, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.07  BV=1.12
    {33254,2144,1040, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.17  BV=1.01
    {33254,2240,1064, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.27  BV=0.92
    {33254,2448,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.37  BV=0.81
    {33254,2656,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.47  BV=0.72
    {33254,2864,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.58  BV=0.61
    {33254,3072,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.68  BV=0.51
    {33254,3200,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.77  BV=0.41
    {33254,3456,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.87  BV=0.31
    {33254,3712,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58318,3072,1032, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58318,3200,1056, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66586,3072,1040, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.69  BV=-0.51
    {66586,3328,1024, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66586,3456,1056, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66586,3712,1048, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.98  BV=-0.79
    {66586,4096,1024, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66586,4352,1032, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66586,4608,1048, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.29  BV=-1.10
    {66586,4992,1032, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.38  BV=-1.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8450,1140,1032, 0, 0, 0},  //TV = 6.89(325 lines)  AV=2.28  SV=5.25  BV=3.91
    {9048,1140,1032, 0, 0, 0},  //TV = 6.79(348 lines)  AV=2.28  SV=5.25  BV=3.81
    {9698,1140,1032, 0, 0, 0},  //TV = 6.69(373 lines)  AV=2.28  SV=5.25  BV=3.71
    {10010,1140,1072, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.30  BV=3.61
    {10010,1216,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.41  BV=3.51
    {10010,1328,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.50  BV=3.41
    {10010,1424,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.60  BV=3.31
    {10010,1536,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.71  BV=3.20
    {10010,1632,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.81  BV=3.11
    {10010,1728,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.92  BV=3.00
    {10010,1936,1032, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.01  BV=2.90
    {10010,2048,1040, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.11  BV=2.81
    {10010,2144,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.21  BV=2.71
    {19994,1140,1072, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.30  BV=2.61
    {19994,1216,1080, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.41  BV=2.51
    {19994,1328,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.51  BV=2.40
    {19994,1424,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.62  BV=2.30
    {19994,1536,1056, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.71  BV=2.21
    {19994,1632,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.81  BV=2.11
    {30004,1140,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.33  BV=2.01
    {30004,1216,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.42  BV=1.91
    {30004,1328,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.53  BV=1.81
    {30004,1424,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.63  BV=1.71
    {30004,1536,1064, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.72  BV=1.61
    {30004,1632,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.82  BV=1.51
    {30004,1728,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.93  BV=1.41
    {30004,1936,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.03  BV=1.31
    {30004,2048,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.13  BV=1.21
    {30004,2240,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.22  BV=1.11
    {30004,2352,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.33  BV=1.01
    {30004,2560,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.43  BV=0.91
    {30004,2752,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.52  BV=0.81
    {30004,2960,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.63  BV=0.71
    {30004,3200,1024, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.73  BV=0.61
    {30004,3328,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.83  BV=0.50
    {30004,3584,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.92  BV=0.41
    {30004,3840,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=7.02  BV=0.31
    {39988,3072,1056, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.71  BV=0.21
    {39988,3328,1040, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.81  BV=0.11
    {39988,3584,1048, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.92  BV=-0.01
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49998,3584,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.90  BV=-0.31
    {60008,3200,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.73  BV=-0.39
    {60008,3328,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.83  BV=-0.50
    {60008,3584,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.94  BV=-0.60
    {60008,3840,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.04  BV=-0.70
    {60008,4224,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.13  BV=-0.79
    {60008,4480,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.24  BV=-0.90
    {60008,4864,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.33  BV=-1.00
    {60008,5120,1048, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.44  BV=-1.11
    {60008,5504,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.53  BV=-1.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    109,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -12,    //i4MinBV
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8320,1140,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.28  BV=3.90
    {8320,1216,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.38  BV=3.81
    {8320,1328,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.47  BV=3.71
    {8320,1424,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.57  BV=3.61
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.67  BV=3.52
    {8320,1632,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.78  BV=3.41
    {8320,1728,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.88  BV=3.30
    {8320,1840,1064, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.98  BV=3.20
    {8320,1936,1080, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.08  BV=3.10
    {8320,2144,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.17  BV=3.01
    {16666,1140,1048, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.27  BV=2.91
    {16666,1216,1056, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.38  BV=2.81
    {16666,1328,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.47  BV=2.71
    {16666,1424,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.57  BV=2.61
    {16666,1536,1024, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.67  BV=2.51
    {16666,1632,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.77  BV=2.41
    {24986,1140,1056, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.28  BV=2.31
    {24986,1216,1064, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.39  BV=2.21
    {24986,1328,1048, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.49  BV=2.11
    {24986,1424,1040, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.58  BV=2.02
    {33254,1140,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.28  BV=1.90
    {33254,1216,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.38  BV=1.81
    {33254,1328,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.47  BV=1.72
    {33254,1424,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.57  BV=1.61
    {33254,1536,1024, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.67  BV=1.52
    {33254,1632,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.77  BV=1.42
    {33254,1728,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.87  BV=1.31
    {33254,1840,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.97  BV=1.21
    {33254,1936,1072, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.07  BV=1.12
    {33254,2144,1040, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.17  BV=1.01
    {33254,2240,1064, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.27  BV=0.92
    {33254,2448,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.37  BV=0.81
    {33254,2656,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.47  BV=0.72
    {33254,2864,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.58  BV=0.61
    {33254,3072,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.68  BV=0.51
    {33254,3200,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.77  BV=0.41
    {33254,3456,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.87  BV=0.31
    {33254,3712,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58318,3072,1032, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58318,3200,1056, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66586,3072,1040, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.69  BV=-0.51
    {66586,3328,1024, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66586,3456,1056, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66586,3712,1048, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.98  BV=-0.79
    {66586,4096,1024, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66586,4352,1032, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66586,4608,1048, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.29  BV=-1.10
    {66586,4992,1032, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66586,5376,1024, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74984,5120,1032, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.42  BV=-1.40
    {74984,5504,1024, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3205 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91650,5120,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91650,5504,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.52  BV=-1.80
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8450,1140,1032, 0, 0, 0},  //TV = 6.89(325 lines)  AV=2.28  SV=5.25  BV=3.91
    {9048,1140,1032, 0, 0, 0},  //TV = 6.79(348 lines)  AV=2.28  SV=5.25  BV=3.81
    {9698,1140,1032, 0, 0, 0},  //TV = 6.69(373 lines)  AV=2.28  SV=5.25  BV=3.71
    {10010,1140,1072, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.30  BV=3.61
    {10010,1216,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.41  BV=3.51
    {10010,1328,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.50  BV=3.41
    {10010,1424,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.60  BV=3.31
    {10010,1536,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.71  BV=3.20
    {10010,1632,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.81  BV=3.11
    {10010,1728,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.92  BV=3.00
    {10010,1936,1032, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.01  BV=2.90
    {10010,2048,1040, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.11  BV=2.81
    {10010,2144,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.21  BV=2.71
    {19994,1140,1072, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.30  BV=2.61
    {19994,1216,1080, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.41  BV=2.51
    {19994,1328,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.51  BV=2.40
    {19994,1424,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.62  BV=2.30
    {19994,1536,1056, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.71  BV=2.21
    {19994,1632,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.81  BV=2.11
    {30004,1140,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.33  BV=2.01
    {30004,1216,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.42  BV=1.91
    {30004,1328,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.53  BV=1.81
    {30004,1424,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.63  BV=1.71
    {30004,1536,1064, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.72  BV=1.61
    {30004,1632,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.82  BV=1.51
    {30004,1728,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.93  BV=1.41
    {30004,1936,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.03  BV=1.31
    {30004,2048,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.13  BV=1.21
    {30004,2240,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.22  BV=1.11
    {30004,2352,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.33  BV=1.01
    {30004,2560,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.43  BV=0.91
    {30004,2752,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.52  BV=0.81
    {30004,2960,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.63  BV=0.71
    {30004,3200,1024, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.73  BV=0.61
    {30004,3328,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.83  BV=0.50
    {30004,3584,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.92  BV=0.41
    {30004,3840,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=7.02  BV=0.31
    {39988,3072,1056, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.71  BV=0.21
    {39988,3328,1040, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.81  BV=0.11
    {39988,3584,1048, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.92  BV=-0.01
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49998,3584,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.90  BV=-0.31
    {60008,3200,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.73  BV=-0.39
    {60008,3328,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.83  BV=-0.50
    {60008,3584,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.94  BV=-0.60
    {60008,3840,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.04  BV=-0.70
    {60008,4224,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.13  BV=-0.79
    {60008,4480,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.24  BV=-0.90
    {60008,4864,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.33  BV=-1.00
    {60008,5120,1048, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.44  BV=-1.11
    {60008,5504,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69992,5120,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69992,5504,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.51  BV=-1.40
    {80002,5120,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.42  BV=-1.50
    {80002,5504,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.52  BV=-1.60
    {90012,5248,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.44  BV=-1.69
    {90012,5632,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.54  BV=-1.79
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8320,1140,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.28  BV=3.90
    {8320,1216,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.38  BV=3.81
    {8320,1328,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.47  BV=3.71
    {8320,1424,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.57  BV=3.61
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.67  BV=3.52
    {8320,1632,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.78  BV=3.41
    {8320,1728,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.88  BV=3.30
    {8320,1840,1064, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.98  BV=3.20
    {8320,1936,1080, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.08  BV=3.10
    {8320,2144,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.17  BV=3.01
    {16666,1140,1048, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.27  BV=2.91
    {16666,1216,1056, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.38  BV=2.81
    {16666,1328,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.47  BV=2.71
    {16666,1424,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.57  BV=2.61
    {16666,1536,1024, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.67  BV=2.51
    {16666,1632,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.77  BV=2.41
    {24986,1140,1056, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.28  BV=2.31
    {24986,1216,1064, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.39  BV=2.21
    {24986,1328,1048, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.49  BV=2.11
    {24986,1424,1040, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.58  BV=2.02
    {33254,1140,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.28  BV=1.90
    {33254,1216,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.38  BV=1.81
    {33254,1328,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.47  BV=1.72
    {33254,1424,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.57  BV=1.61
    {33254,1536,1024, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.67  BV=1.52
    {33254,1632,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.77  BV=1.42
    {33254,1728,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.87  BV=1.31
    {33254,1840,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.97  BV=1.21
    {33254,1936,1072, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.07  BV=1.12
    {33254,2144,1040, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.17  BV=1.01
    {33254,2240,1064, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.27  BV=0.92
    {33254,2448,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.37  BV=0.81
    {33254,2656,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.47  BV=0.72
    {33254,2864,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.58  BV=0.61
    {33254,3072,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.68  BV=0.51
    {33254,3200,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.77  BV=0.41
    {33254,3456,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.87  BV=0.31
    {33254,3712,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58318,3072,1032, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58318,3200,1056, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66586,3072,1040, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.69  BV=-0.51
    {66586,3328,1024, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66586,3456,1056, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66586,3712,1048, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.98  BV=-0.79
    {66586,4096,1024, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66586,4352,1032, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66586,4608,1048, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.29  BV=-1.10
    {66586,4992,1032, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66586,5376,1024, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74984,5120,1032, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.42  BV=-1.40
    {74984,5504,1024, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3205 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91650,5120,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91650,5504,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.52  BV=-1.80
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8450,1140,1032, 0, 0, 0},  //TV = 6.89(325 lines)  AV=2.28  SV=5.25  BV=3.91
    {9048,1140,1032, 0, 0, 0},  //TV = 6.79(348 lines)  AV=2.28  SV=5.25  BV=3.81
    {9698,1140,1032, 0, 0, 0},  //TV = 6.69(373 lines)  AV=2.28  SV=5.25  BV=3.71
    {10010,1140,1072, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.30  BV=3.61
    {10010,1216,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.41  BV=3.51
    {10010,1328,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.50  BV=3.41
    {10010,1424,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.60  BV=3.31
    {10010,1536,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.71  BV=3.20
    {10010,1632,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.81  BV=3.11
    {10010,1728,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.92  BV=3.00
    {10010,1936,1032, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.01  BV=2.90
    {10010,2048,1040, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.11  BV=2.81
    {10010,2144,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.21  BV=2.71
    {19994,1140,1072, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.30  BV=2.61
    {19994,1216,1080, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.41  BV=2.51
    {19994,1328,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.51  BV=2.40
    {19994,1424,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.62  BV=2.30
    {19994,1536,1056, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.71  BV=2.21
    {19994,1632,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.81  BV=2.11
    {30004,1140,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.33  BV=2.01
    {30004,1216,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.42  BV=1.91
    {30004,1328,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.53  BV=1.81
    {30004,1424,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.63  BV=1.71
    {30004,1536,1064, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.72  BV=1.61
    {30004,1632,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.82  BV=1.51
    {30004,1728,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.93  BV=1.41
    {30004,1936,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.03  BV=1.31
    {30004,2048,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.13  BV=1.21
    {30004,2240,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.22  BV=1.11
    {30004,2352,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.33  BV=1.01
    {30004,2560,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.43  BV=0.91
    {30004,2752,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.52  BV=0.81
    {30004,2960,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.63  BV=0.71
    {30004,3200,1024, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.73  BV=0.61
    {30004,3328,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.83  BV=0.50
    {30004,3584,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.92  BV=0.41
    {30004,3840,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=7.02  BV=0.31
    {39988,3072,1056, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.71  BV=0.21
    {39988,3328,1040, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.81  BV=0.11
    {39988,3584,1048, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.92  BV=-0.01
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49998,3584,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.90  BV=-0.31
    {60008,3200,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.73  BV=-0.39
    {60008,3328,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.83  BV=-0.50
    {60008,3584,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.94  BV=-0.60
    {60008,3840,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.04  BV=-0.70
    {60008,4224,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.13  BV=-0.79
    {60008,4480,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.24  BV=-0.90
    {60008,4864,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.33  BV=-1.00
    {60008,5120,1048, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.44  BV=-1.11
    {60008,5504,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69992,5120,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69992,5504,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.51  BV=-1.40
    {80002,5120,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.42  BV=-1.50
    {80002,5504,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.52  BV=-1.60
    {90012,5248,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.44  BV=-1.69
    {90012,5632,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.54  BV=-1.79
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8320,1140,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.28  BV=3.90
    {8320,1216,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.38  BV=3.81
    {8320,1328,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.47  BV=3.71
    {8320,1424,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.57  BV=3.61
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.67  BV=3.52
    {8320,1632,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.78  BV=3.41
    {8320,1728,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.88  BV=3.30
    {8320,1840,1064, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.98  BV=3.20
    {8320,1936,1080, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.08  BV=3.10
    {8320,2144,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.17  BV=3.01
    {16666,1140,1048, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.27  BV=2.91
    {16666,1216,1056, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.38  BV=2.81
    {16666,1328,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.47  BV=2.71
    {16666,1424,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.57  BV=2.61
    {16666,1536,1024, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.67  BV=2.51
    {16666,1632,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.77  BV=2.41
    {24986,1140,1056, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.28  BV=2.31
    {24986,1216,1064, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.39  BV=2.21
    {24986,1328,1048, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.49  BV=2.11
    {24986,1424,1040, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.58  BV=2.02
    {33332,1140,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.27  BV=1.91
    {33332,1216,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.38  BV=1.81
    {33332,1328,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.47  BV=1.71
    {33332,1424,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.57  BV=1.61
    {33332,1536,1024, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.67  BV=1.51
    {33332,1632,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.77  BV=1.41
    {33332,1728,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.86  BV=1.32
    {33332,1840,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.97  BV=1.21
    {33332,1936,1072, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.07  BV=1.11
    {33332,2144,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.17  BV=1.01
    {33332,2240,1064, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.27  BV=0.91
    {33332,2448,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.36  BV=0.82
    {33332,2656,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.47  BV=0.71
    {33332,2864,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.58  BV=0.60
    {33332,3072,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.68  BV=0.50
    {33332,3200,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.77  BV=0.41
    {33332,3456,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.87  BV=0.31
    {33332,3712,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58318,3072,1032, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58318,3200,1056, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66664,3072,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66664,3328,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66664,3456,1056, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66664,3712,1056, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66664,4096,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66664,4352,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66664,4608,1048, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66664,4992,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66664,5376,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74984,5120,1032, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.42  BV=-1.40
    {74984,5504,1024, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3205 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91650,5120,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91650,5504,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.52  BV=-1.80
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8450,1140,1032, 0, 0, 0},  //TV = 6.89(325 lines)  AV=2.28  SV=5.25  BV=3.91
    {9048,1140,1032, 0, 0, 0},  //TV = 6.79(348 lines)  AV=2.28  SV=5.25  BV=3.81
    {9698,1140,1032, 0, 0, 0},  //TV = 6.69(373 lines)  AV=2.28  SV=5.25  BV=3.71
    {10010,1140,1072, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.30  BV=3.61
    {10010,1216,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.41  BV=3.51
    {10010,1328,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.50  BV=3.41
    {10010,1424,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.60  BV=3.31
    {10010,1536,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.71  BV=3.20
    {10010,1632,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.81  BV=3.11
    {10010,1728,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.92  BV=3.00
    {10010,1936,1032, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.01  BV=2.90
    {10010,2048,1040, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.11  BV=2.81
    {10010,2144,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.21  BV=2.71
    {19994,1140,1072, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.30  BV=2.61
    {19994,1216,1080, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.41  BV=2.51
    {19994,1328,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.51  BV=2.40
    {19994,1424,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.62  BV=2.30
    {19994,1536,1056, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.71  BV=2.21
    {19994,1632,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.81  BV=2.11
    {30004,1140,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.33  BV=2.01
    {30004,1216,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.42  BV=1.91
    {30004,1328,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.53  BV=1.81
    {30004,1424,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.63  BV=1.71
    {30004,1536,1064, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.72  BV=1.61
    {30004,1632,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.82  BV=1.51
    {30004,1728,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.93  BV=1.41
    {30004,1936,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.03  BV=1.31
    {30004,2048,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.13  BV=1.21
    {30004,2240,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.22  BV=1.11
    {30004,2352,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.33  BV=1.01
    {30004,2560,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.43  BV=0.91
    {30004,2752,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.52  BV=0.81
    {30004,2960,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.63  BV=0.71
    {30004,3200,1024, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.73  BV=0.61
    {30004,3328,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.83  BV=0.50
    {30004,3584,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.92  BV=0.41
    {30004,3840,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=7.02  BV=0.31
    {39988,3072,1056, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.71  BV=0.21
    {39988,3328,1040, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.81  BV=0.11
    {39988,3584,1048, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.92  BV=-0.01
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49998,3584,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.90  BV=-0.31
    {60008,3200,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.73  BV=-0.39
    {60008,3328,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.83  BV=-0.50
    {60008,3584,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.94  BV=-0.60
    {60008,3840,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.04  BV=-0.70
    {60008,4224,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.13  BV=-0.79
    {60008,4480,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.24  BV=-0.90
    {60008,4864,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.33  BV=-1.00
    {60008,5120,1048, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.44  BV=-1.11
    {60008,5504,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69992,5120,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69992,5504,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.51  BV=-1.40
    {80002,5120,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.42  BV=-1.50
    {80002,5504,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.52  BV=-1.60
    {90012,5248,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.44  BV=-1.69
    {90012,5632,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.54  BV=-1.79
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8320,1140,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.28  BV=3.90
    {8320,1216,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.38  BV=3.81
    {8320,1328,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.47  BV=3.71
    {8320,1424,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.57  BV=3.61
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.67  BV=3.52
    {8320,1632,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.78  BV=3.41
    {8320,1728,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.88  BV=3.30
    {8320,1840,1064, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.98  BV=3.20
    {8320,1936,1080, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.08  BV=3.10
    {8320,2144,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.17  BV=3.01
    {16666,1140,1048, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.27  BV=2.91
    {16666,1216,1056, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.38  BV=2.81
    {16666,1328,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.47  BV=2.71
    {16666,1424,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.57  BV=2.61
    {16666,1536,1024, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.67  BV=2.51
    {16666,1632,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.77  BV=2.41
    {24986,1140,1056, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.28  BV=2.31
    {24986,1216,1064, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.39  BV=2.21
    {24986,1328,1048, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.49  BV=2.11
    {24986,1424,1040, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.58  BV=2.02
    {33332,1140,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.27  BV=1.91
    {33332,1216,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.38  BV=1.81
    {33332,1328,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.47  BV=1.71
    {33332,1424,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.57  BV=1.61
    {33332,1536,1024, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.67  BV=1.51
    {33332,1632,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.77  BV=1.41
    {33332,1728,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.86  BV=1.32
    {33332,1840,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.97  BV=1.21
    {33332,1936,1072, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.07  BV=1.11
    {33332,2144,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.17  BV=1.01
    {33332,2240,1064, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.27  BV=0.91
    {33332,2448,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.36  BV=0.82
    {33332,2656,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.47  BV=0.71
    {33332,2864,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.58  BV=0.60
    {33332,3072,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.68  BV=0.50
    {33332,3200,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.77  BV=0.41
    {33332,3456,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.87  BV=0.31
    {33332,3712,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58318,3072,1032, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58318,3200,1056, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66664,3072,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66664,3328,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66664,3456,1056, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66664,3712,1056, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66664,4096,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66664,4352,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66664,4608,1048, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66664,4992,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66664,5376,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74984,5120,1032, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.42  BV=-1.40
    {74984,5504,1024, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3205 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91650,5120,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91650,5504,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.52  BV=-1.80
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8450,1140,1032, 0, 0, 0},  //TV = 6.89(325 lines)  AV=2.28  SV=5.25  BV=3.91
    {9048,1140,1032, 0, 0, 0},  //TV = 6.79(348 lines)  AV=2.28  SV=5.25  BV=3.81
    {9698,1140,1032, 0, 0, 0},  //TV = 6.69(373 lines)  AV=2.28  SV=5.25  BV=3.71
    {10010,1140,1072, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.30  BV=3.61
    {10010,1216,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.41  BV=3.51
    {10010,1328,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.50  BV=3.41
    {10010,1424,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.60  BV=3.31
    {10010,1536,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.71  BV=3.20
    {10010,1632,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.81  BV=3.11
    {10010,1728,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.92  BV=3.00
    {10010,1936,1032, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.01  BV=2.90
    {10010,2048,1040, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.11  BV=2.81
    {10010,2144,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.21  BV=2.71
    {19994,1140,1072, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.30  BV=2.61
    {19994,1216,1080, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.41  BV=2.51
    {19994,1328,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.51  BV=2.40
    {19994,1424,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.62  BV=2.30
    {19994,1536,1056, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.71  BV=2.21
    {19994,1632,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.81  BV=2.11
    {30004,1140,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.33  BV=2.01
    {30004,1216,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.42  BV=1.91
    {30004,1328,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.53  BV=1.81
    {30004,1424,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.63  BV=1.71
    {30004,1536,1064, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.72  BV=1.61
    {30004,1632,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.82  BV=1.51
    {30004,1728,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.93  BV=1.41
    {30004,1936,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.03  BV=1.31
    {30004,2048,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.13  BV=1.21
    {30004,2240,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.22  BV=1.11
    {30004,2352,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.33  BV=1.01
    {30004,2560,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.43  BV=0.91
    {30004,2752,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.52  BV=0.81
    {30004,2960,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.63  BV=0.71
    {30004,3200,1024, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.73  BV=0.61
    {30004,3328,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.83  BV=0.50
    {30004,3584,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.92  BV=0.41
    {30004,3840,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=7.02  BV=0.31
    {39988,3072,1056, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.71  BV=0.21
    {39988,3328,1040, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.81  BV=0.11
    {39988,3584,1048, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.92  BV=-0.01
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49998,3584,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.90  BV=-0.31
    {60008,3200,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.73  BV=-0.39
    {60008,3328,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.83  BV=-0.50
    {60008,3584,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.94  BV=-0.60
    {60008,3840,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.04  BV=-0.70
    {60008,4224,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.13  BV=-0.79
    {60008,4480,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.24  BV=-0.90
    {60008,4864,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.33  BV=-1.00
    {60008,5120,1048, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.44  BV=-1.11
    {60008,5504,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69992,5120,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69992,5504,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.51  BV=-1.40
    {80002,5120,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.42  BV=-1.50
    {80002,5504,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.52  BV=-1.60
    {90012,5248,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.44  BV=-1.69
    {90012,5632,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.54  BV=-1.79
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8320,1140,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.28  BV=3.90
    {8320,1216,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.38  BV=3.81
    {8320,1328,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.47  BV=3.71
    {8320,1424,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.57  BV=3.61
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.67  BV=3.52
    {8320,1632,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.78  BV=3.41
    {8320,1728,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.88  BV=3.30
    {8320,1840,1064, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.98  BV=3.20
    {8320,1936,1080, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.08  BV=3.10
    {8320,2144,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.17  BV=3.01
    {16666,1140,1048, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.27  BV=2.91
    {16666,1216,1056, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.38  BV=2.81
    {16666,1328,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.47  BV=2.71
    {16666,1424,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.57  BV=2.61
    {16666,1536,1024, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.67  BV=2.51
    {16666,1632,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.77  BV=2.41
    {24986,1140,1056, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.28  BV=2.31
    {24986,1216,1064, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.39  BV=2.21
    {24986,1328,1048, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.49  BV=2.11
    {24986,1424,1040, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.58  BV=2.02
    {33332,1140,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.27  BV=1.91
    {33332,1216,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.38  BV=1.81
    {33332,1328,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.47  BV=1.71
    {33332,1424,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.57  BV=1.61
    {33332,1536,1024, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.67  BV=1.51
    {33332,1632,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.77  BV=1.41
    {33332,1728,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.86  BV=1.32
    {33332,1840,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.97  BV=1.21
    {33332,1936,1072, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.07  BV=1.11
    {33332,2144,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.17  BV=1.01
    {33332,2240,1064, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.27  BV=0.91
    {33332,2448,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.36  BV=0.82
    {33332,2656,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.47  BV=0.71
    {33332,2864,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.58  BV=0.60
    {33332,3072,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.68  BV=0.50
    {33332,3200,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.77  BV=0.41
    {33332,3456,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.87  BV=0.31
    {33332,3712,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58318,3072,1032, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58318,3200,1056, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66664,3072,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66664,3328,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66664,3456,1056, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66664,3712,1056, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66664,4096,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66664,4352,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66664,4608,1048, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66664,4992,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66664,5376,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74984,5120,1032, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.42  BV=-1.40
    {74984,5504,1024, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3205 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91650,5120,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91650,5504,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.52  BV=-1.80
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8450,1140,1032, 0, 0, 0},  //TV = 6.89(325 lines)  AV=2.28  SV=5.25  BV=3.91
    {9048,1140,1032, 0, 0, 0},  //TV = 6.79(348 lines)  AV=2.28  SV=5.25  BV=3.81
    {9698,1140,1032, 0, 0, 0},  //TV = 6.69(373 lines)  AV=2.28  SV=5.25  BV=3.71
    {10010,1140,1072, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.30  BV=3.61
    {10010,1216,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.41  BV=3.51
    {10010,1328,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.50  BV=3.41
    {10010,1424,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.60  BV=3.31
    {10010,1536,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.71  BV=3.20
    {10010,1632,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.81  BV=3.11
    {10010,1728,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.92  BV=3.00
    {10010,1936,1032, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.01  BV=2.90
    {10010,2048,1040, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.11  BV=2.81
    {10010,2144,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.21  BV=2.71
    {19994,1140,1072, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.30  BV=2.61
    {19994,1216,1080, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.41  BV=2.51
    {19994,1328,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.51  BV=2.40
    {19994,1424,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.62  BV=2.30
    {19994,1536,1056, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.71  BV=2.21
    {19994,1632,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.81  BV=2.11
    {30004,1140,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.33  BV=2.01
    {30004,1216,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.42  BV=1.91
    {30004,1328,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.53  BV=1.81
    {30004,1424,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.63  BV=1.71
    {30004,1536,1064, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.72  BV=1.61
    {30004,1632,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.82  BV=1.51
    {30004,1728,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.93  BV=1.41
    {30004,1936,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.03  BV=1.31
    {30004,2048,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.13  BV=1.21
    {30004,2240,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.22  BV=1.11
    {30004,2352,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.33  BV=1.01
    {30004,2560,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.43  BV=0.91
    {30004,2752,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.52  BV=0.81
    {30004,2960,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.63  BV=0.71
    {30004,3200,1024, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.73  BV=0.61
    {30004,3328,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.83  BV=0.50
    {30004,3584,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.92  BV=0.41
    {30004,3840,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=7.02  BV=0.31
    {39988,3072,1056, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.71  BV=0.21
    {39988,3328,1040, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.81  BV=0.11
    {39988,3584,1048, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.92  BV=-0.01
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49998,3584,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.90  BV=-0.31
    {60008,3200,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.73  BV=-0.39
    {60008,3328,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.83  BV=-0.50
    {60008,3584,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.94  BV=-0.60
    {60008,3840,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.04  BV=-0.70
    {60008,4224,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.13  BV=-0.79
    {60008,4480,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.24  BV=-0.90
    {60008,4864,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.33  BV=-1.00
    {60008,5120,1048, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.44  BV=-1.11
    {60008,5504,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69992,5120,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69992,5504,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.51  BV=-1.40
    {80002,5120,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.42  BV=-1.50
    {80002,5504,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.52  BV=-1.60
    {90012,5248,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.44  BV=-1.69
    {90012,5632,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.54  BV=-1.79
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8320,1140,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.28  BV=3.90
    {8320,1216,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.38  BV=3.81
    {8320,1328,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.47  BV=3.71
    {8320,1424,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.57  BV=3.61
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.67  BV=3.52
    {8320,1632,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.78  BV=3.41
    {8320,1728,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.88  BV=3.30
    {8320,1840,1064, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.98  BV=3.20
    {8320,1936,1080, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.08  BV=3.10
    {8320,2144,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.17  BV=3.01
    {16666,1140,1048, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.27  BV=2.91
    {16666,1216,1056, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.38  BV=2.81
    {16666,1328,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.47  BV=2.71
    {16666,1424,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.57  BV=2.61
    {16666,1536,1024, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.67  BV=2.51
    {16666,1632,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.77  BV=2.41
    {24986,1140,1056, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.28  BV=2.31
    {24986,1216,1064, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.39  BV=2.21
    {24986,1328,1048, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.49  BV=2.11
    {24986,1424,1040, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.58  BV=2.02
    {33332,1140,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.27  BV=1.91
    {33332,1216,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.38  BV=1.81
    {33332,1328,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.47  BV=1.71
    {33332,1424,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.57  BV=1.61
    {33332,1536,1024, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.67  BV=1.51
    {33332,1632,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.77  BV=1.41
    {33332,1728,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.86  BV=1.32
    {33332,1840,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.97  BV=1.21
    {33332,1936,1072, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.07  BV=1.11
    {33332,2144,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.17  BV=1.01
    {33332,2240,1064, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.27  BV=0.91
    {33332,2448,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.36  BV=0.82
    {33332,2656,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.47  BV=0.71
    {33332,2864,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.58  BV=0.60
    {33332,3072,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.68  BV=0.50
    {33332,3200,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.77  BV=0.41
    {33332,3456,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.87  BV=0.31
    {33332,3712,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58318,3072,1032, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58318,3200,1056, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66664,3072,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66664,3328,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66664,3456,1056, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66664,3712,1056, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66664,4096,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66664,4352,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66664,4608,1048, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66664,4992,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66664,5376,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74984,5120,1032, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.42  BV=-1.40
    {74984,5504,1024, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3205 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91650,5120,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91650,5504,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.52  BV=-1.80
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8450,1140,1032, 0, 0, 0},  //TV = 6.89(325 lines)  AV=2.28  SV=5.25  BV=3.91
    {9048,1140,1032, 0, 0, 0},  //TV = 6.79(348 lines)  AV=2.28  SV=5.25  BV=3.81
    {9698,1140,1032, 0, 0, 0},  //TV = 6.69(373 lines)  AV=2.28  SV=5.25  BV=3.71
    {10010,1140,1072, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.30  BV=3.61
    {10010,1216,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.41  BV=3.51
    {10010,1328,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.50  BV=3.41
    {10010,1424,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.60  BV=3.31
    {10010,1536,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.71  BV=3.20
    {10010,1632,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.81  BV=3.11
    {10010,1728,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.92  BV=3.00
    {10010,1936,1032, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.01  BV=2.90
    {10010,2048,1040, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.11  BV=2.81
    {10010,2144,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.21  BV=2.71
    {19994,1140,1072, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.30  BV=2.61
    {19994,1216,1080, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.41  BV=2.51
    {19994,1328,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.51  BV=2.40
    {19994,1424,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.62  BV=2.30
    {19994,1536,1056, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.71  BV=2.21
    {19994,1632,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.81  BV=2.11
    {30004,1140,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.33  BV=2.01
    {30004,1216,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.42  BV=1.91
    {30004,1328,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.53  BV=1.81
    {30004,1424,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.63  BV=1.71
    {30004,1536,1064, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.72  BV=1.61
    {30004,1632,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.82  BV=1.51
    {30004,1728,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.93  BV=1.41
    {30004,1936,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.03  BV=1.31
    {30004,2048,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.13  BV=1.21
    {30004,2240,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.22  BV=1.11
    {30004,2352,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.33  BV=1.01
    {30004,2560,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.43  BV=0.91
    {30004,2752,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.52  BV=0.81
    {30004,2960,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.63  BV=0.71
    {30004,3200,1024, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.73  BV=0.61
    {30004,3328,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.83  BV=0.50
    {30004,3584,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.92  BV=0.41
    {30004,3840,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=7.02  BV=0.31
    {39988,3072,1056, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.71  BV=0.21
    {39988,3328,1040, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.81  BV=0.11
    {39988,3584,1048, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.92  BV=-0.01
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49998,3584,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.90  BV=-0.31
    {60008,3200,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.73  BV=-0.39
    {60008,3328,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.83  BV=-0.50
    {60008,3584,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.94  BV=-0.60
    {60008,3840,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.04  BV=-0.70
    {60008,4224,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.13  BV=-0.79
    {60008,4480,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.24  BV=-0.90
    {60008,4864,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.33  BV=-1.00
    {60008,5120,1048, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.44  BV=-1.11
    {60008,5504,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69992,5120,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69992,5504,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.51  BV=-1.40
    {80002,5120,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.42  BV=-1.50
    {80002,5504,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.52  BV=-1.60
    {90012,5248,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.44  BV=-1.69
    {90012,5632,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.54  BV=-1.79
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8320,1140,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.28  BV=3.90
    {8320,1216,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.38  BV=3.81
    {8320,1328,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.47  BV=3.71
    {8320,1424,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.57  BV=3.61
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.67  BV=3.52
    {8320,1632,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.78  BV=3.41
    {8320,1728,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.88  BV=3.30
    {8320,1840,1064, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.98  BV=3.20
    {8320,1936,1080, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.08  BV=3.10
    {8320,2144,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.17  BV=3.01
    {16666,1140,1048, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.27  BV=2.91
    {16666,1216,1056, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.38  BV=2.81
    {16666,1328,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.47  BV=2.71
    {16666,1424,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.57  BV=2.61
    {16666,1536,1024, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.67  BV=2.51
    {16666,1632,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.77  BV=2.41
    {24986,1140,1056, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.28  BV=2.31
    {24986,1216,1064, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.39  BV=2.21
    {24986,1328,1048, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.49  BV=2.11
    {24986,1424,1040, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.58  BV=2.02
    {33332,1140,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.27  BV=1.91
    {33332,1216,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.38  BV=1.81
    {33332,1328,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.47  BV=1.71
    {33332,1424,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.57  BV=1.61
    {33332,1536,1024, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.67  BV=1.51
    {33332,1632,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.77  BV=1.41
    {33332,1728,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.86  BV=1.32
    {33332,1840,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=5.97  BV=1.21
    {33332,1936,1072, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.07  BV=1.11
    {33332,2144,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.17  BV=1.01
    {33332,2240,1064, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.27  BV=0.91
    {33332,2448,1040, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.36  BV=0.82
    {33332,2656,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.47  BV=0.71
    {33332,2864,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.58  BV=0.60
    {33332,3072,1032, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.68  BV=0.50
    {33332,3200,1056, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.77  BV=0.41
    {33332,3456,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.87  BV=0.31
    {33332,3712,1048, 0, 0, 0},  //TV = 4.91(1282 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58318,3072,1032, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58318,3200,1056, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66664,3072,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66664,3328,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66664,3456,1056, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66664,3712,1056, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66664,4096,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66664,4352,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66664,4608,1048, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66664,4992,1032, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66664,5376,1024, 0, 0, 0},  //TV = 3.91(2564 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74984,5120,1032, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.42  BV=-1.40
    {74984,5504,1024, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3205 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91650,5120,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91650,5504,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.52  BV=-1.80
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8450,1140,1032, 0, 0, 0},  //TV = 6.89(325 lines)  AV=2.28  SV=5.25  BV=3.91
    {9048,1140,1032, 0, 0, 0},  //TV = 6.79(348 lines)  AV=2.28  SV=5.25  BV=3.81
    {9698,1140,1032, 0, 0, 0},  //TV = 6.69(373 lines)  AV=2.28  SV=5.25  BV=3.71
    {10010,1140,1072, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.30  BV=3.61
    {10010,1216,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.41  BV=3.51
    {10010,1328,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.50  BV=3.41
    {10010,1424,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.60  BV=3.31
    {10010,1536,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.71  BV=3.20
    {10010,1632,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.81  BV=3.11
    {10010,1728,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.92  BV=3.00
    {10010,1936,1032, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.01  BV=2.90
    {10010,2048,1040, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.11  BV=2.81
    {10010,2144,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.21  BV=2.71
    {19994,1140,1072, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.30  BV=2.61
    {19994,1216,1080, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.41  BV=2.51
    {19994,1328,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.51  BV=2.40
    {19994,1424,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.62  BV=2.30
    {19994,1536,1056, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.71  BV=2.21
    {19994,1632,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.81  BV=2.11
    {30004,1140,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.33  BV=2.01
    {30004,1216,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.42  BV=1.91
    {30004,1328,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.53  BV=1.81
    {30004,1424,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.63  BV=1.71
    {30004,1536,1064, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.72  BV=1.61
    {30004,1632,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.82  BV=1.51
    {30004,1728,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.93  BV=1.41
    {30004,1936,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.03  BV=1.31
    {30004,2048,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.13  BV=1.21
    {30004,2240,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.22  BV=1.11
    {30004,2352,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.33  BV=1.01
    {30004,2560,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.43  BV=0.91
    {30004,2752,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.52  BV=0.81
    {30004,2960,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.63  BV=0.71
    {30004,3200,1024, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.73  BV=0.61
    {30004,3328,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.83  BV=0.50
    {30004,3584,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.92  BV=0.41
    {30004,3840,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=7.02  BV=0.31
    {39988,3072,1056, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.71  BV=0.21
    {39988,3328,1040, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.81  BV=0.11
    {39988,3584,1048, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.92  BV=-0.01
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49998,3584,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.90  BV=-0.31
    {60008,3200,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.73  BV=-0.39
    {60008,3328,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.83  BV=-0.50
    {60008,3584,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.94  BV=-0.60
    {60008,3840,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.04  BV=-0.70
    {60008,4224,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.13  BV=-0.79
    {60008,4480,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.24  BV=-0.90
    {60008,4864,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.33  BV=-1.00
    {60008,5120,1048, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.44  BV=-1.11
    {60008,5504,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69992,5120,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69992,5504,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.51  BV=-1.40
    {80002,5120,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.42  BV=-1.50
    {80002,5504,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.52  BV=-1.60
    {90012,5248,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.44  BV=-1.69
    {90012,5632,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.54  BV=-1.79
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {99996,5760,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.60  BV=-2.00
    {99996,6240,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.69  BV=-2.09
    {99996,6704,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.79  BV=-2.20
    {99996,7072,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.89  BV=-2.30
    {99996,7696,1024, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.99  BV=-2.40
    {99996,8192,1032, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.10  BV=-2.50
    {99996,8720,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.20  BV=-2.60
    {99996,9344,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.30  BV=-2.70
    {99996,10080,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8320,1140,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.28  BV=3.90
    {8320,1216,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.38  BV=3.81
    {8320,1328,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.47  BV=3.71
    {8320,1424,1032, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.57  BV=3.61
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.67  BV=3.52
    {8320,1632,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.78  BV=3.41
    {8320,1728,1056, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.88  BV=3.30
    {8320,1840,1064, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=5.98  BV=3.20
    {8320,1936,1080, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.08  BV=3.10
    {8320,2144,1040, 0, 0, 0},  //TV = 6.91(320 lines)  AV=2.28  SV=6.17  BV=3.01
    {16666,1140,1048, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.27  BV=2.91
    {16666,1216,1056, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.38  BV=2.81
    {16666,1328,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.47  BV=2.71
    {16666,1424,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.57  BV=2.61
    {16666,1536,1024, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.67  BV=2.51
    {16666,1632,1032, 0, 0, 0},  //TV = 5.91(641 lines)  AV=2.28  SV=5.77  BV=2.41
    {24986,1140,1056, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.28  BV=2.31
    {24986,1216,1064, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.39  BV=2.21
    {24986,1328,1048, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.49  BV=2.11
    {24986,1424,1040, 0, 0, 0},  //TV = 5.32(961 lines)  AV=2.28  SV=5.58  BV=2.02
    {33254,1140,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.28  BV=1.90
    {33254,1216,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.38  BV=1.81
    {33254,1328,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.47  BV=1.72
    {33254,1424,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.57  BV=1.61
    {33254,1536,1024, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.67  BV=1.52
    {33254,1632,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.77  BV=1.42
    {33254,1728,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.87  BV=1.31
    {33254,1840,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=5.97  BV=1.21
    {33254,1936,1072, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.07  BV=1.12
    {33254,2144,1040, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.17  BV=1.01
    {33254,2240,1064, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.27  BV=0.92
    {33254,2448,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.37  BV=0.81
    {33254,2656,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.47  BV=0.72
    {33254,2864,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.58  BV=0.61
    {33254,3072,1032, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.68  BV=0.51
    {33254,3200,1056, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.77  BV=0.41
    {33254,3456,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.87  BV=0.31
    {33254,3712,1048, 0, 0, 0},  //TV = 4.91(1279 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1602 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58318,3072,1032, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58318,3200,1056, 0, 0, 0},  //TV = 4.10(2243 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66586,3072,1040, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.69  BV=-0.51
    {66586,3328,1024, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66586,3456,1056, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66586,3712,1048, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=6.98  BV=-0.79
    {66586,4096,1024, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66586,4352,1032, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66586,4608,1048, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.29  BV=-1.10
    {66586,4992,1032, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66586,5376,1024, 0, 0, 0},  //TV = 3.91(2561 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74984,5120,1032, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.42  BV=-1.40
    {74984,5504,1024, 0, 0, 0},  //TV = 3.74(2884 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3205 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91650,5120,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91650,5504,1032, 0, 0, 0},  //TV = 3.45(3525 lines)  AV=2.28  SV=7.52  BV=-1.80
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {108316,5376,1024, 0, 0, 0},  //TV = 3.21(4166 lines)  AV=2.28  SV=7.48  BV=-1.99
    {116662,5376,1024, 0, 0, 0},  //TV = 3.10(4487 lines)  AV=2.28  SV=7.48  BV=-2.10
    {124982,5376,1024, 0, 0, 0},  //TV = 3.00(4807 lines)  AV=2.28  SV=7.48  BV=-2.20
    {124982,5760,1024, 0, 0, 0},  //TV = 3.00(4807 lines)  AV=2.28  SV=7.58  BV=-2.30
    {124982,6144,1032, 0, 0, 0},  //TV = 3.00(4807 lines)  AV=2.28  SV=7.68  BV=-2.41
    {124982,6544,1032, 0, 0, 0},  //TV = 3.00(4807 lines)  AV=2.28  SV=7.77  BV=-2.50
    {124982,7072,1024, 0, 0, 0},  //TV = 3.00(4807 lines)  AV=2.28  SV=7.87  BV=-2.60
    {124982,7472,1040, 0, 0, 0},  //TV = 3.00(4807 lines)  AV=2.28  SV=7.97  BV=-2.70
    {124982,7936,1048, 0, 0, 0},  //TV = 3.00(4807 lines)  AV=2.28  SV=8.07  BV=-2.80
    {124982,8720,1024, 0, 0, 0},  //TV = 3.00(4807 lines)  AV=2.28  SV=8.17  BV=-2.90
    {124982,9344,1024, 0, 0, 0},  //TV = 3.00(4807 lines)  AV=2.28  SV=8.27  BV=-3.00
    {124982,9696,1056, 0, 0, 0},  //TV = 3.00(4807 lines)  AV=2.28  SV=8.37  BV=-3.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {156,1216,1024, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.33  BV=9.59
    {156,1216,1104, 0, 0, 0},  //TV = 12.65(6 lines)  AV=2.28  SV=5.44  BV=9.48
    {182,1216,1024, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.33  BV=9.37
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(7 lines)  AV=2.28  SV=5.39  BV=9.31
    {208,1140,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.29  BV=9.21
    {208,1216,1064, 0, 0, 0},  //TV = 12.23(8 lines)  AV=2.28  SV=5.39  BV=9.12
    {234,1140,1088, 0, 0, 0},  //TV = 12.06(9 lines)  AV=2.28  SV=5.33  BV=9.01
    {260,1140,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.28  BV=8.90
    {260,1216,1056, 0, 0, 0},  //TV = 11.91(10 lines)  AV=2.28  SV=5.38  BV=8.81
    {286,1216,1024, 0, 0, 0},  //TV = 11.77(11 lines)  AV=2.28  SV=5.33  BV=8.71
    {312,1140,1072, 0, 0, 0},  //TV = 11.65(12 lines)  AV=2.28  SV=5.30  BV=8.62
    {338,1140,1064, 0, 0, 0},  //TV = 11.53(13 lines)  AV=2.28  SV=5.29  BV=8.51
    {364,1140,1056, 0, 0, 0},  //TV = 11.42(14 lines)  AV=2.28  SV=5.28  BV=8.42
    {390,1140,1056, 0, 0, 0},  //TV = 11.32(15 lines)  AV=2.28  SV=5.28  BV=8.32
    {416,1140,1064, 0, 0, 0},  //TV = 11.23(16 lines)  AV=2.28  SV=5.29  BV=8.21
    {442,1140,1072, 0, 0, 0},  //TV = 11.14(17 lines)  AV=2.28  SV=5.30  BV=8.11
    {494,1140,1032, 0, 0, 0},  //TV = 10.98(19 lines)  AV=2.28  SV=5.25  BV=8.01
    {520,1140,1056, 0, 0, 0},  //TV = 10.91(20 lines)  AV=2.28  SV=5.28  BV=7.90
    {546,1140,1072, 0, 0, 0},  //TV = 10.84(21 lines)  AV=2.28  SV=5.30  BV=7.81
    {598,1140,1048, 0, 0, 0},  //TV = 10.71(23 lines)  AV=2.28  SV=5.27  BV=7.71
    {624,1140,1072, 0, 0, 0},  //TV = 10.65(24 lines)  AV=2.28  SV=5.30  BV=7.62
    {676,1140,1064, 0, 0, 0},  //TV = 10.53(26 lines)  AV=2.28  SV=5.29  BV=7.51
    {728,1140,1056, 0, 0, 0},  //TV = 10.42(28 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(30 lines)  AV=2.28  SV=5.28  BV=7.32
    {858,1140,1032, 0, 0, 0},  //TV = 10.19(33 lines)  AV=2.28  SV=5.25  BV=7.21
    {910,1140,1048, 0, 0, 0},  //TV = 10.10(35 lines)  AV=2.28  SV=5.27  BV=7.10
    {988,1140,1032, 0, 0, 0},  //TV = 9.98(38 lines)  AV=2.28  SV=5.25  BV=7.01
    {1040,1140,1056, 0, 0, 0},  //TV = 9.91(40 lines)  AV=2.28  SV=5.28  BV=6.90
    {1118,1140,1048, 0, 0, 0},  //TV = 9.80(43 lines)  AV=2.28  SV=5.27  BV=6.81
    {1196,1140,1048, 0, 0, 0},  //TV = 9.71(46 lines)  AV=2.28  SV=5.27  BV=6.71
    {1300,1140,1032, 0, 0, 0},  //TV = 9.59(50 lines)  AV=2.28  SV=5.25  BV=6.61
    {1378,1140,1048, 0, 0, 0},  //TV = 9.50(53 lines)  AV=2.28  SV=5.27  BV=6.51
    {1482,1140,1040, 0, 0, 0},  //TV = 9.40(57 lines)  AV=2.28  SV=5.26  BV=6.41
    {1586,1140,1048, 0, 0, 0},  //TV = 9.30(61 lines)  AV=2.28  SV=5.27  BV=6.30
    {1716,1140,1032, 0, 0, 0},  //TV = 9.19(66 lines)  AV=2.28  SV=5.25  BV=6.21
    {1846,1140,1032, 0, 0, 0},  //TV = 9.08(71 lines)  AV=2.28  SV=5.25  BV=6.11
    {1950,1140,1048, 0, 0, 0},  //TV = 9.00(75 lines)  AV=2.28  SV=5.27  BV=6.01
    {2106,1140,1040, 0, 0, 0},  //TV = 8.89(81 lines)  AV=2.28  SV=5.26  BV=5.91
    {2262,1140,1040, 0, 0, 0},  //TV = 8.79(87 lines)  AV=2.28  SV=5.26  BV=5.80
    {2418,1140,1040, 0, 0, 0},  //TV = 8.69(93 lines)  AV=2.28  SV=5.26  BV=5.71
    {2600,1140,1032, 0, 0, 0},  //TV = 8.59(100 lines)  AV=2.28  SV=5.25  BV=5.61
    {2782,1140,1040, 0, 0, 0},  //TV = 8.49(107 lines)  AV=2.28  SV=5.26  BV=5.50
    {2964,1140,1040, 0, 0, 0},  //TV = 8.40(114 lines)  AV=2.28  SV=5.26  BV=5.41
    {3198,1140,1032, 0, 0, 0},  //TV = 8.29(123 lines)  AV=2.28  SV=5.25  BV=5.31
    {3432,1140,1032, 0, 0, 0},  //TV = 8.19(132 lines)  AV=2.28  SV=5.25  BV=5.21
    {3692,1140,1032, 0, 0, 0},  //TV = 8.08(142 lines)  AV=2.28  SV=5.25  BV=5.11
    {3952,1140,1032, 0, 0, 0},  //TV = 7.98(152 lines)  AV=2.28  SV=5.25  BV=5.01
    {4238,1140,1032, 0, 0, 0},  //TV = 7.88(163 lines)  AV=2.28  SV=5.25  BV=4.91
    {4524,1140,1032, 0, 0, 0},  //TV = 7.79(174 lines)  AV=2.28  SV=5.25  BV=4.81
    {4836,1140,1040, 0, 0, 0},  //TV = 7.69(186 lines)  AV=2.28  SV=5.26  BV=4.71
    {5200,1140,1032, 0, 0, 0},  //TV = 7.59(200 lines)  AV=2.28  SV=5.25  BV=4.61
    {5590,1140,1032, 0, 0, 0},  //TV = 7.48(215 lines)  AV=2.28  SV=5.25  BV=4.51
    {5980,1140,1040, 0, 0, 0},  //TV = 7.39(230 lines)  AV=2.28  SV=5.26  BV=4.40
    {6422,1140,1032, 0, 0, 0},  //TV = 7.28(247 lines)  AV=2.28  SV=5.25  BV=4.31
    {6864,1140,1032, 0, 0, 0},  //TV = 7.19(264 lines)  AV=2.28  SV=5.25  BV=4.21
    {7358,1140,1032, 0, 0, 0},  //TV = 7.09(283 lines)  AV=2.28  SV=5.25  BV=4.11
    {7878,1140,1032, 0, 0, 0},  //TV = 6.99(303 lines)  AV=2.28  SV=5.25  BV=4.01
    {8450,1140,1032, 0, 0, 0},  //TV = 6.89(325 lines)  AV=2.28  SV=5.25  BV=3.91
    {9048,1140,1032, 0, 0, 0},  //TV = 6.79(348 lines)  AV=2.28  SV=5.25  BV=3.81
    {9698,1140,1032, 0, 0, 0},  //TV = 6.69(373 lines)  AV=2.28  SV=5.25  BV=3.71
    {10010,1140,1072, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.30  BV=3.61
    {10010,1216,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.41  BV=3.51
    {10010,1328,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.50  BV=3.41
    {10010,1424,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.60  BV=3.31
    {10010,1536,1056, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.71  BV=3.20
    {10010,1632,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.81  BV=3.11
    {10010,1728,1080, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=5.92  BV=3.00
    {10010,1936,1032, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.01  BV=2.90
    {10010,2048,1040, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.11  BV=2.81
    {10010,2144,1064, 0, 0, 0},  //TV = 6.64(385 lines)  AV=2.28  SV=6.21  BV=2.71
    {19994,1140,1072, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.30  BV=2.61
    {19994,1216,1080, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.41  BV=2.51
    {19994,1328,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.51  BV=2.40
    {19994,1424,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.62  BV=2.30
    {19994,1536,1056, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.71  BV=2.21
    {19994,1632,1064, 0, 0, 0},  //TV = 5.64(769 lines)  AV=2.28  SV=5.81  BV=2.11
    {30004,1140,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.33  BV=2.01
    {30004,1216,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.42  BV=1.91
    {30004,1328,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.53  BV=1.81
    {30004,1424,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.63  BV=1.71
    {30004,1536,1064, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.72  BV=1.61
    {30004,1632,1072, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.82  BV=1.51
    {30004,1728,1088, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=5.93  BV=1.41
    {30004,1936,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.03  BV=1.31
    {30004,2048,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.13  BV=1.21
    {30004,2240,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.22  BV=1.11
    {30004,2352,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.33  BV=1.01
    {30004,2560,1040, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.43  BV=0.91
    {30004,2752,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.52  BV=0.81
    {30004,2960,1032, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.63  BV=0.71
    {30004,3200,1024, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.73  BV=0.61
    {30004,3328,1056, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.83  BV=0.50
    {30004,3584,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=6.92  BV=0.41
    {30004,3840,1048, 0, 0, 0},  //TV = 5.06(1154 lines)  AV=2.28  SV=7.02  BV=0.31
    {39988,3072,1056, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.71  BV=0.21
    {39988,3328,1040, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.81  BV=0.11
    {39988,3584,1048, 0, 0, 0},  //TV = 4.64(1538 lines)  AV=2.28  SV=6.92  BV=-0.01
    {49998,3072,1048, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49998,3328,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49998,3584,1032, 0, 0, 0},  //TV = 4.32(1923 lines)  AV=2.28  SV=6.90  BV=-0.31
    {60008,3200,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.73  BV=-0.39
    {60008,3328,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.83  BV=-0.50
    {60008,3584,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=6.94  BV=-0.60
    {60008,3840,1056, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.04  BV=-0.70
    {60008,4224,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.13  BV=-0.79
    {60008,4480,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.24  BV=-0.90
    {60008,4864,1024, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.33  BV=-1.00
    {60008,5120,1048, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.44  BV=-1.11
    {60008,5504,1040, 0, 0, 0},  //TV = 4.06(2308 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69992,5120,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69992,5504,1024, 0, 0, 0},  //TV = 3.84(2692 lines)  AV=2.28  SV=7.51  BV=-1.40
    {80002,5120,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.42  BV=-1.50
    {80002,5504,1032, 0, 0, 0},  //TV = 3.64(3077 lines)  AV=2.28  SV=7.52  BV=-1.60
    {90012,5248,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.44  BV=-1.69
    {90012,5632,1024, 0, 0, 0},  //TV = 3.47(3462 lines)  AV=2.28  SV=7.54  BV=-1.79
    {99996,5376,1040, 0, 0, 0},  //TV = 3.32(3846 lines)  AV=2.28  SV=7.50  BV=-1.90
    {110006,5248,1032, 0, 0, 0},  //TV = 3.18(4231 lines)  AV=2.28  SV=7.45  BV=-1.99
    {119990,5120,1040, 0, 0, 0},  //TV = 3.06(4615 lines)  AV=2.28  SV=7.43  BV=-2.09
    {119990,5504,1040, 0, 0, 0},  //TV = 3.06(4615 lines)  AV=2.28  SV=7.53  BV=-2.20
    {119990,6016,1024, 0, 0, 0},  //TV = 3.06(4615 lines)  AV=2.28  SV=7.64  BV=-2.30
    {119990,6384,1032, 0, 0, 0},  //TV = 3.06(4615 lines)  AV=2.28  SV=7.74  BV=-2.40
    {119990,6896,1024, 0, 0, 0},  //TV = 3.06(4615 lines)  AV=2.28  SV=7.84  BV=-2.50
    {119990,7280,1040, 0, 0, 0},  //TV = 3.06(4615 lines)  AV=2.28  SV=7.94  BV=-2.60
    {119990,7696,1048, 0, 0, 0},  //TV = 3.06(4615 lines)  AV=2.28  SV=8.03  BV=-2.69
    {119990,8448,1024, 0, 0, 0},  //TV = 3.06(4615 lines)  AV=2.28  SV=8.13  BV=-2.79
    {119990,9040,1024, 0, 0, 0},  //TV = 3.06(4615 lines)  AV=2.28  SV=8.23  BV=-2.89
    {119990,9696,1024, 0, 0, 0},  //TV = 3.06(4615 lines)  AV=2.28  SV=8.33  BV=-2.99
    {119990,10080,1056, 0, 0, 0},  //TV = 3.06(4615 lines)  AV=2.28  SV=8.43  BV=-3.09
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    128,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -31,    //i4MinBV
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {33343,1536,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.68  BV=1.50
    {33343,1632,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.77  BV=1.41
    {33343,1728,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.86  BV=1.32
    {33343,1840,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.97  BV=1.21
    {33343,1936,1072, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.07  BV=1.11
    {33343,2144,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.16  BV=1.02
    {33343,2240,1064, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.27  BV=0.91
    {33343,2448,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.36  BV=0.82
    {33343,2656,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.47  BV=0.71
    {33343,2864,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.58  BV=0.60
    {33343,3072,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.68  BV=0.50
    {33343,3200,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.77  BV=0.41
    {33343,3456,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.87  BV=0.31
    {33343,3712,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58323,3072,1032, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58323,3200,1056, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3328,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74994,5120,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.41  BV=-1.39
    {74994,5504,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3099 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91665,5120,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91665,5504,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.52  BV=-1.80
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {30009,1536,1064, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.72  BV=1.61
    {30009,1632,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.82  BV=1.51
    {30009,1728,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.93  BV=1.41
    {30009,1936,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.03  BV=1.31
    {30009,2048,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.13  BV=1.21
    {30009,2240,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.21  BV=1.12
    {30009,2352,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.33  BV=1.01
    {30009,2560,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.43  BV=0.91
    {30009,2752,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.52  BV=0.81
    {30009,2960,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.63  BV=0.71
    {30009,3200,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.73  BV=0.61
    {30009,3328,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.83  BV=0.50
    {30009,3584,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.92  BV=0.41
    {30009,3840,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=7.02  BV=0.31
    {40011,3072,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.71  BV=0.21
    {40011,3328,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.81  BV=0.11
    {40011,3584,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.91  BV=0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49987,3584,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.90  BV=-0.31
    {59990,3200,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.73  BV=-0.39
    {59990,3456,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.84  BV=-0.50
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.44  BV=-1.11
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69993,5120,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69993,5504,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.51  BV=-1.40
    {79995,5120,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.42  BV=-1.50
    {79995,5504,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.52  BV=-1.60
    {89998,5248,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.44  BV=-1.69
    {89998,5632,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.54  BV=-1.79
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {33343,1536,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.68  BV=1.50
    {33343,1632,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.77  BV=1.41
    {33343,1728,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.86  BV=1.32
    {33343,1840,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.97  BV=1.21
    {33343,1936,1072, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.07  BV=1.11
    {33343,2144,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.16  BV=1.02
    {33343,2240,1064, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.27  BV=0.91
    {33343,2448,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.36  BV=0.82
    {33343,2656,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.47  BV=0.71
    {33343,2864,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.58  BV=0.60
    {33343,3072,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.68  BV=0.50
    {33343,3200,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.77  BV=0.41
    {33343,3456,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.87  BV=0.31
    {33343,3712,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58323,3072,1032, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58323,3200,1056, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3328,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74994,5120,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.41  BV=-1.39
    {74994,5504,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3099 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91665,5120,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91665,5504,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.52  BV=-1.80
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {30009,1536,1064, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.72  BV=1.61
    {30009,1632,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.82  BV=1.51
    {30009,1728,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.93  BV=1.41
    {30009,1936,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.03  BV=1.31
    {30009,2048,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.13  BV=1.21
    {30009,2240,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.21  BV=1.12
    {30009,2352,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.33  BV=1.01
    {30009,2560,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.43  BV=0.91
    {30009,2752,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.52  BV=0.81
    {30009,2960,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.63  BV=0.71
    {30009,3200,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.73  BV=0.61
    {30009,3328,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.83  BV=0.50
    {30009,3584,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.92  BV=0.41
    {30009,3840,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=7.02  BV=0.31
    {40011,3072,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.71  BV=0.21
    {40011,3328,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.81  BV=0.11
    {40011,3584,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.91  BV=0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49987,3584,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.90  BV=-0.31
    {59990,3200,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.73  BV=-0.39
    {59990,3456,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.84  BV=-0.50
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.44  BV=-1.11
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69993,5120,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69993,5504,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.51  BV=-1.40
    {79995,5120,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.42  BV=-1.50
    {79995,5504,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.52  BV=-1.60
    {89998,5248,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.44  BV=-1.69
    {89998,5632,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.54  BV=-1.79
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {33343,1536,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.68  BV=1.50
    {33343,1632,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.77  BV=1.41
    {33343,1728,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.86  BV=1.32
    {33343,1840,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.97  BV=1.21
    {33343,1936,1072, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.07  BV=1.11
    {33343,2144,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.16  BV=1.02
    {33343,2240,1064, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.27  BV=0.91
    {33343,2448,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.36  BV=0.82
    {33343,2656,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.47  BV=0.71
    {33343,2864,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.58  BV=0.60
    {33343,3072,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.68  BV=0.50
    {33343,3200,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.77  BV=0.41
    {33343,3456,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.87  BV=0.31
    {33343,3712,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58323,3072,1032, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58323,3200,1056, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3328,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74994,5120,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.41  BV=-1.39
    {74994,5504,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3099 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91665,5120,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91665,5504,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.52  BV=-1.80
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {30009,1536,1064, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.72  BV=1.61
    {30009,1632,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.82  BV=1.51
    {30009,1728,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.93  BV=1.41
    {30009,1936,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.03  BV=1.31
    {30009,2048,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.13  BV=1.21
    {30009,2240,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.21  BV=1.12
    {30009,2352,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.33  BV=1.01
    {30009,2560,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.43  BV=0.91
    {30009,2752,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.52  BV=0.81
    {30009,2960,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.63  BV=0.71
    {30009,3200,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.73  BV=0.61
    {30009,3328,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.83  BV=0.50
    {30009,3584,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.92  BV=0.41
    {30009,3840,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=7.02  BV=0.31
    {40011,3072,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.71  BV=0.21
    {40011,3328,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.81  BV=0.11
    {40011,3584,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.91  BV=0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49987,3584,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.90  BV=-0.31
    {59990,3200,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.73  BV=-0.39
    {59990,3456,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.84  BV=-0.50
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.44  BV=-1.11
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69993,5120,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69993,5504,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.51  BV=-1.40
    {79995,5120,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.42  BV=-1.50
    {79995,5504,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.52  BV=-1.60
    {89998,5248,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.44  BV=-1.69
    {89998,5632,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.54  BV=-1.79
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {33343,1536,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.68  BV=1.50
    {33343,1632,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.77  BV=1.41
    {33343,1728,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.86  BV=1.32
    {33343,1840,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.97  BV=1.21
    {33343,1936,1072, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.07  BV=1.11
    {33343,2144,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.16  BV=1.02
    {33343,2240,1064, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.27  BV=0.91
    {33343,2448,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.36  BV=0.82
    {33343,2656,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.47  BV=0.71
    {33343,2864,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.58  BV=0.60
    {33343,3072,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.68  BV=0.50
    {33343,3200,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.77  BV=0.41
    {33343,3456,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.87  BV=0.31
    {33343,3712,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58323,3072,1032, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58323,3200,1056, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3328,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74994,5120,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.41  BV=-1.39
    {74994,5504,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3099 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91665,5120,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91665,5504,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.52  BV=-1.80
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {30009,1536,1064, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.72  BV=1.61
    {30009,1632,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.82  BV=1.51
    {30009,1728,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.93  BV=1.41
    {30009,1936,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.03  BV=1.31
    {30009,2048,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.13  BV=1.21
    {30009,2240,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.21  BV=1.12
    {30009,2352,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.33  BV=1.01
    {30009,2560,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.43  BV=0.91
    {30009,2752,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.52  BV=0.81
    {30009,2960,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.63  BV=0.71
    {30009,3200,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.73  BV=0.61
    {30009,3328,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.83  BV=0.50
    {30009,3584,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.92  BV=0.41
    {30009,3840,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=7.02  BV=0.31
    {40011,3072,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.71  BV=0.21
    {40011,3328,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.81  BV=0.11
    {40011,3584,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.91  BV=0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49987,3584,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.90  BV=-0.31
    {59990,3200,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.73  BV=-0.39
    {59990,3456,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.84  BV=-0.50
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.44  BV=-1.11
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69993,5120,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69993,5504,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.51  BV=-1.40
    {79995,5120,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.42  BV=-1.50
    {79995,5504,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.52  BV=-1.60
    {89998,5248,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.44  BV=-1.69
    {89998,5632,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.54  BV=-1.79
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {33343,1536,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.68  BV=1.50
    {33343,1632,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.77  BV=1.41
    {33343,1728,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.86  BV=1.32
    {33343,1840,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.97  BV=1.21
    {33343,1936,1072, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.07  BV=1.11
    {33343,2144,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.16  BV=1.02
    {33343,2240,1064, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.27  BV=0.91
    {33343,2448,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.36  BV=0.82
    {33343,2656,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.47  BV=0.71
    {33343,2864,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.58  BV=0.60
    {33343,3072,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.68  BV=0.50
    {33343,3200,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.77  BV=0.41
    {33343,3456,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.87  BV=0.31
    {33343,3712,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58323,3072,1032, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58323,3200,1056, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3328,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74994,5120,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.41  BV=-1.39
    {74994,5504,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3099 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91665,5120,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91665,5504,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.52  BV=-1.80
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {30009,1536,1064, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.72  BV=1.61
    {30009,1632,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.82  BV=1.51
    {30009,1728,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.93  BV=1.41
    {30009,1936,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.03  BV=1.31
    {30009,2048,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.13  BV=1.21
    {30009,2240,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.21  BV=1.12
    {30009,2352,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.33  BV=1.01
    {30009,2560,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.43  BV=0.91
    {30009,2752,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.52  BV=0.81
    {30009,2960,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.63  BV=0.71
    {30009,3200,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.73  BV=0.61
    {30009,3328,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.83  BV=0.50
    {30009,3584,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.92  BV=0.41
    {30009,3840,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=7.02  BV=0.31
    {40011,3072,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.71  BV=0.21
    {40011,3328,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.81  BV=0.11
    {40011,3584,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.91  BV=0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49987,3584,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.90  BV=-0.31
    {59990,3200,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.73  BV=-0.39
    {59990,3456,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.84  BV=-0.50
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.44  BV=-1.11
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69993,5120,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69993,5504,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.51  BV=-1.40
    {79995,5120,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.42  BV=-1.50
    {79995,5504,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.52  BV=-1.60
    {89998,5248,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.44  BV=-1.69
    {89998,5632,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.54  BV=-1.79
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {33343,1536,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.68  BV=1.50
    {33343,1632,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.77  BV=1.41
    {33343,1728,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.86  BV=1.32
    {33343,1840,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.97  BV=1.21
    {33343,1936,1072, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.07  BV=1.11
    {33343,2144,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.16  BV=1.02
    {33343,2240,1064, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.27  BV=0.91
    {33343,2448,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.36  BV=0.82
    {33343,2656,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.47  BV=0.71
    {33343,2864,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.58  BV=0.60
    {33343,3072,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.68  BV=0.50
    {33343,3200,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.77  BV=0.41
    {33343,3456,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.87  BV=0.31
    {33343,3712,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58323,3072,1032, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58323,3200,1056, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3328,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74994,5120,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.41  BV=-1.39
    {74994,5504,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3099 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91665,5120,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91665,5504,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.52  BV=-1.80
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {30009,1536,1064, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.72  BV=1.61
    {30009,1632,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.82  BV=1.51
    {30009,1728,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.93  BV=1.41
    {30009,1936,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.03  BV=1.31
    {30009,2048,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.13  BV=1.21
    {30009,2240,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.21  BV=1.12
    {30009,2352,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.33  BV=1.01
    {30009,2560,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.43  BV=0.91
    {30009,2752,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.52  BV=0.81
    {30009,2960,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.63  BV=0.71
    {30009,3200,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.73  BV=0.61
    {30009,3328,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.83  BV=0.50
    {30009,3584,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.92  BV=0.41
    {30009,3840,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=7.02  BV=0.31
    {40011,3072,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.71  BV=0.21
    {40011,3328,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.81  BV=0.11
    {40011,3584,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.91  BV=0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49987,3584,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.90  BV=-0.31
    {59990,3200,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.73  BV=-0.39
    {59990,3456,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.84  BV=-0.50
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.44  BV=-1.11
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69993,5120,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69993,5504,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.51  BV=-1.40
    {79995,5120,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.42  BV=-1.50
    {79995,5504,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.52  BV=-1.60
    {89998,5248,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.44  BV=-1.69
    {89998,5632,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.54  BV=-1.79
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {33343,1536,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.68  BV=1.50
    {33343,1632,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.77  BV=1.41
    {33343,1728,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.86  BV=1.32
    {33343,1840,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.97  BV=1.21
    {33343,1936,1072, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.07  BV=1.11
    {33343,2144,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.16  BV=1.02
    {33343,2240,1064, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.27  BV=0.91
    {33343,2448,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.36  BV=0.82
    {33343,2656,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.47  BV=0.71
    {33343,2864,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.58  BV=0.60
    {33343,3072,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.68  BV=0.50
    {33343,3200,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.77  BV=0.41
    {33343,3456,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.87  BV=0.31
    {33343,3712,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58323,3072,1032, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58323,3200,1056, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3328,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74994,5120,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.41  BV=-1.39
    {74994,5504,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3099 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91665,5120,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91665,5504,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.52  BV=-1.80
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {30009,1536,1064, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.72  BV=1.61
    {30009,1632,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.82  BV=1.51
    {30009,1728,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.93  BV=1.41
    {30009,1936,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.03  BV=1.31
    {30009,2048,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.13  BV=1.21
    {30009,2240,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.21  BV=1.12
    {30009,2352,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.33  BV=1.01
    {30009,2560,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.43  BV=0.91
    {30009,2752,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.52  BV=0.81
    {30009,2960,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.63  BV=0.71
    {30009,3200,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.73  BV=0.61
    {30009,3328,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.83  BV=0.50
    {30009,3584,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.92  BV=0.41
    {30009,3840,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=7.02  BV=0.31
    {40011,3072,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.71  BV=0.21
    {40011,3328,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.81  BV=0.11
    {40011,3584,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.91  BV=0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49987,3584,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.90  BV=-0.31
    {59990,3200,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.73  BV=-0.39
    {59990,3456,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.84  BV=-0.50
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.44  BV=-1.11
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69993,5120,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69993,5504,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.51  BV=-1.40
    {79995,5120,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.42  BV=-1.50
    {79995,5504,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.52  BV=-1.60
    {89998,5248,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.44  BV=-1.69
    {89998,5632,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.54  BV=-1.79
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {33343,1536,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.68  BV=1.50
    {33343,1632,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.77  BV=1.41
    {33343,1728,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.86  BV=1.32
    {33343,1840,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.97  BV=1.21
    {33343,1936,1072, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.07  BV=1.11
    {33343,2144,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.16  BV=1.02
    {33343,2240,1064, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.27  BV=0.91
    {33343,2448,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.36  BV=0.82
    {33343,2656,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.47  BV=0.71
    {33343,2864,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.58  BV=0.60
    {33343,3072,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.68  BV=0.50
    {33343,3200,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.77  BV=0.41
    {33343,3456,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.87  BV=0.31
    {33343,3712,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58323,3072,1032, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58323,3200,1056, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3328,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74994,5120,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.41  BV=-1.39
    {74994,5504,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3099 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91665,5120,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91665,5504,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.52  BV=-1.80
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {30009,1536,1064, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.72  BV=1.61
    {30009,1632,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.82  BV=1.51
    {30009,1728,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.93  BV=1.41
    {30009,1936,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.03  BV=1.31
    {30009,2048,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.13  BV=1.21
    {30009,2240,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.21  BV=1.12
    {30009,2352,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.33  BV=1.01
    {30009,2560,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.43  BV=0.91
    {30009,2752,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.52  BV=0.81
    {30009,2960,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.63  BV=0.71
    {30009,3200,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.73  BV=0.61
    {30009,3328,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.83  BV=0.50
    {30009,3584,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.92  BV=0.41
    {30009,3840,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=7.02  BV=0.31
    {40011,3072,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.71  BV=0.21
    {40011,3328,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.81  BV=0.11
    {40011,3584,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.91  BV=0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49987,3584,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.90  BV=-0.31
    {59990,3200,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.73  BV=-0.39
    {59990,3456,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.84  BV=-0.50
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.44  BV=-1.11
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69993,5120,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69993,5504,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.51  BV=-1.40
    {79995,5120,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.42  BV=-1.50
    {79995,5504,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.52  BV=-1.60
    {89998,5248,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.44  BV=-1.69
    {89998,5632,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.54  BV=-1.79
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {33343,1536,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.68  BV=1.50
    {33343,1632,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.77  BV=1.41
    {33343,1728,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.86  BV=1.32
    {33343,1840,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.97  BV=1.21
    {33343,1936,1072, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.07  BV=1.11
    {33343,2144,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.16  BV=1.02
    {33343,2240,1064, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.27  BV=0.91
    {33343,2448,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.36  BV=0.82
    {33343,2656,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.47  BV=0.71
    {33343,2864,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.58  BV=0.60
    {33343,3072,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.68  BV=0.50
    {33343,3200,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.77  BV=0.41
    {33343,3456,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.87  BV=0.31
    {33343,3712,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58323,3072,1032, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58323,3200,1056, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3328,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74994,5120,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.41  BV=-1.39
    {74994,5504,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3099 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91665,5120,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91665,5504,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.52  BV=-1.80
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {30009,1536,1064, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.72  BV=1.61
    {30009,1632,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.82  BV=1.51
    {30009,1728,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.93  BV=1.41
    {30009,1936,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.03  BV=1.31
    {30009,2048,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.13  BV=1.21
    {30009,2240,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.21  BV=1.12
    {30009,2352,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.33  BV=1.01
    {30009,2560,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.43  BV=0.91
    {30009,2752,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.52  BV=0.81
    {30009,2960,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.63  BV=0.71
    {30009,3200,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.73  BV=0.61
    {30009,3328,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.83  BV=0.50
    {30009,3584,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.92  BV=0.41
    {30009,3840,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=7.02  BV=0.31
    {40011,3072,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.71  BV=0.21
    {40011,3328,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.81  BV=0.11
    {40011,3584,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.91  BV=0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49987,3584,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.90  BV=-0.31
    {59990,3200,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.73  BV=-0.39
    {59990,3456,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.84  BV=-0.50
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.44  BV=-1.11
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69993,5120,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69993,5504,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.51  BV=-1.40
    {79995,5120,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.42  BV=-1.50
    {79995,5504,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.52  BV=-1.60
    {89998,5248,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.44  BV=-1.69
    {89998,5632,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.54  BV=-1.79
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {33343,1536,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.68  BV=1.50
    {33343,1632,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.77  BV=1.41
    {33343,1728,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.86  BV=1.32
    {33343,1840,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.97  BV=1.21
    {33343,1936,1072, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.07  BV=1.11
    {33343,2144,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.16  BV=1.02
    {33343,2240,1064, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.27  BV=0.91
    {33343,2448,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.36  BV=0.82
    {33343,2656,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.47  BV=0.71
    {33343,2864,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.58  BV=0.60
    {33343,3072,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.68  BV=0.50
    {33343,3200,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.77  BV=0.41
    {33343,3456,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.87  BV=0.31
    {33343,3712,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58323,3072,1032, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58323,3200,1056, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3328,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74994,5120,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.41  BV=-1.39
    {74994,5504,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3099 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91665,5120,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91665,5504,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.52  BV=-1.80
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {30009,1536,1064, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.72  BV=1.61
    {30009,1632,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.82  BV=1.51
    {30009,1728,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.93  BV=1.41
    {30009,1936,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.03  BV=1.31
    {30009,2048,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.13  BV=1.21
    {30009,2240,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.21  BV=1.12
    {30009,2352,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.33  BV=1.01
    {30009,2560,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.43  BV=0.91
    {30009,2752,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.52  BV=0.81
    {30009,2960,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.63  BV=0.71
    {30009,3200,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.73  BV=0.61
    {30009,3328,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.83  BV=0.50
    {30009,3584,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.92  BV=0.41
    {30009,3840,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=7.02  BV=0.31
    {40011,3072,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.71  BV=0.21
    {40011,3328,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.81  BV=0.11
    {40011,3584,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.91  BV=0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49987,3584,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.90  BV=-0.31
    {59990,3200,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.73  BV=-0.39
    {59990,3456,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.84  BV=-0.50
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.44  BV=-1.11
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69993,5120,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69993,5504,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.51  BV=-1.40
    {79995,5120,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.42  BV=-1.50
    {79995,5504,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.52  BV=-1.60
    {89998,5248,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.44  BV=-1.69
    {89998,5632,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.54  BV=-1.79
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {33343,1536,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.68  BV=1.50
    {33343,1632,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.77  BV=1.41
    {33343,1728,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.86  BV=1.32
    {33343,1840,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.97  BV=1.21
    {33343,1936,1072, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.07  BV=1.11
    {33343,2144,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.16  BV=1.02
    {33343,2240,1064, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.27  BV=0.91
    {33343,2448,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.36  BV=0.82
    {33343,2656,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.47  BV=0.71
    {33343,2864,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.58  BV=0.60
    {33343,3072,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.68  BV=0.50
    {33343,3200,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.77  BV=0.41
    {33343,3456,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.87  BV=0.31
    {33343,3712,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58323,3072,1032, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58323,3200,1056, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3328,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74994,5120,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.41  BV=-1.39
    {74994,5504,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3099 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91665,5120,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91665,5504,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.52  BV=-1.80
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {30009,1536,1064, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.72  BV=1.61
    {30009,1632,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.82  BV=1.51
    {30009,1728,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.93  BV=1.41
    {30009,1936,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.03  BV=1.31
    {30009,2048,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.13  BV=1.21
    {30009,2240,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.21  BV=1.12
    {30009,2352,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.33  BV=1.01
    {30009,2560,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.43  BV=0.91
    {30009,2752,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.52  BV=0.81
    {30009,2960,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.63  BV=0.71
    {30009,3200,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.73  BV=0.61
    {30009,3328,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.83  BV=0.50
    {30009,3584,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.92  BV=0.41
    {30009,3840,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=7.02  BV=0.31
    {40011,3072,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.71  BV=0.21
    {40011,3328,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.81  BV=0.11
    {40011,3584,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.91  BV=0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49987,3584,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.90  BV=-0.31
    {59990,3200,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.73  BV=-0.39
    {59990,3456,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.84  BV=-0.50
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.44  BV=-1.11
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69993,5120,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69993,5504,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.51  BV=-1.40
    {79995,5120,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.42  BV=-1.50
    {79995,5504,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.52  BV=-1.60
    {89998,5248,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.44  BV=-1.69
    {89998,5632,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.54  BV=-1.79
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {100001,5760,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.60  BV=-2.00
    {100001,6240,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.69  BV=-2.09
    {100001,6704,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.79  BV=-2.20
    {100001,7072,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.89  BV=-2.30
    {100001,7696,1024, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.99  BV=-2.40
    {100001,8192,1032, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.10  BV=-2.50
    {100001,8720,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.20  BV=-2.60
    {100001,9344,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.30  BV=-2.70
    {100001,10080,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=8.41  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    125,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -28,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene5PLineTable_60Hz,
    sAEScene5PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene6PLineTable_60Hz =
{
{
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8336,1140,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.27  BV=3.91
    {8336,1216,1056, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.38  BV=3.81
    {8336,1328,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.47  BV=3.71
    {8336,1424,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.57  BV=3.61
    {8336,1536,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.68  BV=3.50
    {8336,1632,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.78  BV=3.40
    {8336,1728,1040, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.86  BV=3.32
    {8336,1840,1048, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=5.96  BV=3.22
    {8336,1936,1072, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.07  BV=3.11
    {8336,2144,1032, 0, 0, 0},  //TV = 6.91(310 lines)  AV=2.28  SV=6.16  BV=3.02
    {16672,1140,1048, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.27  BV=2.91
    {16672,1216,1056, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.38  BV=2.81
    {16672,1328,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.47  BV=2.71
    {16672,1424,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.57  BV=2.61
    {16672,1536,1024, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.67  BV=2.51
    {16672,1632,1032, 0, 0, 0},  //TV = 5.91(620 lines)  AV=2.28  SV=5.77  BV=2.41
    {25007,1140,1056, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.28  BV=2.31
    {25007,1216,1064, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.39  BV=2.21
    {25007,1328,1048, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.49  BV=2.10
    {25007,1424,1040, 0, 0, 0},  //TV = 5.32(930 lines)  AV=2.28  SV=5.58  BV=2.01
    {33343,1140,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.27  BV=1.91
    {33343,1216,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.38  BV=1.81
    {33343,1328,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.47  BV=1.71
    {33343,1424,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.57  BV=1.61
    {33343,1536,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.68  BV=1.50
    {33343,1632,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.77  BV=1.41
    {33343,1728,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.86  BV=1.32
    {33343,1840,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=5.97  BV=1.21
    {33343,1936,1072, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.07  BV=1.11
    {33343,2144,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.16  BV=1.02
    {33343,2240,1064, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.27  BV=0.91
    {33343,2448,1040, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.36  BV=0.82
    {33343,2656,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.47  BV=0.71
    {33343,2864,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.58  BV=0.60
    {33343,3072,1032, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.68  BV=0.50
    {33343,3200,1056, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.77  BV=0.41
    {33343,3456,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.87  BV=0.31
    {33343,3712,1048, 0, 0, 0},  //TV = 4.91(1240 lines)  AV=2.28  SV=6.98  BV=0.21
    {41652,3200,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.75  BV=0.11
    {41652,3456,1040, 0, 0, 0},  //TV = 4.59(1549 lines)  AV=2.28  SV=6.86  BV=-0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {58323,3072,1032, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.68  BV=-0.31
    {58323,3200,1056, 0, 0, 0},  //TV = 4.10(2169 lines)  AV=2.28  SV=6.77  BV=-0.40
    {66658,3072,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.68  BV=-0.50
    {66658,3328,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.78  BV=-0.60
    {66658,3456,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.88  BV=-0.70
    {66658,3712,1056, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=6.99  BV=-0.80
    {66658,4096,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.08  BV=-0.90
    {66658,4352,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.18  BV=-1.00
    {66658,4608,1048, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.29  BV=-1.11
    {66658,4992,1032, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.38  BV=-1.20
    {66658,5376,1024, 0, 0, 0},  //TV = 3.91(2479 lines)  AV=2.28  SV=7.48  BV=-1.29
    {74994,5120,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.41  BV=-1.39
    {74994,5504,1024, 0, 0, 0},  //TV = 3.74(2789 lines)  AV=2.28  SV=7.51  BV=-1.50
    {83330,5248,1032, 0, 0, 0},  //TV = 3.59(3099 lines)  AV=2.28  SV=7.45  BV=-1.59
    {91665,5120,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.42  BV=-1.69
    {91665,5504,1032, 0, 0, 0},  //TV = 3.45(3409 lines)  AV=2.28  SV=7.52  BV=-1.80
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {108336,5376,1024, 0, 0, 0},  //TV = 3.21(4029 lines)  AV=2.28  SV=7.48  BV=-1.99
    {116672,5376,1024, 0, 0, 0},  //TV = 3.10(4339 lines)  AV=2.28  SV=7.48  BV=-2.10
    {125008,5376,1024, 0, 0, 0},  //TV = 3.00(4649 lines)  AV=2.28  SV=7.48  BV=-2.20
    {125008,5760,1024, 0, 0, 0},  //TV = 3.00(4649 lines)  AV=2.28  SV=7.58  BV=-2.30
    {125008,6144,1032, 0, 0, 0},  //TV = 3.00(4649 lines)  AV=2.28  SV=7.68  BV=-2.41
    {125008,6544,1032, 0, 0, 0},  //TV = 3.00(4649 lines)  AV=2.28  SV=7.77  BV=-2.50
    {125008,7072,1024, 0, 0, 0},  //TV = 3.00(4649 lines)  AV=2.28  SV=7.87  BV=-2.60
    {125008,7472,1040, 0, 0, 0},  //TV = 3.00(4649 lines)  AV=2.28  SV=7.97  BV=-2.70
    {125008,7936,1048, 0, 0, 0},  //TV = 3.00(4649 lines)  AV=2.28  SV=8.07  BV=-2.80
    {125008,8720,1024, 0, 0, 0},  //TV = 3.00(4649 lines)  AV=2.28  SV=8.17  BV=-2.90
    {125008,9344,1024, 0, 0, 0},  //TV = 3.00(4649 lines)  AV=2.28  SV=8.27  BV=-3.00
    {125008,9696,1056, 0, 0, 0},  //TV = 3.00(4649 lines)  AV=2.28  SV=8.37  BV=-3.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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

static strEvPline sAEScene6PLineTable_50Hz =
{
{
    {162,1140,1056, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.28  BV=9.58
    {162,1216,1064, 0, 0, 0},  //TV = 12.59(6 lines)  AV=2.28  SV=5.39  BV=9.48
    {189,1140,1056, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.28  BV=9.36
    {189,1216,1024, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.33  BV=9.31
    {189,1216,1104, 0, 0, 0},  //TV = 12.37(7 lines)  AV=2.28  SV=5.44  BV=9.20
    {216,1216,1032, 0, 0, 0},  //TV = 12.18(8 lines)  AV=2.28  SV=5.34  BV=9.11
    {243,1140,1048, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.27  BV=9.01
    {243,1216,1056, 0, 0, 0},  //TV = 12.01(9 lines)  AV=2.28  SV=5.38  BV=8.91
    {269,1140,1088, 0, 0, 0},  //TV = 11.86(10 lines)  AV=2.28  SV=5.33  BV=8.81
    {296,1140,1056, 0, 0, 0},  //TV = 11.72(11 lines)  AV=2.28  SV=5.28  BV=8.71
    {323,1140,1040, 0, 0, 0},  //TV = 11.60(12 lines)  AV=2.28  SV=5.26  BV=8.61
    {350,1140,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.25  BV=8.51
    {350,1216,1032, 0, 0, 0},  //TV = 11.48(13 lines)  AV=2.28  SV=5.34  BV=8.41
    {377,1216,1024, 0, 0, 0},  //TV = 11.37(14 lines)  AV=2.28  SV=5.33  BV=8.32
    {404,1216,1024, 0, 0, 0},  //TV = 11.27(15 lines)  AV=2.28  SV=5.33  BV=8.22
    {458,1140,1040, 0, 0, 0},  //TV = 11.09(17 lines)  AV=2.28  SV=5.26  BV=8.11
    {485,1140,1056, 0, 0, 0},  //TV = 11.01(18 lines)  AV=2.28  SV=5.28  BV=8.00
    {511,1140,1064, 0, 0, 0},  //TV = 10.93(19 lines)  AV=2.28  SV=5.29  BV=7.92
    {565,1140,1040, 0, 0, 0},  //TV = 10.79(21 lines)  AV=2.28  SV=5.26  BV=7.80
    {592,1140,1056, 0, 0, 0},  //TV = 10.72(22 lines)  AV=2.28  SV=5.28  BV=7.71
    {646,1140,1040, 0, 0, 0},  //TV = 10.60(24 lines)  AV=2.28  SV=5.26  BV=7.61
    {673,1140,1064, 0, 0, 0},  //TV = 10.54(25 lines)  AV=2.28  SV=5.29  BV=7.52
    {727,1140,1056, 0, 0, 0},  //TV = 10.43(27 lines)  AV=2.28  SV=5.28  BV=7.42
    {780,1140,1056, 0, 0, 0},  //TV = 10.32(29 lines)  AV=2.28  SV=5.28  BV=7.32
    {834,1140,1056, 0, 0, 0},  //TV = 10.23(31 lines)  AV=2.28  SV=5.28  BV=7.22
    {915,1140,1040, 0, 0, 0},  //TV = 10.09(34 lines)  AV=2.28  SV=5.26  BV=7.11
    {969,1140,1056, 0, 0, 0},  //TV = 10.01(36 lines)  AV=2.28  SV=5.28  BV=7.00
    {1049,1140,1040, 0, 0, 0},  //TV = 9.90(39 lines)  AV=2.28  SV=5.26  BV=6.91
    {1130,1140,1040, 0, 0, 0},  //TV = 9.79(42 lines)  AV=2.28  SV=5.26  BV=6.80
    {1211,1140,1040, 0, 0, 0},  //TV = 9.69(45 lines)  AV=2.28  SV=5.26  BV=6.70
    {1291,1140,1040, 0, 0, 0},  //TV = 9.60(48 lines)  AV=2.28  SV=5.26  BV=6.61
    {1399,1140,1032, 0, 0, 0},  //TV = 9.48(52 lines)  AV=2.28  SV=5.25  BV=6.51
    {1479,1140,1048, 0, 0, 0},  //TV = 9.40(55 lines)  AV=2.28  SV=5.27  BV=6.40
    {1587,1140,1048, 0, 0, 0},  //TV = 9.30(59 lines)  AV=2.28  SV=5.27  BV=6.30
    {1695,1140,1048, 0, 0, 0},  //TV = 9.20(63 lines)  AV=2.28  SV=5.27  BV=6.21
    {1829,1140,1040, 0, 0, 0},  //TV = 9.09(68 lines)  AV=2.28  SV=5.26  BV=6.11
    {1963,1140,1040, 0, 0, 0},  //TV = 8.99(73 lines)  AV=2.28  SV=5.26  BV=6.01
    {2098,1140,1040, 0, 0, 0},  //TV = 8.90(78 lines)  AV=2.28  SV=5.26  BV=5.91
    {2232,1140,1048, 0, 0, 0},  //TV = 8.81(83 lines)  AV=2.28  SV=5.27  BV=5.81
    {2421,1140,1040, 0, 0, 0},  //TV = 8.69(90 lines)  AV=2.28  SV=5.26  BV=5.70
    {2582,1140,1040, 0, 0, 0},  //TV = 8.60(96 lines)  AV=2.28  SV=5.26  BV=5.61
    {2770,1140,1040, 0, 0, 0},  //TV = 8.50(103 lines)  AV=2.28  SV=5.26  BV=5.51
    {2985,1140,1040, 0, 0, 0},  //TV = 8.39(111 lines)  AV=2.28  SV=5.26  BV=5.40
    {3200,1140,1032, 0, 0, 0},  //TV = 8.29(119 lines)  AV=2.28  SV=5.25  BV=5.31
    {3415,1140,1040, 0, 0, 0},  //TV = 8.19(127 lines)  AV=2.28  SV=5.26  BV=5.21
    {3657,1140,1040, 0, 0, 0},  //TV = 8.10(136 lines)  AV=2.28  SV=5.26  BV=5.11
    {3953,1140,1032, 0, 0, 0},  //TV = 7.98(147 lines)  AV=2.28  SV=5.25  BV=5.01
    {4222,1140,1040, 0, 0, 0},  //TV = 7.89(157 lines)  AV=2.28  SV=5.26  BV=4.90
    {4518,1140,1040, 0, 0, 0},  //TV = 7.79(168 lines)  AV=2.28  SV=5.26  BV=4.80
    {4867,1140,1040, 0, 0, 0},  //TV = 7.68(181 lines)  AV=2.28  SV=5.26  BV=4.70
    {5217,1140,1040, 0, 0, 0},  //TV = 7.58(194 lines)  AV=2.28  SV=5.26  BV=4.60
    {5567,1140,1032, 0, 0, 0},  //TV = 7.49(207 lines)  AV=2.28  SV=5.25  BV=4.51
    {5997,1140,1032, 0, 0, 0},  //TV = 7.38(223 lines)  AV=2.28  SV=5.25  BV=4.41
    {6427,1140,1032, 0, 0, 0},  //TV = 7.28(239 lines)  AV=2.28  SV=5.25  BV=4.31
    {6884,1140,1032, 0, 0, 0},  //TV = 7.18(256 lines)  AV=2.28  SV=5.25  BV=4.21
    {7368,1140,1032, 0, 0, 0},  //TV = 7.08(274 lines)  AV=2.28  SV=5.25  BV=4.11
    {7879,1140,1032, 0, 0, 0},  //TV = 6.99(293 lines)  AV=2.28  SV=5.25  BV=4.01
    {8444,1140,1032, 0, 0, 0},  //TV = 6.89(314 lines)  AV=2.28  SV=5.25  BV=3.91
    {9116,1140,1032, 0, 0, 0},  //TV = 6.78(339 lines)  AV=2.28  SV=5.25  BV=3.80
    {9707,1140,1032, 0, 0, 0},  //TV = 6.69(361 lines)  AV=2.28  SV=5.25  BV=3.71
    {10003,1140,1072, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.30  BV=3.61
    {10003,1216,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.41  BV=3.51
    {10003,1328,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.50  BV=3.41
    {10003,1424,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.62  BV=3.30
    {10003,1536,1056, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.71  BV=3.21
    {10003,1632,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.81  BV=3.11
    {10003,1728,1080, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=5.92  BV=3.00
    {10003,1936,1032, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.01  BV=2.90
    {10003,2048,1048, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.12  BV=2.80
    {10003,2144,1064, 0, 0, 0},  //TV = 6.64(372 lines)  AV=2.28  SV=6.21  BV=2.71
    {20006,1140,1072, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.30  BV=2.61
    {20006,1216,1080, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.41  BV=2.51
    {20006,1328,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.50  BV=2.41
    {20006,1424,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.62  BV=2.30
    {20006,1536,1056, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.71  BV=2.21
    {20006,1632,1064, 0, 0, 0},  //TV = 5.64(744 lines)  AV=2.28  SV=5.81  BV=2.11
    {30009,1140,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.33  BV=2.01
    {30009,1216,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.42  BV=1.91
    {30009,1328,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.53  BV=1.81
    {30009,1424,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.63  BV=1.71
    {30009,1536,1064, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.72  BV=1.61
    {30009,1632,1072, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.82  BV=1.51
    {30009,1728,1088, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=5.93  BV=1.41
    {30009,1936,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.03  BV=1.31
    {30009,2048,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.13  BV=1.21
    {30009,2240,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.21  BV=1.12
    {30009,2352,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.33  BV=1.01
    {30009,2560,1040, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.43  BV=0.91
    {30009,2752,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.52  BV=0.81
    {30009,2960,1032, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.63  BV=0.71
    {30009,3200,1024, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.73  BV=0.61
    {30009,3328,1056, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.83  BV=0.50
    {30009,3584,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=6.92  BV=0.41
    {30009,3840,1048, 0, 0, 0},  //TV = 5.06(1116 lines)  AV=2.28  SV=7.02  BV=0.31
    {40011,3072,1056, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.71  BV=0.21
    {40011,3328,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.81  BV=0.11
    {40011,3584,1040, 0, 0, 0},  //TV = 4.64(1488 lines)  AV=2.28  SV=6.91  BV=0.00
    {49987,3072,1048, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.70  BV=-0.11
    {49987,3328,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.80  BV=-0.20
    {49987,3584,1032, 0, 0, 0},  //TV = 4.32(1859 lines)  AV=2.28  SV=6.90  BV=-0.31
    {59990,3200,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.73  BV=-0.39
    {59990,3456,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.84  BV=-0.50
    {59990,3584,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=6.94  BV=-0.60
    {59990,3840,1056, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.04  BV=-0.70
    {59990,4224,1032, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.14  BV=-0.81
    {59990,4480,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.24  BV=-0.90
    {59990,4864,1024, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.33  BV=-1.00
    {59990,5120,1048, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.44  BV=-1.11
    {59990,5504,1040, 0, 0, 0},  //TV = 4.06(2231 lines)  AV=2.28  SV=7.53  BV=-1.20
    {69993,5120,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.41  BV=-1.29
    {69993,5504,1024, 0, 0, 0},  //TV = 3.84(2603 lines)  AV=2.28  SV=7.51  BV=-1.40
    {79995,5120,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.42  BV=-1.50
    {79995,5504,1032, 0, 0, 0},  //TV = 3.64(2975 lines)  AV=2.28  SV=7.52  BV=-1.60
    {89998,5248,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.44  BV=-1.69
    {89998,5632,1024, 0, 0, 0},  //TV = 3.47(3347 lines)  AV=2.28  SV=7.54  BV=-1.79
    {100001,5376,1040, 0, 0, 0},  //TV = 3.32(3719 lines)  AV=2.28  SV=7.50  BV=-1.90
    {110004,5248,1032, 0, 0, 0},  //TV = 3.18(4091 lines)  AV=2.28  SV=7.45  BV=-1.99
    {120006,5120,1040, 0, 0, 0},  //TV = 3.06(4463 lines)  AV=2.28  SV=7.43  BV=-2.09
    {120006,5504,1040, 0, 0, 0},  //TV = 3.06(4463 lines)  AV=2.28  SV=7.53  BV=-2.20
    {120006,6016,1024, 0, 0, 0},  //TV = 3.06(4463 lines)  AV=2.28  SV=7.64  BV=-2.30
    {120006,6384,1032, 0, 0, 0},  //TV = 3.06(4463 lines)  AV=2.28  SV=7.74  BV=-2.40
    {120006,6896,1024, 0, 0, 0},  //TV = 3.06(4463 lines)  AV=2.28  SV=7.84  BV=-2.50
    {120006,7280,1040, 0, 0, 0},  //TV = 3.06(4463 lines)  AV=2.28  SV=7.94  BV=-2.60
    {120006,7696,1048, 0, 0, 0},  //TV = 3.06(4463 lines)  AV=2.28  SV=8.03  BV=-2.69
    {120006,8448,1024, 0, 0, 0},  //TV = 3.06(4463 lines)  AV=2.28  SV=8.13  BV=-2.79
    {120006,9040,1024, 0, 0, 0},  //TV = 3.06(4463 lines)  AV=2.28  SV=8.23  BV=-2.89
    {120006,9696,1024, 0, 0, 0},  //TV = 3.06(4463 lines)  AV=2.28  SV=8.33  BV=-2.99
    {120006,10080,1056, 0, 0, 0},  //TV = 3.06(4463 lines)  AV=2.28  SV=8.43  BV=-3.09
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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

static strAETable g_AE_SceneTable6 =
{
    AETABLE_SCENE_INDEX6,    //eAETableID
    128,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    96,    //i4MaxBV
    -31,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene6PLineTable_60Hz,
    sAEScene6PLineTable_50Hz,
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
    {LIB3A_AE_SCENE_NIGHT, {AETABLE_SCENE_INDEX6, AETABLE_SCENE_INDEX6, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO_NIGHT, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ACTION, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_BEACH, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_CANDLELIGHT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_FIREWORKS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX4, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX4}},
    {LIB3A_AE_SCENE_LANDSCAPE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_NIGHT_PORTRAIT, {AETABLE_SCENE_INDEX6, AETABLE_SCENE_INDEX6, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO_NIGHT, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
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
g_AE_SceneTable6,
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
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

static strAEPLineNumInfo g_strAECaptureAutoPLineInfo =
{
    AETABLE_CAPTURE_AUTO,
    90,
    0,
    {
        {1,6000,15,1152,1152},
        {2,15,15,1152,10240},
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

static strAEPLineNumInfo g_strAEVideoAutoPLineInfo =
{
    AETABLE_VIDEO_AUTO,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
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

static strAEPLineNumInfo g_strAEVideo1AutoPLineInfo =
{
    AETABLE_VIDEO1_AUTO,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,8,5120,5120},
        {6,8,8,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene2PLineInfo =
{
    AETABLE_SCENE_INDEX2,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene6PLineInfo =
{
    AETABLE_SCENE_INDEX6,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,8,5120,5120},
        {6,8,8,5120,10240},
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

static strAEPLineNumInfo g_strAEScene7PLineInfo =
{
    AETABLE_SCENE_INDEX7,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene8PLineInfo =
{
    AETABLE_SCENE_INDEX8,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene9PLineInfo =
{
    AETABLE_SCENE_INDEX9,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene10PLineInfo =
{
    AETABLE_SCENE_INDEX10,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene11PLineInfo =
{
    AETABLE_SCENE_INDEX11,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene12PLineInfo =
{
    AETABLE_SCENE_INDEX12,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene13PLineInfo =
{
    AETABLE_SCENE_INDEX13,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene14PLineInfo =
{
    AETABLE_SCENE_INDEX14,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene15PLineInfo =
{
    AETABLE_SCENE_INDEX15,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene16PLineInfo =
{
    AETABLE_SCENE_INDEX16,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene17PLineInfo =
{
    AETABLE_SCENE_INDEX17,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene18PLineInfo =
{
    AETABLE_SCENE_INDEX18,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene19PLineInfo =
{
    AETABLE_SCENE_INDEX19,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene20PLineInfo =
{
    AETABLE_SCENE_INDEX20,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene21PLineInfo =
{
    AETABLE_SCENE_INDEX21,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene22PLineInfo =
{
    AETABLE_SCENE_INDEX22,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene23PLineInfo =
{
    AETABLE_SCENE_INDEX23,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene24PLineInfo =
{
    AETABLE_SCENE_INDEX24,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene25PLineInfo =
{
    AETABLE_SCENE_INDEX25,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene26PLineInfo =
{
    AETABLE_SCENE_INDEX26,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene27PLineInfo =
{
    AETABLE_SCENE_INDEX27,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene28PLineInfo =
{
    AETABLE_SCENE_INDEX28,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene29PLineInfo =
{
    AETABLE_SCENE_INDEX29,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene30PLineInfo =
{
    AETABLE_SCENE_INDEX30,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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

static strAEPLineNumInfo g_strAEScene31PLineInfo =
{
    AETABLE_SCENE_INDEX31,
    90,
    0,
    {
        {1,6000,30,1152,1152},
        {2,30,30,1152,3072},
        {3,30,15,3072,3072},
        {4,15,15,3072,5120},
        {5,15,10,5120,5120},
        {6,10,10,5120,10240},
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
g_strAEScene6PLineInfo,
g_strAEScene7PLineInfo,
g_strAEScene8PLineInfo,
g_strAEScene9PLineInfo,
g_strAEScene10PLineInfo,
g_strAEScene11PLineInfo,
g_strAEScene12PLineInfo,
g_strAEScene13PLineInfo,
g_strAEScene14PLineInfo,
g_strAEScene15PLineInfo,
g_strAEScene16PLineInfo,
g_strAEScene17PLineInfo,
g_strAEScene18PLineInfo,
g_strAEScene19PLineInfo,
g_strAEScene20PLineInfo,
g_strAEScene21PLineInfo,
g_strAEScene22PLineInfo,
g_strAEScene23PLineInfo,
g_strAEScene24PLineInfo,
g_strAEScene25PLineInfo,
g_strAEScene26PLineInfo,
g_strAEScene27PLineInfo,
g_strAEScene28PLineInfo,
g_strAEScene29PLineInfo,
g_strAEScene30PLineInfo,
g_strAEScene31PLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
},
};

static strAEPLineGainList g_strAEGainList =
{
71,
{
{1140,100},
{1216,100},
{1328,100},
{1424,100},
{1536,100},
{1632,100},
{1728,100},
{1840,100},
{1936,100},
{2048,100},
{2144,100},
{2240,100},
{2352,100},
{2448,100},
{2560,100},
{2656,100},
{2752,100},
{2864,100},
{2960,100},
{3072,100},
{3200,100},
{3328,100},
{3456,100},
{3584,100},
{3712,100},
{3840,100},
{3968,100},
{4096,100},
{4224,100},
{4352,100},
{4480,100},
{4608,100},
{4736,100},
{4864,100},
{4992,100},
{5120,100},
{5248,100},
{5376,100},
{5504,100},
{5632,100},
{5760,100},
{5888,100},
{6016,100},
{6144,100},
{6240,100},
{6384,100},
{6544,100},
{6704,100},
{6896,100},
{7072,100},
{7280,100},
{7472,100},
{7696,100},
{7936,100},
{8192,100},
{8448,100},
{8720,100},
{9040,100},
{9344,100},
{9696,100},
{10080,100},
{10480,100},
{10912,100},
{11392,100},
{11904,100},
{12480,100},
{13104,100},
{13792,100},
{14560,100},
{15408,100},
{16384,100},
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
MinGain,1152 
MaxGain,10240 
MiniISOGain,106 
GainStepUnitInTotalRange,128 
PreviewExposureLineUnit,26000 
PreviewMaxFrameRate,30 
VideoExposureLineUnit,26000 
VideoMaxFrameRate,30 
VideoToPreviewSensitivityRatio,1024 
CaptureExposureLineUnit,26889 
CaptureMaxFrameRate,15 
CaptureToPreviewSensitivityRatio,1024 
Video1ExposureLineUnit,26000 
Video1MaxFrameRate,30 
Video1ToPreviewSensitivityRatio,1024 
Video2ExposureLineUnit,26000 
Video2MaxFrameRate,30 
Video2ToPreviewSensitivityRatio,1024 
Custom1ExposureLineUnit,26000 
Custom1MaxFrameRate,30 
Custom1ToPreviewSensitivityRatio,1024 
Custom2ExposureLineUnit,26000 
Custom2MaxFrameRate,30 
Custom2ToPreviewSensitivityRatio,1024 
Custom3ExposureLineUnit,26000 
Custom3MaxFrameRate,30 
Custom3ToPreviewSensitivityRatio,1024 
Custom4ExposureLineUnit,26000 
Custom4MaxFrameRate,30 
Custom4ToPreviewSensitivityRatio,1024 
Custom5ExposureLineUnit,26000 
Custom5MaxFrameRate,30 
Custom5ToPreviewSensitivityRatio,1024 
FocusLength,350 
Fno,22 

// Preview table -- Use preview sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_RPEVIEW_AUTO
90,-10
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
AETABLE_END

// Capture table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_AUTO
90,0
1,6000,15,1152,1152
2,15,15,1152,10240
AETABLE_END

// Video table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_AUTO
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
AETABLE_END

// Video1 table -- Use Video1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO1_AUTO
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Video2 table -- Use Video2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO2_AUTO
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Custom1 table -- Use Custom1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM1_AUTO
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Custom2 table -- Use Custom2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM2_AUTO
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Custom3 table -- Use Custom3 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM3_AUTO
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Custom4 table -- Use Custom4 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM4_AUTO
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Custom5 table -- Use Custom5 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM5_AUTO
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Video Night table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_NIGHT
90,-10
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,8,5120,5120
6,8,8,5120,10240
AETABLE_END

// Capture ISO100 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO100
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Capture ISO200 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO200
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Capture ISO400 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO400
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Capture ISO800 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO800
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Capture ISO1600 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO1600
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Strobe table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_STROBE
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX1
90,-10
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX2
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table1 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX3
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table2 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX4
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table3 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX5
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table4 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX6
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,8,5120,5120
6,8,8,5120,10240
AETABLE_END

// Table5 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX7
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table6 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX8
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table7 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX9
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table8 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX10
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table9 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX11
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table10 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX12
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table11 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX13
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table12 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX14
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table13 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX15
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table14 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX16
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table15 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX17
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table16 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX18
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table17 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX19
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table18 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX20
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table19 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX21
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table20 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX22
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table21 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX23
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table22 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX24
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table23 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX25
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table24 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX26
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table25 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX27
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table26 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX28
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table27 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX29
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table28 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX30
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table29 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX31
90,0
1,6000,30,1152,1152
2,30,30,1152,3072
3,30,15,3072,3072
4,15,15,3072,5120
5,15,10,5120,5120
6,10,10,5120,10240
AETABLE_END

// Table30 PLine -- Use capture sensor setting

// Table31 PLine -- Use capture sensor setting

AE_SCENE_AUTO,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX5
AE_SCENE_NIGHT,AETABLE_SCENE_INDEX6,AETABLE_SCENE_INDEX6,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO_NIGHT,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ACTION,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_BEACH,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_CANDLELIGHT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_FIREWORKS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX4,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX4
AE_SCENE_LANDSCAPE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_NIGHT_PORTRAIT,AETABLE_SCENE_INDEX6,AETABLE_SCENE_INDEX6,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO_NIGHT,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
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
