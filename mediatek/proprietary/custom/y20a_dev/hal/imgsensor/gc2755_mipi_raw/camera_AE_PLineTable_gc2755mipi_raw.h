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

#ifndef _CAMERA_AE_PLINETABLE_GC2755MIPIRAW_H
#define _CAMERA_AE_PLINETABLE_GC2755MIPIRAW_H

#include "camera_custom_AEPlinetable.h"
static strEvPline sPreviewPLineTable_60Hz =
{
{
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {25020,1024,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.04  BV=2.80
    {25020,1088,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.13  BV=2.71
    {25020,1184,1040, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.23  BV=2.62
    {25020,1232,1072, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.33  BV=2.51
    {33331,1024,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.03  BV=2.40
    {33331,1088,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.12  BV=2.31
    {33331,1184,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.22  BV=2.21
    {41685,1024,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.01  BV=2.10
    {41685,1088,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.10  BV=2.01
    {41685,1136,1064, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.21  BV=1.91
    {49996,1024,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.04  BV=1.80
    {49996,1088,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.13  BV=1.72
    {58350,1024,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.02  BV=1.60
    {58350,1088,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.11  BV=1.52
    {66661,1024,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.03  BV=1.40
    {66661,1088,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.12  BV=1.31
    {66661,1184,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.22  BV=1.21
    {66661,1232,1064, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.32  BV=1.11
    {66661,1344,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.43  BV=1.01
    {66661,1440,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.51  BV=0.92
    {66661,1536,1056, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.63  BV=0.80
    {66661,1648,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.72  BV=0.71
    {66661,1808,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.82  BV=0.61
    {66661,1920,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.93  BV=0.50
    {66661,2048,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.02  BV=0.41
    {66661,2208,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.12  BV=0.31
    {75015,2112,1032, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=6.06  BV=0.21
    {83326,2048,1024, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=6.00  BV=0.11
    {83326,2208,1024, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=6.11  BV=0.00
    {91680,2160,1024, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=6.08  BV=-0.10
    {99991,2112,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=6.04  BV=-0.20
    {108345,2048,1048, 0, 0, 0},  //TV = 3.21(2568 lines)  AV=2.53  SV=6.03  BV=-0.30
    {116656,2048,1048, 0, 0, 0},  //TV = 3.10(2765 lines)  AV=2.53  SV=6.03  BV=-0.41
    {125010,2048,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.02  BV=-0.50
    {125010,2208,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.13  BV=-0.60
    {125010,2368,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.23  BV=-0.71
    {125010,2560,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.32  BV=-0.80
    {125010,2704,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.42  BV=-0.90
    {125010,2912,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.53  BV=-1.00
    {125010,3136,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.63  BV=-1.10
    {125010,3328,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.72  BV=-1.20
    {125010,3600,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.83  BV=-1.30
    {125010,3856,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.92  BV=-1.40
    {125010,4160,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.02  BV=-1.50
    {125010,4448,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.13  BV=-1.60
    {125010,4768,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.22  BV=-1.69
    {125010,5040,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.32  BV=-1.80
    {125010,5472,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.42  BV=-1.89
    {125010,5840,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.53  BV=-2.01
    {125010,6096,1064, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.63  BV=-2.10
    {133321,6096,1072, 0, 0, 0},  //TV = 2.91(3160 lines)  AV=2.53  SV=7.64  BV=-2.21
    {141675,6144,1072, 0, 0, 0},  //TV = 2.82(3358 lines)  AV=2.53  SV=7.65  BV=-2.31
    {158340,6096,1032, 0, 0, 0},  //TV = 2.66(3753 lines)  AV=2.53  SV=7.58  BV=-2.40
    {166651,6096,1056, 0, 0, 0},  //TV = 2.59(3950 lines)  AV=2.53  SV=7.62  BV=-2.51
    {175005,6144,1064, 0, 0, 0},  //TV = 2.51(4148 lines)  AV=2.53  SV=7.64  BV=-2.60
    {191670,6096,1056, 0, 0, 0},  //TV = 2.38(4543 lines)  AV=2.53  SV=7.62  BV=-2.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.86  BV=3.31
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {19999,1024,1072, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.07  BV=3.10
    {19999,1136,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.16  BV=3.01
    {19999,1184,1064, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.26  BV=2.91
    {19999,1296,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.36  BV=2.81
    {19999,1392,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.47  BV=2.70
    {19999,1488,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.56  BV=2.61
    {29998,1024,1080, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.08  BV=2.51
    {29998,1136,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.17  BV=2.41
    {29998,1232,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.27  BV=2.32
    {29998,1296,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.37  BV=2.21
    {39997,1024,1072, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.07  BV=2.10
    {39997,1136,1032, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.16  BV=2.01
    {39997,1184,1064, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.26  BV=1.91
    {49996,1024,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.04  BV=1.80
    {49996,1088,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.13  BV=1.72
    {49996,1184,1040, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.23  BV=1.62
    {59995,1024,1080, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.08  BV=1.51
    {59995,1136,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.17  BV=1.41
    {59995,1232,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.27  BV=1.32
    {59995,1296,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.37  BV=1.21
    {59995,1392,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.47  BV=1.12
    {59995,1488,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.57  BV=1.01
    {59995,1600,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.68  BV=0.91
    {59995,1744,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.78  BV=0.81
    {59995,1856,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.87  BV=0.72
    {59995,2000,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.98  BV=0.61
    {59995,2160,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.08  BV=0.51
    {59995,2304,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.17  BV=0.42
    {69994,2112,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=6.06  BV=0.31
    {69994,2256,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=6.15  BV=0.21
    {79993,2112,1032, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=6.06  BV=0.11
    {89992,2048,1024, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=6.00  BV=0.00
    {89992,2160,1040, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=6.10  BV=-0.10
    {99991,2112,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=6.04  BV=-0.20
    {109990,2048,1032, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=6.01  BV=-0.30
    {109990,2208,1024, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=6.11  BV=-0.40
    {119989,2160,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.08  BV=-0.49
    {119989,2304,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.19  BV=-0.61
    {119989,2448,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.28  BV=-0.69
    {119989,2624,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.38  BV=-0.79
    {119989,2880,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.49  BV=-0.91
    {119989,3024,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.58  BV=-1.00
    {119989,3280,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.68  BV=-1.09
    {119989,3504,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.79  BV=-1.20
    {119989,3760,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.88  BV=-1.29
    {119989,4048,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.99  BV=-1.41
    {119989,4304,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.08  BV=-1.50
    {119989,4608,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.18  BV=-1.60
    {119989,4960,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.29  BV=-1.70
    {119989,5248,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.38  BV=-1.79
    {119989,5712,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.48  BV=-1.89
    {119989,6096,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.58  BV=-2.00
    {119989,6144,1104, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.69  BV=-2.11
    {129988,6144,1088, 0, 0, 0},  //TV = 2.94(3081 lines)  AV=2.53  SV=7.67  BV=-2.20
    {139987,6144,1080, 0, 0, 0},  //TV = 2.84(3318 lines)  AV=2.53  SV=7.66  BV=-2.30
    {149986,6144,1088, 0, 0, 0},  //TV = 2.74(3555 lines)  AV=2.53  SV=7.67  BV=-2.41
    {169984,6096,1032, 0, 0, 0},  //TV = 2.56(4029 lines)  AV=2.53  SV=7.58  BV=-2.50
    {179983,6096,1048, 0, 0, 0},  //TV = 2.47(4266 lines)  AV=2.53  SV=7.61  BV=-2.61
    {189982,6096,1064, 0, 0, 0},  //TV = 2.40(4503 lines)  AV=2.53  SV=7.63  BV=-2.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    121,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -27,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {25020,1024,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.04  BV=2.80
    {25020,1088,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.13  BV=2.71
    {25020,1184,1040, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.23  BV=2.62
    {25020,1232,1072, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.33  BV=2.51
    {33331,1024,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.03  BV=2.40
    {33331,1088,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.12  BV=2.31
    {33331,1184,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.22  BV=2.21
    {41685,1024,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.01  BV=2.10
    {41685,1088,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.10  BV=2.01
    {41685,1136,1064, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.21  BV=1.91
    {49996,1024,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.04  BV=1.80
    {49996,1088,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.13  BV=1.72
    {58350,1024,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.02  BV=1.60
    {58350,1088,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.11  BV=1.52
    {66661,1024,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.03  BV=1.40
    {66661,1088,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.12  BV=1.31
    {66661,1184,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.22  BV=1.21
    {66661,1232,1064, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.32  BV=1.11
    {66661,1344,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.43  BV=1.01
    {66661,1440,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.51  BV=0.92
    {66661,1536,1056, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.63  BV=0.80
    {66661,1648,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.72  BV=0.71
    {66661,1808,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.82  BV=0.61
    {66661,1920,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.93  BV=0.50
    {66661,2048,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.02  BV=0.41
    {66661,2208,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.12  BV=0.31
    {75015,2112,1032, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=6.06  BV=0.21
    {83326,2048,1024, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=6.00  BV=0.11
    {83326,2208,1024, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=6.11  BV=0.00
    {91680,2160,1024, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=6.08  BV=-0.10
    {99991,2112,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=6.04  BV=-0.20
    {108345,2048,1048, 0, 0, 0},  //TV = 3.21(2568 lines)  AV=2.53  SV=6.03  BV=-0.30
    {116656,2048,1048, 0, 0, 0},  //TV = 3.10(2765 lines)  AV=2.53  SV=6.03  BV=-0.41
    {125010,2048,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.02  BV=-0.50
    {125010,2208,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.13  BV=-0.60
    {125010,2368,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.23  BV=-0.71
    {125010,2560,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.32  BV=-0.80
    {125010,2704,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.42  BV=-0.90
    {125010,2912,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.53  BV=-1.00
    {125010,3136,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.63  BV=-1.10
    {125010,3328,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.72  BV=-1.20
    {125010,3600,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.83  BV=-1.30
    {125010,3856,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.92  BV=-1.40
    {125010,4160,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.02  BV=-1.50
    {125010,4448,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.13  BV=-1.60
    {125010,4768,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.22  BV=-1.69
    {125010,5040,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.32  BV=-1.80
    {125010,5472,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.42  BV=-1.89
    {125010,5840,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.53  BV=-2.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.86  BV=3.31
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {19999,1024,1072, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.07  BV=3.10
    {19999,1136,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.16  BV=3.01
    {19999,1184,1064, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.26  BV=2.91
    {19999,1296,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.36  BV=2.81
    {19999,1392,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.47  BV=2.70
    {19999,1488,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.56  BV=2.61
    {29998,1024,1080, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.08  BV=2.51
    {29998,1136,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.17  BV=2.41
    {29998,1232,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.27  BV=2.32
    {29998,1296,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.37  BV=2.21
    {39997,1024,1072, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.07  BV=2.10
    {39997,1136,1032, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.16  BV=2.01
    {39997,1184,1064, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.26  BV=1.91
    {49996,1024,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.04  BV=1.80
    {49996,1088,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.13  BV=1.72
    {49996,1184,1040, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.23  BV=1.62
    {59995,1024,1080, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.08  BV=1.51
    {59995,1136,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.17  BV=1.41
    {59995,1232,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.27  BV=1.32
    {59995,1296,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.37  BV=1.21
    {59995,1392,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.47  BV=1.12
    {59995,1488,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.57  BV=1.01
    {59995,1600,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.68  BV=0.91
    {59995,1744,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.78  BV=0.81
    {59995,1856,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.87  BV=0.72
    {59995,2000,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.98  BV=0.61
    {59995,2160,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.08  BV=0.51
    {59995,2304,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.17  BV=0.42
    {69994,2112,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=6.06  BV=0.31
    {69994,2256,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=6.15  BV=0.21
    {79993,2112,1032, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=6.06  BV=0.11
    {89992,2048,1024, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=6.00  BV=0.00
    {89992,2160,1040, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=6.10  BV=-0.10
    {99991,2112,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=6.04  BV=-0.20
    {109990,2048,1032, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=6.01  BV=-0.30
    {109990,2208,1024, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=6.11  BV=-0.40
    {119989,2160,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.08  BV=-0.49
    {119989,2304,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.19  BV=-0.61
    {119989,2448,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.28  BV=-0.69
    {119989,2624,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.38  BV=-0.79
    {119989,2880,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.49  BV=-0.91
    {119989,3024,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.58  BV=-1.00
    {119989,3280,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.68  BV=-1.09
    {119989,3504,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.79  BV=-1.20
    {119989,3760,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.88  BV=-1.29
    {119989,4048,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.99  BV=-1.41
    {119989,4304,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.08  BV=-1.50
    {119989,4608,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.18  BV=-1.60
    {119989,4960,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.29  BV=-1.70
    {119989,5248,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.38  BV=-1.79
    {119989,5712,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.48  BV=-1.89
    {119989,6096,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.58  BV=-2.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    114,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -20,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {25020,1024,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.04  BV=2.80
    {25020,1088,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.13  BV=2.71
    {25020,1184,1040, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.23  BV=2.62
    {25020,1232,1072, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.33  BV=2.51
    {33205,1024,1048, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.03  BV=2.41
    {33205,1088,1048, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.12  BV=2.32
    {33205,1184,1032, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.22  BV=2.22
    {33205,1232,1064, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.32  BV=2.12
    {41685,1088,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.10  BV=2.01
    {41685,1136,1064, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.21  BV=1.91
    {49996,1024,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.04  BV=1.80
    {49996,1088,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.13  BV=1.72
    {58350,1024,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.02  BV=1.60
    {58350,1088,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.11  BV=1.52
    {66535,1024,1048, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=5.03  BV=1.40
    {66535,1088,1048, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=5.12  BV=1.31
    {66535,1184,1032, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=5.22  BV=1.22
    {66535,1232,1064, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=5.32  BV=1.11
    {66535,1344,1048, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=5.43  BV=1.01
    {66535,1440,1048, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=5.53  BV=0.91
    {66535,1536,1056, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=5.63  BV=0.81
    {66535,1648,1048, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=5.72  BV=0.72
    {66535,1808,1024, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=5.82  BV=0.62
    {66535,1920,1040, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=5.93  BV=0.51
    {66535,2048,1048, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=6.03  BV=0.40
    {66535,2208,1040, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=6.13  BV=0.30
    {75015,2112,1032, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=6.06  BV=0.21
    {83326,2048,1024, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=6.00  BV=0.11
    {83326,2208,1024, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=6.11  BV=0.00
    {91680,2160,1024, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=6.08  BV=-0.10
    {99991,2112,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=6.04  BV=-0.20
    {108345,2048,1048, 0, 0, 0},  //TV = 3.21(2568 lines)  AV=2.53  SV=6.03  BV=-0.30
    {116656,2048,1048, 0, 0, 0},  //TV = 3.10(2765 lines)  AV=2.53  SV=6.03  BV=-0.41
    {125010,2048,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.02  BV=-0.50
    {125010,2208,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.13  BV=-0.60
    {125010,2368,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.23  BV=-0.71
    {125010,2560,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.32  BV=-0.80
    {125010,2704,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.42  BV=-0.90
    {125010,2912,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.53  BV=-1.00
    {125010,3136,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.63  BV=-1.10
    {125010,3328,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.72  BV=-1.20
    {125010,3600,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.83  BV=-1.30
    {125010,3856,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.92  BV=-1.40
    {125010,4160,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.02  BV=-1.50
    {125010,4448,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.13  BV=-1.60
    {125010,4768,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.22  BV=-1.69
    {125010,5040,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.32  BV=-1.80
    {125010,5472,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.42  BV=-1.89
    {125010,5840,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.53  BV=-2.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.86  BV=3.31
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {19999,1024,1072, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.07  BV=3.10
    {19999,1136,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.16  BV=3.01
    {19999,1184,1064, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.26  BV=2.91
    {19999,1296,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.36  BV=2.81
    {19999,1392,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.47  BV=2.70
    {19999,1488,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.56  BV=2.61
    {29998,1024,1080, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.08  BV=2.51
    {29998,1136,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.17  BV=2.41
    {29998,1232,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.27  BV=2.32
    {29998,1296,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.37  BV=2.21
    {39997,1024,1072, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.07  BV=2.10
    {39997,1136,1032, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.16  BV=2.01
    {39997,1184,1064, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.26  BV=1.91
    {49996,1024,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.04  BV=1.80
    {49996,1088,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.13  BV=1.72
    {49996,1184,1040, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.23  BV=1.62
    {59995,1024,1080, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.08  BV=1.51
    {59995,1136,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.17  BV=1.41
    {59995,1232,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.27  BV=1.32
    {59995,1296,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.37  BV=1.21
    {59995,1392,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.47  BV=1.12
    {59995,1488,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.57  BV=1.01
    {59995,1600,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.68  BV=0.91
    {59995,1744,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.78  BV=0.81
    {59995,1856,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.87  BV=0.72
    {59995,2000,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.98  BV=0.61
    {59995,2160,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.08  BV=0.51
    {59995,2304,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.17  BV=0.42
    {69994,2112,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=6.06  BV=0.31
    {69994,2256,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=6.15  BV=0.21
    {79993,2112,1032, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=6.06  BV=0.11
    {89992,2048,1024, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=6.00  BV=0.00
    {89992,2160,1040, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=6.10  BV=-0.10
    {99991,2112,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=6.04  BV=-0.20
    {109990,2048,1032, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=6.01  BV=-0.30
    {109990,2208,1024, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=6.11  BV=-0.40
    {119989,2160,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.08  BV=-0.49
    {119989,2304,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.19  BV=-0.61
    {119989,2448,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.28  BV=-0.69
    {119989,2624,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.38  BV=-0.79
    {119989,2880,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.49  BV=-0.91
    {119989,3024,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.58  BV=-1.00
    {119989,3280,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.68  BV=-1.09
    {119989,3504,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.79  BV=-1.20
    {119989,3760,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.88  BV=-1.29
    {119989,4048,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.99  BV=-1.41
    {119989,4304,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.08  BV=-1.50
    {119989,4608,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.18  BV=-1.60
    {119989,4960,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.29  BV=-1.70
    {119989,5248,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.38  BV=-1.79
    {119989,5712,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.48  BV=-1.89
    {119989,6096,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.58  BV=-2.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    114,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -20,    //i4MinBV
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
    {254,1296,1056, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.38  BV=9.08
    {296,1184,1040, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.23  BV=9.02
    {296,1232,1072, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.33  BV=8.92
    {338,1184,1048, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.24  BV=8.81
    {338,1296,1024, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.34  BV=8.72
    {380,1232,1032, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.28  BV=8.61
    {422,1184,1032, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.22  BV=8.52
    {422,1232,1064, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.32  BV=8.41
    {465,1232,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.29  BV=8.31
    {507,1184,1064, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.26  BV=8.21
    {549,1184,1048, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.24  BV=8.11
    {591,1184,1048, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.24  BV=8.01
    {633,1184,1048, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.24  BV=7.91
    {676,1184,1048, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.24  BV=7.81
    {718,1184,1064, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.26  BV=7.71
    {760,1232,1032, 0, 0, 0},  //TV = 10.36(18 lines)  AV=2.53  SV=5.28  BV=7.61
    {844,1184,1032, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.22  BV=7.52
    {886,1184,1056, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.25  BV=7.41
    {971,1184,1032, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.22  BV=7.31
    {1013,1184,1064, 0, 0, 0},  //TV = 9.95(24 lines)  AV=2.53  SV=5.26  BV=7.21
    {1097,1184,1056, 0, 0, 0},  //TV = 9.83(26 lines)  AV=2.53  SV=5.25  BV=7.10
    {1182,1184,1048, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.24  BV=7.01
    {1266,1184,1048, 0, 0, 0},  //TV = 9.63(30 lines)  AV=2.53  SV=5.24  BV=6.91
    {1351,1184,1048, 0, 0, 0},  //TV = 9.53(32 lines)  AV=2.53  SV=5.24  BV=6.81
    {1435,1184,1064, 0, 0, 0},  //TV = 9.44(34 lines)  AV=2.53  SV=5.26  BV=6.71
    {1562,1184,1048, 0, 0, 0},  //TV = 9.32(37 lines)  AV=2.53  SV=5.24  BV=6.61
    {1688,1184,1040, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.23  BV=6.50
    {1772,1184,1056, 0, 0, 0},  //TV = 9.14(42 lines)  AV=2.53  SV=5.25  BV=6.41
    {1899,1184,1056, 0, 0, 0},  //TV = 9.04(45 lines)  AV=2.53  SV=5.25  BV=6.31
    {2068,1184,1040, 0, 0, 0},  //TV = 8.92(49 lines)  AV=2.53  SV=5.23  BV=6.21
    {2237,1184,1032, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.22  BV=6.11
    {2363,1184,1048, 0, 0, 0},  //TV = 8.73(56 lines)  AV=2.53  SV=5.24  BV=6.01
    {2532,1184,1048, 0, 0, 0},  //TV = 8.63(60 lines)  AV=2.53  SV=5.24  BV=5.91
    {2743,1184,1032, 0, 0, 0},  //TV = 8.51(65 lines)  AV=2.53  SV=5.22  BV=5.82
    {2954,1184,1032, 0, 0, 0},  //TV = 8.40(70 lines)  AV=2.53  SV=5.22  BV=5.71
    {3123,1184,1048, 0, 0, 0},  //TV = 8.32(74 lines)  AV=2.53  SV=5.24  BV=5.61
    {3376,1184,1032, 0, 0, 0},  //TV = 8.21(80 lines)  AV=2.53  SV=5.22  BV=5.52
    {3587,1184,1048, 0, 0, 0},  //TV = 8.12(85 lines)  AV=2.53  SV=5.24  BV=5.41
    {3840,1184,1048, 0, 0, 0},  //TV = 8.02(91 lines)  AV=2.53  SV=5.24  BV=5.31
    {4135,1184,1040, 0, 0, 0},  //TV = 7.92(98 lines)  AV=2.53  SV=5.23  BV=5.21
    {4430,1184,1040, 0, 0, 0},  //TV = 7.82(105 lines)  AV=2.53  SV=5.23  BV=5.11
    {4768,1184,1040, 0, 0, 0},  //TV = 7.71(113 lines)  AV=2.53  SV=5.23  BV=5.01
    {5105,1184,1040, 0, 0, 0},  //TV = 7.61(121 lines)  AV=2.53  SV=5.23  BV=4.91
    {5485,1184,1032, 0, 0, 0},  //TV = 7.51(130 lines)  AV=2.53  SV=5.22  BV=4.82
    {5907,1184,1032, 0, 0, 0},  //TV = 7.40(140 lines)  AV=2.53  SV=5.22  BV=4.71
    {6329,1184,1032, 0, 0, 0},  //TV = 7.30(150 lines)  AV=2.53  SV=5.22  BV=4.61
    {6709,1184,1040, 0, 0, 0},  //TV = 7.22(159 lines)  AV=2.53  SV=5.23  BV=4.51
    {7257,1184,1032, 0, 0, 0},  //TV = 7.11(172 lines)  AV=2.53  SV=5.22  BV=4.41
    {7763,1184,1040, 0, 0, 0},  //TV = 7.01(184 lines)  AV=2.53  SV=5.23  BV=4.30
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {8312,2048,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.02  BV=3.41
    {8312,2208,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.12  BV=3.32
    {8312,2368,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.22  BV=3.22
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {16666,1536,1056, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.63  BV=2.80
    {16666,1648,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.72  BV=2.71
    {16666,1808,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.83  BV=2.60
    {16666,1920,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.93  BV=2.50
    {16666,2048,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.03  BV=2.40
    {16666,2208,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.12  BV=2.31
    {16666,2368,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.22  BV=2.21
    {16666,2560,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.32  BV=2.11
    {16666,2704,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.42  BV=2.01
    {16666,2912,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.53  BV=1.90
    {16666,3136,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.61  BV=1.82
    {16666,3328,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.72  BV=1.71
    {16666,3600,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.81  BV=1.62
    {16666,3856,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.92  BV=1.51
    {16666,4160,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.02  BV=1.41
    {16666,4448,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.12  BV=1.31
    {16666,4768,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.22  BV=1.21
    {16666,5040,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.32  BV=1.11
    {16666,5472,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.43  BV=1.00
    {16666,5840,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.52  BV=0.91
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1296,1056, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.38  BV=9.08
    {296,1184,1040, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.23  BV=9.02
    {296,1232,1072, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.33  BV=8.92
    {338,1184,1048, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.24  BV=8.81
    {338,1296,1024, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.34  BV=8.72
    {380,1232,1032, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.28  BV=8.61
    {422,1184,1032, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.22  BV=8.52
    {422,1232,1064, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.32  BV=8.41
    {465,1232,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.29  BV=8.31
    {507,1184,1064, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.26  BV=8.21
    {549,1184,1048, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.24  BV=8.11
    {591,1184,1048, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.24  BV=8.01
    {633,1184,1048, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.24  BV=7.91
    {676,1184,1048, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.24  BV=7.81
    {718,1184,1064, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.26  BV=7.71
    {760,1232,1032, 0, 0, 0},  //TV = 10.36(18 lines)  AV=2.53  SV=5.28  BV=7.61
    {844,1184,1032, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.22  BV=7.52
    {886,1184,1056, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.25  BV=7.41
    {971,1184,1032, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.22  BV=7.31
    {1013,1184,1064, 0, 0, 0},  //TV = 9.95(24 lines)  AV=2.53  SV=5.26  BV=7.21
    {1097,1184,1056, 0, 0, 0},  //TV = 9.83(26 lines)  AV=2.53  SV=5.25  BV=7.10
    {1182,1184,1048, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.24  BV=7.01
    {1266,1184,1048, 0, 0, 0},  //TV = 9.63(30 lines)  AV=2.53  SV=5.24  BV=6.91
    {1351,1184,1048, 0, 0, 0},  //TV = 9.53(32 lines)  AV=2.53  SV=5.24  BV=6.81
    {1435,1184,1064, 0, 0, 0},  //TV = 9.44(34 lines)  AV=2.53  SV=5.26  BV=6.71
    {1562,1184,1048, 0, 0, 0},  //TV = 9.32(37 lines)  AV=2.53  SV=5.24  BV=6.61
    {1688,1184,1040, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.23  BV=6.50
    {1772,1184,1056, 0, 0, 0},  //TV = 9.14(42 lines)  AV=2.53  SV=5.25  BV=6.41
    {1899,1184,1056, 0, 0, 0},  //TV = 9.04(45 lines)  AV=2.53  SV=5.25  BV=6.31
    {2068,1184,1040, 0, 0, 0},  //TV = 8.92(49 lines)  AV=2.53  SV=5.23  BV=6.21
    {2237,1184,1032, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.22  BV=6.11
    {2363,1184,1048, 0, 0, 0},  //TV = 8.73(56 lines)  AV=2.53  SV=5.24  BV=6.01
    {2532,1184,1048, 0, 0, 0},  //TV = 8.63(60 lines)  AV=2.53  SV=5.24  BV=5.91
    {2743,1184,1032, 0, 0, 0},  //TV = 8.51(65 lines)  AV=2.53  SV=5.22  BV=5.82
    {2954,1184,1032, 0, 0, 0},  //TV = 8.40(70 lines)  AV=2.53  SV=5.22  BV=5.71
    {3123,1184,1048, 0, 0, 0},  //TV = 8.32(74 lines)  AV=2.53  SV=5.24  BV=5.61
    {3376,1184,1032, 0, 0, 0},  //TV = 8.21(80 lines)  AV=2.53  SV=5.22  BV=5.52
    {3587,1184,1048, 0, 0, 0},  //TV = 8.12(85 lines)  AV=2.53  SV=5.24  BV=5.41
    {3840,1184,1048, 0, 0, 0},  //TV = 8.02(91 lines)  AV=2.53  SV=5.24  BV=5.31
    {4135,1184,1040, 0, 0, 0},  //TV = 7.92(98 lines)  AV=2.53  SV=5.23  BV=5.21
    {4430,1184,1040, 0, 0, 0},  //TV = 7.82(105 lines)  AV=2.53  SV=5.23  BV=5.11
    {4768,1184,1040, 0, 0, 0},  //TV = 7.71(113 lines)  AV=2.53  SV=5.23  BV=5.01
    {5105,1184,1040, 0, 0, 0},  //TV = 7.61(121 lines)  AV=2.53  SV=5.23  BV=4.91
    {5485,1184,1032, 0, 0, 0},  //TV = 7.51(130 lines)  AV=2.53  SV=5.22  BV=4.82
    {5907,1184,1032, 0, 0, 0},  //TV = 7.40(140 lines)  AV=2.53  SV=5.22  BV=4.71
    {6329,1184,1032, 0, 0, 0},  //TV = 7.30(150 lines)  AV=2.53  SV=5.22  BV=4.61
    {6709,1184,1040, 0, 0, 0},  //TV = 7.22(159 lines)  AV=2.53  SV=5.23  BV=4.51
    {7257,1184,1032, 0, 0, 0},  //TV = 7.11(172 lines)  AV=2.53  SV=5.22  BV=4.41
    {7763,1184,1040, 0, 0, 0},  //TV = 7.01(184 lines)  AV=2.53  SV=5.23  BV=4.30
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8903,1184,1040, 0, 0, 0},  //TV = 6.81(211 lines)  AV=2.53  SV=5.23  BV=4.11
    {9535,1184,1040, 0, 0, 0},  //TV = 6.71(226 lines)  AV=2.53  SV=5.23  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.86  BV=3.31
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {10000,2112,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.06  BV=3.11
    {10000,2256,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.16  BV=3.01
    {10000,2448,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.26  BV=2.91
    {10000,2624,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.36  BV=2.81
    {10000,2816,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.46  BV=2.71
    {10000,3024,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.56  BV=2.61
    {10000,3200,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.66  BV=2.51
    {10000,3456,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.75  BV=2.42
    {10000,3712,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.86  BV=2.31
    {10000,3984,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.96  BV=2.21
    {10000,4240,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.05  BV=2.12
    {10000,4528,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.17  BV=2.00
    {10000,4864,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.26  BV=1.91
    {10000,5248,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.36  BV=1.81
    {10000,5584,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.46  BV=1.71
    {10000,5968,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.55  BV=1.62
    {10000,6144,1080, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.66  BV=1.51
    {10000,6144,1160, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.76  BV=1.41
    {10000,6144,1240, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.86  BV=1.31
    {10000,6144,1328, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.96  BV=1.21
    {10000,6144,1424, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.06  BV=1.11
    {10000,6144,1528, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.16  BV=1.01
    {10000,6144,1640, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.26  BV=0.91
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    83,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    91,    //i4MaxBV
    9,    //i4MinBV
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
    {254,1296,1056, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.38  BV=9.08
    {296,1184,1040, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.23  BV=9.02
    {296,1232,1072, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.33  BV=8.92
    {338,1184,1048, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.24  BV=8.81
    {338,1296,1024, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.34  BV=8.72
    {380,1232,1032, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.28  BV=8.61
    {422,1184,1032, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.22  BV=8.52
    {422,1232,1064, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.32  BV=8.41
    {465,1232,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.29  BV=8.31
    {507,1184,1064, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.26  BV=8.21
    {549,1184,1048, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.24  BV=8.11
    {591,1184,1048, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.24  BV=8.01
    {633,1184,1048, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.24  BV=7.91
    {676,1184,1048, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.24  BV=7.81
    {718,1184,1064, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.26  BV=7.71
    {760,1232,1032, 0, 0, 0},  //TV = 10.36(18 lines)  AV=2.53  SV=5.28  BV=7.61
    {844,1184,1032, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.22  BV=7.52
    {886,1184,1056, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.25  BV=7.41
    {971,1184,1032, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.22  BV=7.31
    {1013,1184,1064, 0, 0, 0},  //TV = 9.95(24 lines)  AV=2.53  SV=5.26  BV=7.21
    {1097,1184,1056, 0, 0, 0},  //TV = 9.83(26 lines)  AV=2.53  SV=5.25  BV=7.10
    {1182,1184,1048, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.24  BV=7.01
    {1266,1184,1048, 0, 0, 0},  //TV = 9.63(30 lines)  AV=2.53  SV=5.24  BV=6.91
    {1351,1184,1048, 0, 0, 0},  //TV = 9.53(32 lines)  AV=2.53  SV=5.24  BV=6.81
    {1435,1184,1064, 0, 0, 0},  //TV = 9.44(34 lines)  AV=2.53  SV=5.26  BV=6.71
    {1562,1184,1048, 0, 0, 0},  //TV = 9.32(37 lines)  AV=2.53  SV=5.24  BV=6.61
    {1688,1184,1040, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.23  BV=6.50
    {1772,1184,1056, 0, 0, 0},  //TV = 9.14(42 lines)  AV=2.53  SV=5.25  BV=6.41
    {1899,1184,1056, 0, 0, 0},  //TV = 9.04(45 lines)  AV=2.53  SV=5.25  BV=6.31
    {2068,1184,1040, 0, 0, 0},  //TV = 8.92(49 lines)  AV=2.53  SV=5.23  BV=6.21
    {2237,1184,1032, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.22  BV=6.11
    {2363,1184,1048, 0, 0, 0},  //TV = 8.73(56 lines)  AV=2.53  SV=5.24  BV=6.01
    {2532,1184,1048, 0, 0, 0},  //TV = 8.63(60 lines)  AV=2.53  SV=5.24  BV=5.91
    {2743,1184,1032, 0, 0, 0},  //TV = 8.51(65 lines)  AV=2.53  SV=5.22  BV=5.82
    {2954,1184,1032, 0, 0, 0},  //TV = 8.40(70 lines)  AV=2.53  SV=5.22  BV=5.71
    {3123,1184,1048, 0, 0, 0},  //TV = 8.32(74 lines)  AV=2.53  SV=5.24  BV=5.61
    {3376,1184,1032, 0, 0, 0},  //TV = 8.21(80 lines)  AV=2.53  SV=5.22  BV=5.52
    {3587,1184,1048, 0, 0, 0},  //TV = 8.12(85 lines)  AV=2.53  SV=5.24  BV=5.41
    {3840,1184,1048, 0, 0, 0},  //TV = 8.02(91 lines)  AV=2.53  SV=5.24  BV=5.31
    {4135,1184,1040, 0, 0, 0},  //TV = 7.92(98 lines)  AV=2.53  SV=5.23  BV=5.21
    {4430,1184,1040, 0, 0, 0},  //TV = 7.82(105 lines)  AV=2.53  SV=5.23  BV=5.11
    {4768,1184,1040, 0, 0, 0},  //TV = 7.71(113 lines)  AV=2.53  SV=5.23  BV=5.01
    {5105,1184,1040, 0, 0, 0},  //TV = 7.61(121 lines)  AV=2.53  SV=5.23  BV=4.91
    {5485,1184,1032, 0, 0, 0},  //TV = 7.51(130 lines)  AV=2.53  SV=5.22  BV=4.82
    {5907,1184,1032, 0, 0, 0},  //TV = 7.40(140 lines)  AV=2.53  SV=5.22  BV=4.71
    {6329,1184,1032, 0, 0, 0},  //TV = 7.30(150 lines)  AV=2.53  SV=5.22  BV=4.61
    {6709,1184,1040, 0, 0, 0},  //TV = 7.22(159 lines)  AV=2.53  SV=5.23  BV=4.51
    {7257,1184,1032, 0, 0, 0},  //TV = 7.11(172 lines)  AV=2.53  SV=5.22  BV=4.41
    {7763,1184,1040, 0, 0, 0},  //TV = 7.01(184 lines)  AV=2.53  SV=5.23  BV=4.30
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {8312,2048,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.02  BV=3.41
    {8312,2208,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.12  BV=3.32
    {8312,2368,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.22  BV=3.22
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {16666,1536,1056, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.63  BV=2.80
    {16666,1648,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.72  BV=2.71
    {16666,1808,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.83  BV=2.60
    {16666,1920,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.93  BV=2.50
    {16666,2048,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.03  BV=2.40
    {16666,2208,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.12  BV=2.31
    {16666,2368,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.22  BV=2.21
    {16666,2560,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.32  BV=2.11
    {16666,2704,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.42  BV=2.01
    {16666,2912,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.53  BV=1.90
    {16666,3136,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.61  BV=1.82
    {16666,3328,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.72  BV=1.71
    {16666,3600,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.81  BV=1.62
    {16666,3856,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.92  BV=1.51
    {16666,4160,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.02  BV=1.41
    {16666,4448,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.13  BV=1.30
    {25020,3200,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.64  BV=1.20
    {25020,3408,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.73  BV=1.11
    {25020,3648,1032, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.84  BV=1.00
    {25020,3920,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.94  BV=0.91
    {33205,3136,1032, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.63  BV=0.81
    {33205,3408,1024, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.73  BV=0.70
    {33205,3648,1024, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.83  BV=0.61
    {33205,3856,1032, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.92  BV=0.51
    {33205,4160,1024, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.02  BV=0.42
    {33205,4448,1024, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.12  BV=0.32
    {33205,4768,1024, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.22  BV=0.22
    {33205,5152,1024, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.33  BV=0.11
    {33205,5472,1040, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.44  BV=-0.00
    {33205,5968,1024, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.54  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1296,1056, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.38  BV=9.08
    {296,1184,1040, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.23  BV=9.02
    {296,1232,1072, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.33  BV=8.92
    {338,1184,1048, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.24  BV=8.81
    {338,1296,1024, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.34  BV=8.72
    {380,1232,1032, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.28  BV=8.61
    {422,1184,1032, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.22  BV=8.52
    {422,1232,1064, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.32  BV=8.41
    {465,1232,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.29  BV=8.31
    {507,1184,1064, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.26  BV=8.21
    {549,1184,1048, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.24  BV=8.11
    {591,1184,1048, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.24  BV=8.01
    {633,1184,1048, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.24  BV=7.91
    {676,1184,1048, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.24  BV=7.81
    {718,1184,1064, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.26  BV=7.71
    {760,1232,1032, 0, 0, 0},  //TV = 10.36(18 lines)  AV=2.53  SV=5.28  BV=7.61
    {844,1184,1032, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.22  BV=7.52
    {886,1184,1056, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.25  BV=7.41
    {971,1184,1032, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.22  BV=7.31
    {1013,1184,1064, 0, 0, 0},  //TV = 9.95(24 lines)  AV=2.53  SV=5.26  BV=7.21
    {1097,1184,1056, 0, 0, 0},  //TV = 9.83(26 lines)  AV=2.53  SV=5.25  BV=7.10
    {1182,1184,1048, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.24  BV=7.01
    {1266,1184,1048, 0, 0, 0},  //TV = 9.63(30 lines)  AV=2.53  SV=5.24  BV=6.91
    {1351,1184,1048, 0, 0, 0},  //TV = 9.53(32 lines)  AV=2.53  SV=5.24  BV=6.81
    {1435,1184,1064, 0, 0, 0},  //TV = 9.44(34 lines)  AV=2.53  SV=5.26  BV=6.71
    {1562,1184,1048, 0, 0, 0},  //TV = 9.32(37 lines)  AV=2.53  SV=5.24  BV=6.61
    {1688,1184,1040, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.23  BV=6.50
    {1772,1184,1056, 0, 0, 0},  //TV = 9.14(42 lines)  AV=2.53  SV=5.25  BV=6.41
    {1899,1184,1056, 0, 0, 0},  //TV = 9.04(45 lines)  AV=2.53  SV=5.25  BV=6.31
    {2068,1184,1040, 0, 0, 0},  //TV = 8.92(49 lines)  AV=2.53  SV=5.23  BV=6.21
    {2237,1184,1032, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.22  BV=6.11
    {2363,1184,1048, 0, 0, 0},  //TV = 8.73(56 lines)  AV=2.53  SV=5.24  BV=6.01
    {2532,1184,1048, 0, 0, 0},  //TV = 8.63(60 lines)  AV=2.53  SV=5.24  BV=5.91
    {2743,1184,1032, 0, 0, 0},  //TV = 8.51(65 lines)  AV=2.53  SV=5.22  BV=5.82
    {2954,1184,1032, 0, 0, 0},  //TV = 8.40(70 lines)  AV=2.53  SV=5.22  BV=5.71
    {3123,1184,1048, 0, 0, 0},  //TV = 8.32(74 lines)  AV=2.53  SV=5.24  BV=5.61
    {3376,1184,1032, 0, 0, 0},  //TV = 8.21(80 lines)  AV=2.53  SV=5.22  BV=5.52
    {3587,1184,1048, 0, 0, 0},  //TV = 8.12(85 lines)  AV=2.53  SV=5.24  BV=5.41
    {3840,1184,1048, 0, 0, 0},  //TV = 8.02(91 lines)  AV=2.53  SV=5.24  BV=5.31
    {4135,1184,1040, 0, 0, 0},  //TV = 7.92(98 lines)  AV=2.53  SV=5.23  BV=5.21
    {4430,1184,1040, 0, 0, 0},  //TV = 7.82(105 lines)  AV=2.53  SV=5.23  BV=5.11
    {4768,1184,1040, 0, 0, 0},  //TV = 7.71(113 lines)  AV=2.53  SV=5.23  BV=5.01
    {5105,1184,1040, 0, 0, 0},  //TV = 7.61(121 lines)  AV=2.53  SV=5.23  BV=4.91
    {5485,1184,1032, 0, 0, 0},  //TV = 7.51(130 lines)  AV=2.53  SV=5.22  BV=4.82
    {5907,1184,1032, 0, 0, 0},  //TV = 7.40(140 lines)  AV=2.53  SV=5.22  BV=4.71
    {6329,1184,1032, 0, 0, 0},  //TV = 7.30(150 lines)  AV=2.53  SV=5.22  BV=4.61
    {6709,1184,1040, 0, 0, 0},  //TV = 7.22(159 lines)  AV=2.53  SV=5.23  BV=4.51
    {7257,1184,1032, 0, 0, 0},  //TV = 7.11(172 lines)  AV=2.53  SV=5.22  BV=4.41
    {7763,1184,1040, 0, 0, 0},  //TV = 7.01(184 lines)  AV=2.53  SV=5.23  BV=4.30
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8903,1184,1040, 0, 0, 0},  //TV = 6.81(211 lines)  AV=2.53  SV=5.23  BV=4.11
    {9535,1184,1040, 0, 0, 0},  //TV = 6.71(226 lines)  AV=2.53  SV=5.23  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.86  BV=3.31
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {10000,2112,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.06  BV=3.11
    {10000,2256,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.16  BV=3.01
    {10000,2448,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.26  BV=2.91
    {10000,2624,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.36  BV=2.81
    {10000,2816,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.46  BV=2.71
    {10000,3024,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.56  BV=2.61
    {10000,3200,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.66  BV=2.51
    {10000,3456,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.75  BV=2.42
    {10000,3712,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.86  BV=2.31
    {10000,3984,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.96  BV=2.21
    {10000,4240,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.05  BV=2.12
    {10000,4528,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.17  BV=2.00
    {10000,4864,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.26  BV=1.91
    {10000,5248,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.36  BV=1.81
    {10000,5584,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.46  BV=1.71
    {10000,5968,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.55  BV=1.62
    {19999,3200,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.66  BV=1.51
    {19999,3456,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.75  BV=1.42
    {19999,3712,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.86  BV=1.31
    {19999,3920,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.96  BV=1.21
    {19999,4240,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.06  BV=1.11
    {19999,4528,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.17  BV=1.00
    {29998,3280,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.68  BV=0.91
    {29998,3504,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.77  BV=0.81
    {29998,3760,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.88  BV=0.71
    {29998,3984,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.97  BV=0.61
    {29998,4304,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.07  BV=0.51
    {29998,4608,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.17  BV=0.42
    {29998,4864,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.27  BV=0.31
    {29998,5248,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.38  BV=0.21
    {29998,5712,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.48  BV=0.11
    {29998,6096,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.58  BV=0.00
    {29998,6144,1096, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.68  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    93,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    91,    //i4MaxBV
    -1,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {16666,1536,1056, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.63  BV=2.80
    {16666,1648,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.72  BV=2.71
    {16666,1808,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.82  BV=2.61
    {16666,1920,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.93  BV=2.50
    {16666,2048,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.02  BV=2.41
    {16666,2208,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.12  BV=2.31
    {16666,2368,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.22  BV=2.21
    {16666,2560,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.32  BV=2.11
    {16666,2704,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.43  BV=2.00
    {16666,2912,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.53  BV=1.90
    {16666,3136,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.61  BV=1.82
    {16666,3328,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.72  BV=1.71
    {16666,3600,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.81  BV=1.62
    {16666,3856,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.92  BV=1.51
    {16666,4160,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.02  BV=1.41
    {16666,4448,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.13  BV=1.30
    {25020,3200,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.64  BV=1.20
    {25020,3408,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.73  BV=1.11
    {25020,3648,1032, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.84  BV=1.00
    {25020,3920,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.94  BV=0.91
    {33331,3136,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.61  BV=0.82
    {33331,3328,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.72  BV=0.71
    {33331,3600,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.83  BV=0.61
    {33331,3856,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.92  BV=0.51
    {33331,4160,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.02  BV=0.41
    {33331,4448,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.12  BV=0.31
    {33331,4768,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.22  BV=0.21
    {33331,5040,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.32  BV=0.11
    {33331,5472,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.44  BV=-0.01
    {33331,5840,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.53  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.87  BV=3.30
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {10000,2112,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.06  BV=3.11
    {10000,2256,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.16  BV=3.01
    {10000,2448,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.26  BV=2.91
    {10000,2624,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.36  BV=2.81
    {10000,2816,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.46  BV=2.71
    {10000,3024,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.56  BV=2.61
    {10000,3200,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.66  BV=2.51
    {10000,3456,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.75  BV=2.42
    {10000,3712,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.86  BV=2.31
    {10000,3984,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.96  BV=2.21
    {10000,4240,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.06  BV=2.11
    {10000,4528,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.17  BV=2.00
    {10000,4864,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.26  BV=1.91
    {10000,5248,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.36  BV=1.81
    {10000,5584,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.46  BV=1.71
    {10000,5968,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.55  BV=1.62
    {19999,3200,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.66  BV=1.51
    {19999,3456,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.75  BV=1.42
    {19999,3712,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.86  BV=1.31
    {19999,3920,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.96  BV=1.21
    {19999,4240,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.06  BV=1.11
    {19999,4528,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.17  BV=1.00
    {29998,3280,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.68  BV=0.91
    {29998,3504,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.77  BV=0.81
    {29998,3760,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.88  BV=0.71
    {29998,3984,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.97  BV=0.61
    {29998,4304,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.07  BV=0.51
    {29998,4608,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.17  BV=0.42
    {29998,4864,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.27  BV=0.31
    {29998,5248,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.38  BV=0.21
    {29998,5712,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.48  BV=0.11
    {29998,6096,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.58  BV=0.00
    {29998,6144,1096, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.68  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    95,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -1,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {16666,1536,1056, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.63  BV=2.80
    {16666,1648,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.72  BV=2.71
    {16666,1808,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.82  BV=2.61
    {16666,1920,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.93  BV=2.50
    {16666,2048,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.02  BV=2.41
    {16666,2208,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.12  BV=2.31
    {16666,2368,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.22  BV=2.21
    {16666,2560,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.32  BV=2.11
    {16666,2704,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.43  BV=2.00
    {16666,2912,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.53  BV=1.90
    {16666,3136,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.61  BV=1.82
    {16666,3328,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.72  BV=1.71
    {16666,3600,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.81  BV=1.62
    {16666,3856,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.92  BV=1.51
    {16666,4160,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.02  BV=1.41
    {16666,4448,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.13  BV=1.30
    {25020,3200,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.64  BV=1.20
    {25020,3408,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.73  BV=1.11
    {25020,3648,1032, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.84  BV=1.00
    {25020,3920,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.94  BV=0.91
    {33331,3136,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.61  BV=0.82
    {33331,3328,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.72  BV=0.71
    {33331,3600,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.83  BV=0.61
    {33331,3856,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.92  BV=0.51
    {33331,4160,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.02  BV=0.41
    {33331,4448,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.12  BV=0.31
    {33331,4768,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.22  BV=0.21
    {33331,5040,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.32  BV=0.11
    {33331,5472,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.44  BV=-0.01
    {33331,5840,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.53  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.87  BV=3.30
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {10000,2112,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.06  BV=3.11
    {10000,2256,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.16  BV=3.01
    {10000,2448,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.26  BV=2.91
    {10000,2624,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.36  BV=2.81
    {10000,2816,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.46  BV=2.71
    {10000,3024,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.56  BV=2.61
    {10000,3200,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.66  BV=2.51
    {10000,3456,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.75  BV=2.42
    {10000,3712,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.86  BV=2.31
    {10000,3984,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.96  BV=2.21
    {10000,4240,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.06  BV=2.11
    {10000,4528,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.17  BV=2.00
    {10000,4864,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.26  BV=1.91
    {10000,5248,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.36  BV=1.81
    {10000,5584,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.46  BV=1.71
    {10000,5968,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.55  BV=1.62
    {19999,3200,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.66  BV=1.51
    {19999,3456,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.75  BV=1.42
    {19999,3712,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.86  BV=1.31
    {19999,3920,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.96  BV=1.21
    {19999,4240,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.06  BV=1.11
    {19999,4528,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.17  BV=1.00
    {29998,3280,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.68  BV=0.91
    {29998,3504,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.77  BV=0.81
    {29998,3760,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.88  BV=0.71
    {29998,3984,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.97  BV=0.61
    {29998,4304,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.07  BV=0.51
    {29998,4608,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.17  BV=0.42
    {29998,4864,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.27  BV=0.31
    {29998,5248,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.38  BV=0.21
    {29998,5712,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.48  BV=0.11
    {29998,6096,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.58  BV=0.00
    {29998,6144,1096, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.68  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    95,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -1,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {16666,1536,1056, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.63  BV=2.80
    {16666,1648,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.72  BV=2.71
    {16666,1808,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.82  BV=2.61
    {16666,1920,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.93  BV=2.50
    {16666,2048,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.02  BV=2.41
    {16666,2208,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.12  BV=2.31
    {16666,2368,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.22  BV=2.21
    {16666,2560,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.32  BV=2.11
    {16666,2704,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.43  BV=2.00
    {16666,2912,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.53  BV=1.90
    {16666,3136,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.61  BV=1.82
    {16666,3328,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.72  BV=1.71
    {16666,3600,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.81  BV=1.62
    {16666,3856,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.92  BV=1.51
    {16666,4160,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.02  BV=1.41
    {16666,4448,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.13  BV=1.30
    {25020,3200,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.64  BV=1.20
    {25020,3408,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.73  BV=1.11
    {25020,3648,1032, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.84  BV=1.00
    {25020,3920,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.94  BV=0.91
    {33331,3136,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.61  BV=0.82
    {33331,3328,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.72  BV=0.71
    {33331,3600,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.83  BV=0.61
    {33331,3856,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.92  BV=0.51
    {33331,4160,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.02  BV=0.41
    {33331,4448,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.12  BV=0.31
    {33331,4768,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.22  BV=0.21
    {33331,5040,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.32  BV=0.11
    {33331,5472,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.44  BV=-0.01
    {33331,5840,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.53  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.87  BV=3.30
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {10000,2112,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.06  BV=3.11
    {10000,2256,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.16  BV=3.01
    {10000,2448,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.26  BV=2.91
    {10000,2624,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.36  BV=2.81
    {10000,2816,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.46  BV=2.71
    {10000,3024,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.56  BV=2.61
    {10000,3200,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.66  BV=2.51
    {10000,3456,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.75  BV=2.42
    {10000,3712,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.86  BV=2.31
    {10000,3984,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.96  BV=2.21
    {10000,4240,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.06  BV=2.11
    {10000,4528,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.17  BV=2.00
    {10000,4864,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.26  BV=1.91
    {10000,5248,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.36  BV=1.81
    {10000,5584,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.46  BV=1.71
    {10000,5968,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.55  BV=1.62
    {19999,3200,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.66  BV=1.51
    {19999,3456,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.75  BV=1.42
    {19999,3712,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.86  BV=1.31
    {19999,3920,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.96  BV=1.21
    {19999,4240,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.06  BV=1.11
    {19999,4528,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.17  BV=1.00
    {29998,3280,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.68  BV=0.91
    {29998,3504,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.77  BV=0.81
    {29998,3760,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.88  BV=0.71
    {29998,3984,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.97  BV=0.61
    {29998,4304,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.07  BV=0.51
    {29998,4608,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.17  BV=0.42
    {29998,4864,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.27  BV=0.31
    {29998,5248,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.38  BV=0.21
    {29998,5712,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.48  BV=0.11
    {29998,6096,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.58  BV=0.00
    {29998,6144,1096, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.68  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    95,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -1,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {16666,1536,1056, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.63  BV=2.80
    {16666,1648,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.72  BV=2.71
    {16666,1808,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.82  BV=2.61
    {16666,1920,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.93  BV=2.50
    {16666,2048,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.02  BV=2.41
    {16666,2208,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.12  BV=2.31
    {16666,2368,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.22  BV=2.21
    {16666,2560,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.32  BV=2.11
    {16666,2704,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.43  BV=2.00
    {16666,2912,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.53  BV=1.90
    {16666,3136,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.61  BV=1.82
    {16666,3328,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.72  BV=1.71
    {16666,3600,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.81  BV=1.62
    {16666,3856,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.92  BV=1.51
    {16666,4160,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.02  BV=1.41
    {16666,4448,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.13  BV=1.30
    {25020,3200,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.64  BV=1.20
    {25020,3408,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.73  BV=1.11
    {25020,3648,1032, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.84  BV=1.00
    {25020,3920,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.94  BV=0.91
    {33331,3136,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.61  BV=0.82
    {33331,3328,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.72  BV=0.71
    {33331,3600,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.83  BV=0.61
    {33331,3856,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.92  BV=0.51
    {33331,4160,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.02  BV=0.41
    {33331,4448,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.12  BV=0.31
    {33331,4768,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.22  BV=0.21
    {33331,5040,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.32  BV=0.11
    {33331,5472,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.44  BV=-0.01
    {33331,5840,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.53  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.87  BV=3.30
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {10000,2112,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.06  BV=3.11
    {10000,2256,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.16  BV=3.01
    {10000,2448,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.26  BV=2.91
    {10000,2624,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.36  BV=2.81
    {10000,2816,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.46  BV=2.71
    {10000,3024,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.56  BV=2.61
    {10000,3200,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.66  BV=2.51
    {10000,3456,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.75  BV=2.42
    {10000,3712,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.86  BV=2.31
    {10000,3984,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.96  BV=2.21
    {10000,4240,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.06  BV=2.11
    {10000,4528,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.17  BV=2.00
    {10000,4864,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.26  BV=1.91
    {10000,5248,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.36  BV=1.81
    {10000,5584,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.46  BV=1.71
    {10000,5968,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.55  BV=1.62
    {19999,3200,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.66  BV=1.51
    {19999,3456,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.75  BV=1.42
    {19999,3712,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.86  BV=1.31
    {19999,3920,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.96  BV=1.21
    {19999,4240,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.06  BV=1.11
    {19999,4528,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.17  BV=1.00
    {29998,3280,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.68  BV=0.91
    {29998,3504,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.77  BV=0.81
    {29998,3760,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.88  BV=0.71
    {29998,3984,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.97  BV=0.61
    {29998,4304,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.07  BV=0.51
    {29998,4608,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.17  BV=0.42
    {29998,4864,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.27  BV=0.31
    {29998,5248,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.38  BV=0.21
    {29998,5712,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.48  BV=0.11
    {29998,6096,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.58  BV=0.00
    {29998,6144,1096, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.68  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    95,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -1,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {16666,1536,1056, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.63  BV=2.80
    {16666,1648,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.72  BV=2.71
    {16666,1808,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.82  BV=2.61
    {16666,1920,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.93  BV=2.50
    {16666,2048,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.02  BV=2.41
    {16666,2208,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.12  BV=2.31
    {16666,2368,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.22  BV=2.21
    {16666,2560,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.32  BV=2.11
    {16666,2704,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.43  BV=2.00
    {16666,2912,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.53  BV=1.90
    {16666,3136,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.61  BV=1.82
    {16666,3328,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.72  BV=1.71
    {16666,3600,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.81  BV=1.62
    {16666,3856,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.92  BV=1.51
    {16666,4160,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.02  BV=1.41
    {16666,4448,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.13  BV=1.30
    {25020,3200,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.64  BV=1.20
    {25020,3408,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.73  BV=1.11
    {25020,3648,1032, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.84  BV=1.00
    {25020,3920,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.94  BV=0.91
    {33331,3136,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.61  BV=0.82
    {33331,3328,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.72  BV=0.71
    {33331,3600,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.83  BV=0.61
    {33331,3856,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.92  BV=0.51
    {33331,4160,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.02  BV=0.41
    {33331,4448,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.12  BV=0.31
    {33331,4768,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.22  BV=0.21
    {33331,5040,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.32  BV=0.11
    {33331,5472,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.44  BV=-0.01
    {33331,5840,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.53  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.87  BV=3.30
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {10000,2112,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.06  BV=3.11
    {10000,2256,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.16  BV=3.01
    {10000,2448,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.26  BV=2.91
    {10000,2624,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.36  BV=2.81
    {10000,2816,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.46  BV=2.71
    {10000,3024,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.56  BV=2.61
    {10000,3200,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.66  BV=2.51
    {10000,3456,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.75  BV=2.42
    {10000,3712,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.86  BV=2.31
    {10000,3984,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.96  BV=2.21
    {10000,4240,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.06  BV=2.11
    {10000,4528,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.17  BV=2.00
    {10000,4864,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.26  BV=1.91
    {10000,5248,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.36  BV=1.81
    {10000,5584,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.46  BV=1.71
    {10000,5968,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.55  BV=1.62
    {19999,3200,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.66  BV=1.51
    {19999,3456,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.75  BV=1.42
    {19999,3712,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.86  BV=1.31
    {19999,3920,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.96  BV=1.21
    {19999,4240,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.06  BV=1.11
    {19999,4528,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.17  BV=1.00
    {29998,3280,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.68  BV=0.91
    {29998,3504,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.77  BV=0.81
    {29998,3760,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.88  BV=0.71
    {29998,3984,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.97  BV=0.61
    {29998,4304,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.07  BV=0.51
    {29998,4608,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.17  BV=0.42
    {29998,4864,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.27  BV=0.31
    {29998,5248,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.38  BV=0.21
    {29998,5712,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.48  BV=0.11
    {29998,6096,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.58  BV=0.00
    {29998,6144,1096, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.68  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    95,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -1,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {25020,1024,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.04  BV=2.80
    {25020,1088,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.13  BV=2.71
    {25020,1184,1040, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.23  BV=2.62
    {25020,1232,1072, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.33  BV=2.51
    {33205,1024,1048, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.03  BV=2.41
    {33205,1088,1048, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.12  BV=2.32
    {33205,1184,1032, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.22  BV=2.22
    {33205,1232,1064, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.32  BV=2.12
    {33205,1344,1048, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.43  BV=2.01
    {33205,1440,1048, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.53  BV=1.91
    {33205,1536,1056, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.63  BV=1.81
    {33205,1696,1024, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.73  BV=1.71
    {33205,1808,1032, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.83  BV=1.61
    {33205,1952,1024, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=5.93  BV=1.51
    {33205,2048,1048, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.03  BV=1.41
    {33205,2208,1032, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.12  BV=1.32
    {33205,2368,1040, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.23  BV=1.21
    {33205,2560,1024, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.32  BV=1.12
    {33205,2768,1024, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.43  BV=1.00
    {33205,2912,1040, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.53  BV=0.91
    {33205,3136,1032, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.63  BV=0.81
    {33205,3328,1040, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.72  BV=0.72
    {33205,3600,1032, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.83  BV=0.61
    {33205,3856,1040, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=6.94  BV=0.50
    {33205,4160,1032, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.03  BV=0.40
    {33205,4448,1032, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.13  BV=0.31
    {33205,4768,1032, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.23  BV=0.21
    {33205,5040,1040, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.32  BV=0.12
    {33205,5472,1032, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.43  BV=0.01
    {33205,5968,1024, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.54  BV=-0.10
    {33205,6096,1072, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.64  BV=-0.20
    {33205,6144,1136, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.73  BV=-0.30
    {33205,6144,1216, 0, 0, 0},  //TV = 4.91(787 lines)  AV=2.53  SV=7.83  BV=-0.39
    {41685,6096,1048, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=7.61  BV=-0.50
    {41685,6144,1112, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=7.70  BV=-0.59
    {41685,6144,1192, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=7.80  BV=-0.69
    {49996,6144,1064, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=7.64  BV=-0.79
    {49996,6144,1144, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=7.74  BV=-0.90
    {58350,6096,1056, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=7.62  BV=-0.99
    {58350,6144,1128, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=7.72  BV=-1.10
    {66535,6096,1064, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=7.63  BV=-1.19
    {66535,6144,1136, 0, 0, 0},  //TV = 3.91(1577 lines)  AV=2.53  SV=7.73  BV=-1.30
    {75015,6144,1080, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=7.66  BV=-1.40
    {83326,6096,1056, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=7.62  BV=-1.51
    {83326,6144,1120, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=7.71  BV=-1.60
    {91680,6144,1088, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=7.67  BV=-1.70
    {99991,6144,1072, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.65  BV=-1.80
    {99991,6144,1144, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.74  BV=-1.90
    {99991,6144,1232, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.85  BV=-2.00
    {99991,6144,1320, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.95  BV=-2.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.86  BV=3.31
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {19999,1024,1072, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.07  BV=3.10
    {19999,1136,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.16  BV=3.01
    {19999,1184,1064, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.26  BV=2.91
    {19999,1296,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.36  BV=2.81
    {19999,1392,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.47  BV=2.70
    {19999,1488,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.56  BV=2.61
    {29998,1024,1080, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.08  BV=2.51
    {29998,1136,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.17  BV=2.41
    {29998,1232,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.27  BV=2.32
    {29998,1296,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.37  BV=2.21
    {29998,1392,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.47  BV=2.12
    {29998,1488,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.57  BV=2.01
    {29998,1600,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.68  BV=1.91
    {29998,1744,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.78  BV=1.81
    {29998,1856,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.87  BV=1.72
    {29998,2000,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.98  BV=1.61
    {29998,2160,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.08  BV=1.51
    {29998,2304,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.17  BV=1.42
    {29998,2448,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.27  BV=1.32
    {29998,2624,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.37  BV=1.22
    {29998,2816,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.47  BV=1.11
    {29998,3024,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.58  BV=1.00
    {29998,3280,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.68  BV=0.91
    {29998,3504,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.77  BV=0.81
    {29998,3712,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.87  BV=0.72
    {29998,3984,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.97  BV=0.61
    {29998,4304,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.08  BV=0.50
    {29998,4608,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.18  BV=0.40
    {29998,4960,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.28  BV=0.31
    {29998,5248,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.37  BV=0.22
    {29998,5584,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.47  BV=0.12
    {29998,6096,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.60  BV=-0.01
    {29998,6144,1104, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.69  BV=-0.11
    {29998,6144,1176, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.78  BV=-0.20
    {29998,6144,1256, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.88  BV=-0.29
    {29998,6144,1352, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.99  BV=-0.40
    {39997,6144,1080, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=7.66  BV=-0.49
    {39997,6144,1160, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=7.76  BV=-0.59
    {39997,6144,1248, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=7.87  BV=-0.70
    {49996,6144,1064, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=7.64  BV=-0.79
    {49996,6144,1144, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=7.74  BV=-0.90
    {59995,6096,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.60  BV=-1.01
    {59995,6144,1096, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.68  BV=-1.10
    {59995,6144,1176, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.78  BV=-1.20
    {69994,6144,1080, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=7.66  BV=-1.30
    {69994,6144,1152, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=7.75  BV=-1.39
    {79993,6144,1080, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=7.66  BV=-1.49
    {89992,6096,1048, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=7.61  BV=-1.61
    {89992,6144,1104, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=7.69  BV=-1.69
    {99991,6144,1072, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.65  BV=-1.80
    {99991,6144,1144, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.74  BV=-1.90
    {99991,6144,1232, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.85  BV=-2.00
    {99991,6144,1320, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.95  BV=-2.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    115,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -21,    //i4MinBV
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
    {254,1344,1048, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.43  BV=9.04
    {254,1392,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.45  BV=9.01
    {296,1232,1072, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.33  BV=8.92
    {296,1344,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.44  BV=8.81
    {338,1296,1024, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.34  BV=8.72
    {380,1232,1032, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.28  BV=8.61
    {380,1296,1048, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.37  BV=8.51
    {422,1232,1064, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.32  BV=8.41
    {465,1232,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.29  BV=8.31
    {507,1184,1064, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.26  BV=8.21
    {507,1296,1040, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.36  BV=8.11
    {549,1296,1024, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.34  BV=8.02
    {591,1296,1024, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.34  BV=7.91
    {633,1296,1024, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.34  BV=7.81
    {676,1296,1024, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.34  BV=7.72
    {760,1232,1032, 0, 0, 0},  //TV = 10.36(18 lines)  AV=2.53  SV=5.28  BV=7.61
    {802,1232,1048, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.30  BV=7.51
    {844,1232,1064, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.32  BV=7.41
    {929,1232,1040, 0, 0, 0},  //TV = 10.07(22 lines)  AV=2.53  SV=5.29  BV=7.31
    {1013,1184,1064, 0, 0, 0},  //TV = 9.95(24 lines)  AV=2.53  SV=5.26  BV=7.21
    {1055,1232,1056, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.31  BV=7.10
    {1140,1232,1040, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.29  BV=7.01
    {1224,1232,1040, 0, 0, 0},  //TV = 9.67(29 lines)  AV=2.53  SV=5.29  BV=6.91
    {1308,1232,1040, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.29  BV=6.82
    {1393,1232,1048, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.30  BV=6.71
    {1519,1232,1032, 0, 0, 0},  //TV = 9.36(36 lines)  AV=2.53  SV=5.28  BV=6.61
    {1646,1184,1064, 0, 0, 0},  //TV = 9.25(39 lines)  AV=2.53  SV=5.26  BV=6.51
    {1730,1232,1040, 0, 0, 0},  //TV = 9.18(41 lines)  AV=2.53  SV=5.29  BV=6.41
    {1857,1232,1040, 0, 0, 0},  //TV = 9.07(44 lines)  AV=2.53  SV=5.29  BV=6.31
    {2026,1184,1064, 0, 0, 0},  //TV = 8.95(48 lines)  AV=2.53  SV=5.26  BV=6.21
    {2152,1232,1032, 0, 0, 0},  //TV = 8.86(51 lines)  AV=2.53  SV=5.28  BV=6.11
    {2279,1232,1040, 0, 0, 0},  //TV = 8.78(54 lines)  AV=2.53  SV=5.29  BV=6.01
    {2490,1184,1064, 0, 0, 0},  //TV = 8.65(59 lines)  AV=2.53  SV=5.26  BV=5.91
    {2658,1232,1024, 0, 0, 0},  //TV = 8.56(63 lines)  AV=2.53  SV=5.27  BV=5.81
    {2827,1232,1032, 0, 0, 0},  //TV = 8.47(67 lines)  AV=2.53  SV=5.28  BV=5.71
    {3038,1232,1032, 0, 0, 0},  //TV = 8.36(72 lines)  AV=2.53  SV=5.28  BV=5.61
    {3291,1184,1064, 0, 0, 0},  //TV = 8.25(78 lines)  AV=2.53  SV=5.26  BV=5.51
    {3502,1232,1024, 0, 0, 0},  //TV = 8.16(83 lines)  AV=2.53  SV=5.27  BV=5.42
    {3755,1232,1024, 0, 0, 0},  //TV = 8.06(89 lines)  AV=2.53  SV=5.27  BV=5.32
    {4051,1232,1024, 0, 0, 0},  //TV = 7.95(96 lines)  AV=2.53  SV=5.27  BV=5.21
    {4346,1184,1064, 0, 0, 0},  //TV = 7.85(103 lines)  AV=2.53  SV=5.26  BV=5.11
    {4641,1232,1024, 0, 0, 0},  //TV = 7.75(110 lines)  AV=2.53  SV=5.27  BV=5.01
    {4979,1184,1064, 0, 0, 0},  //TV = 7.65(118 lines)  AV=2.53  SV=5.26  BV=4.91
    {5316,1232,1024, 0, 0, 0},  //TV = 7.56(126 lines)  AV=2.53  SV=5.27  BV=4.81
    {5696,1232,1024, 0, 0, 0},  //TV = 7.46(135 lines)  AV=2.53  SV=5.27  BV=4.72
    {6160,1184,1064, 0, 0, 0},  //TV = 7.34(146 lines)  AV=2.53  SV=5.26  BV=4.60
    {6540,1232,1024, 0, 0, 0},  //TV = 7.26(155 lines)  AV=2.53  SV=5.27  BV=4.52
    {7004,1232,1024, 0, 0, 0},  //TV = 7.16(166 lines)  AV=2.53  SV=5.27  BV=4.42
    {7553,1232,1024, 0, 0, 0},  //TV = 7.05(179 lines)  AV=2.53  SV=5.27  BV=4.31
    {8101,1184,1064, 0, 0, 0},  //TV = 6.95(192 lines)  AV=2.53  SV=5.26  BV=4.21
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1952,1024, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {8312,2048,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.02  BV=3.41
    {8312,2208,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.13  BV=3.31
    {8312,2368,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.23  BV=3.20
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {16666,1536,1056, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.63  BV=2.80
    {16666,1648,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.72  BV=2.71
    {16666,1808,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.83  BV=2.60
    {25020,1232,1072, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.33  BV=2.51
    {25020,1344,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.44  BV=2.41
    {25020,1488,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.54  BV=2.31
    {25020,1536,1064, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.64  BV=2.21
    {33331,1232,1064, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.32  BV=2.11
    {33331,1344,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.43  BV=2.01
    {33331,1440,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.53  BV=1.91
    {41685,1232,1048, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.30  BV=1.81
    {41685,1344,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.40  BV=1.71
    {41685,1440,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.50  BV=1.61
    {49996,1232,1072, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.33  BV=1.52
    {49996,1344,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.44  BV=1.41
    {58350,1232,1056, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.31  BV=1.31
    {58350,1344,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.41  BV=1.21
    {66661,1232,1064, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.32  BV=1.11
    {66661,1344,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.43  BV=1.01
    {75015,1296,1032, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=5.35  BV=0.91
    {83326,1232,1048, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=5.30  BV=0.81
    {91680,1184,1064, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=5.26  BV=0.71
    {91680,1296,1040, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=5.36  BV=0.61
    {99991,1232,1072, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=5.33  BV=0.52
    {108345,1232,1072, 0, 0, 0},  //TV = 3.21(2568 lines)  AV=2.53  SV=5.33  BV=0.40
    {116656,1232,1056, 0, 0, 0},  //TV = 3.10(2765 lines)  AV=2.53  SV=5.31  BV=0.31
    {125010,1232,1056, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=5.31  BV=0.21
    {133321,1232,1064, 0, 0, 0},  //TV = 2.91(3160 lines)  AV=2.53  SV=5.32  BV=0.11
    {149986,1184,1064, 0, 0, 0},  //TV = 2.74(3555 lines)  AV=2.53  SV=5.26  BV=-0.00
    {158340,1232,1032, 0, 0, 0},  //TV = 2.66(3753 lines)  AV=2.53  SV=5.28  BV=-0.09
    {166651,1232,1056, 0, 0, 0},  //TV = 2.59(3950 lines)  AV=2.53  SV=5.31  BV=-0.20
    {183316,1232,1024, 0, 0, 0},  //TV = 2.45(4345 lines)  AV=2.53  SV=5.27  BV=-0.29
    {191670,1232,1056, 0, 0, 0},  //TV = 2.38(4543 lines)  AV=2.53  SV=5.31  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1344,1048, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.43  BV=9.04
    {254,1392,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.45  BV=9.01
    {296,1232,1072, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.33  BV=8.92
    {296,1344,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.44  BV=8.81
    {338,1296,1024, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.34  BV=8.72
    {380,1232,1032, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.28  BV=8.61
    {380,1296,1048, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.37  BV=8.51
    {422,1232,1064, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.32  BV=8.41
    {465,1232,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.29  BV=8.31
    {507,1184,1064, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.26  BV=8.21
    {507,1296,1040, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.36  BV=8.11
    {549,1296,1024, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.34  BV=8.02
    {591,1296,1024, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.34  BV=7.91
    {633,1296,1024, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.34  BV=7.81
    {676,1296,1024, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.34  BV=7.72
    {760,1232,1032, 0, 0, 0},  //TV = 10.36(18 lines)  AV=2.53  SV=5.28  BV=7.61
    {802,1232,1048, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.30  BV=7.51
    {844,1232,1064, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.32  BV=7.41
    {929,1232,1040, 0, 0, 0},  //TV = 10.07(22 lines)  AV=2.53  SV=5.29  BV=7.31
    {1013,1184,1064, 0, 0, 0},  //TV = 9.95(24 lines)  AV=2.53  SV=5.26  BV=7.21
    {1055,1232,1056, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.31  BV=7.10
    {1140,1232,1040, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.29  BV=7.01
    {1224,1232,1040, 0, 0, 0},  //TV = 9.67(29 lines)  AV=2.53  SV=5.29  BV=6.91
    {1308,1232,1040, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.29  BV=6.82
    {1393,1232,1048, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.30  BV=6.71
    {1519,1232,1032, 0, 0, 0},  //TV = 9.36(36 lines)  AV=2.53  SV=5.28  BV=6.61
    {1646,1184,1064, 0, 0, 0},  //TV = 9.25(39 lines)  AV=2.53  SV=5.26  BV=6.51
    {1730,1232,1040, 0, 0, 0},  //TV = 9.18(41 lines)  AV=2.53  SV=5.29  BV=6.41
    {1857,1232,1040, 0, 0, 0},  //TV = 9.07(44 lines)  AV=2.53  SV=5.29  BV=6.31
    {2026,1184,1064, 0, 0, 0},  //TV = 8.95(48 lines)  AV=2.53  SV=5.26  BV=6.21
    {2152,1232,1032, 0, 0, 0},  //TV = 8.86(51 lines)  AV=2.53  SV=5.28  BV=6.11
    {2279,1232,1040, 0, 0, 0},  //TV = 8.78(54 lines)  AV=2.53  SV=5.29  BV=6.01
    {2490,1184,1064, 0, 0, 0},  //TV = 8.65(59 lines)  AV=2.53  SV=5.26  BV=5.91
    {2658,1232,1024, 0, 0, 0},  //TV = 8.56(63 lines)  AV=2.53  SV=5.27  BV=5.81
    {2827,1232,1032, 0, 0, 0},  //TV = 8.47(67 lines)  AV=2.53  SV=5.28  BV=5.71
    {3038,1232,1032, 0, 0, 0},  //TV = 8.36(72 lines)  AV=2.53  SV=5.28  BV=5.61
    {3291,1184,1064, 0, 0, 0},  //TV = 8.25(78 lines)  AV=2.53  SV=5.26  BV=5.51
    {3502,1232,1024, 0, 0, 0},  //TV = 8.16(83 lines)  AV=2.53  SV=5.27  BV=5.42
    {3755,1232,1024, 0, 0, 0},  //TV = 8.06(89 lines)  AV=2.53  SV=5.27  BV=5.32
    {4051,1232,1024, 0, 0, 0},  //TV = 7.95(96 lines)  AV=2.53  SV=5.27  BV=5.21
    {4346,1184,1064, 0, 0, 0},  //TV = 7.85(103 lines)  AV=2.53  SV=5.26  BV=5.11
    {4641,1232,1024, 0, 0, 0},  //TV = 7.75(110 lines)  AV=2.53  SV=5.27  BV=5.01
    {4979,1184,1064, 0, 0, 0},  //TV = 7.65(118 lines)  AV=2.53  SV=5.26  BV=4.91
    {5316,1232,1024, 0, 0, 0},  //TV = 7.56(126 lines)  AV=2.53  SV=5.27  BV=4.81
    {5696,1232,1024, 0, 0, 0},  //TV = 7.46(135 lines)  AV=2.53  SV=5.27  BV=4.72
    {6160,1184,1064, 0, 0, 0},  //TV = 7.34(146 lines)  AV=2.53  SV=5.26  BV=4.60
    {6540,1232,1024, 0, 0, 0},  //TV = 7.26(155 lines)  AV=2.53  SV=5.27  BV=4.52
    {7004,1232,1024, 0, 0, 0},  //TV = 7.16(166 lines)  AV=2.53  SV=5.27  BV=4.42
    {7553,1232,1024, 0, 0, 0},  //TV = 7.05(179 lines)  AV=2.53  SV=5.27  BV=4.31
    {8101,1184,1064, 0, 0, 0},  //TV = 6.95(192 lines)  AV=2.53  SV=5.26  BV=4.21
    {8692,1184,1064, 0, 0, 0},  //TV = 6.85(206 lines)  AV=2.53  SV=5.26  BV=4.11
    {9282,1232,1024, 0, 0, 0},  //TV = 6.75(220 lines)  AV=2.53  SV=5.27  BV=4.01
    {9957,1184,1064, 0, 0, 0},  //TV = 6.65(236 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.67  BV=3.50
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.87  BV=3.30
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {10000,2112,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.06  BV=3.11
    {10000,2256,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.16  BV=3.01
    {19999,1184,1064, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.26  BV=2.91
    {19999,1296,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.36  BV=2.81
    {19999,1392,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.47  BV=2.70
    {19999,1488,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.56  BV=2.61
    {19999,1600,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.66  BV=2.51
    {19999,1696,1048, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.76  BV=2.41
    {29998,1232,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.27  BV=2.32
    {29998,1296,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.37  BV=2.21
    {29998,1392,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.48  BV=2.11
    {29998,1488,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.57  BV=2.01
    {29998,1600,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.68  BV=1.91
    {39997,1296,1040, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.36  BV=1.81
    {39997,1392,1040, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.47  BV=1.70
    {39997,1488,1040, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.56  BV=1.61
    {49996,1232,1072, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.33  BV=1.52
    {49996,1344,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.44  BV=1.41
    {59995,1232,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.27  BV=1.32
    {59995,1296,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.37  BV=1.21
    {59995,1392,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.47  BV=1.12
    {69994,1296,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=5.35  BV=1.01
    {69994,1392,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=5.45  BV=0.91
    {79993,1296,1040, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=5.36  BV=0.81
    {89992,1232,1040, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=5.29  BV=0.71
    {89992,1296,1056, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=5.38  BV=0.62
    {99991,1232,1072, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=5.33  BV=0.52
    {109990,1232,1048, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=5.30  BV=0.41
    {119989,1232,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=5.27  BV=0.32
    {129988,1232,1024, 0, 0, 0},  //TV = 2.94(3081 lines)  AV=2.53  SV=5.27  BV=0.20
    {129988,1296,1040, 0, 0, 0},  //TV = 2.94(3081 lines)  AV=2.53  SV=5.36  BV=0.11
    {139987,1296,1040, 0, 0, 0},  //TV = 2.84(3318 lines)  AV=2.53  SV=5.36  BV=0.00
    {159985,1232,1024, 0, 0, 0},  //TV = 2.64(3792 lines)  AV=2.53  SV=5.27  BV=-0.10
    {169984,1232,1032, 0, 0, 0},  //TV = 2.56(4029 lines)  AV=2.53  SV=5.28  BV=-0.20
    {179983,1232,1048, 0, 0, 0},  //TV = 2.47(4266 lines)  AV=2.53  SV=5.30  BV=-0.30
    {189982,1232,1072, 0, 0, 0},  //TV = 2.40(4503 lines)  AV=2.53  SV=5.33  BV=-0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    91,    //i4MaxBV
    -4,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {464,1136,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.18  BV=8.42
    {464,1232,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.29  BV=8.31
    {464,1296,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.38  BV=8.22
    {464,1392,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.49  BV=8.11
    {464,1536,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.58  BV=8.01
    {464,1648,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.69  BV=7.91
    {464,1744,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.79  BV=7.81
    {464,1856,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.89  BV=7.71
    {464,2000,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.00  BV=7.60
    {464,2160,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.09  BV=7.51
    {464,2304,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.18  BV=7.42
    {464,2448,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.28  BV=7.32
    {465,2624,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=6.38  BV=7.22
    {507,2624,1024, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=6.36  BV=7.11
    {549,2560,1040, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=6.34  BV=7.01
    {591,2560,1040, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=6.34  BV=6.91
    {633,2560,1040, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=6.34  BV=6.81
    {718,2448,1024, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=6.26  BV=6.71
    {760,2448,1040, 0, 0, 0},  //TV = 10.36(18 lines)  AV=2.53  SV=6.28  BV=6.61
    {802,2512,1024, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=6.29  BV=6.52
    {844,2560,1032, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=6.33  BV=6.40
    {929,2448,1040, 0, 0, 0},  //TV = 10.07(22 lines)  AV=2.53  SV=6.28  BV=6.32
    {971,2560,1024, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=6.32  BV=6.21
    {1055,2512,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=6.31  BV=6.11
    {1140,2512,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=6.29  BV=6.01
    {1224,2448,1048, 0, 0, 0},  //TV = 9.67(29 lines)  AV=2.53  SV=6.29  BV=5.91
    {1308,2512,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=6.29  BV=5.81
    {1393,2512,1024, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=6.29  BV=5.72
    {1519,2448,1040, 0, 0, 0},  //TV = 9.36(36 lines)  AV=2.53  SV=6.28  BV=5.61
    {1604,2512,1024, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=6.29  BV=5.52
    {1730,2512,1024, 0, 0, 0},  //TV = 9.18(41 lines)  AV=2.53  SV=6.29  BV=5.41
    {1857,2448,1040, 0, 0, 0},  //TV = 9.07(44 lines)  AV=2.53  SV=6.28  BV=5.32
    {1983,2448,1048, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=6.29  BV=5.21
    {2152,2448,1040, 0, 0, 0},  //TV = 8.86(51 lines)  AV=2.53  SV=6.28  BV=5.11
    {2321,2448,1032, 0, 0, 0},  //TV = 8.75(55 lines)  AV=2.53  SV=6.27  BV=5.01
    {2490,2448,1032, 0, 0, 0},  //TV = 8.65(59 lines)  AV=2.53  SV=6.27  BV=4.91
    {2658,2448,1032, 0, 0, 0},  //TV = 8.56(63 lines)  AV=2.53  SV=6.27  BV=4.81
    {2827,2448,1040, 0, 0, 0},  //TV = 8.47(67 lines)  AV=2.53  SV=6.28  BV=4.71
    {3038,2448,1040, 0, 0, 0},  //TV = 8.36(72 lines)  AV=2.53  SV=6.28  BV=4.61
    {3291,2448,1032, 0, 0, 0},  //TV = 8.25(78 lines)  AV=2.53  SV=6.27  BV=4.50
    {3502,2448,1040, 0, 0, 0},  //TV = 8.16(83 lines)  AV=2.53  SV=6.28  BV=4.40
    {3755,2448,1032, 0, 0, 0},  //TV = 8.06(89 lines)  AV=2.53  SV=6.27  BV=4.31
    {4009,2448,1040, 0, 0, 0},  //TV = 7.96(95 lines)  AV=2.53  SV=6.28  BV=4.21
    {4346,2448,1032, 0, 0, 0},  //TV = 7.85(103 lines)  AV=2.53  SV=6.27  BV=4.10
    {4641,2448,1032, 0, 0, 0},  //TV = 7.75(110 lines)  AV=2.53  SV=6.27  BV=4.01
    {4979,2448,1032, 0, 0, 0},  //TV = 7.65(118 lines)  AV=2.53  SV=6.27  BV=3.91
    {5316,2448,1032, 0, 0, 0},  //TV = 7.56(126 lines)  AV=2.53  SV=6.27  BV=3.81
    {5738,2448,1024, 0, 0, 0},  //TV = 7.45(136 lines)  AV=2.53  SV=6.26  BV=3.71
    {6118,2448,1032, 0, 0, 0},  //TV = 7.35(145 lines)  AV=2.53  SV=6.27  BV=3.61
    {6540,2448,1032, 0, 0, 0},  //TV = 7.26(155 lines)  AV=2.53  SV=6.27  BV=3.51
    {7046,2448,1024, 0, 0, 0},  //TV = 7.15(167 lines)  AV=2.53  SV=6.26  BV=3.42
    {7510,2448,1032, 0, 0, 0},  //TV = 7.06(178 lines)  AV=2.53  SV=6.27  BV=3.31
    {8059,2448,1032, 0, 0, 0},  //TV = 6.96(191 lines)  AV=2.53  SV=6.27  BV=3.21
    {8312,2560,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.33  BV=3.10
    {8312,2704,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.43  BV=3.00
    {8312,2912,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.53  BV=2.91
    {8312,3136,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.63  BV=2.81
    {8312,3328,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.73  BV=2.70
    {8312,3600,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.83  BV=2.61
    {8312,3856,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.92  BV=2.51
    {8312,4160,1024, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.02  BV=2.41
    {8312,4448,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.13  BV=2.31
    {8312,4768,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.23  BV=2.21
    {16666,2560,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.32  BV=2.11
    {16666,2704,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.42  BV=2.01
    {16666,2912,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.52  BV=1.91
    {16666,3136,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.61  BV=1.82
    {16666,3328,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.72  BV=1.71
    {16666,3600,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=6.83  BV=1.61
    {25020,2560,1032, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.33  BV=1.51
    {25020,2768,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.43  BV=1.41
    {25020,2912,1040, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.53  BV=1.32
    {25020,3200,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=6.64  BV=1.20
    {33331,2560,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.33  BV=1.10
    {33331,2704,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.43  BV=1.00
    {33331,2912,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.52  BV=0.91
    {41685,2512,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=6.31  BV=0.80
    {41685,2688,1024, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=6.39  BV=0.72
    {41685,2912,1024, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=6.51  BV=0.60
    {49996,2560,1032, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=6.33  BV=0.51
    {49996,2768,1024, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=6.43  BV=0.41
    {58350,2560,1024, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=6.32  BV=0.30
    {58350,2704,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=6.42  BV=0.20
    {66661,2560,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.32  BV=0.11
    {75015,2448,1032, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=6.27  BV=-0.01
    {75015,2624,1032, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=6.37  BV=-0.11
    {83326,2512,1040, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=6.32  BV=-0.21
    {91680,2448,1040, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=6.28  BV=-0.31
    {91680,2624,1040, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=6.38  BV=-0.41
    {99991,2560,1040, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=6.34  BV=-0.50
    {108345,2560,1032, 0, 0, 0},  //TV = 3.21(2568 lines)  AV=2.53  SV=6.33  BV=-0.60
    {116656,2560,1024, 0, 0, 0},  //TV = 3.10(2765 lines)  AV=2.53  SV=6.32  BV=-0.70
    {125010,2560,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.32  BV=-0.80
    {133321,2560,1032, 0, 0, 0},  //TV = 2.91(3160 lines)  AV=2.53  SV=6.33  BV=-0.90
    {149986,2448,1032, 0, 0, 0},  //TV = 2.74(3555 lines)  AV=2.53  SV=6.27  BV=-1.01
    {158340,2448,1040, 0, 0, 0},  //TV = 2.66(3753 lines)  AV=2.53  SV=6.28  BV=-1.09
    {166651,2512,1040, 0, 0, 0},  //TV = 2.59(3950 lines)  AV=2.53  SV=6.32  BV=-1.21
    {183316,2448,1040, 0, 0, 0},  //TV = 2.45(4345 lines)  AV=2.53  SV=6.28  BV=-1.31
    {191670,2512,1040, 0, 0, 0},  //TV = 2.38(4543 lines)  AV=2.53  SV=6.32  BV=-1.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {464,1136,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.18  BV=8.42
    {464,1232,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.29  BV=8.31
    {464,1296,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.38  BV=8.22
    {464,1392,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.49  BV=8.11
    {464,1536,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.58  BV=8.01
    {464,1648,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.69  BV=7.91
    {464,1744,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.79  BV=7.81
    {464,1856,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.89  BV=7.71
    {464,2000,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.00  BV=7.60
    {464,2160,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.09  BV=7.51
    {464,2304,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.18  BV=7.42
    {464,2448,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.28  BV=7.32
    {465,2624,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=6.38  BV=7.22
    {507,2624,1024, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=6.36  BV=7.11
    {549,2560,1040, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=6.34  BV=7.01
    {591,2560,1040, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=6.34  BV=6.91
    {633,2560,1040, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=6.34  BV=6.81
    {718,2448,1024, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=6.26  BV=6.71
    {760,2448,1040, 0, 0, 0},  //TV = 10.36(18 lines)  AV=2.53  SV=6.28  BV=6.61
    {802,2512,1024, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=6.29  BV=6.52
    {844,2560,1032, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=6.33  BV=6.40
    {929,2448,1040, 0, 0, 0},  //TV = 10.07(22 lines)  AV=2.53  SV=6.28  BV=6.32
    {971,2560,1024, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=6.32  BV=6.21
    {1055,2512,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=6.31  BV=6.11
    {1140,2512,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=6.29  BV=6.01
    {1224,2448,1048, 0, 0, 0},  //TV = 9.67(29 lines)  AV=2.53  SV=6.29  BV=5.91
    {1308,2512,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=6.29  BV=5.81
    {1393,2512,1024, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=6.29  BV=5.72
    {1519,2448,1040, 0, 0, 0},  //TV = 9.36(36 lines)  AV=2.53  SV=6.28  BV=5.61
    {1604,2512,1024, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=6.29  BV=5.52
    {1730,2512,1024, 0, 0, 0},  //TV = 9.18(41 lines)  AV=2.53  SV=6.29  BV=5.41
    {1857,2448,1040, 0, 0, 0},  //TV = 9.07(44 lines)  AV=2.53  SV=6.28  BV=5.32
    {1983,2448,1048, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=6.29  BV=5.21
    {2152,2448,1040, 0, 0, 0},  //TV = 8.86(51 lines)  AV=2.53  SV=6.28  BV=5.11
    {2321,2448,1032, 0, 0, 0},  //TV = 8.75(55 lines)  AV=2.53  SV=6.27  BV=5.01
    {2490,2448,1032, 0, 0, 0},  //TV = 8.65(59 lines)  AV=2.53  SV=6.27  BV=4.91
    {2658,2448,1032, 0, 0, 0},  //TV = 8.56(63 lines)  AV=2.53  SV=6.27  BV=4.81
    {2827,2448,1040, 0, 0, 0},  //TV = 8.47(67 lines)  AV=2.53  SV=6.28  BV=4.71
    {3038,2448,1040, 0, 0, 0},  //TV = 8.36(72 lines)  AV=2.53  SV=6.28  BV=4.61
    {3291,2448,1032, 0, 0, 0},  //TV = 8.25(78 lines)  AV=2.53  SV=6.27  BV=4.50
    {3502,2448,1040, 0, 0, 0},  //TV = 8.16(83 lines)  AV=2.53  SV=6.28  BV=4.40
    {3755,2448,1032, 0, 0, 0},  //TV = 8.06(89 lines)  AV=2.53  SV=6.27  BV=4.31
    {4009,2448,1040, 0, 0, 0},  //TV = 7.96(95 lines)  AV=2.53  SV=6.28  BV=4.21
    {4346,2448,1032, 0, 0, 0},  //TV = 7.85(103 lines)  AV=2.53  SV=6.27  BV=4.10
    {4641,2448,1032, 0, 0, 0},  //TV = 7.75(110 lines)  AV=2.53  SV=6.27  BV=4.01
    {4979,2448,1032, 0, 0, 0},  //TV = 7.65(118 lines)  AV=2.53  SV=6.27  BV=3.91
    {5316,2448,1032, 0, 0, 0},  //TV = 7.56(126 lines)  AV=2.53  SV=6.27  BV=3.81
    {5738,2448,1024, 0, 0, 0},  //TV = 7.45(136 lines)  AV=2.53  SV=6.26  BV=3.71
    {6118,2448,1032, 0, 0, 0},  //TV = 7.35(145 lines)  AV=2.53  SV=6.27  BV=3.61
    {6540,2448,1032, 0, 0, 0},  //TV = 7.26(155 lines)  AV=2.53  SV=6.27  BV=3.51
    {7046,2448,1024, 0, 0, 0},  //TV = 7.15(167 lines)  AV=2.53  SV=6.26  BV=3.42
    {7510,2448,1032, 0, 0, 0},  //TV = 7.06(178 lines)  AV=2.53  SV=6.27  BV=3.31
    {8059,2448,1032, 0, 0, 0},  //TV = 6.96(191 lines)  AV=2.53  SV=6.27  BV=3.21
    {8692,2448,1032, 0, 0, 0},  //TV = 6.85(206 lines)  AV=2.53  SV=6.27  BV=3.10
    {9324,2448,1032, 0, 0, 0},  //TV = 6.74(221 lines)  AV=2.53  SV=6.27  BV=3.00
    {10000,2448,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.26  BV=2.91
    {10000,2624,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.36  BV=2.81
    {10000,2816,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.46  BV=2.71
    {10000,3024,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.56  BV=2.61
    {10000,3200,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.66  BV=2.51
    {10000,3456,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.75  BV=2.42
    {10000,3712,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.86  BV=2.31
    {10000,3984,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.96  BV=2.21
    {10000,4240,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.06  BV=2.11
    {10000,4528,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.16  BV=2.01
    {10000,4864,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.26  BV=1.91
    {19999,2624,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.36  BV=1.81
    {19999,2816,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.46  BV=1.71
    {19999,2992,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.56  BV=1.61
    {19999,3200,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.66  BV=1.51
    {19999,3456,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=6.75  BV=1.42
    {29998,2448,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.27  BV=1.32
    {29998,2624,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.38  BV=1.21
    {29998,2816,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.47  BV=1.11
    {29998,3024,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.57  BV=1.01
    {29998,3248,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.67  BV=0.92
    {39997,2624,1024, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=6.36  BV=0.81
    {39997,2816,1032, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=6.47  BV=0.70
    {39997,3024,1024, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=6.56  BV=0.61
    {49996,2560,1032, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=6.33  BV=0.51
    {49996,2768,1024, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=6.43  BV=0.41
    {59995,2448,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.27  BV=0.32
    {59995,2624,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.38  BV=0.21
    {59995,2816,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.47  BV=0.11
    {69994,2624,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=6.37  BV=-0.01
    {79993,2448,1032, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=6.27  BV=-0.10
    {79993,2624,1032, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=6.37  BV=-0.20
    {89992,2512,1032, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=6.31  BV=-0.31
    {89992,2688,1024, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=6.39  BV=-0.39
    {99991,2560,1040, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=6.34  BV=-0.50
    {109990,2512,1040, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=6.32  BV=-0.61
    {119989,2448,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.28  BV=-0.69
    {129988,2448,1032, 0, 0, 0},  //TV = 2.94(3081 lines)  AV=2.53  SV=6.27  BV=-0.80
    {139987,2448,1032, 0, 0, 0},  //TV = 2.84(3318 lines)  AV=2.53  SV=6.27  BV=-0.91
    {149986,2448,1032, 0, 0, 0},  //TV = 2.74(3555 lines)  AV=2.53  SV=6.27  BV=-1.01
    {159985,2448,1040, 0, 0, 0},  //TV = 2.64(3792 lines)  AV=2.53  SV=6.28  BV=-1.11
    {169984,2448,1040, 0, 0, 0},  //TV = 2.56(4029 lines)  AV=2.53  SV=6.28  BV=-1.20
    {179983,2512,1032, 0, 0, 0},  //TV = 2.47(4266 lines)  AV=2.53  SV=6.31  BV=-1.31
    {189982,2560,1024, 0, 0, 0},  //TV = 2.40(4503 lines)  AV=2.53  SV=6.32  BV=-1.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    108,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -14,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {464,1136,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.18  BV=8.42
    {464,1232,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.29  BV=8.31
    {464,1296,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.38  BV=8.22
    {464,1392,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.49  BV=8.11
    {464,1536,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.58  BV=8.01
    {464,1648,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.69  BV=7.91
    {464,1744,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.79  BV=7.81
    {464,1856,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.89  BV=7.71
    {464,2000,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.00  BV=7.60
    {464,2160,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.09  BV=7.51
    {464,2304,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.18  BV=7.42
    {464,2448,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.28  BV=7.32
    {464,2688,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.39  BV=7.21
    {464,2816,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.48  BV=7.12
    {464,3088,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.59  BV=7.01
    {464,3280,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.69  BV=6.91
    {464,3504,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.79  BV=6.81
    {464,3760,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.89  BV=6.71
    {464,4048,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.98  BV=6.62
    {464,4304,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.09  BV=6.51
    {464,4688,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.19  BV=6.40
    {464,4960,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.29  BV=6.31
    {507,4864,1032, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=7.26  BV=6.21
    {507,5248,1024, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=7.36  BV=6.11
    {549,5152,1032, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=7.34  BV=6.01
    {591,5152,1032, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=7.34  BV=5.91
    {633,5152,1032, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=7.34  BV=5.81
    {718,4864,1032, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=7.26  BV=5.71
    {760,4960,1024, 0, 0, 0},  //TV = 10.36(18 lines)  AV=2.53  SV=7.28  BV=5.61
    {802,5040,1024, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=7.30  BV=5.51
    {844,5152,1024, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=7.33  BV=5.41
    {929,4960,1032, 0, 0, 0},  //TV = 10.07(22 lines)  AV=2.53  SV=7.29  BV=5.31
    {1013,4864,1040, 0, 0, 0},  //TV = 9.95(24 lines)  AV=2.53  SV=7.27  BV=5.20
    {1055,5040,1024, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=7.30  BV=5.12
    {1140,4960,1040, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=7.30  BV=5.00
    {1224,4960,1032, 0, 0, 0},  //TV = 9.67(29 lines)  AV=2.53  SV=7.29  BV=4.91
    {1308,4960,1040, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=7.30  BV=4.81
    {1435,4864,1032, 0, 0, 0},  //TV = 9.44(34 lines)  AV=2.53  SV=7.26  BV=4.71
    {1519,4960,1024, 0, 0, 0},  //TV = 9.36(36 lines)  AV=2.53  SV=7.28  BV=4.61
    {1646,4864,1040, 0, 0, 0},  //TV = 9.25(39 lines)  AV=2.53  SV=7.27  BV=4.50
    {1730,4960,1032, 0, 0, 0},  //TV = 9.18(41 lines)  AV=2.53  SV=7.29  BV=4.41
    {1857,4960,1032, 0, 0, 0},  //TV = 9.07(44 lines)  AV=2.53  SV=7.29  BV=4.31
    {2026,4864,1032, 0, 0, 0},  //TV = 8.95(48 lines)  AV=2.53  SV=7.26  BV=4.21
    {2152,4960,1024, 0, 0, 0},  //TV = 8.86(51 lines)  AV=2.53  SV=7.28  BV=4.11
    {2321,4864,1040, 0, 0, 0},  //TV = 8.75(55 lines)  AV=2.53  SV=7.27  BV=4.01
    {2490,4864,1040, 0, 0, 0},  //TV = 8.65(59 lines)  AV=2.53  SV=7.27  BV=3.91
    {2658,4864,1040, 0, 0, 0},  //TV = 8.56(63 lines)  AV=2.53  SV=7.27  BV=3.81
    {2827,4960,1024, 0, 0, 0},  //TV = 8.47(67 lines)  AV=2.53  SV=7.28  BV=3.72
    {3080,4864,1032, 0, 0, 0},  //TV = 8.34(73 lines)  AV=2.53  SV=7.26  BV=3.61
    {3291,4864,1032, 0, 0, 0},  //TV = 8.25(78 lines)  AV=2.53  SV=7.26  BV=3.51
    {3502,4960,1024, 0, 0, 0},  //TV = 8.16(83 lines)  AV=2.53  SV=7.28  BV=3.41
    {3755,4864,1040, 0, 0, 0},  //TV = 8.06(89 lines)  AV=2.53  SV=7.27  BV=3.31
    {4051,4864,1040, 0, 0, 0},  //TV = 7.95(96 lines)  AV=2.53  SV=7.27  BV=3.20
    {4346,4864,1040, 0, 0, 0},  //TV = 7.85(103 lines)  AV=2.53  SV=7.27  BV=3.10
    {4641,4864,1040, 0, 0, 0},  //TV = 7.75(110 lines)  AV=2.53  SV=7.27  BV=3.01
    {4979,4864,1040, 0, 0, 0},  //TV = 7.65(118 lines)  AV=2.53  SV=7.27  BV=2.91
    {5316,4864,1040, 0, 0, 0},  //TV = 7.56(126 lines)  AV=2.53  SV=7.27  BV=2.81
    {5738,4864,1032, 0, 0, 0},  //TV = 7.45(136 lines)  AV=2.53  SV=7.26  BV=2.71
    {6118,4864,1040, 0, 0, 0},  //TV = 7.35(145 lines)  AV=2.53  SV=7.27  BV=2.61
    {6540,4864,1040, 0, 0, 0},  //TV = 7.26(155 lines)  AV=2.53  SV=7.27  BV=2.51
    {7088,4864,1032, 0, 0, 0},  //TV = 7.14(168 lines)  AV=2.53  SV=7.26  BV=2.41
    {7595,4864,1032, 0, 0, 0},  //TV = 7.04(180 lines)  AV=2.53  SV=7.26  BV=2.31
    {8143,4864,1032, 0, 0, 0},  //TV = 6.94(193 lines)  AV=2.53  SV=7.26  BV=2.21
    {8312,5152,1024, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.33  BV=2.11
    {8312,5472,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.43  BV=2.01
    {8312,5840,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.52  BV=1.91
    {8312,6096,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.63  BV=1.81
    {8312,6144,1128, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.72  BV=1.71
    {8312,6144,1208, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.82  BV=1.61
    {8312,6144,1296, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.92  BV=1.51
    {8312,6144,1392, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.03  BV=1.41
    {8312,6144,1488, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.12  BV=1.31
    {8312,6144,1600, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.23  BV=1.21
    {16666,5040,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.32  BV=1.11
    {16666,5472,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.42  BV=1.02
    {16666,5840,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.52  BV=0.91
    {16666,6096,1056, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.62  BV=0.81
    {16666,6144,1128, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.72  BV=0.71
    {16666,6144,1208, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.82  BV=0.61
    {25020,5152,1032, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=7.34  BV=0.50
    {25020,5472,1040, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=7.44  BV=0.41
    {25020,5968,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=7.54  BV=0.30
    {25020,6144,1064, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=7.64  BV=0.21
    {33331,5040,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.32  BV=0.11
    {33331,5472,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.44  BV=-0.01
    {33331,5840,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.53  BV=-0.10
    {41685,5040,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=7.31  BV=-0.20
    {41685,5360,1040, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=7.41  BV=-0.30
    {41685,5840,1024, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=7.51  BV=-0.40
    {49996,5152,1040, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=7.35  BV=-0.51
    {49996,5584,1024, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=7.45  BV=-0.60
    {58350,5152,1024, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=7.33  BV=-0.71
    {58350,5472,1032, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=7.43  BV=-0.80
    {66661,5152,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=7.33  BV=-0.90
    {75015,4864,1032, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=7.26  BV=-1.00
    {75015,5248,1024, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=7.36  BV=-1.09
    {83326,5040,1032, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=7.31  BV=-1.20
    {91680,4960,1024, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=7.28  BV=-1.30
    {91680,5248,1032, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=7.37  BV=-1.40
    {99991,5152,1040, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.35  BV=-1.51
    {108345,5152,1024, 0, 0, 0},  //TV = 3.21(2568 lines)  AV=2.53  SV=7.33  BV=-1.60
    {116656,5152,1024, 0, 0, 0},  //TV = 3.10(2765 lines)  AV=2.53  SV=7.33  BV=-1.71
    {125010,5152,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.33  BV=-1.80
    {133321,5152,1024, 0, 0, 0},  //TV = 2.91(3160 lines)  AV=2.53  SV=7.33  BV=-1.90
    {149986,4864,1032, 0, 0, 0},  //TV = 2.74(3555 lines)  AV=2.53  SV=7.26  BV=-2.00
    {158340,4960,1032, 0, 0, 0},  //TV = 2.66(3753 lines)  AV=2.53  SV=7.29  BV=-2.10
    {166651,5040,1032, 0, 0, 0},  //TV = 2.59(3950 lines)  AV=2.53  SV=7.31  BV=-2.20
    {183316,4960,1024, 0, 0, 0},  //TV = 2.45(4345 lines)  AV=2.53  SV=7.28  BV=-2.30
    {191670,5040,1032, 0, 0, 0},  //TV = 2.38(4543 lines)  AV=2.53  SV=7.31  BV=-2.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {464,1136,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.18  BV=8.42
    {464,1232,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.29  BV=8.31
    {464,1296,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.38  BV=8.22
    {464,1392,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.49  BV=8.11
    {464,1536,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.58  BV=8.01
    {464,1648,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.69  BV=7.91
    {464,1744,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.79  BV=7.81
    {464,1856,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.89  BV=7.71
    {464,2000,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.00  BV=7.60
    {464,2160,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.09  BV=7.51
    {464,2304,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.18  BV=7.42
    {464,2448,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.28  BV=7.32
    {464,2688,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.39  BV=7.21
    {464,2816,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.48  BV=7.12
    {464,3088,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.59  BV=7.01
    {464,3280,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.69  BV=6.91
    {464,3504,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.79  BV=6.81
    {464,3760,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.89  BV=6.71
    {464,4048,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.98  BV=6.62
    {464,4304,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.09  BV=6.51
    {464,4688,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.19  BV=6.40
    {464,4960,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.29  BV=6.31
    {507,4864,1032, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=7.26  BV=6.21
    {507,5248,1024, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=7.36  BV=6.11
    {549,5152,1032, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=7.34  BV=6.01
    {591,5152,1032, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=7.34  BV=5.91
    {633,5152,1032, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=7.34  BV=5.81
    {718,4864,1032, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=7.26  BV=5.71
    {760,4960,1024, 0, 0, 0},  //TV = 10.36(18 lines)  AV=2.53  SV=7.28  BV=5.61
    {802,5040,1024, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=7.30  BV=5.51
    {844,5152,1024, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=7.33  BV=5.41
    {929,4960,1032, 0, 0, 0},  //TV = 10.07(22 lines)  AV=2.53  SV=7.29  BV=5.31
    {1013,4864,1040, 0, 0, 0},  //TV = 9.95(24 lines)  AV=2.53  SV=7.27  BV=5.20
    {1055,5040,1024, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=7.30  BV=5.12
    {1140,4960,1040, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=7.30  BV=5.00
    {1224,4960,1032, 0, 0, 0},  //TV = 9.67(29 lines)  AV=2.53  SV=7.29  BV=4.91
    {1308,4960,1040, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=7.30  BV=4.81
    {1435,4864,1032, 0, 0, 0},  //TV = 9.44(34 lines)  AV=2.53  SV=7.26  BV=4.71
    {1519,4960,1024, 0, 0, 0},  //TV = 9.36(36 lines)  AV=2.53  SV=7.28  BV=4.61
    {1646,4864,1040, 0, 0, 0},  //TV = 9.25(39 lines)  AV=2.53  SV=7.27  BV=4.50
    {1730,4960,1032, 0, 0, 0},  //TV = 9.18(41 lines)  AV=2.53  SV=7.29  BV=4.41
    {1857,4960,1032, 0, 0, 0},  //TV = 9.07(44 lines)  AV=2.53  SV=7.29  BV=4.31
    {2026,4864,1032, 0, 0, 0},  //TV = 8.95(48 lines)  AV=2.53  SV=7.26  BV=4.21
    {2152,4960,1024, 0, 0, 0},  //TV = 8.86(51 lines)  AV=2.53  SV=7.28  BV=4.11
    {2321,4864,1040, 0, 0, 0},  //TV = 8.75(55 lines)  AV=2.53  SV=7.27  BV=4.01
    {2490,4864,1040, 0, 0, 0},  //TV = 8.65(59 lines)  AV=2.53  SV=7.27  BV=3.91
    {2658,4864,1040, 0, 0, 0},  //TV = 8.56(63 lines)  AV=2.53  SV=7.27  BV=3.81
    {2827,4960,1024, 0, 0, 0},  //TV = 8.47(67 lines)  AV=2.53  SV=7.28  BV=3.72
    {3080,4864,1032, 0, 0, 0},  //TV = 8.34(73 lines)  AV=2.53  SV=7.26  BV=3.61
    {3291,4864,1032, 0, 0, 0},  //TV = 8.25(78 lines)  AV=2.53  SV=7.26  BV=3.51
    {3502,4960,1024, 0, 0, 0},  //TV = 8.16(83 lines)  AV=2.53  SV=7.28  BV=3.41
    {3755,4864,1040, 0, 0, 0},  //TV = 8.06(89 lines)  AV=2.53  SV=7.27  BV=3.31
    {4051,4864,1040, 0, 0, 0},  //TV = 7.95(96 lines)  AV=2.53  SV=7.27  BV=3.20
    {4346,4864,1040, 0, 0, 0},  //TV = 7.85(103 lines)  AV=2.53  SV=7.27  BV=3.10
    {4641,4864,1040, 0, 0, 0},  //TV = 7.75(110 lines)  AV=2.53  SV=7.27  BV=3.01
    {4979,4864,1040, 0, 0, 0},  //TV = 7.65(118 lines)  AV=2.53  SV=7.27  BV=2.91
    {5316,4864,1040, 0, 0, 0},  //TV = 7.56(126 lines)  AV=2.53  SV=7.27  BV=2.81
    {5738,4864,1032, 0, 0, 0},  //TV = 7.45(136 lines)  AV=2.53  SV=7.26  BV=2.71
    {6118,4864,1040, 0, 0, 0},  //TV = 7.35(145 lines)  AV=2.53  SV=7.27  BV=2.61
    {6540,4864,1040, 0, 0, 0},  //TV = 7.26(155 lines)  AV=2.53  SV=7.27  BV=2.51
    {7088,4864,1032, 0, 0, 0},  //TV = 7.14(168 lines)  AV=2.53  SV=7.26  BV=2.41
    {7595,4864,1032, 0, 0, 0},  //TV = 7.04(180 lines)  AV=2.53  SV=7.26  BV=2.31
    {8143,4864,1032, 0, 0, 0},  //TV = 6.94(193 lines)  AV=2.53  SV=7.26  BV=2.21
    {8692,4864,1032, 0, 0, 0},  //TV = 6.85(206 lines)  AV=2.53  SV=7.26  BV=2.11
    {9324,4864,1032, 0, 0, 0},  //TV = 6.74(221 lines)  AV=2.53  SV=7.26  BV=2.01
    {10000,4864,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.26  BV=1.91
    {10000,5248,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.36  BV=1.81
    {10000,5584,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.46  BV=1.71
    {10000,5968,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.55  BV=1.62
    {10000,6144,1080, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.66  BV=1.51
    {10000,6144,1152, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.75  BV=1.42
    {10000,6144,1240, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.86  BV=1.31
    {10000,6144,1328, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.96  BV=1.21
    {10000,6144,1424, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.06  BV=1.11
    {10000,6144,1520, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.15  BV=1.02
    {10000,6144,1632, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.26  BV=0.91
    {19999,5248,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.37  BV=0.80
    {19999,5584,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.47  BV=0.70
    {19999,5968,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.55  BV=0.62
    {19999,6144,1080, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.66  BV=0.51
    {19999,6144,1160, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.76  BV=0.41
    {29998,4960,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.28  BV=0.31
    {29998,5248,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.38  BV=0.21
    {29998,5712,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.48  BV=0.11
    {29998,6096,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.58  BV=0.00
    {39997,4960,1024, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=7.28  BV=-0.11
    {39997,5248,1032, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=7.37  BV=-0.20
    {39997,5584,1040, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=7.47  BV=-0.30
    {39997,6096,1024, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=7.57  BV=-0.40
    {49996,5152,1040, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=7.35  BV=-0.51
    {49996,5584,1024, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=7.45  BV=-0.60
    {59995,4960,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.29  BV=-0.70
    {59995,5360,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.39  BV=-0.80
    {69994,4864,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=7.26  BV=-0.90
    {69994,5248,1024, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=7.36  BV=-0.99
    {79993,4864,1040, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=7.27  BV=-1.10
    {79993,5248,1032, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=7.37  BV=-1.20
    {89992,5040,1024, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=7.30  BV=-1.30
    {89992,5360,1032, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=7.40  BV=-1.40
    {99991,5152,1040, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.35  BV=-1.51
    {109990,5040,1032, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=7.31  BV=-1.60
    {119989,4960,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.29  BV=-1.70
    {129988,4864,1040, 0, 0, 0},  //TV = 2.94(3081 lines)  AV=2.53  SV=7.27  BV=-1.80
    {139987,4864,1032, 0, 0, 0},  //TV = 2.84(3318 lines)  AV=2.53  SV=7.26  BV=-1.90
    {149986,4864,1032, 0, 0, 0},  //TV = 2.74(3555 lines)  AV=2.53  SV=7.26  BV=-2.00
    {159985,4864,1040, 0, 0, 0},  //TV = 2.64(3792 lines)  AV=2.53  SV=7.27  BV=-2.10
    {169984,4960,1032, 0, 0, 0},  //TV = 2.56(4029 lines)  AV=2.53  SV=7.29  BV=-2.20
    {179983,5040,1024, 0, 0, 0},  //TV = 2.47(4266 lines)  AV=2.53  SV=7.30  BV=-2.30
    {189982,5040,1040, 0, 0, 0},  //TV = 2.40(4503 lines)  AV=2.53  SV=7.32  BV=-2.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    118,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -24,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {464,1136,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.18  BV=8.42
    {464,1232,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.29  BV=8.31
    {464,1296,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.38  BV=8.22
    {464,1392,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.49  BV=8.11
    {464,1536,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.58  BV=8.01
    {464,1648,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.69  BV=7.91
    {464,1744,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.79  BV=7.81
    {464,1856,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.89  BV=7.71
    {464,2000,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.00  BV=7.60
    {464,2160,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.09  BV=7.51
    {464,2304,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.18  BV=7.42
    {464,2448,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.28  BV=7.32
    {464,2688,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.39  BV=7.21
    {464,2816,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.48  BV=7.12
    {464,3088,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.59  BV=7.01
    {464,3280,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.69  BV=6.91
    {464,3504,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.79  BV=6.81
    {464,3760,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.89  BV=6.71
    {464,4048,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.98  BV=6.62
    {464,4304,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.09  BV=6.51
    {464,4688,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.19  BV=6.40
    {464,4960,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.29  BV=6.31
    {464,5360,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.39  BV=6.21
    {464,5712,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.49  BV=6.11
    {464,6096,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.58  BV=6.01
    {464,6144,1096, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.68  BV=5.92
    {507,6144,1080, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=7.66  BV=5.81
    {549,6144,1072, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=7.65  BV=5.71
    {591,6144,1064, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=7.64  BV=5.61
    {633,6144,1064, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=7.64  BV=5.51
    {676,6144,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=7.64  BV=5.42
    {718,6144,1080, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=7.66  BV=5.31
    {802,6096,1040, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=7.60  BV=5.21
    {844,6096,1064, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=7.63  BV=5.11
    {929,6096,1032, 0, 0, 0},  //TV = 10.07(22 lines)  AV=2.53  SV=7.58  BV=5.01
    {971,6096,1056, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=7.62  BV=4.92
    {1055,6096,1048, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=7.61  BV=4.81
    {1140,6096,1040, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=7.60  BV=4.71
    {1224,6096,1032, 0, 0, 0},  //TV = 9.67(29 lines)  AV=2.53  SV=7.58  BV=4.62
    {1308,6096,1040, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=7.60  BV=4.51
    {1393,6096,1048, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=7.61  BV=4.41
    {1519,6096,1032, 0, 0, 0},  //TV = 9.36(36 lines)  AV=2.53  SV=7.58  BV=4.30
    {1604,6096,1040, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=7.60  BV=4.21
    {1730,6096,1040, 0, 0, 0},  //TV = 9.18(41 lines)  AV=2.53  SV=7.60  BV=4.11
    {1857,6096,1032, 0, 0, 0},  //TV = 9.07(44 lines)  AV=2.53  SV=7.58  BV=4.01
    {1983,6096,1040, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=7.60  BV=3.91
    {2110,6096,1048, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=7.61  BV=3.81
    {2279,6096,1032, 0, 0, 0},  //TV = 8.78(54 lines)  AV=2.53  SV=7.58  BV=3.72
    {2448,6096,1040, 0, 0, 0},  //TV = 8.67(58 lines)  AV=2.53  SV=7.60  BV=3.60
    {2616,6096,1040, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=7.60  BV=3.51
    {2827,6096,1032, 0, 0, 0},  //TV = 8.47(67 lines)  AV=2.53  SV=7.58  BV=3.41
    {3038,6096,1032, 0, 0, 0},  //TV = 8.36(72 lines)  AV=2.53  SV=7.58  BV=3.30
    {3249,6096,1032, 0, 0, 0},  //TV = 8.27(77 lines)  AV=2.53  SV=7.58  BV=3.21
    {3460,6096,1040, 0, 0, 0},  //TV = 8.18(82 lines)  AV=2.53  SV=7.60  BV=3.11
    {3713,6096,1032, 0, 0, 0},  //TV = 8.07(88 lines)  AV=2.53  SV=7.58  BV=3.01
    {3966,6096,1040, 0, 0, 0},  //TV = 7.98(94 lines)  AV=2.53  SV=7.60  BV=2.91
    {4262,6096,1032, 0, 0, 0},  //TV = 7.87(101 lines)  AV=2.53  SV=7.58  BV=2.82
    {4599,6096,1032, 0, 0, 0},  //TV = 7.76(109 lines)  AV=2.53  SV=7.58  BV=2.71
    {4895,6096,1040, 0, 0, 0},  //TV = 7.67(116 lines)  AV=2.53  SV=7.60  BV=2.60
    {5274,6096,1032, 0, 0, 0},  //TV = 7.57(125 lines)  AV=2.53  SV=7.58  BV=2.51
    {5654,6096,1032, 0, 0, 0},  //TV = 7.47(134 lines)  AV=2.53  SV=7.58  BV=2.41
    {6034,6096,1032, 0, 0, 0},  //TV = 7.37(143 lines)  AV=2.53  SV=7.58  BV=2.31
    {6456,6096,1032, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=7.58  BV=2.22
    {6920,6096,1032, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=7.58  BV=2.12
    {7468,6096,1032, 0, 0, 0},  //TV = 7.07(177 lines)  AV=2.53  SV=7.58  BV=2.01
    {8017,6096,1032, 0, 0, 0},  //TV = 6.96(190 lines)  AV=2.53  SV=7.58  BV=1.90
    {8312,6096,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.63  BV=1.81
    {8312,6144,1136, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.73  BV=1.70
    {8312,6144,1216, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.83  BV=1.60
    {8312,6144,1296, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.92  BV=1.51
    {8312,6144,1392, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.03  BV=1.41
    {8312,6144,1496, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.13  BV=1.30
    {8312,6144,1600, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.23  BV=1.21
    {8312,6144,1712, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.33  BV=1.11
    {8312,6144,1840, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.43  BV=1.01
    {8312,6144,1968, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.53  BV=0.91
    {16666,6096,1056, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.62  BV=0.81
    {16666,6144,1128, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.72  BV=0.71
    {16666,6144,1208, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.82  BV=0.61
    {16666,6144,1296, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.92  BV=0.51
    {16666,6144,1384, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=8.02  BV=0.41
    {16666,6144,1488, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=8.12  BV=0.31
    {25020,6144,1064, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=7.64  BV=0.21
    {25020,6144,1144, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=7.74  BV=0.10
    {25020,6144,1224, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=7.84  BV=0.00
    {25020,6144,1312, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=7.94  BV=-0.10
    {33331,6096,1072, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.64  BV=-0.21
    {33331,6144,1136, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.73  BV=-0.30
    {33331,6144,1224, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.84  BV=-0.41
    {41685,6096,1056, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=7.62  BV=-0.51
    {41685,6144,1120, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=7.71  BV=-0.60
    {41685,6144,1200, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=7.81  BV=-0.70
    {49996,6144,1072, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=7.65  BV=-0.80
    {49996,6144,1152, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=7.75  BV=-0.91
    {58350,6096,1064, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=7.63  BV=-1.00
    {58350,6144,1128, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=7.72  BV=-1.10
    {66661,6096,1072, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=7.64  BV=-1.21
    {66661,6144,1136, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=7.73  BV=-1.30
    {75015,6144,1080, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=7.66  BV=-1.40
    {83326,6096,1056, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=7.62  BV=-1.51
    {83326,6144,1120, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=7.71  BV=-1.60
    {91680,6144,1088, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=7.67  BV=-1.70
    {99991,6144,1072, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.65  BV=-1.80
    {108345,6096,1072, 0, 0, 0},  //TV = 3.21(2568 lines)  AV=2.53  SV=7.64  BV=-1.91
    {116656,6096,1064, 0, 0, 0},  //TV = 3.10(2765 lines)  AV=2.53  SV=7.63  BV=-2.00
    {125010,6096,1064, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.63  BV=-2.10
    {133321,6096,1072, 0, 0, 0},  //TV = 2.91(3160 lines)  AV=2.53  SV=7.64  BV=-2.21
    {141675,6144,1072, 0, 0, 0},  //TV = 2.82(3358 lines)  AV=2.53  SV=7.65  BV=-2.31
    {158340,6096,1032, 0, 0, 0},  //TV = 2.66(3753 lines)  AV=2.53  SV=7.58  BV=-2.40
    {166651,6096,1056, 0, 0, 0},  //TV = 2.59(3950 lines)  AV=2.53  SV=7.62  BV=-2.51
    {175005,6144,1064, 0, 0, 0},  //TV = 2.51(4148 lines)  AV=2.53  SV=7.64  BV=-2.60
    {191670,6096,1048, 0, 0, 0},  //TV = 2.38(4543 lines)  AV=2.53  SV=7.61  BV=-2.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {464,1136,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.18  BV=8.42
    {464,1232,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.29  BV=8.31
    {464,1296,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.38  BV=8.22
    {464,1392,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.49  BV=8.11
    {464,1536,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.58  BV=8.01
    {464,1648,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.69  BV=7.91
    {464,1744,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.79  BV=7.81
    {464,1856,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.89  BV=7.71
    {464,2000,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.00  BV=7.60
    {464,2160,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.09  BV=7.51
    {464,2304,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.18  BV=7.42
    {464,2448,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.28  BV=7.32
    {464,2688,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.39  BV=7.21
    {464,2816,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.48  BV=7.12
    {464,3088,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.59  BV=7.01
    {464,3280,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.69  BV=6.91
    {464,3504,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.79  BV=6.81
    {464,3760,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.89  BV=6.71
    {464,4048,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.98  BV=6.62
    {464,4304,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.09  BV=6.51
    {464,4688,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.19  BV=6.40
    {464,4960,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.29  BV=6.31
    {464,5360,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.39  BV=6.21
    {464,5712,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.49  BV=6.11
    {464,6096,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.58  BV=6.01
    {464,6144,1096, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.68  BV=5.92
    {507,6144,1080, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=7.66  BV=5.81
    {549,6144,1072, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=7.65  BV=5.71
    {591,6144,1064, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=7.64  BV=5.61
    {633,6144,1064, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=7.64  BV=5.51
    {676,6144,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=7.64  BV=5.42
    {718,6144,1080, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=7.66  BV=5.31
    {802,6096,1040, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=7.60  BV=5.21
    {844,6096,1064, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=7.63  BV=5.11
    {929,6096,1032, 0, 0, 0},  //TV = 10.07(22 lines)  AV=2.53  SV=7.58  BV=5.01
    {971,6096,1056, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=7.62  BV=4.92
    {1055,6096,1048, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=7.61  BV=4.81
    {1140,6096,1040, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=7.60  BV=4.71
    {1224,6096,1032, 0, 0, 0},  //TV = 9.67(29 lines)  AV=2.53  SV=7.58  BV=4.62
    {1308,6096,1040, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=7.60  BV=4.51
    {1393,6096,1048, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=7.61  BV=4.41
    {1519,6096,1032, 0, 0, 0},  //TV = 9.36(36 lines)  AV=2.53  SV=7.58  BV=4.30
    {1604,6096,1040, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=7.60  BV=4.21
    {1730,6096,1040, 0, 0, 0},  //TV = 9.18(41 lines)  AV=2.53  SV=7.60  BV=4.11
    {1857,6096,1032, 0, 0, 0},  //TV = 9.07(44 lines)  AV=2.53  SV=7.58  BV=4.01
    {1983,6096,1040, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=7.60  BV=3.91
    {2110,6096,1048, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=7.61  BV=3.81
    {2279,6096,1032, 0, 0, 0},  //TV = 8.78(54 lines)  AV=2.53  SV=7.58  BV=3.72
    {2448,6096,1040, 0, 0, 0},  //TV = 8.67(58 lines)  AV=2.53  SV=7.60  BV=3.60
    {2616,6096,1040, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=7.60  BV=3.51
    {2827,6096,1032, 0, 0, 0},  //TV = 8.47(67 lines)  AV=2.53  SV=7.58  BV=3.41
    {3038,6096,1032, 0, 0, 0},  //TV = 8.36(72 lines)  AV=2.53  SV=7.58  BV=3.30
    {3249,6096,1032, 0, 0, 0},  //TV = 8.27(77 lines)  AV=2.53  SV=7.58  BV=3.21
    {3460,6096,1040, 0, 0, 0},  //TV = 8.18(82 lines)  AV=2.53  SV=7.60  BV=3.11
    {3713,6096,1032, 0, 0, 0},  //TV = 8.07(88 lines)  AV=2.53  SV=7.58  BV=3.01
    {3966,6096,1040, 0, 0, 0},  //TV = 7.98(94 lines)  AV=2.53  SV=7.60  BV=2.91
    {4262,6096,1032, 0, 0, 0},  //TV = 7.87(101 lines)  AV=2.53  SV=7.58  BV=2.82
    {4599,6096,1032, 0, 0, 0},  //TV = 7.76(109 lines)  AV=2.53  SV=7.58  BV=2.71
    {4895,6096,1040, 0, 0, 0},  //TV = 7.67(116 lines)  AV=2.53  SV=7.60  BV=2.60
    {5274,6096,1032, 0, 0, 0},  //TV = 7.57(125 lines)  AV=2.53  SV=7.58  BV=2.51
    {5654,6096,1032, 0, 0, 0},  //TV = 7.47(134 lines)  AV=2.53  SV=7.58  BV=2.41
    {6034,6096,1032, 0, 0, 0},  //TV = 7.37(143 lines)  AV=2.53  SV=7.58  BV=2.31
    {6456,6096,1032, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=7.58  BV=2.22
    {6920,6096,1032, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=7.58  BV=2.12
    {7468,6096,1032, 0, 0, 0},  //TV = 7.07(177 lines)  AV=2.53  SV=7.58  BV=2.01
    {8017,6096,1032, 0, 0, 0},  //TV = 6.96(190 lines)  AV=2.53  SV=7.58  BV=1.90
    {8565,6096,1032, 0, 0, 0},  //TV = 6.87(203 lines)  AV=2.53  SV=7.58  BV=1.81
    {9198,6096,1032, 0, 0, 0},  //TV = 6.76(218 lines)  AV=2.53  SV=7.58  BV=1.71
    {9831,6096,1032, 0, 0, 0},  //TV = 6.67(233 lines)  AV=2.53  SV=7.58  BV=1.61
    {10000,6144,1080, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.66  BV=1.51
    {10000,6144,1160, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.76  BV=1.41
    {10000,6144,1240, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.86  BV=1.31
    {10000,6144,1328, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.96  BV=1.21
    {10000,6144,1424, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.06  BV=1.11
    {10000,6144,1528, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.16  BV=1.01
    {10000,6144,1632, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.26  BV=0.91
    {10000,6144,1752, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.36  BV=0.81
    {10000,6144,1880, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.46  BV=0.71
    {10000,6144,2008, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.56  BV=0.61
    {19999,6144,1080, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.66  BV=0.51
    {19999,6144,1160, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.76  BV=0.41
    {19999,6144,1240, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.86  BV=0.31
    {19999,6144,1328, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.96  BV=0.21
    {19999,6144,1432, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=8.07  BV=0.10
    {29998,6096,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.58  BV=0.00
    {29998,6144,1104, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.69  BV=-0.11
    {29998,6144,1184, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.79  BV=-0.21
    {29998,6144,1264, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.89  BV=-0.30
    {29998,6144,1360, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.99  BV=-0.41
    {39997,6144,1088, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=7.67  BV=-0.50
    {39997,6144,1168, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=7.77  BV=-0.60
    {39997,6144,1248, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=7.87  BV=-0.70
    {49996,6144,1072, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=7.65  BV=-0.80
    {49996,6144,1152, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=7.75  BV=-0.91
    {59995,6096,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.58  BV=-1.00
    {59995,6144,1104, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.69  BV=-1.11
    {59995,6144,1176, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.78  BV=-1.20
    {69994,6144,1080, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=7.66  BV=-1.30
    {69994,6144,1160, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=7.76  BV=-1.40
    {79993,6144,1088, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=7.67  BV=-1.50
    {89992,6096,1048, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=7.61  BV=-1.61
    {89992,6144,1112, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=7.70  BV=-1.70
    {99991,6144,1072, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.65  BV=-1.80
    {109990,6096,1056, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=7.62  BV=-1.91
    {119989,6096,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.58  BV=-2.00
    {119989,6144,1096, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.68  BV=-2.10
    {129988,6144,1088, 0, 0, 0},  //TV = 2.94(3081 lines)  AV=2.53  SV=7.67  BV=-2.20
    {139987,6144,1080, 0, 0, 0},  //TV = 2.84(3318 lines)  AV=2.53  SV=7.66  BV=-2.30
    {149986,6144,1080, 0, 0, 0},  //TV = 2.74(3555 lines)  AV=2.53  SV=7.66  BV=-2.40
    {169984,6096,1032, 0, 0, 0},  //TV = 2.56(4029 lines)  AV=2.53  SV=7.58  BV=-2.50
    {179983,6096,1048, 0, 0, 0},  //TV = 2.47(4266 lines)  AV=2.53  SV=7.61  BV=-2.61
    {189982,6096,1064, 0, 0, 0},  //TV = 2.40(4503 lines)  AV=2.53  SV=7.63  BV=-2.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    121,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -27,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {464,1136,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.18  BV=8.42
    {464,1232,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.29  BV=8.31
    {464,1296,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.38  BV=8.22
    {464,1392,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.49  BV=8.11
    {464,1536,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.58  BV=8.01
    {464,1648,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.69  BV=7.91
    {464,1744,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.79  BV=7.81
    {464,1856,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.89  BV=7.71
    {464,2000,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.00  BV=7.60
    {464,2160,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.09  BV=7.51
    {464,2304,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.18  BV=7.42
    {464,2448,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.28  BV=7.32
    {464,2688,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.39  BV=7.21
    {464,2816,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.48  BV=7.12
    {464,3088,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.59  BV=7.01
    {464,3280,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.69  BV=6.91
    {464,3504,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.79  BV=6.81
    {464,3760,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.89  BV=6.71
    {464,4048,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.98  BV=6.62
    {464,4304,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.09  BV=6.51
    {464,4688,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.19  BV=6.40
    {464,4960,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.29  BV=6.31
    {464,5360,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.39  BV=6.21
    {464,5712,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.49  BV=6.11
    {464,6096,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.58  BV=6.01
    {464,6144,1096, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.68  BV=5.92
    {464,6144,1184, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.79  BV=5.81
    {464,6144,1264, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.89  BV=5.71
    {464,6144,1360, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.99  BV=5.61
    {464,6144,1456, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=8.09  BV=5.51
    {507,6144,1424, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=8.06  BV=5.41
    {549,6144,1416, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=8.05  BV=5.30
    {591,6144,1408, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=8.04  BV=5.21
    {633,6144,1408, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=8.04  BV=5.11
    {676,6144,1408, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=8.04  BV=5.01
    {718,6144,1432, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=8.07  BV=4.90
    {802,6144,1360, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=7.99  BV=4.82
    {844,6144,1392, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=8.03  BV=4.71
    {886,6144,1416, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=8.05  BV=4.61
    {971,6144,1384, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=8.02  BV=4.51
    {1055,6144,1368, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=8.00  BV=4.41
    {1097,6144,1416, 0, 0, 0},  //TV = 9.83(26 lines)  AV=2.53  SV=8.05  BV=4.31
    {1182,6144,1400, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=8.04  BV=4.21
    {1266,6144,1408, 0, 0, 0},  //TV = 9.63(30 lines)  AV=2.53  SV=8.04  BV=4.11
    {1393,6144,1376, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=8.01  BV=4.00
    {1477,6144,1384, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=8.02  BV=3.91
    {1604,6144,1368, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=8.00  BV=3.81
    {1688,6144,1392, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=8.03  BV=3.71
    {1815,6144,1392, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=8.03  BV=3.60
    {1941,6144,1392, 0, 0, 0},  //TV = 9.01(46 lines)  AV=2.53  SV=8.03  BV=3.51
    {2110,6144,1368, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=8.00  BV=3.41
    {2279,6144,1360, 0, 0, 0},  //TV = 8.78(54 lines)  AV=2.53  SV=7.99  BV=3.31
    {2405,6144,1384, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=8.02  BV=3.21
    {2574,6144,1384, 0, 0, 0},  //TV = 8.60(61 lines)  AV=2.53  SV=8.02  BV=3.11
    {2785,6144,1368, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=8.00  BV=3.01
    {2996,6144,1368, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=8.00  BV=2.91
    {3207,6144,1368, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=8.00  BV=2.81
    {3418,6144,1376, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=8.01  BV=2.71
    {3671,6144,1376, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=8.01  BV=2.60
    {3966,6144,1368, 0, 0, 0},  //TV = 7.98(94 lines)  AV=2.53  SV=8.00  BV=2.50
    {4219,6144,1376, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=8.01  BV=2.40
    {4515,6144,1376, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=8.01  BV=2.31
    {4852,6144,1368, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=8.00  BV=2.21
    {5190,6144,1368, 0, 0, 0},  //TV = 7.59(123 lines)  AV=2.53  SV=8.00  BV=2.11
    {5570,6144,1368, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=8.00  BV=2.01
    {5991,6144,1368, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=8.00  BV=1.91
    {6413,6144,1368, 0, 0, 0},  //TV = 7.28(152 lines)  AV=2.53  SV=8.00  BV=1.81
    {6877,6144,1368, 0, 0, 0},  //TV = 7.18(163 lines)  AV=2.53  SV=8.00  BV=1.71
    {7384,6144,1368, 0, 0, 0},  //TV = 7.08(175 lines)  AV=2.53  SV=8.00  BV=1.60
    {7890,6144,1368, 0, 0, 0},  //TV = 6.99(187 lines)  AV=2.53  SV=8.00  BV=1.51
    {8312,6144,1392, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.03  BV=1.41
    {8312,6144,1488, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.12  BV=1.31
    {8312,6144,1600, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.23  BV=1.21
    {8312,6144,1712, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.33  BV=1.11
    {8312,6144,1832, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.42  BV=1.01
    {8312,6144,1968, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.53  BV=0.91
    {8312,6144,2104, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.62  BV=0.81
    {8312,6144,2256, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.72  BV=0.71
    {8312,6144,2432, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.83  BV=0.60
    {8312,6144,2608, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=8.93  BV=0.50
    {16666,6144,1392, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=8.03  BV=0.41
    {16666,6144,1496, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=8.13  BV=0.30
    {16666,6144,1600, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=8.23  BV=0.20
    {16666,6144,1712, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=8.33  BV=0.11
    {16666,6144,1848, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=8.44  BV=-0.00
    {16666,6144,1984, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=8.54  BV=-0.11
    {25020,6144,1416, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=8.05  BV=-0.21
    {25020,6144,1512, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=8.15  BV=-0.30
    {25020,6144,1624, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=8.25  BV=-0.40
    {25020,6144,1744, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=8.35  BV=-0.51
    {33331,6144,1400, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=8.04  BV=-0.60
    {33331,6144,1496, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=8.13  BV=-0.70
    {33331,6144,1608, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=8.24  BV=-0.80
    {41685,6144,1376, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=8.01  BV=-0.90
    {41685,6144,1472, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=8.11  BV=-1.00
    {41685,6144,1584, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=8.21  BV=-1.10
    {49996,6144,1416, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=8.05  BV=-1.20
    {49996,6144,1512, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=8.15  BV=-1.30
    {58350,6144,1392, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=8.03  BV=-1.40
    {58350,6144,1488, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=8.12  BV=-1.50
    {66661,6144,1400, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=8.04  BV=-1.60
    {66661,6144,1496, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=8.13  BV=-1.70
    {75015,6144,1424, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=8.06  BV=-1.80
    {83326,6144,1376, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=8.01  BV=-1.90
    {83326,6144,1472, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=8.11  BV=-2.00
    {91680,6144,1440, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=8.08  BV=-2.10
    {99991,6144,1408, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.04  BV=-2.20
    {108345,6144,1400, 0, 0, 0},  //TV = 3.21(2568 lines)  AV=2.53  SV=8.04  BV=-2.30
    {116656,6144,1392, 0, 0, 0},  //TV = 3.10(2765 lines)  AV=2.53  SV=8.03  BV=-2.40
    {125010,6144,1392, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=8.03  BV=-2.50
    {133321,6144,1400, 0, 0, 0},  //TV = 2.91(3160 lines)  AV=2.53  SV=8.04  BV=-2.60
    {141675,6144,1408, 0, 0, 0},  //TV = 2.82(3358 lines)  AV=2.53  SV=8.04  BV=-2.70
    {149986,6144,1424, 0, 0, 0},  //TV = 2.74(3555 lines)  AV=2.53  SV=8.06  BV=-2.80
    {166651,6144,1376, 0, 0, 0},  //TV = 2.59(3950 lines)  AV=2.53  SV=8.01  BV=-2.90
    {175005,6144,1408, 0, 0, 0},  //TV = 2.51(4148 lines)  AV=2.53  SV=8.04  BV=-3.00
    {191670,6144,1376, 0, 0, 0},  //TV = 2.38(4543 lines)  AV=2.53  SV=8.01  BV=-3.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {464,1136,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.18  BV=8.42
    {464,1232,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.29  BV=8.31
    {464,1296,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.38  BV=8.22
    {464,1392,1056, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.49  BV=8.11
    {464,1536,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.58  BV=8.01
    {464,1648,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.69  BV=7.91
    {464,1744,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.79  BV=7.81
    {464,1856,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=5.89  BV=7.71
    {464,2000,1048, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.00  BV=7.60
    {464,2160,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.09  BV=7.51
    {464,2304,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.18  BV=7.42
    {464,2448,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.28  BV=7.32
    {464,2688,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.39  BV=7.21
    {464,2816,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.48  BV=7.12
    {464,3088,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.59  BV=7.01
    {464,3280,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.69  BV=6.91
    {464,3504,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.79  BV=6.81
    {464,3760,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.89  BV=6.71
    {464,4048,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=6.98  BV=6.62
    {464,4304,1040, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.09  BV=6.51
    {464,4688,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.19  BV=6.40
    {464,4960,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.29  BV=6.31
    {464,5360,1024, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.39  BV=6.21
    {464,5712,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.49  BV=6.11
    {464,6096,1032, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.58  BV=6.01
    {464,6144,1096, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.68  BV=5.92
    {464,6144,1184, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.79  BV=5.81
    {464,6144,1264, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.89  BV=5.71
    {464,6144,1360, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=7.99  BV=5.61
    {464,6144,1456, 0, 0, 0},  //TV = 11.07(10 lines)  AV=2.53  SV=8.09  BV=5.51
    {507,6144,1424, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=8.06  BV=5.41
    {549,6144,1416, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=8.05  BV=5.30
    {591,6144,1408, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=8.04  BV=5.21
    {633,6144,1408, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=8.04  BV=5.11
    {676,6144,1408, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=8.04  BV=5.01
    {718,6144,1432, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=8.07  BV=4.90
    {802,6144,1360, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=7.99  BV=4.82
    {844,6144,1392, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=8.03  BV=4.71
    {886,6144,1416, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=8.05  BV=4.61
    {971,6144,1384, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=8.02  BV=4.51
    {1055,6144,1368, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=8.00  BV=4.41
    {1097,6144,1416, 0, 0, 0},  //TV = 9.83(26 lines)  AV=2.53  SV=8.05  BV=4.31
    {1182,6144,1400, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=8.04  BV=4.21
    {1266,6144,1408, 0, 0, 0},  //TV = 9.63(30 lines)  AV=2.53  SV=8.04  BV=4.11
    {1393,6144,1376, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=8.01  BV=4.00
    {1477,6144,1384, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=8.02  BV=3.91
    {1604,6144,1368, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=8.00  BV=3.81
    {1688,6144,1392, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=8.03  BV=3.71
    {1815,6144,1392, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=8.03  BV=3.60
    {1941,6144,1392, 0, 0, 0},  //TV = 9.01(46 lines)  AV=2.53  SV=8.03  BV=3.51
    {2110,6144,1368, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=8.00  BV=3.41
    {2279,6144,1360, 0, 0, 0},  //TV = 8.78(54 lines)  AV=2.53  SV=7.99  BV=3.31
    {2405,6144,1384, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=8.02  BV=3.21
    {2574,6144,1384, 0, 0, 0},  //TV = 8.60(61 lines)  AV=2.53  SV=8.02  BV=3.11
    {2785,6144,1368, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=8.00  BV=3.01
    {2996,6144,1368, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=8.00  BV=2.91
    {3207,6144,1368, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=8.00  BV=2.81
    {3418,6144,1376, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=8.01  BV=2.71
    {3671,6144,1376, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=8.01  BV=2.60
    {3966,6144,1368, 0, 0, 0},  //TV = 7.98(94 lines)  AV=2.53  SV=8.00  BV=2.50
    {4219,6144,1376, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=8.01  BV=2.40
    {4515,6144,1376, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=8.01  BV=2.31
    {4852,6144,1368, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=8.00  BV=2.21
    {5190,6144,1368, 0, 0, 0},  //TV = 7.59(123 lines)  AV=2.53  SV=8.00  BV=2.11
    {5570,6144,1368, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=8.00  BV=2.01
    {5991,6144,1368, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=8.00  BV=1.91
    {6413,6144,1368, 0, 0, 0},  //TV = 7.28(152 lines)  AV=2.53  SV=8.00  BV=1.81
    {6877,6144,1368, 0, 0, 0},  //TV = 7.18(163 lines)  AV=2.53  SV=8.00  BV=1.71
    {7384,6144,1368, 0, 0, 0},  //TV = 7.08(175 lines)  AV=2.53  SV=8.00  BV=1.60
    {7890,6144,1368, 0, 0, 0},  //TV = 6.99(187 lines)  AV=2.53  SV=8.00  BV=1.51
    {8481,6144,1368, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=8.00  BV=1.40
    {9071,6144,1368, 0, 0, 0},  //TV = 6.78(215 lines)  AV=2.53  SV=8.00  BV=1.31
    {9704,6144,1368, 0, 0, 0},  //TV = 6.69(230 lines)  AV=2.53  SV=8.00  BV=1.21
    {10000,6144,1424, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.06  BV=1.11
    {10000,6144,1528, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.16  BV=1.01
    {10000,6144,1632, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.26  BV=0.91
    {10000,6144,1752, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.36  BV=0.81
    {10000,6144,1872, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.46  BV=0.71
    {10000,6144,2024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.57  BV=0.60
    {10000,6144,2168, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.67  BV=0.50
    {10000,6144,2320, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.76  BV=0.41
    {10000,6144,2488, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.87  BV=0.30
    {10000,6144,2664, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=8.96  BV=0.21
    {19999,6144,1424, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=8.06  BV=0.11
    {19999,6144,1544, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=8.18  BV=-0.01
    {19999,6144,1648, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=8.27  BV=-0.10
    {19999,6144,1768, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=8.37  BV=-0.20
    {19999,6144,1896, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=8.47  BV=-0.30
    {19999,6144,2032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=8.57  BV=-0.40
    {29998,6144,1448, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=8.08  BV=-0.50
    {29998,6144,1552, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=8.18  BV=-0.60
    {29998,6144,1664, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=8.29  BV=-0.70
    {29998,6144,1784, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=8.39  BV=-0.80
    {39997,6144,1432, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=8.07  BV=-0.90
    {39997,6144,1536, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=8.17  BV=-1.00
    {39997,6144,1648, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=8.27  BV=-1.10
    {49996,6144,1416, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=8.05  BV=-1.20
    {49996,6144,1512, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=8.15  BV=-1.30
    {49996,6144,1624, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=8.25  BV=-1.40
    {59995,6144,1448, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=8.08  BV=-1.50
    {59995,6144,1552, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=8.18  BV=-1.60
    {69994,6144,1424, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=8.06  BV=-1.70
    {69994,6144,1528, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=8.16  BV=-1.80
    {79993,6144,1432, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=8.07  BV=-1.90
    {89992,6144,1368, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=8.00  BV=-2.00
    {89992,6144,1464, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=8.10  BV=-2.10
    {99991,6144,1408, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.04  BV=-2.20
    {109990,6144,1376, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=8.01  BV=-2.30
    {109990,6144,1472, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=8.11  BV=-2.40
    {119989,6144,1448, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=8.08  BV=-2.50
    {129988,6144,1432, 0, 0, 0},  //TV = 2.94(3081 lines)  AV=2.53  SV=8.07  BV=-2.60
    {139987,6144,1424, 0, 0, 0},  //TV = 2.84(3318 lines)  AV=2.53  SV=8.06  BV=-2.70
    {149986,6144,1424, 0, 0, 0},  //TV = 2.74(3555 lines)  AV=2.53  SV=8.06  BV=-2.80
    {159985,6144,1432, 0, 0, 0},  //TV = 2.64(3792 lines)  AV=2.53  SV=8.07  BV=-2.90
    {179983,6144,1368, 0, 0, 0},  //TV = 2.47(4266 lines)  AV=2.53  SV=8.00  BV=-3.00
    {189982,6144,1384, 0, 0, 0},  //TV = 2.40(4503 lines)  AV=2.53  SV=8.02  BV=-3.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    93,    //i4MaxBV
    -31,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {25020,1024,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.04  BV=2.80
    {25020,1088,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.13  BV=2.71
    {25020,1184,1040, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.23  BV=2.62
    {25020,1232,1072, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.33  BV=2.51
    {33331,1024,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.03  BV=2.40
    {33331,1088,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.12  BV=2.31
    {33331,1184,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.22  BV=2.21
    {41685,1024,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.01  BV=2.10
    {41685,1088,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.10  BV=2.01
    {41685,1136,1064, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.21  BV=1.91
    {49996,1024,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.04  BV=1.80
    {49996,1088,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.13  BV=1.72
    {58350,1024,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.02  BV=1.60
    {58350,1088,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.11  BV=1.52
    {66661,1024,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.03  BV=1.40
    {66661,1088,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.12  BV=1.31
    {66661,1184,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.22  BV=1.21
    {66661,1232,1064, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.32  BV=1.11
    {66661,1344,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.43  BV=1.01
    {66661,1440,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.51  BV=0.92
    {66661,1536,1056, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.63  BV=0.80
    {66661,1648,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.72  BV=0.71
    {66661,1808,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.82  BV=0.61
    {66661,1920,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.93  BV=0.50
    {66661,2048,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.02  BV=0.41
    {66661,2208,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.12  BV=0.31
    {66661,2368,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.22  BV=0.21
    {66661,2560,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.32  BV=0.11
    {66661,2704,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.43  BV=-0.00
    {66661,2912,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.53  BV=-0.10
    {66661,3136,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.63  BV=-0.19
    {66661,3328,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.73  BV=-0.30
    {66661,3648,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.83  BV=-0.40
    {66661,3920,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.94  BV=-0.50
    {66661,4160,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=7.03  BV=-0.60
    {66661,4448,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=7.13  BV=-0.70
    {75015,4240,1032, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=7.06  BV=-0.80
    {83326,4096,1032, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=7.01  BV=-0.90
    {83326,4384,1032, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=7.11  BV=-1.00
    {91680,4304,1024, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=7.07  BV=-1.10
    {99991,4160,1040, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.04  BV=-1.20
    {99991,4528,1032, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.16  BV=-1.31
    {99991,4864,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.25  BV=-1.40
    {99991,5152,1040, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.35  BV=-1.51
    {99991,5584,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.45  BV=-1.60
    {99991,5968,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.54  BV=-1.69
    {99991,6144,1072, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.65  BV=-1.80
    {99991,6144,1144, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.74  BV=-1.90
    {99991,6144,1224, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.84  BV=-1.99
    {99991,6144,1320, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.95  BV=-2.10
    {99991,6144,1416, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.05  BV=-2.20
    {99991,6144,1520, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.15  BV=-2.31
    {99991,6144,1624, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.25  BV=-2.40
    {99991,6144,1744, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.35  BV=-2.51
    {99991,6144,1864, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.45  BV=-2.60
    {99991,6144,2000, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.55  BV=-2.70
    {99991,6144,2144, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.65  BV=-2.80
    {99991,6144,2296, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.75  BV=-2.90
    {99991,6144,2456, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.85  BV=-3.00
    {99991,6144,2632, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.95  BV=-3.10
    {99991,6144,2824, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.05  BV=-3.20
    {99991,6144,3024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.15  BV=-3.30
    {99991,6144,3240, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.25  BV=-3.40
    {99991,6144,3472, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.35  BV=-3.50
    {99991,6144,3720, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.45  BV=-3.60
    {99991,6144,3992, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.55  BV=-3.70
    {99991,6144,4304, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.66  BV=-3.81
    {99991,6144,4616, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.76  BV=-3.91
    {99991,6144,4944, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.86  BV=-4.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.86  BV=3.31
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {19999,1024,1072, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.07  BV=3.10
    {19999,1136,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.16  BV=3.01
    {19999,1184,1064, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.26  BV=2.91
    {19999,1296,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.36  BV=2.81
    {19999,1392,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.47  BV=2.70
    {19999,1488,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.56  BV=2.61
    {29998,1024,1080, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.08  BV=2.51
    {29998,1136,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.17  BV=2.41
    {29998,1232,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.27  BV=2.32
    {29998,1296,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.37  BV=2.21
    {39997,1024,1072, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.07  BV=2.10
    {39997,1136,1032, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.16  BV=2.01
    {39997,1184,1064, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.26  BV=1.91
    {49996,1024,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.04  BV=1.80
    {49996,1088,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.13  BV=1.72
    {49996,1184,1040, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.23  BV=1.62
    {59995,1024,1080, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.08  BV=1.51
    {59995,1136,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.17  BV=1.41
    {59995,1232,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.27  BV=1.32
    {59995,1296,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.37  BV=1.21
    {59995,1392,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.47  BV=1.12
    {59995,1488,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.57  BV=1.01
    {59995,1600,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.68  BV=0.91
    {59995,1744,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.78  BV=0.81
    {59995,1856,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.87  BV=0.72
    {59995,2000,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.98  BV=0.61
    {59995,2160,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.08  BV=0.51
    {59995,2304,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.17  BV=0.42
    {59995,2448,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.27  BV=0.32
    {59995,2624,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.37  BV=0.22
    {59995,2816,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.47  BV=0.11
    {59995,3088,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.59  BV=-0.01
    {59995,3280,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.69  BV=-0.11
    {59995,3504,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.79  BV=-0.20
    {59995,3760,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.89  BV=-0.30
    {59995,4048,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.98  BV=-0.40
    {59995,4304,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.08  BV=-0.50
    {59995,4608,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.19  BV=-0.61
    {69994,4240,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=7.06  BV=-0.70
    {69994,4528,1040, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=7.17  BV=-0.80
    {79993,4304,1024, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=7.07  BV=-0.90
    {89992,4096,1024, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=7.00  BV=-1.00
    {89992,4384,1024, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=7.10  BV=-1.10
    {99991,4160,1040, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.04  BV=-1.20
    {99991,4528,1032, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.16  BV=-1.31
    {99991,4864,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.25  BV=-1.40
    {99991,5152,1040, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.35  BV=-1.51
    {99991,5584,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.45  BV=-1.60
    {99991,5968,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.54  BV=-1.69
    {99991,6144,1072, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.65  BV=-1.80
    {99991,6144,1144, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.74  BV=-1.90
    {99991,6144,1224, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.84  BV=-1.99
    {99991,6144,1320, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.95  BV=-2.10
    {99991,6144,1416, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.05  BV=-2.20
    {99991,6144,1520, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.15  BV=-2.31
    {99991,6144,1624, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.25  BV=-2.40
    {99991,6144,1744, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.35  BV=-2.51
    {99991,6144,1864, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.45  BV=-2.60
    {99991,6144,2000, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.55  BV=-2.70
    {99991,6144,2144, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.65  BV=-2.80
    {99991,6144,2296, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.75  BV=-2.90
    {99991,6144,2456, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.85  BV=-3.00
    {99991,6144,2632, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=8.95  BV=-3.10
    {99991,6144,2824, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.05  BV=-3.20
    {99991,6144,3024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.15  BV=-3.30
    {99991,6144,3240, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.25  BV=-3.40
    {99991,6144,3472, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.35  BV=-3.50
    {99991,6144,3720, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.45  BV=-3.60
    {99991,6144,3992, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.55  BV=-3.70
    {99991,6144,4304, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.66  BV=-3.81
    {99991,6144,4616, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.76  BV=-3.91
    {99991,6144,4944, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=9.86  BV=-4.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    134,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -40,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {25020,1024,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.04  BV=2.80
    {25020,1088,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.13  BV=2.71
    {25020,1184,1040, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.23  BV=2.62
    {25020,1232,1072, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.33  BV=2.51
    {33331,1024,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.03  BV=2.40
    {33331,1088,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.12  BV=2.31
    {33331,1184,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.22  BV=2.21
    {41685,1024,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.01  BV=2.10
    {41685,1088,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.10  BV=2.01
    {41685,1136,1064, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.21  BV=1.91
    {49996,1024,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.04  BV=1.80
    {49996,1088,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.13  BV=1.72
    {58350,1024,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.02  BV=1.60
    {58350,1088,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.11  BV=1.52
    {66661,1024,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.03  BV=1.40
    {66661,1088,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.12  BV=1.31
    {66661,1184,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.22  BV=1.21
    {66661,1232,1064, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.32  BV=1.11
    {66661,1344,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.43  BV=1.01
    {66661,1440,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.51  BV=0.92
    {66661,1536,1056, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.63  BV=0.80
    {66661,1648,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.72  BV=0.71
    {66661,1808,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.82  BV=0.61
    {66661,1920,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.93  BV=0.50
    {66661,2048,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.02  BV=0.41
    {66661,2208,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.12  BV=0.31
    {66661,2368,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.22  BV=0.21
    {66661,2560,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.32  BV=0.11
    {66661,2704,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.43  BV=-0.00
    {66661,2912,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.53  BV=-0.10
    {66661,3136,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.63  BV=-0.19
    {66661,3328,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.73  BV=-0.30
    {66661,3648,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.83  BV=-0.40
    {66661,3920,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.94  BV=-0.50
    {66661,4160,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=7.03  BV=-0.60
    {66661,4448,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=7.13  BV=-0.70
    {75015,4240,1032, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=7.06  BV=-0.80
    {83326,4096,1032, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=7.01  BV=-0.90
    {83326,4384,1032, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=7.11  BV=-1.00
    {91680,4304,1024, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=7.07  BV=-1.10
    {99991,4240,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.05  BV=-1.20
    {108345,4160,1032, 0, 0, 0},  //TV = 3.21(2568 lines)  AV=2.53  SV=7.03  BV=-1.30
    {116656,4160,1024, 0, 0, 0},  //TV = 3.10(2765 lines)  AV=2.53  SV=7.02  BV=-1.40
    {125010,4160,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.02  BV=-1.50
    {133321,4160,1032, 0, 0, 0},  //TV = 2.91(3160 lines)  AV=2.53  SV=7.03  BV=-1.60
    {141675,4240,1024, 0, 0, 0},  //TV = 2.82(3358 lines)  AV=2.53  SV=7.05  BV=-1.70
    {149986,4240,1032, 0, 0, 0},  //TV = 2.74(3555 lines)  AV=2.53  SV=7.06  BV=-1.80
    {166651,4096,1032, 0, 0, 0},  //TV = 2.59(3950 lines)  AV=2.53  SV=7.01  BV=-1.90
    {175005,4160,1040, 0, 0, 0},  //TV = 2.51(4148 lines)  AV=2.53  SV=7.04  BV=-2.00
    {191670,4096,1032, 0, 0, 0},  //TV = 2.38(4543 lines)  AV=2.53  SV=7.01  BV=-2.10
    {199981,4160,1040, 0, 0, 0},  //TV = 2.32(4740 lines)  AV=2.53  SV=7.04  BV=-2.20
    {199981,4528,1032, 0, 0, 0},  //TV = 2.32(4740 lines)  AV=2.53  SV=7.16  BV=-2.31
    {199981,4864,1024, 0, 0, 0},  //TV = 2.32(4740 lines)  AV=2.53  SV=7.25  BV=-2.40
    {199981,5152,1040, 0, 0, 0},  //TV = 2.32(4740 lines)  AV=2.53  SV=7.35  BV=-2.51
    {199981,5584,1024, 0, 0, 0},  //TV = 2.32(4740 lines)  AV=2.53  SV=7.45  BV=-2.60
    {199981,5968,1024, 0, 0, 0},  //TV = 2.32(4740 lines)  AV=2.53  SV=7.54  BV=-2.69
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.86  BV=3.31
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {19999,1024,1072, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.07  BV=3.10
    {19999,1136,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.16  BV=3.01
    {19999,1184,1064, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.26  BV=2.91
    {19999,1296,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.36  BV=2.81
    {19999,1392,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.47  BV=2.70
    {19999,1488,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.56  BV=2.61
    {29998,1024,1080, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.08  BV=2.51
    {29998,1136,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.17  BV=2.41
    {29998,1232,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.27  BV=2.32
    {29998,1296,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.37  BV=2.21
    {39997,1024,1072, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.07  BV=2.10
    {39997,1136,1032, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.16  BV=2.01
    {39997,1184,1064, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.26  BV=1.91
    {49996,1024,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.04  BV=1.80
    {49996,1088,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.13  BV=1.72
    {49996,1184,1040, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.23  BV=1.62
    {59995,1024,1080, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.08  BV=1.51
    {59995,1136,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.17  BV=1.41
    {59995,1232,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.27  BV=1.32
    {59995,1296,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.37  BV=1.21
    {59995,1392,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.47  BV=1.12
    {59995,1488,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.57  BV=1.01
    {59995,1600,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.68  BV=0.91
    {59995,1744,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.78  BV=0.81
    {59995,1856,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.87  BV=0.72
    {59995,2000,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.98  BV=0.61
    {59995,2160,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.08  BV=0.51
    {59995,2304,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.17  BV=0.42
    {59995,2448,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.27  BV=0.32
    {59995,2624,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.37  BV=0.22
    {59995,2816,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.47  BV=0.11
    {59995,3088,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.59  BV=-0.01
    {59995,3280,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.69  BV=-0.11
    {59995,3504,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.79  BV=-0.20
    {59995,3760,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.89  BV=-0.30
    {59995,4048,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.98  BV=-0.40
    {59995,4304,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.08  BV=-0.50
    {59995,4608,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.19  BV=-0.61
    {69994,4240,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=7.06  BV=-0.70
    {69994,4528,1040, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=7.17  BV=-0.80
    {79993,4304,1024, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=7.07  BV=-0.90
    {89992,4096,1024, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=7.00  BV=-1.00
    {89992,4384,1024, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=7.10  BV=-1.10
    {99991,4240,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.05  BV=-1.20
    {109990,4096,1032, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=7.01  BV=-1.30
    {109990,4384,1032, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=7.11  BV=-1.40
    {119989,4304,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.08  BV=-1.50
    {129988,4304,1024, 0, 0, 0},  //TV = 2.94(3081 lines)  AV=2.53  SV=7.07  BV=-1.60
    {139987,4240,1032, 0, 0, 0},  //TV = 2.84(3318 lines)  AV=2.53  SV=7.06  BV=-1.70
    {149986,4240,1032, 0, 0, 0},  //TV = 2.74(3555 lines)  AV=2.53  SV=7.06  BV=-1.80
    {159985,4304,1024, 0, 0, 0},  //TV = 2.64(3792 lines)  AV=2.53  SV=7.07  BV=-1.90
    {179983,4096,1024, 0, 0, 0},  //TV = 2.47(4266 lines)  AV=2.53  SV=7.00  BV=-2.00
    {189982,4160,1024, 0, 0, 0},  //TV = 2.40(4503 lines)  AV=2.53  SV=7.02  BV=-2.10
    {199981,4160,1040, 0, 0, 0},  //TV = 2.32(4740 lines)  AV=2.53  SV=7.04  BV=-2.20
    {199981,4528,1032, 0, 0, 0},  //TV = 2.32(4740 lines)  AV=2.53  SV=7.16  BV=-2.31
    {199981,4864,1024, 0, 0, 0},  //TV = 2.32(4740 lines)  AV=2.53  SV=7.25  BV=-2.40
    {199981,5152,1040, 0, 0, 0},  //TV = 2.32(4740 lines)  AV=2.53  SV=7.35  BV=-2.51
    {199981,5584,1024, 0, 0, 0},  //TV = 2.32(4740 lines)  AV=2.53  SV=7.45  BV=-2.60
    {199981,5968,1024, 0, 0, 0},  //TV = 2.32(4740 lines)  AV=2.53  SV=7.54  BV=-2.69
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    93,    //i4MaxBV
    -27,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1952,1024, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {8312,2048,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.03  BV=3.40
    {8312,2208,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.12  BV=3.32
    {8312,2368,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.23  BV=3.20
    {8312,2560,1024, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.32  BV=3.11
    {8312,2704,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.43  BV=3.00
    {8312,2912,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.53  BV=2.91
    {8312,3136,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.63  BV=2.81
    {8312,3328,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.72  BV=2.71
    {8312,3648,1024, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.83  BV=2.60
    {8312,3856,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=6.92  BV=2.51
    {8312,4160,1024, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.02  BV=2.41
    {8312,4448,1024, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.12  BV=2.32
    {8312,4768,1024, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.22  BV=2.22
    {8312,5152,1024, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.33  BV=2.11
    {8312,5472,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.43  BV=2.01
    {8312,5840,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.53  BV=1.90
    {8312,6096,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.63  BV=1.81
    {8312,6144,1136, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.73  BV=1.70
    {8312,6144,1216, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.83  BV=1.60
    {8312,6144,1296, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=7.92  BV=1.51
    {16666,4160,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.02  BV=1.41
    {16666,4448,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.12  BV=1.31
    {16666,4768,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.22  BV=1.21
    {16666,5040,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.32  BV=1.11
    {16666,5472,1024, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.42  BV=1.02
    {16666,5840,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=7.52  BV=0.91
    {25020,4160,1032, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=7.03  BV=0.81
    {25020,4448,1032, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=7.13  BV=0.72
    {25020,4768,1032, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=7.23  BV=0.62
    {25020,5152,1024, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=7.33  BV=0.52
    {33331,4160,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.02  BV=0.41
    {33331,4448,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.12  BV=0.31
    {33331,4768,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.22  BV=0.21
    {33331,5040,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.32  BV=0.11
    {33331,5472,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.44  BV=-0.01
    {33331,5840,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=7.53  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.67  BV=3.50
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.86  BV=3.31
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {10000,2112,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.06  BV=3.11
    {10000,2256,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.16  BV=3.01
    {10000,2448,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.26  BV=2.91
    {10000,2624,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.36  BV=2.81
    {10000,2816,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.46  BV=2.71
    {10000,3024,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.56  BV=2.61
    {10000,3248,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.67  BV=2.50
    {10000,3456,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.75  BV=2.42
    {10000,3712,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.86  BV=2.31
    {10000,3920,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=6.96  BV=2.21
    {10000,4240,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.05  BV=2.12
    {10000,4528,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.17  BV=2.00
    {10000,4864,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.26  BV=1.91
    {10000,5248,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.36  BV=1.81
    {10000,5584,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.46  BV=1.71
    {10000,5968,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.57  BV=1.60
    {10000,6144,1080, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.66  BV=1.51
    {10000,6144,1160, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.76  BV=1.41
    {10000,6144,1240, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.86  BV=1.31
    {10000,6144,1328, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=7.96  BV=1.21
    {19999,4240,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.06  BV=1.11
    {19999,4528,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.16  BV=1.01
    {19999,4864,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.26  BV=0.91
    {19999,5248,1024, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.36  BV=0.81
    {19999,5584,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.46  BV=0.71
    {19999,5968,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=7.55  BV=0.62
    {29998,4304,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.07  BV=0.51
    {29998,4608,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.18  BV=0.40
    {29998,4960,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.28  BV=0.31
    {29998,5248,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.37  BV=0.22
    {29998,5584,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.47  BV=0.12
    {29998,6096,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.58  BV=0.00
    {29998,6144,1104, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=7.69  BV=-0.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    95,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -1,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {25020,1024,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.04  BV=2.80
    {25020,1088,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.13  BV=2.71
    {25020,1184,1040, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.23  BV=2.62
    {25020,1232,1072, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.33  BV=2.51
    {33331,1024,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.03  BV=2.40
    {33331,1088,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.12  BV=2.31
    {33331,1184,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.22  BV=2.21
    {33331,1232,1064, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.32  BV=2.11
    {33331,1344,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.43  BV=2.01
    {33331,1440,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.51  BV=1.92
    {33331,1536,1056, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.63  BV=1.80
    {33331,1648,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.72  BV=1.71
    {33331,1808,1024, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.82  BV=1.61
    {33331,1920,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.93  BV=1.50
    {33331,2048,1040, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.02  BV=1.41
    {33331,2208,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.12  BV=1.31
    {33331,2368,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=6.22  BV=1.21
    {41685,2048,1024, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=6.00  BV=1.11
    {41685,2160,1040, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=6.10  BV=1.01
    {41685,2304,1048, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=6.20  BV=0.91
    {49996,2048,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=6.04  BV=0.80
    {49996,2256,1024, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=6.14  BV=0.71
    {58350,2048,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=6.02  BV=0.60
    {58350,2208,1024, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=6.11  BV=0.52
    {66661,2048,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.02  BV=0.41
    {66661,2208,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.12  BV=0.31
    {66661,2368,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.22  BV=0.21
    {66661,2560,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.32  BV=0.11
    {66661,2768,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.43  BV=-0.00
    {66661,2912,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.53  BV=-0.10
    {66661,3136,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.64  BV=-0.20
    {66661,3408,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.73  BV=-0.30
    {66661,3648,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.83  BV=-0.40
    {66661,3856,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.94  BV=-0.50
    {66661,4160,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=7.03  BV=-0.60
    {66661,4448,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=7.13  BV=-0.70
    {75015,4240,1032, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=7.06  BV=-0.80
    {83326,4096,1032, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=7.01  BV=-0.90
    {83326,4384,1032, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=7.11  BV=-1.00
    {91680,4304,1024, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=7.07  BV=-1.10
    {99991,4160,1040, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.04  BV=-1.20
    {99991,4528,1032, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.16  BV=-1.31
    {99991,4864,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.25  BV=-1.40
    {99991,5152,1040, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.35  BV=-1.51
    {99991,5584,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.45  BV=-1.60
    {99991,5968,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.54  BV=-1.69
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.86  BV=3.31
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {19999,1024,1072, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.07  BV=3.10
    {19999,1136,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.16  BV=3.01
    {19999,1184,1064, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.26  BV=2.91
    {19999,1296,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.36  BV=2.81
    {19999,1392,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.47  BV=2.70
    {19999,1488,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.56  BV=2.61
    {29998,1024,1080, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.08  BV=2.51
    {29998,1136,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.17  BV=2.41
    {29998,1232,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.27  BV=2.32
    {29998,1296,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.37  BV=2.21
    {29998,1392,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.47  BV=2.12
    {29998,1488,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.57  BV=2.01
    {29998,1600,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.68  BV=1.91
    {29998,1744,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.78  BV=1.81
    {29998,1856,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.87  BV=1.72
    {29998,2000,1032, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.98  BV=1.61
    {29998,2160,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.08  BV=1.51
    {29998,2304,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.17  BV=1.42
    {29998,2448,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.28  BV=1.31
    {29998,2624,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=6.38  BV=1.21
    {39997,2112,1032, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=6.06  BV=1.11
    {39997,2256,1040, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=6.16  BV=1.01
    {39997,2448,1024, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=6.26  BV=0.91
    {49996,2048,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=6.04  BV=0.80
    {49996,2256,1024, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=6.14  BV=0.71
    {49996,2416,1024, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=6.24  BV=0.61
    {59995,2160,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.08  BV=0.51
    {59995,2304,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.17  BV=0.42
    {59995,2448,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.27  BV=0.32
    {59995,2624,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.38  BV=0.21
    {59995,2816,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.47  BV=0.11
    {59995,3024,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.58  BV=0.00
    {59995,3280,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.68  BV=-0.09
    {59995,3504,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.79  BV=-0.20
    {59995,3760,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.89  BV=-0.30
    {59995,4048,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.98  BV=-0.40
    {59995,4304,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.08  BV=-0.50
    {59995,4608,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=7.19  BV=-0.61
    {69994,4240,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=7.06  BV=-0.70
    {69994,4528,1040, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=7.17  BV=-0.80
    {79993,4304,1024, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=7.07  BV=-0.90
    {89992,4096,1024, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=7.00  BV=-1.00
    {89992,4384,1024, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=7.10  BV=-1.10
    {99991,4160,1040, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.04  BV=-1.20
    {99991,4528,1032, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.16  BV=-1.31
    {99991,4864,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.25  BV=-1.40
    {99991,5152,1040, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.35  BV=-1.51
    {99991,5584,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.45  BV=-1.60
    {99991,5968,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=7.54  BV=-1.69
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    93,    //i4MaxBV
    -17,    //i4MinBV
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
    {249976,1696,1032, 0, 0, 0},  //TV = 2.00(5925 lines)  AV=2.53  SV=5.74  BV=-1.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {250019,1696,1032, 0, 0, 0},  //TV = 2.00(5926 lines)  AV=2.53  SV=5.74  BV=-1.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    -12,    //i4MaxBV
    -12,    //i4MinBV
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8312,1024,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.03  BV=4.40
    {8312,1088,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.12  BV=4.32
    {8312,1184,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.23  BV=4.20
    {8312,1232,1064, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.32  BV=4.11
    {8312,1344,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.43  BV=4.01
    {8312,1440,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.53  BV=3.91
    {8312,1536,1056, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.63  BV=3.81
    {8312,1648,1048, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.72  BV=3.72
    {8312,1808,1032, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.83  BV=3.61
    {8312,1920,1040, 0, 0, 0},  //TV = 6.91(197 lines)  AV=2.53  SV=5.93  BV=3.51
    {16666,1024,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.03  BV=3.40
    {16666,1088,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.12  BV=3.31
    {16666,1184,1032, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.22  BV=3.21
    {16666,1232,1064, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.32  BV=3.11
    {16666,1344,1048, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.43  BV=3.01
    {16666,1440,1040, 0, 0, 0},  //TV = 5.91(395 lines)  AV=2.53  SV=5.51  BV=2.92
    {25020,1024,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.04  BV=2.80
    {25020,1088,1056, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.13  BV=2.71
    {25020,1184,1040, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.23  BV=2.62
    {25020,1232,1072, 0, 0, 0},  //TV = 5.32(593 lines)  AV=2.53  SV=5.33  BV=2.51
    {33331,1024,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.03  BV=2.40
    {33331,1088,1048, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.12  BV=2.31
    {33331,1184,1032, 0, 0, 0},  //TV = 4.91(790 lines)  AV=2.53  SV=5.22  BV=2.21
    {41685,1024,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.01  BV=2.10
    {41685,1088,1032, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.10  BV=2.01
    {41685,1136,1064, 0, 0, 0},  //TV = 4.58(988 lines)  AV=2.53  SV=5.21  BV=1.91
    {49996,1024,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.04  BV=1.80
    {49996,1088,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.13  BV=1.72
    {58350,1024,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.02  BV=1.60
    {58350,1088,1040, 0, 0, 0},  //TV = 4.10(1383 lines)  AV=2.53  SV=5.11  BV=1.52
    {66661,1024,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.03  BV=1.40
    {66661,1088,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.12  BV=1.31
    {66661,1184,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.22  BV=1.21
    {66661,1232,1064, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.32  BV=1.11
    {66661,1344,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.43  BV=1.01
    {66661,1440,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.51  BV=0.92
    {66661,1536,1056, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.63  BV=0.80
    {66661,1648,1048, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.72  BV=0.71
    {66661,1808,1024, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.82  BV=0.61
    {66661,1920,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=5.93  BV=0.50
    {66661,2048,1040, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.02  BV=0.41
    {66661,2208,1032, 0, 0, 0},  //TV = 3.91(1580 lines)  AV=2.53  SV=6.12  BV=0.31
    {75015,2112,1032, 0, 0, 0},  //TV = 3.74(1778 lines)  AV=2.53  SV=6.06  BV=0.21
    {83326,2048,1024, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=6.00  BV=0.11
    {83326,2208,1024, 0, 0, 0},  //TV = 3.59(1975 lines)  AV=2.53  SV=6.11  BV=0.00
    {91680,2160,1024, 0, 0, 0},  //TV = 3.45(2173 lines)  AV=2.53  SV=6.08  BV=-0.10
    {99991,2112,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=6.04  BV=-0.20
    {108345,2048,1048, 0, 0, 0},  //TV = 3.21(2568 lines)  AV=2.53  SV=6.03  BV=-0.30
    {116656,2048,1048, 0, 0, 0},  //TV = 3.10(2765 lines)  AV=2.53  SV=6.03  BV=-0.41
    {125010,2048,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.02  BV=-0.50
    {125010,2208,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.13  BV=-0.60
    {125010,2368,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.23  BV=-0.71
    {125010,2560,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.32  BV=-0.80
    {125010,2704,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.42  BV=-0.90
    {125010,2912,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.53  BV=-1.00
    {125010,3136,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.63  BV=-1.10
    {125010,3328,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.72  BV=-1.20
    {125010,3600,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.83  BV=-1.30
    {125010,3856,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=6.92  BV=-1.40
    {125010,4160,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.02  BV=-1.50
    {125010,4448,1032, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.13  BV=-1.60
    {125010,4768,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.22  BV=-1.69
    {125010,5040,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.32  BV=-1.80
    {125010,5472,1024, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.42  BV=-1.89
    {125010,5840,1040, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.53  BV=-2.01
    {125010,6096,1064, 0, 0, 0},  //TV = 3.00(2963 lines)  AV=2.53  SV=7.63  BV=-2.10
    {133321,6096,1072, 0, 0, 0},  //TV = 2.91(3160 lines)  AV=2.53  SV=7.64  BV=-2.21
    {141675,6144,1072, 0, 0, 0},  //TV = 2.82(3358 lines)  AV=2.53  SV=7.65  BV=-2.31
    {158340,6096,1032, 0, 0, 0},  //TV = 2.66(3753 lines)  AV=2.53  SV=7.58  BV=-2.40
    {166651,6096,1056, 0, 0, 0},  //TV = 2.59(3950 lines)  AV=2.53  SV=7.62  BV=-2.51
    {175005,6144,1064, 0, 0, 0},  //TV = 2.51(4148 lines)  AV=2.53  SV=7.64  BV=-2.60
    {191670,6096,1056, 0, 0, 0},  //TV = 2.38(4543 lines)  AV=2.53  SV=7.62  BV=-2.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {254,1136,1032, 0, 0, 0},  //TV = 11.94(6 lines)  AV=2.53  SV=5.16  BV=9.31
    {296,1024,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.04  BV=9.20
    {296,1088,1056, 0, 0, 0},  //TV = 11.72(7 lines)  AV=2.53  SV=5.13  BV=9.12
    {338,1024,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.06  BV=9.00
    {338,1088,1064, 0, 0, 0},  //TV = 11.53(8 lines)  AV=2.53  SV=5.14  BV=8.91
    {380,1024,1088, 0, 0, 0},  //TV = 11.36(9 lines)  AV=2.53  SV=5.09  BV=8.80
    {422,1024,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.03  BV=8.70
    {422,1088,1048, 0, 0, 0},  //TV = 11.21(10 lines)  AV=2.53  SV=5.12  BV=8.62
    {465,1024,1088, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.53  SV=5.09  BV=8.51
    {507,1024,1072, 0, 0, 0},  //TV = 10.95(12 lines)  AV=2.53  SV=5.07  BV=8.41
    {549,1024,1064, 0, 0, 0},  //TV = 10.83(13 lines)  AV=2.53  SV=5.06  BV=8.30
    {591,1024,1056, 0, 0, 0},  //TV = 10.72(14 lines)  AV=2.53  SV=5.04  BV=8.21
    {633,1024,1056, 0, 0, 0},  //TV = 10.63(15 lines)  AV=2.53  SV=5.04  BV=8.11
    {676,1024,1064, 0, 0, 0},  //TV = 10.53(16 lines)  AV=2.53  SV=5.06  BV=8.00
    {718,1024,1072, 0, 0, 0},  //TV = 10.44(17 lines)  AV=2.53  SV=5.07  BV=7.90
    {802,1024,1032, 0, 0, 0},  //TV = 10.28(19 lines)  AV=2.53  SV=5.01  BV=7.80
    {844,1024,1048, 0, 0, 0},  //TV = 10.21(20 lines)  AV=2.53  SV=5.03  BV=7.70
    {886,1024,1072, 0, 0, 0},  //TV = 10.14(21 lines)  AV=2.53  SV=5.07  BV=7.60
    {971,1024,1048, 0, 0, 0},  //TV = 10.01(23 lines)  AV=2.53  SV=5.03  BV=7.50
    {1055,1024,1032, 0, 0, 0},  //TV = 9.89(25 lines)  AV=2.53  SV=5.01  BV=7.40
    {1140,1024,1024, 0, 0, 0},  //TV = 9.78(27 lines)  AV=2.53  SV=5.00  BV=7.30
    {1182,1024,1056, 0, 0, 0},  //TV = 9.72(28 lines)  AV=2.53  SV=5.04  BV=7.21
    {1308,1024,1024, 0, 0, 0},  //TV = 9.58(31 lines)  AV=2.53  SV=5.00  BV=7.10
    {1393,1024,1032, 0, 0, 0},  //TV = 9.49(33 lines)  AV=2.53  SV=5.01  BV=7.00
    {1477,1024,1040, 0, 0, 0},  //TV = 9.40(35 lines)  AV=2.53  SV=5.02  BV=6.91
    {1604,1024,1032, 0, 0, 0},  //TV = 9.28(38 lines)  AV=2.53  SV=5.01  BV=6.80
    {1688,1024,1048, 0, 0, 0},  //TV = 9.21(40 lines)  AV=2.53  SV=5.03  BV=6.70
    {1815,1024,1040, 0, 0, 0},  //TV = 9.11(43 lines)  AV=2.53  SV=5.02  BV=6.61
    {1983,1024,1024, 0, 0, 0},  //TV = 8.98(47 lines)  AV=2.53  SV=5.00  BV=6.50
    {2110,1024,1032, 0, 0, 0},  //TV = 8.89(50 lines)  AV=2.53  SV=5.01  BV=6.40
    {2237,1024,1040, 0, 0, 0},  //TV = 8.80(53 lines)  AV=2.53  SV=5.02  BV=6.31
    {2405,1024,1040, 0, 0, 0},  //TV = 8.70(57 lines)  AV=2.53  SV=5.02  BV=6.20
    {2616,1024,1024, 0, 0, 0},  //TV = 8.58(62 lines)  AV=2.53  SV=5.00  BV=6.10
    {2785,1024,1032, 0, 0, 0},  //TV = 8.49(66 lines)  AV=2.53  SV=5.01  BV=6.00
    {2996,1024,1024, 0, 0, 0},  //TV = 8.38(71 lines)  AV=2.53  SV=5.00  BV=5.91
    {3207,1024,1032, 0, 0, 0},  //TV = 8.28(76 lines)  AV=2.53  SV=5.01  BV=5.80
    {3418,1024,1032, 0, 0, 0},  //TV = 8.19(81 lines)  AV=2.53  SV=5.01  BV=5.71
    {3671,1024,1032, 0, 0, 0},  //TV = 8.09(87 lines)  AV=2.53  SV=5.01  BV=5.60
    {3924,1024,1032, 0, 0, 0},  //TV = 7.99(93 lines)  AV=2.53  SV=5.01  BV=5.51
    {4219,1024,1032, 0, 0, 0},  //TV = 7.89(100 lines)  AV=2.53  SV=5.01  BV=5.40
    {4515,1024,1032, 0, 0, 0},  //TV = 7.79(107 lines)  AV=2.53  SV=5.01  BV=5.31
    {4852,1024,1032, 0, 0, 0},  //TV = 7.69(115 lines)  AV=2.53  SV=5.01  BV=5.20
    {5232,1024,1024, 0, 0, 0},  //TV = 7.58(124 lines)  AV=2.53  SV=5.00  BV=5.10
    {5570,1024,1032, 0, 0, 0},  //TV = 7.49(132 lines)  AV=2.53  SV=5.01  BV=5.00
    {5991,1024,1024, 0, 0, 0},  //TV = 7.38(142 lines)  AV=2.53  SV=5.00  BV=4.91
    {6456,1024,1024, 0, 0, 0},  //TV = 7.28(153 lines)  AV=2.53  SV=5.00  BV=4.80
    {6920,1024,1024, 0, 0, 0},  //TV = 7.18(164 lines)  AV=2.53  SV=5.00  BV=4.70
    {7342,1024,1032, 0, 0, 0},  //TV = 7.09(174 lines)  AV=2.53  SV=5.01  BV=4.60
    {7932,1024,1024, 0, 0, 0},  //TV = 6.98(188 lines)  AV=2.53  SV=5.00  BV=4.50
    {8481,1024,1032, 0, 0, 0},  //TV = 6.88(201 lines)  AV=2.53  SV=5.01  BV=4.40
    {9114,1024,1024, 0, 0, 0},  //TV = 6.78(216 lines)  AV=2.53  SV=5.00  BV=4.30
    {9746,1024,1024, 0, 0, 0},  //TV = 6.68(231 lines)  AV=2.53  SV=5.00  BV=4.21
    {10000,1024,1072, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.07  BV=4.10
    {10000,1136,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.16  BV=4.01
    {10000,1184,1064, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.26  BV=3.91
    {10000,1296,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.36  BV=3.81
    {10000,1392,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.47  BV=3.70
    {10000,1488,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.56  BV=3.61
    {10000,1600,1032, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.66  BV=3.51
    {10000,1696,1048, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.76  BV=3.41
    {10000,1856,1024, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.86  BV=3.31
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(237 lines)  AV=2.53  SV=5.95  BV=3.22
    {19999,1024,1072, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.07  BV=3.10
    {19999,1136,1032, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.16  BV=3.01
    {19999,1184,1064, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.26  BV=2.91
    {19999,1296,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.36  BV=2.81
    {19999,1392,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.47  BV=2.70
    {19999,1488,1040, 0, 0, 0},  //TV = 5.64(474 lines)  AV=2.53  SV=5.56  BV=2.61
    {29998,1024,1080, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.08  BV=2.51
    {29998,1136,1040, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.17  BV=2.41
    {29998,1232,1024, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.27  BV=2.32
    {29998,1296,1048, 0, 0, 0},  //TV = 5.06(711 lines)  AV=2.53  SV=5.37  BV=2.21
    {39997,1024,1072, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.07  BV=2.10
    {39997,1136,1032, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.16  BV=2.01
    {39997,1184,1064, 0, 0, 0},  //TV = 4.64(948 lines)  AV=2.53  SV=5.26  BV=1.91
    {49996,1024,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.04  BV=1.80
    {49996,1088,1056, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.13  BV=1.72
    {49996,1184,1040, 0, 0, 0},  //TV = 4.32(1185 lines)  AV=2.53  SV=5.23  BV=1.62
    {59995,1024,1080, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.08  BV=1.51
    {59995,1136,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.17  BV=1.41
    {59995,1232,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.27  BV=1.32
    {59995,1296,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.37  BV=1.21
    {59995,1392,1040, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.47  BV=1.12
    {59995,1488,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.57  BV=1.01
    {59995,1600,1048, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.68  BV=0.91
    {59995,1744,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.78  BV=0.81
    {59995,1856,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.87  BV=0.72
    {59995,2000,1032, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=5.98  BV=0.61
    {59995,2160,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.08  BV=0.51
    {59995,2304,1024, 0, 0, 0},  //TV = 4.06(1422 lines)  AV=2.53  SV=6.17  BV=0.42
    {69994,2112,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=6.06  BV=0.31
    {69994,2256,1032, 0, 0, 0},  //TV = 3.84(1659 lines)  AV=2.53  SV=6.15  BV=0.21
    {79993,2112,1032, 0, 0, 0},  //TV = 3.64(1896 lines)  AV=2.53  SV=6.06  BV=0.11
    {89992,2048,1024, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=6.00  BV=0.00
    {89992,2160,1040, 0, 0, 0},  //TV = 3.47(2133 lines)  AV=2.53  SV=6.10  BV=-0.10
    {99991,2112,1024, 0, 0, 0},  //TV = 3.32(2370 lines)  AV=2.53  SV=6.04  BV=-0.20
    {109990,2048,1032, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=6.01  BV=-0.30
    {109990,2208,1024, 0, 0, 0},  //TV = 3.18(2607 lines)  AV=2.53  SV=6.11  BV=-0.40
    {119989,2160,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.08  BV=-0.49
    {119989,2304,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.19  BV=-0.61
    {119989,2448,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.28  BV=-0.69
    {119989,2624,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.38  BV=-0.79
    {119989,2880,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.49  BV=-0.91
    {119989,3024,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.58  BV=-1.00
    {119989,3280,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.68  BV=-1.09
    {119989,3504,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.79  BV=-1.20
    {119989,3760,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.88  BV=-1.29
    {119989,4048,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=6.99  BV=-1.41
    {119989,4304,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.08  BV=-1.50
    {119989,4608,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.18  BV=-1.60
    {119989,4960,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.29  BV=-1.70
    {119989,5248,1040, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.38  BV=-1.79
    {119989,5712,1024, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.48  BV=-1.89
    {119989,6096,1032, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.58  BV=-2.00
    {119989,6144,1104, 0, 0, 0},  //TV = 3.06(2844 lines)  AV=2.53  SV=7.69  BV=-2.11
    {129988,6144,1088, 0, 0, 0},  //TV = 2.94(3081 lines)  AV=2.53  SV=7.67  BV=-2.20
    {139987,6144,1080, 0, 0, 0},  //TV = 2.84(3318 lines)  AV=2.53  SV=7.66  BV=-2.30
    {149986,6144,1088, 0, 0, 0},  //TV = 2.74(3555 lines)  AV=2.53  SV=7.67  BV=-2.41
    {169984,6096,1032, 0, 0, 0},  //TV = 2.56(4029 lines)  AV=2.53  SV=7.58  BV=-2.50
    {179983,6096,1048, 0, 0, 0},  //TV = 2.47(4266 lines)  AV=2.53  SV=7.61  BV=-2.61
    {189982,6096,1064, 0, 0, 0},  //TV = 2.40(4503 lines)  AV=2.53  SV=7.63  BV=-2.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    121,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    93,    //i4MaxBV
    -27,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
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
    {LIB3A_AE_SCENE_NIGHT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ACTION, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
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
        {1,3500,15,1024,1024},
        {2,15,15,1024,2048},
        {3,15,8,2048,2048},
        {4,8,8,2048,6144},
        {5,8,5,6144,6144},
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
        {1,3500,15,1024,1024},
        {2,15,15,1024,2048},
        {3,15,8,2048,2048},
        {4,8,8,2048,6144},
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
        {1,3500,15,1024,1024},
        {2,15,15,1024,2048},
        {3,15,8,2048,2048},
        {4,8,8,2048,6144},
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
        {1,3500,60,1195,1195},
        {2,60,60,1195,6144},
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
        {1,3500,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,6144},
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
        {1,3500,60,1024,1024},
        {2,60,60,1024,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,6144},
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
        {1,3500,60,1024,1024},
        {2,60,60,1024,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,6144},
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
        {1,3500,60,1024,1024},
        {2,60,60,1024,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,6144},
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
        {1,3500,60,1024,1024},
        {2,60,60,1024,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,6144},
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
        {1,3500,60,1024,1024},
        {2,60,60,1024,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,6144},
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
        {1,3500,30,1024,1024},
        {2,30,30,1024,6144},
        {3,30,10,6144,6144},
        {4,10,10,6144,8196},
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

static strAEPLineNumInfo g_strAECaptureISO100PLineInfo =
{
    AETABLE_CAPTURE_ISO100,
    90,
    0,
    {
        {1,3500,5,1230,1230},
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
        {1,3500,2000,1024,1024},
        {2,2000,2000,1024,2460},
        {3,2000,5,2460,2460},
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
        {1,3500,2000,1024,1024},
        {2,2000,2000,1024,4920},
        {3,2000,5,4920,4920},
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
        {1,3500,2000,1024,1024},
        {2,2000,2000,1024,6144},
        {3,2000,5,6144,6144},
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
        {1,3500,2000,1024,1024},
        {2,2000,2000,1024,8196},
        {3,2000,5,8196,8196},
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
        {1,3500,15,1024,1024},
        {2,15,15,1024,4096},
        {3,15,10,4096,4096},
        {4,10,10,4096,30720},
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
        {1,3500,15,1024,1024},
        {2,15,15,1024,4096},
        {3,15,5,4096,4096},
        {4,5,5,4096,6144},
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

static strAEPLineNumInfo g_strAEScene2PLineInfo =
{
    AETABLE_SCENE_INDEX2,
    90,
    0,
    {
        {1,3500,100,1024,1024},
        {2,100,100,1024,4096},
        {3,100,30,4096,4096},
        {4,30,30,4096,6144},
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
        {1,3500,30,1024,1024},
        {2,30,30,1024,2048},
        {3,30,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,6144},
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
    -10,
    {
        {1,3500,15,1024,1024},
        {2,15,15,1024,2048},
        {3,15,8,2048,2048},
        {4,8,8,2048,6144},
        {5,8,5,6144,6144},
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
97,
{
{1024,100},
{1088,100},
{1136,100},
{1184,100},
{1232,100},
{1296,100},
{1344,100},
{1392,100},
{1440,100},
{1488,100},
{1536,100},
{1600,100},
{1648,100},
{1696,100},
{1744,100},
{1808,100},
{1856,100},
{1920,100},
{1952,100},
{2000,100},
{2048,100},
{2112,100},
{2160,100},
{2208,100},
{2256,100},
{2304,100},
{2368,100},
{2416,100},
{2448,100},
{2512,100},
{2560,100},
{2624,100},
{2688,100},
{2704,100},
{2768,100},
{2816,100},
{2880,100},
{2912,100},
{2992,100},
{3024,100},
{3088,100},
{3136,100},
{3200,100},
{3248,100},
{3280,100},
{3328,100},
{3408,100},
{3456,100},
{3504,100},
{3552,100},
{3600,100},
{3648,100},
{3712,100},
{3760,100},
{3808,100},
{3856,100},
{3920,100},
{3984,100},
{4048,100},
{4096,100},
{4160,100},
{4240,100},
{4304,100},
{4384,100},
{4448,100},
{4528,100},
{4608,100},
{4688,100},
{4768,100},
{4864,100},
{4960,100},
{5040,100},
{5152,100},
{5248,100},
{5360,100},
{5472,100},
{5584,100},
{5712,100},
{5840,100},
{5968,100},
{6096,100},
{6400,100},
{6720,100},
{6912,100},
{7088,100},
{7488,100},
{7712,100},
{7952,100},
{8192,100},
{8464,100},
{8736,100},
{9056,100},
{9360,100},
{9712,100},
{10096,100},
{10496,100},
{10928,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
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
MinGain,1024 
MaxGain,6144 
MiniISOGain,100 
GainStepUnitInTotalRange,128 
PreviewExposureLineUnit,42190 
PreviewMaxFrameRate,20 
VideoExposureLineUnit,42190 
VideoMaxFrameRate,20 
VideoToPreviewSensitivityRatio,1024 
CaptureExposureLineUnit,42190 
CaptureMaxFrameRate,20 
CaptureToPreviewSensitivityRatio,1024 
Video1ExposureLineUnit,42190 
Video1MaxFrameRate,30 
Video1ToPreviewSensitivityRatio,1024 
Video2ExposureLineUnit,42190 
Video2MaxFrameRate,30 
Video2ToPreviewSensitivityRatio,1024 
Custom1ExposureLineUnit,42190 
Custom1MaxFrameRate,30 
Custom1ToPreviewSensitivityRatio,1024 
Custom2ExposureLineUnit,42190 
Custom2MaxFrameRate,30 
Custom2ToPreviewSensitivityRatio,1024 
Custom3ExposureLineUnit,42190 
Custom3MaxFrameRate,30 
Custom3ToPreviewSensitivityRatio,1024 
Custom4ExposureLineUnit,42190 
Custom4MaxFrameRate,30 
Custom4ToPreviewSensitivityRatio,1024 
Custom5ExposureLineUnit,42190 
Custom5MaxFrameRate,30 
Custom5ToPreviewSensitivityRatio,1024 
FocusLength,350 
Fno,24 

// Preview table -- Use preview sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_RPEVIEW_AUTO
90,-10
1,3500,15,1024,1024
2,15,15,1024,2048
3,15,8,2048,2048
4,8,8,2048,6144
4,8,5,6144,6144
AETABLE_END

// Capture table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_AUTO
90,0
1,3500,15,1024,1024
2,15,15,1024,2048
3,15,8,2048,2048
4,8,8,2048,6144
AETABLE_END

// Video table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_AUTO
90,0
1,3500,15,1024,1024
2,15,15,1024,2048
3,15,8,2048,2048
4,8,8,2048,6144
AETABLE_END

// Video1 table -- Use Video1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO1_AUTO
90,0
1,3500,60,1195,1195
2,60,60,1195,6144
AETABLE_END

// Video2 table -- Use Video2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO2_AUTO
90,0
1,3500,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,6144
AETABLE_END

// Custom1 table -- Use Custom1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM1_AUTO
90,0
1,3500,60,1024,1024
2,60,60,1024,3072
3,60,30,3072,3072
4,30,30,3072,6144
AETABLE_END

// Custom2 table -- Use Custom2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM2_AUTO
90,0
1,3500,60,1024,1024
2,60,60,1024,3072
3,60,30,3072,3072
4,30,30,3072,6144
AETABLE_END

// Custom3 table -- Use Custom3 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM3_AUTO
90,0
1,3500,60,1024,1024
2,60,60,1024,3072
3,60,30,3072,3072
4,30,30,3072,6144
AETABLE_END

// Custom4 table -- Use Custom4 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM4_AUTO
90,0
1,3500,60,1024,1024
2,60,60,1024,3072
3,60,30,3072,3072
4,30,30,3072,6144
AETABLE_END

// Custom5 table -- Use Custom5 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM5_AUTO
90,0
1,3500,60,1024,1024
2,60,60,1024,3072
3,60,30,3072,3072
4,30,30,3072,6144
AETABLE_END

// Video Night table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_NIGHT
90,-10
1,3500,30,1024,1024
2,30,30,1024,6144
3,30,10,6144,6144
4,10,10,6144,8196
AETABLE_END

// Capture ISO100 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO100
90,0
1,3500,5,1230,1230
AETABLE_END

// Capture ISO200 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO200
90,0
1,3500,2000,1024,1024
2,2000,2000,1024,2460
3,2000,5,2460,2460
AETABLE_END

// Capture ISO400 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO400
90,0
1,3500,2000,1024,1024
2,2000,2000,1024,4920
3,2000,5,4920,4920
AETABLE_END

// Capture ISO800 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO800
90,0
1,3500,2000,1024,1024
2,2000,2000,1024,6144
2,2000,5,6144,6144
AETABLE_END

// Capture ISO1600 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO1600
90,0
1,3500,2000,1024,1024
2,2000,2000,1024,8196
3,2000,5,8196,8196
AETABLE_END

// Strobe table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_STROBE
90,0
1,3500,15,1024,1024
2,15,15,1024,4096
3,15,10,4096,4096
4,10,10,4096,30720
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX1
90,-10
1,3500,15,1024,1024
2,15,15,1024,4096
3,15,5,4096,4096
4,5,5,4096,6144
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX2
90,0
1,3500,100,1024,1024
2,100,100,1024,4096
3,100,30,4096,4096
2,30,30,4096,6144
AETABLE_END

// Table1 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX3
90,0
1,3500,30,1024,1024
2,30,30,1024,2048
3,30,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,6144
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
90,-10
1,3500,15,1024,1024
2,15,15,1024,2048
3,15,8,2048,2048
4,8,8,2048,6144
4,8,5,6144,6144
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
AE_SCENE_NIGHT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ACTION,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
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
