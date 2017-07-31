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

#ifndef _CAMERA_AE_PLINETABLE_SP0A09RAW_H
#define _CAMERA_AE_PLINETABLE_SP0A09RAW_H

#include "camera_custom_AEPlinetable.h"
static strEvPline sPreviewPLineTable_60Hz =
{
{
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33114,2560,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.37  BV=2.51
    {33114,2816,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.49  BV=2.40
    {33114,2944,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.57  BV=2.31
    {33114,3200,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.67  BV=2.21
    {33114,3328,1056, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.77  BV=2.11
    {33114,3712,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.89  BV=2.00
    {33114,3968,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.98  BV=1.90
    {33114,4224,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.07  BV=1.81
    {33114,4480,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.18  BV=1.71
    {33114,4864,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.28  BV=1.61
    {33114,5120,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.37  BV=1.51
    {33114,5504,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.48  BV=1.41
    {33114,5888,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.57  BV=1.31
    {33114,6400,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66429,8448,1032, 0, 0, 0},  //TV = 3.91(989 lines)  AV=2.97  SV=7.08  BV=-0.20
    {66429,9088,1024, 0, 0, 0},  //TV = 3.91(989 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33114,2560,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.37  BV=2.51
    {33114,2816,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.49  BV=2.40
    {33114,2944,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.57  BV=2.31
    {33114,3200,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.67  BV=2.21
    {33114,3328,1056, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.77  BV=2.11
    {33114,3712,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.89  BV=2.00
    {33114,3968,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.98  BV=1.90
    {33114,4224,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.07  BV=1.81
    {33114,4480,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.18  BV=1.71
    {33114,4864,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.28  BV=1.61
    {33114,5120,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.37  BV=1.51
    {33114,5504,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.48  BV=1.41
    {33114,5888,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.57  BV=1.31
    {33114,6400,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66429,8448,1032, 0, 0, 0},  //TV = 3.91(989 lines)  AV=2.97  SV=7.08  BV=-0.20
    {66429,9088,1024, 0, 0, 0},  //TV = 3.91(989 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33114,2560,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.37  BV=2.51
    {33114,2816,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.49  BV=2.40
    {33114,2944,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.57  BV=2.31
    {33114,3200,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.67  BV=2.21
    {33114,3328,1056, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.77  BV=2.11
    {33114,3712,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.89  BV=2.00
    {33114,3968,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.98  BV=1.90
    {33114,4224,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.07  BV=1.81
    {33114,4480,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.18  BV=1.71
    {33114,4864,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.28  BV=1.61
    {33114,5120,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.37  BV=1.51
    {33114,5504,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.48  BV=1.41
    {33114,5888,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.57  BV=1.31
    {33114,6400,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66429,8448,1032, 0, 0, 0},  //TV = 3.91(989 lines)  AV=2.97  SV=7.08  BV=-0.20
    {66429,9088,1024, 0, 0, 0},  //TV = 3.91(989 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33114,2560,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.37  BV=2.51
    {33114,2816,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.49  BV=2.40
    {33114,2944,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.57  BV=2.31
    {33114,3200,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.67  BV=2.21
    {33114,3328,1056, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.77  BV=2.11
    {33114,3712,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.89  BV=2.00
    {33114,3968,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=5.98  BV=1.90
    {33114,4224,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.07  BV=1.81
    {33114,4480,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.18  BV=1.71
    {33114,4864,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.28  BV=1.61
    {33114,5120,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.37  BV=1.51
    {33114,5504,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.48  BV=1.41
    {33114,5888,1040, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.57  BV=1.31
    {33114,6400,1024, 0, 0, 0},  //TV = 4.92(493 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66429,8448,1032, 0, 0, 0},  //TV = 3.91(989 lines)  AV=2.97  SV=7.08  BV=-0.20
    {66429,9088,1024, 0, 0, 0},  //TV = 3.91(989 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {108342,8448,1024, 0, 0, 0},  //TV = 3.21(1613 lines)  AV=2.97  SV=7.07  BV=-0.90
    {116670,8448,1024, 0, 0, 0},  //TV = 3.10(1737 lines)  AV=2.97  SV=7.07  BV=-1.00
    {124999,8448,1024, 0, 0, 0},  //TV = 3.00(1861 lines)  AV=2.97  SV=7.07  BV=-1.10
    {124999,8960,1032, 0, 0, 0},  //TV = 3.00(1861 lines)  AV=2.97  SV=7.17  BV=-1.20
    {124999,9728,1024, 0, 0, 0},  //TV = 3.00(1861 lines)  AV=2.97  SV=7.28  BV=-1.31
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {110021,8320,1024, 0, 0, 0},  //TV = 3.18(1638 lines)  AV=2.97  SV=7.05  BV=-0.90
    {120029,8192,1024, 0, 0, 0},  //TV = 3.06(1787 lines)  AV=2.97  SV=7.03  BV=-1.00
    {120029,8832,1024, 0, 0, 0},  //TV = 3.06(1787 lines)  AV=2.97  SV=7.14  BV=-1.11
    {120029,9344,1032, 0, 0, 0},  //TV = 3.06(1787 lines)  AV=2.97  SV=7.23  BV=-1.20
    {120029,10112,1024, 0, 0, 0},  //TV = 3.06(1787 lines)  AV=2.97  SV=7.33  BV=-1.30
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    100,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -13,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {100013,9088,1032, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100013,9856,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.30  BV=-1.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    97,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -10,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene5PLineTable_60Hz,
    sAEScene5PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene10PLineTable_60Hz =
{
{
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8329,2560,1040, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,2688,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,2944,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.56  BV=4.32
    {8329,3072,1064, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,3328,1048, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.76  BV=4.12
    {8329,3584,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.88  BV=4.00
    {8329,3840,1056, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=5.98  BV=3.90
    {8329,4224,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,4480,1032, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.17  BV=3.71
    {8329,4864,1024, 0, 0, 0},  //TV = 6.91(124 lines)  AV=2.97  SV=6.28  BV=3.60
    {16658,2560,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.37  BV=3.51
    {16658,2688,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.47  BV=3.41
    {16658,2944,1040, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.57  BV=3.30
    {16658,3200,1024, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.67  BV=3.21
    {16658,3328,1056, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.77  BV=3.11
    {16658,3584,1048, 0, 0, 0},  //TV = 5.91(248 lines)  AV=2.97  SV=5.87  BV=3.01
    {24987,2560,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.38  BV=2.91
    {24987,2816,1024, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.49  BV=2.81
    {24987,2944,1048, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.59  BV=2.71
    {24987,3200,1032, 0, 0, 0},  //TV = 5.32(372 lines)  AV=2.97  SV=5.68  BV=2.61
    {33315,2560,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.37  BV=2.51
    {33315,2688,1064, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.48  BV=2.40
    {33315,2944,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.57  BV=2.30
    {33315,3200,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.67  BV=2.21
    {33315,3328,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.76  BV=2.12
    {33315,3584,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.87  BV=2.01
    {33315,3840,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=5.97  BV=1.91
    {33315,4224,1024, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.07  BV=1.81
    {33315,4480,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.17  BV=1.71
    {33315,4736,1048, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.27  BV=1.61
    {33315,5120,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.36  BV=1.52
    {33315,5504,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.47  BV=1.41
    {33315,5888,1032, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.56  BV=1.32
    {33315,6272,1040, 0, 0, 0},  //TV = 4.91(496 lines)  AV=2.97  SV=6.67  BV=1.21
    {41644,5376,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.44  BV=1.11
    {41644,5760,1040, 0, 0, 0},  //TV = 4.59(620 lines)  AV=2.97  SV=6.54  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {58301,8448,1024, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58301,8960,1032, 0, 0, 0},  //TV = 4.10(868 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66630,8448,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.07  BV=-0.19
    {66630,9088,1024, 0, 0, 0},  //TV = 3.91(992 lines)  AV=2.97  SV=7.18  BV=-0.30
    {75027,8576,1032, 0, 0, 0},  //TV = 3.74(1117 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83356,8320,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.05  BV=-0.50
    {83356,8960,1024, 0, 0, 0},  //TV = 3.58(1241 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91684,8704,1024, 0, 0, 0},  //TV = 3.45(1365 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {108342,8448,1024, 0, 0, 0},  //TV = 3.21(1613 lines)  AV=2.97  SV=7.07  BV=-0.90
    {116670,8448,1024, 0, 0, 0},  //TV = 3.10(1737 lines)  AV=2.97  SV=7.07  BV=-1.00
    {124999,8448,1024, 0, 0, 0},  //TV = 3.00(1861 lines)  AV=2.97  SV=7.07  BV=-1.10
    {124999,8960,1032, 0, 0, 0},  //TV = 3.00(1861 lines)  AV=2.97  SV=7.17  BV=-1.20
    {124999,9728,1024, 0, 0, 0},  //TV = 3.00(1861 lines)  AV=2.97  SV=7.28  BV=-1.31
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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

static strEvPline sAEScene10PLineTable_50Hz =
{
{
    {471,2816,1032, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.50  BV=8.52
    {471,2816,1040, 0, 0, 0},  //TV = 11.05(7 lines)  AV=2.97  SV=5.51  BV=8.51
    {538,2688,1024, 0, 0, 0},  //TV = 10.86(8 lines)  AV=2.97  SV=5.42  BV=8.41
    {605,2560,1024, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.35  BV=8.31
    {605,2688,1048, 0, 0, 0},  //TV = 10.69(9 lines)  AV=2.97  SV=5.45  BV=8.21
    {672,2560,1056, 0, 0, 0},  //TV = 10.54(10 lines)  AV=2.97  SV=5.39  BV=8.12
    {739,2560,1032, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.36  BV=8.01
    {739,2688,1056, 0, 0, 0},  //TV = 10.40(11 lines)  AV=2.97  SV=5.47  BV=7.91
    {807,2688,1032, 0, 0, 0},  //TV = 10.28(12 lines)  AV=2.97  SV=5.43  BV=7.81
    {874,2688,1024, 0, 0, 0},  //TV = 10.16(13 lines)  AV=2.97  SV=5.42  BV=7.71
    {941,2560,1072, 0, 0, 0},  //TV = 10.05(14 lines)  AV=2.97  SV=5.42  BV=7.61
    {1008,2688,1024, 0, 0, 0},  //TV = 9.95(15 lines)  AV=2.97  SV=5.42  BV=7.50
    {1075,2688,1024, 0, 0, 0},  //TV = 9.86(16 lines)  AV=2.97  SV=5.42  BV=7.41
    {1210,2560,1024, 0, 0, 0},  //TV = 9.69(18 lines)  AV=2.97  SV=5.35  BV=7.31
    {1277,2560,1040, 0, 0, 0},  //TV = 9.61(19 lines)  AV=2.97  SV=5.37  BV=7.21
    {1344,2560,1064, 0, 0, 0},  //TV = 9.54(20 lines)  AV=2.97  SV=5.41  BV=7.10
    {1478,2560,1032, 0, 0, 0},  //TV = 9.40(22 lines)  AV=2.97  SV=5.36  BV=7.01
    {1545,2560,1056, 0, 0, 0},  //TV = 9.34(23 lines)  AV=2.97  SV=5.39  BV=6.91
    {1680,2560,1040, 0, 0, 0},  //TV = 9.22(25 lines)  AV=2.97  SV=5.37  BV=6.82
    {1814,2560,1032, 0, 0, 0},  //TV = 9.11(27 lines)  AV=2.97  SV=5.36  BV=6.72
    {1948,2560,1040, 0, 0, 0},  //TV = 9.00(29 lines)  AV=2.97  SV=5.37  BV=6.60
    {2083,2560,1040, 0, 0, 0},  //TV = 8.91(31 lines)  AV=2.97  SV=5.37  BV=6.51
    {2217,2560,1048, 0, 0, 0},  //TV = 8.82(33 lines)  AV=2.97  SV=5.38  BV=6.40
    {2419,2560,1024, 0, 0, 0},  //TV = 8.69(36 lines)  AV=2.97  SV=5.35  BV=6.31
    {2553,2560,1040, 0, 0, 0},  //TV = 8.61(38 lines)  AV=2.97  SV=5.37  BV=6.21
    {2754,2560,1040, 0, 0, 0},  //TV = 8.50(41 lines)  AV=2.97  SV=5.37  BV=6.10
    {2956,2560,1040, 0, 0, 0},  //TV = 8.40(44 lines)  AV=2.97  SV=5.37  BV=6.00
    {3157,2560,1040, 0, 0, 0},  //TV = 8.31(47 lines)  AV=2.97  SV=5.37  BV=5.91
    {3426,2560,1024, 0, 0, 0},  //TV = 8.19(51 lines)  AV=2.97  SV=5.35  BV=5.81
    {3628,2560,1032, 0, 0, 0},  //TV = 8.11(54 lines)  AV=2.97  SV=5.36  BV=5.72
    {3896,2560,1040, 0, 0, 0},  //TV = 8.00(58 lines)  AV=2.97  SV=5.37  BV=5.60
    {4232,2560,1024, 0, 0, 0},  //TV = 7.88(63 lines)  AV=2.97  SV=5.35  BV=5.50
    {4501,2560,1032, 0, 0, 0},  //TV = 7.80(67 lines)  AV=2.97  SV=5.36  BV=5.40
    {4837,2560,1024, 0, 0, 0},  //TV = 7.69(72 lines)  AV=2.97  SV=5.35  BV=5.31
    {5172,2560,1024, 0, 0, 0},  //TV = 7.60(77 lines)  AV=2.97  SV=5.35  BV=5.22
    {5508,2560,1032, 0, 0, 0},  //TV = 7.50(82 lines)  AV=2.97  SV=5.36  BV=5.11
    {5911,2560,1032, 0, 0, 0},  //TV = 7.40(88 lines)  AV=2.97  SV=5.36  BV=5.01
    {6381,2560,1024, 0, 0, 0},  //TV = 7.29(95 lines)  AV=2.97  SV=5.35  BV=4.91
    {6852,2560,1024, 0, 0, 0},  //TV = 7.19(102 lines)  AV=2.97  SV=5.35  BV=4.81
    {7322,2560,1024, 0, 0, 0},  //TV = 7.09(109 lines)  AV=2.97  SV=5.35  BV=4.71
    {7859,2560,1024, 0, 0, 0},  //TV = 6.99(117 lines)  AV=2.97  SV=5.35  BV=4.61
    {8396,2560,1024, 0, 0, 0},  //TV = 6.90(125 lines)  AV=2.97  SV=5.35  BV=4.52
    {9001,2560,1024, 0, 0, 0},  //TV = 6.80(134 lines)  AV=2.97  SV=5.35  BV=4.42
    {9673,2560,1024, 0, 0, 0},  //TV = 6.69(144 lines)  AV=2.97  SV=5.35  BV=4.31
    {10009,2560,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.39  BV=4.22
    {10009,2816,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.50  BV=4.11
    {10009,2944,1056, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.60  BV=4.02
    {10009,3200,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.69  BV=3.92
    {10009,3456,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.81  BV=3.81
    {10009,3712,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=5.91  BV=3.70
    {10009,3968,1040, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.01  BV=3.61
    {10009,4224,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.11  BV=3.51
    {10009,4608,1032, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.21  BV=3.40
    {10009,4864,1048, 0, 0, 0},  //TV = 6.64(149 lines)  AV=2.97  SV=6.31  BV=3.30
    {20017,2560,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.41  BV=3.21
    {20017,2816,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.50  BV=3.11
    {20017,2944,1064, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.61  BV=3.01
    {20017,3200,1048, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.71  BV=2.91
    {20017,3456,1040, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.81  BV=2.81
    {20017,3712,1032, 0, 0, 0},  //TV = 5.64(298 lines)  AV=2.97  SV=5.90  BV=2.72
    {30025,2688,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.42  BV=2.61
    {30025,2816,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.51  BV=2.52
    {30025,3072,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.62  BV=2.40
    {30025,3200,1056, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.72  BV=2.31
    {30025,3456,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.82  BV=2.21
    {30025,3712,1048, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=5.92  BV=2.11
    {30025,4096,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.03  BV=2.00
    {30025,4352,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.12  BV=1.91
    {30025,4608,1040, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.22  BV=1.81
    {30025,4992,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.31  BV=1.71
    {30025,5376,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.42  BV=1.61
    {30025,5760,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.52  BV=1.51
    {30025,6144,1024, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.61  BV=1.42
    {30025,6528,1032, 0, 0, 0},  //TV = 5.06(447 lines)  AV=2.97  SV=6.71  BV=1.32
    {40033,5248,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.40  BV=1.22
    {40033,5632,1032, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.50  BV=1.11
    {40033,6016,1040, 0, 0, 0},  //TV = 4.64(596 lines)  AV=2.97  SV=6.61  BV=1.01
    {49973,5248,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.39  BV=0.91
    {49973,5632,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.49  BV=0.81
    {49973,6016,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.58  BV=0.71
    {49973,6400,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.68  BV=0.61
    {49973,6912,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.78  BV=0.51
    {49973,7296,1040, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.88  BV=0.41
    {49973,7936,1024, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=6.98  BV=0.31
    {49973,8448,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.08  BV=0.21
    {49973,9088,1032, 0, 0, 0},  //TV = 4.32(744 lines)  AV=2.97  SV=7.19  BV=0.10
    {59981,8192,1024, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.03  BV=0.00
    {59981,8704,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59981,9344,1032, 0, 0, 0},  //TV = 4.06(893 lines)  AV=2.97  SV=7.23  BV=-0.20
    {69989,8576,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69989,9216,1032, 0, 0, 0},  //TV = 3.84(1042 lines)  AV=2.97  SV=7.21  BV=-0.40
    {79996,8704,1024, 0, 0, 0},  //TV = 3.64(1191 lines)  AV=2.97  SV=7.12  BV=-0.50
    {90005,8192,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.04  BV=-0.60
    {90005,8832,1032, 0, 0, 0},  //TV = 3.47(1340 lines)  AV=2.97  SV=7.15  BV=-0.70
    {100013,8576,1024, 0, 0, 0},  //TV = 3.32(1489 lines)  AV=2.97  SV=7.09  BV=-0.80
    {110021,8320,1024, 0, 0, 0},  //TV = 3.18(1638 lines)  AV=2.97  SV=7.05  BV=-0.90
    {120029,8192,1024, 0, 0, 0},  //TV = 3.06(1787 lines)  AV=2.97  SV=7.03  BV=-1.00
    {120029,8832,1024, 0, 0, 0},  //TV = 3.06(1787 lines)  AV=2.97  SV=7.14  BV=-1.11
    {120029,9344,1032, 0, 0, 0},  //TV = 3.06(1787 lines)  AV=2.97  SV=7.23  BV=-1.20
    {120029,10112,1024, 0, 0, 0},  //TV = 3.06(1787 lines)  AV=2.97  SV=7.33  BV=-1.30
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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

static strAETable g_AE_SceneTable10 =
{
    AETABLE_SCENE_INDEX10,    //eAETableID
    100,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    86,    //i4MaxBV
    -13,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene10PLineTable_60Hz,
    sAEScene10PLineTable_50Hz,
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
    {LIB3A_AE_SCENE_NIGHT, {AETABLE_SCENE_INDEX10, AETABLE_SCENE_INDEX10, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO_NIGHT, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ACTION, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_BEACH, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_CANDLELIGHT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_FIREWORKS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX4, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX4}},
    {LIB3A_AE_SCENE_LANDSCAPE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_NIGHT_PORTRAIT, {AETABLE_SCENE_INDEX10, AETABLE_SCENE_INDEX10, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO_NIGHT, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
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
g_AE_SceneTable10,
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,8,8192,8192},
        {6,8,8,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,8,8192,8192},
        {6,8,8,8192,10240},
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
        {1,1900,30,2560,2560},
        {2,30,30,2560,5120},
        {3,30,20,5120,5120},
        {4,20,20,5120,8192},
        {5,20,10,8192,8192},
        {6,10,10,8192,10240},
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
MinGain,2560 
MaxGain,10240 
MiniISOGain,51 
GainStepUnitInTotalRange,128 
PreviewExposureLineUnit,67167 
PreviewMaxFrameRate,30 
VideoExposureLineUnit,67167 
VideoMaxFrameRate,30 
VideoToPreviewSensitivityRatio,1024 
CaptureExposureLineUnit,67167 
CaptureMaxFrameRate,30 
CaptureToPreviewSensitivityRatio,1024 
Video1ExposureLineUnit,67167 
Video1MaxFrameRate,30 
Video1ToPreviewSensitivityRatio,1024 
Video2ExposureLineUnit,67167 
Video2MaxFrameRate,30 
Video2ToPreviewSensitivityRatio,1024 
Custom1ExposureLineUnit,67167 
Custom1MaxFrameRate,30 
Custom1ToPreviewSensitivityRatio,1024 
Custom2ExposureLineUnit,67167 
Custom2MaxFrameRate,30 
Custom2ToPreviewSensitivityRatio,1024 
Custom3ExposureLineUnit,67167 
Custom3MaxFrameRate,30 
Custom3ToPreviewSensitivityRatio,1024 
Custom4ExposureLineUnit,67167 
Custom4MaxFrameRate,30 
Custom4ToPreviewSensitivityRatio,1024 
Custom5ExposureLineUnit,67167 
Custom5MaxFrameRate,30 
Custom5ToPreviewSensitivityRatio,1024 
FocusLength,350 
Fno,28 

// Preview table -- Use preview sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_RPEVIEW_AUTO
90,-10
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Capture table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_AUTO
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Video table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_AUTO
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Video1 table -- Use Video1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO1_AUTO
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Video2 table -- Use Video2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO2_AUTO
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Custom1 table -- Use Custom1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM1_AUTO
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Custom2 table -- Use Custom2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM2_AUTO
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Custom3 table -- Use Custom3 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM3_AUTO
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Custom4 table -- Use Custom4 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM4_AUTO
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Custom5 table -- Use Custom5 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM5_AUTO
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Video Night table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_NIGHT
90,-10
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,8,8192,8192
6,8,8,8192,10240
AETABLE_END

// Capture ISO100 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO100
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Capture ISO200 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO200
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Capture ISO400 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO400
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Capture ISO800 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO800
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Capture ISO1600 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO1600
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Strobe table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_STROBE
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX1
90,-10
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX2
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Table1 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX3
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Table2 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX4
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Table3 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX5
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Table4 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX6
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Table5 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX7
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Table6 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX8
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Table7 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX9
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

// Table8 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX10
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,8,8192,8192
6,8,8,8192,10240
AETABLE_END

// Table9 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX11
90,0
1,1900,30,2560,2560
2,30,30,2560,5120
3,30,20,5120,5120
4,20,20,5120,8192
5,20,10,8192,8192
6,10,10,8192,10240
AETABLE_END

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
AE_SCENE_NIGHT,AETABLE_SCENE_INDEX10,AETABLE_SCENE_INDEX10,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO_NIGHT,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ACTION,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_BEACH,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_CANDLELIGHT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_FIREWORKS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX4,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX4
AE_SCENE_LANDSCAPE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_NIGHT_PORTRAIT,AETABLE_SCENE_INDEX10,AETABLE_SCENE_INDEX10,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO_NIGHT,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
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
