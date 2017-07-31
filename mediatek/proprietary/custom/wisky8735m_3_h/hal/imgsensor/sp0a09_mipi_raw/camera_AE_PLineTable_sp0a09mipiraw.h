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

#ifndef _CAMERA_AE_PLINETABLE_SP0A09_MIPI_RAW_H
#define _CAMERA_AE_PLINETABLE_SP0A09_MIPI_RAW_H

#include "camera_custom_AEPlinetable.h"
static strEvPline sPreviewPLineTable_60Hz =
{
{
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.38  BV=3.50
    {16683,1408,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.46  BV=3.42
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {24983,1152,1104, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.28  BV=3.02
    {24983,1280,1072, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.39  BV=2.91
    {24983,1408,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.48  BV=2.81
    {24983,1536,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.58  BV=2.71
    {33366,1152,1088, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.26  BV=2.62
    {33366,1280,1056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.37  BV=2.51
    {33366,1408,1024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.46  BV=2.42
    {33366,1408,1104, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.57  BV=2.31
    {41666,1280,1040, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=5.34  BV=2.21
    {41666,1408,1024, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=5.46  BV=2.10
    {49966,1152,1104, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.28  BV=2.02
    {49966,1280,1080, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.40  BV=1.90
    {49966,1408,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.48  BV=1.81
    {58349,1280,1056, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.37  BV=1.70
    {58349,1408,1024, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.46  BV=1.61
    {58349,1408,1096, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.56  BV=1.51
    {58349,1536,1088, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.67  BV=1.40
    {58349,1664,1064, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.76  BV=1.31
    {58349,1792,1064, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.86  BV=1.21
    {58349,1920,1064, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.96  BV=1.11
    {58349,2048,1064, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=6.06  BV=1.01
    {58349,2304,1024, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=6.17  BV=0.90
    {66649,2048,1080, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.08  BV=0.80
    {75032,2048,1024, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=6.00  BV=0.71
    {75032,2176,1024, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=6.09  BV=0.62
    {83332,2048,1056, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.04  BV=0.51
    {83332,2176,1072, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.15  BV=0.40
    {83332,2432,1024, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.25  BV=0.31
    {83332,2560,1040, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.34  BV=0.21
    {83332,2688,1056, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.44  BV=0.12
    {83332,2944,1048, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.56  BV=-0.00
    {83332,3200,1032, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.66  BV=-0.10
    {91632,3072,1056, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=6.63  BV=-0.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {20003,1280,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.32  BV=3.29
    {20003,1280,1088, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.41  BV=3.21
    {20003,1408,1056, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.50  BV=3.11
    {20003,1536,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.61  BV=3.01
    {20003,1664,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.70  BV=2.91
    {20003,1792,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.81  BV=2.81
    {29963,1280,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.32  BV=2.71
    {29963,1280,1096, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.42  BV=2.61
    {29963,1408,1064, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.51  BV=2.52
    {29963,1536,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.62  BV=2.41
    {40006,1152,1128, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.31  BV=2.31
    {40006,1280,1088, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.41  BV=2.21
    {40006,1408,1056, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.50  BV=2.11
    {49966,1152,1104, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.28  BV=2.02
    {49966,1280,1080, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.40  BV=1.90
    {49966,1408,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.48  BV=1.81
    {60009,1280,1024, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.32  BV=1.71
    {60009,1280,1096, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.42  BV=1.61
    {60009,1408,1064, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.51  BV=1.51
    {60009,1536,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.62  BV=1.41
    {60009,1664,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.71  BV=1.32
    {60009,1792,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.82  BV=1.21
    {60009,1920,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.92  BV=1.11
    {60009,2048,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.02  BV=1.01
    {60009,2176,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.12  BV=0.91
    {69969,2048,1024, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=6.00  BV=0.81
    {69969,2176,1024, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=6.09  BV=0.72
    {80012,2048,1024, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.00  BV=0.61
    {80012,2176,1032, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.10  BV=0.52
    {80012,2304,1048, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.20  BV=0.41
    {80012,2432,1064, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.30  BV=0.31
    {80012,2688,1032, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.40  BV=0.21
    {80012,2816,1064, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.51  BV=0.10
    {80012,3072,1048, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.62  BV=-0.00
    {80012,3328,1040, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.72  BV=-0.11
    {89972,3200,1024, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=6.64  BV=-0.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    113,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -2,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.38  BV=3.50
    {16683,1408,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.46  BV=3.42
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {24983,1152,1104, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.28  BV=3.02
    {24983,1280,1072, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.39  BV=2.91
    {24983,1408,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.48  BV=2.81
    {24983,1536,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.58  BV=2.71
    {33366,1152,1088, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.26  BV=2.62
    {33366,1280,1056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.37  BV=2.51
    {33366,1408,1024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.46  BV=2.42
    {33366,1408,1104, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.57  BV=2.31
    {41666,1280,1040, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=5.34  BV=2.21
    {41666,1408,1024, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=5.46  BV=2.10
    {49966,1152,1104, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.28  BV=2.02
    {49966,1280,1080, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.40  BV=1.90
    {49966,1408,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.48  BV=1.81
    {58349,1280,1056, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.37  BV=1.70
    {58349,1408,1024, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.46  BV=1.61
    {58349,1408,1096, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.56  BV=1.51
    {58349,1536,1088, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.67  BV=1.40
    {58349,1664,1064, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.76  BV=1.31
    {58349,1792,1064, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.86  BV=1.21
    {58349,1920,1064, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.96  BV=1.11
    {58349,2048,1064, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=6.06  BV=1.01
    {58349,2304,1024, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=6.17  BV=0.90
    {66649,2048,1080, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.08  BV=0.80
    {75032,2048,1024, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=6.00  BV=0.71
    {75032,2176,1024, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=6.09  BV=0.62
    {83332,2048,1056, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.04  BV=0.51
    {83332,2176,1072, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.15  BV=0.40
    {83332,2432,1024, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.25  BV=0.31
    {83332,2560,1040, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.34  BV=0.21
    {83332,2688,1056, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.44  BV=0.12
    {83332,2944,1048, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.56  BV=-0.00
    {83332,3200,1032, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.66  BV=-0.10
    {91632,3072,1056, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=6.63  BV=-0.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {20003,1280,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.32  BV=3.29
    {20003,1280,1088, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.41  BV=3.21
    {20003,1408,1056, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.50  BV=3.11
    {20003,1536,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.61  BV=3.01
    {20003,1664,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.70  BV=2.91
    {20003,1792,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.81  BV=2.81
    {29963,1280,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.32  BV=2.71
    {29963,1280,1096, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.42  BV=2.61
    {29963,1408,1064, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.51  BV=2.52
    {29963,1536,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.62  BV=2.41
    {40006,1152,1128, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.31  BV=2.31
    {40006,1280,1088, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.41  BV=2.21
    {40006,1408,1056, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.50  BV=2.11
    {49966,1152,1104, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.28  BV=2.02
    {49966,1280,1080, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.40  BV=1.90
    {49966,1408,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.48  BV=1.81
    {60009,1280,1024, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.32  BV=1.71
    {60009,1280,1096, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.42  BV=1.61
    {60009,1408,1064, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.51  BV=1.51
    {60009,1536,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.62  BV=1.41
    {60009,1664,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.71  BV=1.32
    {60009,1792,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.82  BV=1.21
    {60009,1920,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.92  BV=1.11
    {60009,2048,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.02  BV=1.01
    {60009,2176,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.12  BV=0.91
    {69969,2048,1024, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=6.00  BV=0.81
    {69969,2176,1024, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=6.09  BV=0.72
    {80012,2048,1024, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.00  BV=0.61
    {80012,2176,1032, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.10  BV=0.52
    {80012,2304,1048, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.20  BV=0.41
    {80012,2432,1064, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.30  BV=0.31
    {80012,2688,1032, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.40  BV=0.21
    {80012,2816,1064, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.51  BV=0.10
    {80012,3072,1048, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.62  BV=-0.00
    {80012,3328,1040, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.72  BV=-0.11
    {89972,3200,1024, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=6.64  BV=-0.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    113,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -2,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.37  BV=3.51
    {16683,1408,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.46  BV=3.42
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {24983,1152,1112, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.29  BV=3.00
    {24983,1280,1072, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.39  BV=2.91
    {24983,1408,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.48  BV=2.81
    {24983,1536,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.58  BV=2.71
    {33034,1152,1104, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=5.28  BV=2.61
    {33034,1280,1064, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=5.38  BV=2.51
    {33034,1408,1040, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=5.48  BV=2.41
    {33034,1536,1024, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=5.58  BV=2.31
    {41666,1280,1048, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=5.36  BV=2.20
    {41666,1280,1120, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=5.45  BV=2.10
    {49966,1152,1104, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.28  BV=2.02
    {49966,1280,1072, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.39  BV=1.91
    {49966,1408,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.48  BV=1.81
    {58349,1280,1056, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.37  BV=1.70
    {66400,1152,1096, 0, 0, 0},  //TV = 3.91(800000 lines)  AV=2.97  SV=5.27  BV=1.62
    {66400,1280,1056, 0, 0, 0},  //TV = 3.91(800000 lines)  AV=2.97  SV=5.37  BV=1.52
    {66400,1408,1032, 0, 0, 0},  //TV = 3.91(800000 lines)  AV=2.97  SV=5.47  BV=1.41
    {66400,1408,1104, 0, 0, 0},  //TV = 3.91(800000 lines)  AV=2.97  SV=5.57  BV=1.32
    {66400,1536,1088, 0, 0, 0},  //TV = 3.91(800000 lines)  AV=2.97  SV=5.67  BV=1.21
    {66400,1664,1072, 0, 0, 0},  //TV = 3.91(800000 lines)  AV=2.97  SV=5.77  BV=1.12
    {66400,1792,1072, 0, 0, 0},  //TV = 3.91(800000 lines)  AV=2.97  SV=5.87  BV=1.01
    {66400,1920,1072, 0, 0, 0},  //TV = 3.91(800000 lines)  AV=2.97  SV=5.97  BV=0.91
    {66400,2048,1080, 0, 0, 0},  //TV = 3.91(800000 lines)  AV=2.97  SV=6.08  BV=0.81
    {66400,2304,1024, 0, 0, 0},  //TV = 3.91(800000 lines)  AV=2.97  SV=6.17  BV=0.71
    {75032,2176,1024, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=6.09  BV=0.62
    {83332,2048,1056, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.04  BV=0.51
    {91632,2048,1032, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=6.01  BV=0.41
    {91632,2176,1040, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=6.11  BV=0.31
    {100015,2176,1024, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.09  BV=0.21
    {100015,2304,1032, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.18  BV=0.11
    {100015,2432,1056, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.29  BV=0.00
    {100015,2688,1024, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100015,2816,1048, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.49  BV=-0.20
    {100015,3072,1032, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.60  BV=-0.30
    {100015,3328,1024, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.70  BV=-0.41
    {100015,3456,1048, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.79  BV=-0.50
    {100015,3712,1048, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.89  BV=-0.60
    {100015,3968,1048, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.99  BV=-0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {20003,1152,1128, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.31  BV=3.31
    {20003,1280,1088, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.41  BV=3.21
    {20003,1408,1056, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.50  BV=3.11
    {20003,1536,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.61  BV=3.01
    {20003,1664,1032, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.71  BV=2.90
    {20003,1792,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.81  BV=2.81
    {29963,1280,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.32  BV=2.71
    {29963,1280,1104, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.43  BV=2.60
    {29963,1408,1064, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.51  BV=2.52
    {29963,1536,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.62  BV=2.41
    {40006,1152,1128, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.31  BV=2.31
    {40006,1280,1088, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.41  BV=2.21
    {40006,1408,1064, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.51  BV=2.10
    {49966,1152,1104, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.28  BV=2.02
    {49966,1280,1072, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.39  BV=1.91
    {49966,1408,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.48  BV=1.81
    {60009,1280,1024, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.32  BV=1.71
    {60009,1280,1096, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.42  BV=1.61
    {60009,1408,1064, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.51  BV=1.51
    {60009,1536,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.62  BV=1.41
    {60009,1664,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.71  BV=1.32
    {60009,1792,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.82  BV=1.21
    {60009,1920,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.93  BV=1.10
    {60009,2048,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.02  BV=1.01
    {60009,2176,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.12  BV=0.91
    {60009,2304,1056, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.21  BV=0.82
    {69969,2176,1024, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=6.09  BV=0.72
    {80012,2048,1024, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.00  BV=0.61
    {80012,2176,1032, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.10  BV=0.52
    {89972,2048,1048, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=6.03  BV=0.41
    {89972,2176,1064, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=6.14  BV=0.30
    {100015,2176,1024, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.09  BV=0.21
    {100015,2304,1032, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.18  BV=0.11
    {100015,2432,1056, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.29  BV=0.00
    {100015,2688,1024, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100015,2816,1048, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.49  BV=-0.20
    {100015,3072,1032, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.60  BV=-0.30
    {100015,3328,1024, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.70  BV=-0.41
    {100015,3456,1048, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.79  BV=-0.50
    {100015,3712,1048, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.89  BV=-0.60
    {100015,3968,1048, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.99  BV=-0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    118,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -7,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1408,1104, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.57  BV=4.32
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.77  BV=4.12
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {8300,2432,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.27  BV=3.61
    {8300,2560,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.37  BV=3.52
    {8300,2816,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.47  BV=3.41
    {8300,2944,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.57  BV=3.32
    {8300,3200,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.67  BV=3.22
    {8300,3456,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.77  BV=3.12
    {8300,3712,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.88  BV=3.00
    {8300,3968,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.98  BV=2.91
    {8300,4096,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.08  BV=2.81
    {8300,4096,1152, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.17  BV=2.71
    {8300,4096,1232, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.27  BV=2.62
    {8300,4096,1336, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.38  BV=2.50
    {8300,4096,1424, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.48  BV=2.41
    {8300,4096,1528, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.58  BV=2.31
    {8300,4096,1640, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.68  BV=2.20
    {8300,4096,1752, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.77  BV=2.11
    {8300,4096,1880, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.88  BV=2.01
    {8300,4096,2016, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.98  BV=1.91
    {8300,4096,2160, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.08  BV=1.81
    {8300,4096,2312, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.17  BV=1.71
    {8300,4096,2472, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.27  BV=1.61
    {8300,4096,2656, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.38  BV=1.51
    {8300,4096,2840, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.47  BV=1.41
    {8300,4096,3048, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.57  BV=1.31
    {8300,4096,3288, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.68  BV=1.20
    {8300,4096,3520, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.78  BV=1.10
    {8300,4096,3768, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.88  BV=1.00
    {8300,4096,4040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.98  BV=0.90
    {8300,4096,4328, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.08  BV=0.80
    {8300,4096,4640, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.18  BV=0.70
    {8300,4096,4968, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.28  BV=0.61
    {8300,4096,5328, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.38  BV=0.50
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1408,1104, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.57  BV=4.32
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.77  BV=4.12
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {8300,2432,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.27  BV=3.61
    {8300,2560,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.37  BV=3.52
    {8300,2816,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.47  BV=3.41
    {8300,2944,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.57  BV=3.32
    {8300,3200,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.67  BV=3.22
    {8300,3456,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.77  BV=3.12
    {8300,3712,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.88  BV=3.00
    {8300,3968,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.98  BV=2.91
    {8300,4096,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.08  BV=2.81
    {8300,4096,1152, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.17  BV=2.71
    {8300,4096,1232, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.27  BV=2.62
    {8300,4096,1336, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.38  BV=2.50
    {8300,4096,1424, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.48  BV=2.41
    {8300,4096,1528, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.58  BV=2.31
    {8300,4096,1640, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.68  BV=2.20
    {8300,4096,1752, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.77  BV=2.11
    {8300,4096,1880, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.88  BV=2.01
    {8300,4096,2016, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.98  BV=1.91
    {8300,4096,2160, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.08  BV=1.81
    {8300,4096,2312, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.17  BV=1.71
    {8300,4096,2472, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.27  BV=1.61
    {8300,4096,2656, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.38  BV=1.51
    {8300,4096,2840, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.47  BV=1.41
    {8300,4096,3048, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.57  BV=1.31
    {8300,4096,3288, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.68  BV=1.20
    {8300,4096,3520, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.78  BV=1.10
    {8300,4096,3768, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.88  BV=1.00
    {8300,4096,4040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.98  BV=0.90
    {8300,4096,4328, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.08  BV=0.80
    {8300,4096,4640, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.18  BV=0.70
    {8300,4096,4968, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.28  BV=0.61
    {8300,4096,5328, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.38  BV=0.50
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    106,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    5,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.37  BV=3.51
    {16683,1408,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.47  BV=3.41
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {16683,1792,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.86  BV=3.01
    {16683,1920,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.96  BV=2.91
    {16683,2048,1080, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.08  BV=2.80
    {16683,2304,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.17  BV=2.71
    {16683,2432,1040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.27  BV=2.61
    {16683,2560,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.37  BV=2.51
    {16683,2816,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.47  BV=2.41
    {16683,2944,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.57  BV=2.31
    {16683,3200,1040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.67  BV=2.21
    {16683,3456,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.77  BV=2.11
    {16683,3712,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.87  BV=2.01
    {16683,3968,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.97  BV=1.91
    {16683,4096,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.07  BV=1.81
    {24983,3072,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.58  BV=1.71
    {24983,3200,1056, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.69  BV=1.61
    {24983,3456,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.78  BV=1.52
    {24983,3712,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.88  BV=1.41
    {24983,3968,1048, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.99  BV=1.31
    {33034,3200,1048, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.68  BV=1.21
    {33034,3456,1040, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.78  BV=1.11
    {33034,3712,1040, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.88  BV=1.01
    {33034,3968,1048, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.99  BV=0.90
    {33034,4096,1088, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.09  BV=0.80
    {33034,4096,1160, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.18  BV=0.71
    {33034,4096,1248, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.29  BV=0.61
    {33034,4096,1336, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.38  BV=0.51
    {33034,4096,1424, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.48  BV=0.42
    {33034,4096,1528, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.58  BV=0.31
    {33034,4096,1648, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.69  BV=0.20
    {33034,4096,1768, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.79  BV=0.10
    {33034,4096,1904, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.89  BV=-0.00
    {33034,4096,2040, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.99  BV=-0.10
    {33034,4096,2184, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=8.09  BV=-0.20
    {33034,4096,2344, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=8.19  BV=-0.30
    {33034,4096,2512, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=8.29  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {9960,2432,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.30  BV=3.32
    {9960,2688,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.41  BV=3.21
    {9960,2816,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.50  BV=3.12
    {9960,3072,1048, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.62  BV=3.00
    {9960,3328,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.71  BV=2.91
    {9960,3584,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.81  BV=2.81
    {9960,3840,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.91  BV=2.71
    {9960,4096,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.01  BV=2.61
    {9960,4096,1104, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.11  BV=2.51
    {9960,4096,1192, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.22  BV=2.40
    {9960,4096,1272, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.31  BV=2.31
    {9960,4096,1368, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.42  BV=2.20
    {9960,4096,1464, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.52  BV=2.10
    {20003,3072,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.61  BV=2.01
    {20003,3328,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.70  BV=1.91
    {20003,3584,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.81  BV=1.81
    {20003,3840,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.91  BV=1.71
    {20003,4096,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.00  BV=1.61
    {20003,4096,1104, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.11  BV=1.51
    {29963,3072,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.62  BV=1.41
    {29963,3328,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.72  BV=1.31
    {29963,3584,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.82  BV=1.21
    {29963,3840,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.92  BV=1.11
    {29963,4096,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.02  BV=1.01
    {29963,4096,1112, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.12  BV=0.91
    {29963,4096,1200, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.23  BV=0.80
    {29963,4096,1280, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.32  BV=0.71
    {29963,4096,1376, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.43  BV=0.61
    {29963,4096,1472, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.52  BV=0.51
    {29963,4096,1576, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.62  BV=0.41
    {29963,4096,1688, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.72  BV=0.31
    {29963,4096,1816, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.83  BV=0.20
    {29963,4096,1944, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.92  BV=0.11
    {29963,4096,2104, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.04  BV=-0.01
    {29963,4096,2248, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29963,4096,2408, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.23  BV=-0.20
    {29963,4096,2584, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.34  BV=-0.30
    {29963,4096,2768, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.43  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    115,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -4,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.37  BV=3.51
    {16683,1408,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.47  BV=3.41
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {16683,1792,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.86  BV=3.01
    {16683,1920,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.96  BV=2.91
    {16683,2048,1080, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.08  BV=2.80
    {16683,2304,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.17  BV=2.71
    {16683,2432,1040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.27  BV=2.61
    {16683,2560,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.37  BV=2.51
    {16683,2816,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.47  BV=2.41
    {16683,2944,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.57  BV=2.31
    {16683,3200,1040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.67  BV=2.21
    {16683,3456,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.77  BV=2.11
    {16683,3712,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.87  BV=2.01
    {16683,3968,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.97  BV=1.91
    {16683,4096,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.07  BV=1.81
    {24983,3072,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.58  BV=1.71
    {24983,3200,1056, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.69  BV=1.61
    {24983,3456,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.78  BV=1.52
    {24983,3712,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.88  BV=1.41
    {24983,3968,1048, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.99  BV=1.31
    {33366,3200,1040, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.67  BV=1.21
    {33366,3456,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.77  BV=1.11
    {33366,3712,1024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.86  BV=1.02
    {33366,3968,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.97  BV=0.91
    {33366,4096,1072, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.07  BV=0.81
    {33366,4096,1152, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.17  BV=0.71
    {33366,4096,1232, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.27  BV=0.61
    {33366,4096,1320, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.37  BV=0.51
    {33366,4096,1416, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.47  BV=0.41
    {33366,4096,1528, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.58  BV=0.30
    {33366,4096,1632, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.67  BV=0.20
    {33366,4096,1752, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.77  BV=0.10
    {33366,4096,1888, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.88  BV=-0.01
    {33366,4096,2024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33366,4096,2168, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.08  BV=-0.21
    {33366,4096,2320, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33366,4096,2480, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.28  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {9960,2432,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.30  BV=3.32
    {9960,2688,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.41  BV=3.21
    {9960,2816,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.50  BV=3.12
    {9960,3072,1048, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.62  BV=3.00
    {9960,3328,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.71  BV=2.91
    {9960,3584,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.81  BV=2.81
    {9960,3840,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.91  BV=2.71
    {9960,4096,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.01  BV=2.61
    {9960,4096,1104, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.11  BV=2.51
    {9960,4096,1192, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.22  BV=2.40
    {9960,4096,1272, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.31  BV=2.31
    {9960,4096,1368, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.42  BV=2.20
    {9960,4096,1464, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.52  BV=2.10
    {20003,3072,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.61  BV=2.01
    {20003,3328,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.70  BV=1.91
    {20003,3584,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.81  BV=1.81
    {20003,3840,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.91  BV=1.71
    {20003,4096,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.00  BV=1.61
    {20003,4096,1104, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.11  BV=1.51
    {29963,3072,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.62  BV=1.41
    {29963,3328,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.72  BV=1.31
    {29963,3584,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.82  BV=1.21
    {29963,3840,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.92  BV=1.11
    {29963,4096,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.02  BV=1.01
    {29963,4096,1112, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.12  BV=0.91
    {29963,4096,1200, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.23  BV=0.80
    {29963,4096,1280, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.32  BV=0.71
    {29963,4096,1376, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.43  BV=0.61
    {29963,4096,1472, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.52  BV=0.51
    {29963,4096,1576, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.62  BV=0.41
    {29963,4096,1688, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.72  BV=0.31
    {29963,4096,1816, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.83  BV=0.20
    {29963,4096,1944, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.92  BV=0.11
    {29963,4096,2104, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.04  BV=-0.01
    {29963,4096,2248, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29963,4096,2408, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.23  BV=-0.20
    {29963,4096,2584, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.34  BV=-0.30
    {29963,4096,2768, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.43  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    115,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -4,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.37  BV=3.51
    {16683,1408,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.47  BV=3.41
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {16683,1792,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.86  BV=3.01
    {16683,1920,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.96  BV=2.91
    {16683,2048,1080, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.08  BV=2.80
    {16683,2304,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.17  BV=2.71
    {16683,2432,1040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.27  BV=2.61
    {16683,2560,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.37  BV=2.51
    {16683,2816,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.47  BV=2.41
    {16683,2944,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.57  BV=2.31
    {16683,3200,1040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.67  BV=2.21
    {16683,3456,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.77  BV=2.11
    {16683,3712,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.87  BV=2.01
    {16683,3968,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.97  BV=1.91
    {16683,4096,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.07  BV=1.81
    {24983,3072,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.58  BV=1.71
    {24983,3200,1056, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.69  BV=1.61
    {24983,3456,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.78  BV=1.52
    {24983,3712,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.88  BV=1.41
    {24983,3968,1048, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.99  BV=1.31
    {33366,3200,1040, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.67  BV=1.21
    {33366,3456,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.77  BV=1.11
    {33366,3712,1024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.86  BV=1.02
    {33366,3968,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.97  BV=0.91
    {33366,4096,1072, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.07  BV=0.81
    {33366,4096,1152, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.17  BV=0.71
    {33366,4096,1232, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.27  BV=0.61
    {33366,4096,1320, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.37  BV=0.51
    {33366,4096,1416, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.47  BV=0.41
    {33366,4096,1528, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.58  BV=0.30
    {33366,4096,1632, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.67  BV=0.20
    {33366,4096,1752, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.77  BV=0.10
    {33366,4096,1888, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.88  BV=-0.01
    {33366,4096,2024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33366,4096,2168, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.08  BV=-0.21
    {33366,4096,2320, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33366,4096,2480, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.28  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {9960,2432,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.30  BV=3.32
    {9960,2688,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.41  BV=3.21
    {9960,2816,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.50  BV=3.12
    {9960,3072,1048, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.62  BV=3.00
    {9960,3328,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.71  BV=2.91
    {9960,3584,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.81  BV=2.81
    {9960,3840,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.91  BV=2.71
    {9960,4096,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.01  BV=2.61
    {9960,4096,1104, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.11  BV=2.51
    {9960,4096,1192, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.22  BV=2.40
    {9960,4096,1272, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.31  BV=2.31
    {9960,4096,1368, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.42  BV=2.20
    {9960,4096,1464, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.52  BV=2.10
    {20003,3072,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.61  BV=2.01
    {20003,3328,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.70  BV=1.91
    {20003,3584,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.81  BV=1.81
    {20003,3840,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.91  BV=1.71
    {20003,4096,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.00  BV=1.61
    {20003,4096,1104, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.11  BV=1.51
    {29963,3072,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.62  BV=1.41
    {29963,3328,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.72  BV=1.31
    {29963,3584,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.82  BV=1.21
    {29963,3840,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.92  BV=1.11
    {29963,4096,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.02  BV=1.01
    {29963,4096,1112, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.12  BV=0.91
    {29963,4096,1200, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.23  BV=0.80
    {29963,4096,1280, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.32  BV=0.71
    {29963,4096,1376, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.43  BV=0.61
    {29963,4096,1472, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.52  BV=0.51
    {29963,4096,1576, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.62  BV=0.41
    {29963,4096,1688, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.72  BV=0.31
    {29963,4096,1816, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.83  BV=0.20
    {29963,4096,1944, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.92  BV=0.11
    {29963,4096,2104, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.04  BV=-0.01
    {29963,4096,2248, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29963,4096,2408, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.23  BV=-0.20
    {29963,4096,2584, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.34  BV=-0.30
    {29963,4096,2768, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.43  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    115,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -4,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.37  BV=3.51
    {16683,1408,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.47  BV=3.41
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {16683,1792,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.86  BV=3.01
    {16683,1920,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.96  BV=2.91
    {16683,2048,1080, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.08  BV=2.80
    {16683,2304,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.17  BV=2.71
    {16683,2432,1040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.27  BV=2.61
    {16683,2560,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.37  BV=2.51
    {16683,2816,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.47  BV=2.41
    {16683,2944,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.57  BV=2.31
    {16683,3200,1040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.67  BV=2.21
    {16683,3456,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.77  BV=2.11
    {16683,3712,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.87  BV=2.01
    {16683,3968,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.97  BV=1.91
    {16683,4096,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.07  BV=1.81
    {24983,3072,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.58  BV=1.71
    {24983,3200,1056, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.69  BV=1.61
    {24983,3456,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.78  BV=1.52
    {24983,3712,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.88  BV=1.41
    {24983,3968,1048, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.99  BV=1.31
    {33366,3200,1040, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.67  BV=1.21
    {33366,3456,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.77  BV=1.11
    {33366,3712,1024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.86  BV=1.02
    {33366,3968,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.97  BV=0.91
    {33366,4096,1072, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.07  BV=0.81
    {33366,4096,1152, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.17  BV=0.71
    {33366,4096,1232, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.27  BV=0.61
    {33366,4096,1320, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.37  BV=0.51
    {33366,4096,1416, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.47  BV=0.41
    {33366,4096,1528, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.58  BV=0.30
    {33366,4096,1632, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.67  BV=0.20
    {33366,4096,1752, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.77  BV=0.10
    {33366,4096,1888, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.88  BV=-0.01
    {33366,4096,2024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33366,4096,2168, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.08  BV=-0.21
    {33366,4096,2320, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33366,4096,2480, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.28  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {9960,2432,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.30  BV=3.32
    {9960,2688,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.41  BV=3.21
    {9960,2816,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.50  BV=3.12
    {9960,3072,1048, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.62  BV=3.00
    {9960,3328,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.71  BV=2.91
    {9960,3584,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.81  BV=2.81
    {9960,3840,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.91  BV=2.71
    {9960,4096,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.01  BV=2.61
    {9960,4096,1104, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.11  BV=2.51
    {9960,4096,1192, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.22  BV=2.40
    {9960,4096,1272, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.31  BV=2.31
    {9960,4096,1368, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.42  BV=2.20
    {9960,4096,1464, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.52  BV=2.10
    {20003,3072,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.61  BV=2.01
    {20003,3328,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.70  BV=1.91
    {20003,3584,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.81  BV=1.81
    {20003,3840,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.91  BV=1.71
    {20003,4096,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.00  BV=1.61
    {20003,4096,1104, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.11  BV=1.51
    {29963,3072,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.62  BV=1.41
    {29963,3328,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.72  BV=1.31
    {29963,3584,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.82  BV=1.21
    {29963,3840,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.92  BV=1.11
    {29963,4096,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.02  BV=1.01
    {29963,4096,1112, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.12  BV=0.91
    {29963,4096,1200, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.23  BV=0.80
    {29963,4096,1280, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.32  BV=0.71
    {29963,4096,1376, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.43  BV=0.61
    {29963,4096,1472, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.52  BV=0.51
    {29963,4096,1576, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.62  BV=0.41
    {29963,4096,1688, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.72  BV=0.31
    {29963,4096,1816, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.83  BV=0.20
    {29963,4096,1944, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.92  BV=0.11
    {29963,4096,2104, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.04  BV=-0.01
    {29963,4096,2248, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29963,4096,2408, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.23  BV=-0.20
    {29963,4096,2584, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.34  BV=-0.30
    {29963,4096,2768, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.43  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    115,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -4,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.37  BV=3.51
    {16683,1408,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.47  BV=3.41
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {16683,1792,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.86  BV=3.01
    {16683,1920,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.96  BV=2.91
    {16683,2048,1080, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.08  BV=2.80
    {16683,2304,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.17  BV=2.71
    {16683,2432,1040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.27  BV=2.61
    {16683,2560,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.37  BV=2.51
    {16683,2816,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.47  BV=2.41
    {16683,2944,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.57  BV=2.31
    {16683,3200,1040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.67  BV=2.21
    {16683,3456,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.77  BV=2.11
    {16683,3712,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.87  BV=2.01
    {16683,3968,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.97  BV=1.91
    {16683,4096,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.07  BV=1.81
    {24983,3072,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.58  BV=1.71
    {24983,3200,1056, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.69  BV=1.61
    {24983,3456,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.78  BV=1.52
    {24983,3712,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.88  BV=1.41
    {24983,3968,1048, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.99  BV=1.31
    {33366,3200,1040, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.67  BV=1.21
    {33366,3456,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.77  BV=1.11
    {33366,3712,1024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.86  BV=1.02
    {33366,3968,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.97  BV=0.91
    {33366,4096,1072, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.07  BV=0.81
    {33366,4096,1152, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.17  BV=0.71
    {33366,4096,1232, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.27  BV=0.61
    {33366,4096,1320, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.37  BV=0.51
    {33366,4096,1416, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.47  BV=0.41
    {33366,4096,1528, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.58  BV=0.30
    {33366,4096,1632, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.67  BV=0.20
    {33366,4096,1752, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.77  BV=0.10
    {33366,4096,1888, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.88  BV=-0.01
    {33366,4096,2024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33366,4096,2168, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.08  BV=-0.21
    {33366,4096,2320, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33366,4096,2480, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.28  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {9960,2432,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.30  BV=3.32
    {9960,2688,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.41  BV=3.21
    {9960,2816,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.50  BV=3.12
    {9960,3072,1048, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.62  BV=3.00
    {9960,3328,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.71  BV=2.91
    {9960,3584,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.81  BV=2.81
    {9960,3840,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.91  BV=2.71
    {9960,4096,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.01  BV=2.61
    {9960,4096,1104, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.11  BV=2.51
    {9960,4096,1192, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.22  BV=2.40
    {9960,4096,1272, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.31  BV=2.31
    {9960,4096,1368, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.42  BV=2.20
    {9960,4096,1464, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.52  BV=2.10
    {20003,3072,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.61  BV=2.01
    {20003,3328,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.70  BV=1.91
    {20003,3584,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.81  BV=1.81
    {20003,3840,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.91  BV=1.71
    {20003,4096,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.00  BV=1.61
    {20003,4096,1104, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.11  BV=1.51
    {29963,3072,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.62  BV=1.41
    {29963,3328,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.72  BV=1.31
    {29963,3584,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.82  BV=1.21
    {29963,3840,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.92  BV=1.11
    {29963,4096,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.02  BV=1.01
    {29963,4096,1112, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.12  BV=0.91
    {29963,4096,1200, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.23  BV=0.80
    {29963,4096,1280, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.32  BV=0.71
    {29963,4096,1376, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.43  BV=0.61
    {29963,4096,1472, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.52  BV=0.51
    {29963,4096,1576, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.62  BV=0.41
    {29963,4096,1688, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.72  BV=0.31
    {29963,4096,1816, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.83  BV=0.20
    {29963,4096,1944, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.92  BV=0.11
    {29963,4096,2104, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.04  BV=-0.01
    {29963,4096,2248, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29963,4096,2408, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.23  BV=-0.20
    {29963,4096,2584, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.34  BV=-0.30
    {29963,4096,2768, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.43  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    115,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -4,    //i4MinBV
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
    {80,1536,1024, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=5.58  BV=11.00
    {80,1536,1088, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=5.67  BV=10.91
    {80,1664,1088, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=5.79  BV=10.79
    {80,1792,1080, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=5.88  BV=10.70
    {80,1920,1072, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=5.97  BV=10.61
    {80,2176,1032, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=6.10  BV=10.48
    {80,2304,1048, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=6.20  BV=10.38
    {160,1280,1024, 0, 0, 0},  //TV = 12.61(2000 lines)  AV=2.97  SV=5.32  BV=10.26
    {160,1280,1056, 0, 0, 0},  //TV = 12.61(2000 lines)  AV=2.97  SV=5.37  BV=10.21
    {160,1408,1040, 0, 0, 0},  //TV = 12.61(2000 lines)  AV=2.97  SV=5.48  BV=10.10
    {160,1536,1024, 0, 0, 0},  //TV = 12.61(2000 lines)  AV=2.97  SV=5.58  BV=10.00
    {160,1536,1088, 0, 0, 0},  //TV = 12.61(2000 lines)  AV=2.97  SV=5.67  BV=9.91
    {160,1664,1072, 0, 0, 0},  //TV = 12.61(2000 lines)  AV=2.97  SV=5.77  BV=9.81
    {240,1152,1112, 0, 0, 0},  //TV = 12.02(3000 lines)  AV=2.97  SV=5.29  BV=9.71
    {240,1280,1072, 0, 0, 0},  //TV = 12.02(3000 lines)  AV=2.97  SV=5.39  BV=9.61
    {240,1408,1040, 0, 0, 0},  //TV = 12.02(3000 lines)  AV=2.97  SV=5.48  BV=9.51
    {240,1536,1024, 0, 0, 0},  //TV = 12.02(3000 lines)  AV=2.97  SV=5.58  BV=9.41
    {320,1152,1096, 0, 0, 0},  //TV = 11.61(4000 lines)  AV=2.97  SV=5.27  BV=9.31
    {320,1280,1056, 0, 0, 0},  //TV = 11.61(4000 lines)  AV=2.97  SV=5.37  BV=9.21
    {320,1408,1032, 0, 0, 0},  //TV = 11.61(4000 lines)  AV=2.97  SV=5.47  BV=9.11
    {320,1408,1104, 0, 0, 0},  //TV = 11.61(4000 lines)  AV=2.97  SV=5.57  BV=9.01
    {400,1280,1040, 0, 0, 0},  //TV = 11.29(5000 lines)  AV=2.97  SV=5.34  BV=8.91
    {400,1408,1024, 0, 0, 0},  //TV = 11.29(5000 lines)  AV=2.97  SV=5.46  BV=8.80
    {480,1152,1112, 0, 0, 0},  //TV = 11.02(6000 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1280,1072, 0, 0, 0},  //TV = 11.02(6000 lines)  AV=2.97  SV=5.39  BV=8.61
    {560,1152,1088, 0, 0, 0},  //TV = 10.80(7000 lines)  AV=2.97  SV=5.26  BV=8.52
    {560,1280,1056, 0, 0, 0},  //TV = 10.80(7000 lines)  AV=2.97  SV=5.37  BV=8.41
    {640,1152,1096, 0, 0, 0},  //TV = 10.61(8000 lines)  AV=2.97  SV=5.27  BV=8.31
    {640,1280,1056, 0, 0, 0},  //TV = 10.61(8000 lines)  AV=2.97  SV=5.37  BV=8.21
    {720,1152,1120, 0, 0, 0},  //TV = 10.44(9000 lines)  AV=2.97  SV=5.30  BV=8.11
    {720,1280,1080, 0, 0, 0},  //TV = 10.44(9000 lines)  AV=2.97  SV=5.40  BV=8.01
    {800,1280,1040, 0, 0, 0},  //TV = 10.29(10000 lines)  AV=2.97  SV=5.34  BV=7.91
    {880,1152,1128, 0, 0, 0},  //TV = 10.15(11000 lines)  AV=2.97  SV=5.31  BV=7.81
    {960,1152,1112, 0, 0, 0},  //TV = 10.02(12000 lines)  AV=2.97  SV=5.29  BV=7.71
    {1040,1152,1096, 0, 0, 0},  //TV = 9.91(13000 lines)  AV=2.97  SV=5.27  BV=7.61
    {1120,1152,1088, 0, 0, 0},  //TV = 9.80(14000 lines)  AV=2.97  SV=5.26  BV=7.52
    {1200,1152,1096, 0, 0, 0},  //TV = 9.70(15000 lines)  AV=2.97  SV=5.27  BV=7.41
    {1280,1152,1096, 0, 0, 0},  //TV = 9.61(16000 lines)  AV=2.97  SV=5.27  BV=7.31
    {1360,1152,1104, 0, 0, 0},  //TV = 9.52(17000 lines)  AV=2.97  SV=5.28  BV=7.21
    {1440,1152,1120, 0, 0, 0},  //TV = 9.44(18000 lines)  AV=2.97  SV=5.30  BV=7.11
    {1520,1280,1032, 0, 0, 0},  //TV = 9.36(19000 lines)  AV=2.97  SV=5.33  BV=7.00
    {1680,1152,1104, 0, 0, 0},  //TV = 9.22(21000 lines)  AV=2.97  SV=5.28  BV=6.91
    {1760,1280,1024, 0, 0, 0},  //TV = 9.15(22000 lines)  AV=2.97  SV=5.32  BV=6.80
    {1920,1152,1112, 0, 0, 0},  //TV = 9.02(24000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2080,1152,1096, 0, 0, 0},  //TV = 8.91(26000 lines)  AV=2.97  SV=5.27  BV=6.61
    {2240,1152,1088, 0, 0, 0},  //TV = 8.80(28000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2320,1152,1128, 0, 0, 0},  //TV = 8.75(29000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2560,1152,1096, 0, 0, 0},  //TV = 8.61(32000 lines)  AV=2.97  SV=5.27  BV=6.31
    {2720,1152,1104, 0, 0, 0},  //TV = 8.52(34000 lines)  AV=2.97  SV=5.28  BV=6.21
    {2880,1152,1120, 0, 0, 0},  //TV = 8.44(36000 lines)  AV=2.97  SV=5.30  BV=6.11
    {3120,1152,1104, 0, 0, 0},  //TV = 8.32(39000 lines)  AV=2.97  SV=5.28  BV=6.02
    {3360,1152,1104, 0, 0, 0},  //TV = 8.22(42000 lines)  AV=2.97  SV=5.28  BV=5.91
    {3600,1152,1104, 0, 0, 0},  //TV = 8.12(45000 lines)  AV=2.97  SV=5.28  BV=5.81
    {3840,1152,1112, 0, 0, 0},  //TV = 8.02(48000 lines)  AV=2.97  SV=5.29  BV=5.71
    {4160,1152,1096, 0, 0, 0},  //TV = 7.91(52000 lines)  AV=2.97  SV=5.27  BV=5.61
    {4400,1152,1112, 0, 0, 0},  //TV = 7.83(55000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4800,1152,1096, 0, 0, 0},  //TV = 7.70(60000 lines)  AV=2.97  SV=5.27  BV=5.41
    {5120,1152,1096, 0, 0, 0},  //TV = 7.61(64000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5520,1152,1088, 0, 0, 0},  //TV = 7.50(69000 lines)  AV=2.97  SV=5.26  BV=5.21
    {5920,1152,1088, 0, 0, 0},  //TV = 7.40(74000 lines)  AV=2.97  SV=5.26  BV=5.11
    {6320,1152,1096, 0, 0, 0},  //TV = 7.31(79000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6720,1152,1104, 0, 0, 0},  //TV = 7.22(84000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7200,1152,1104, 0, 0, 0},  //TV = 7.12(90000 lines)  AV=2.97  SV=5.28  BV=4.81
    {7760,1152,1096, 0, 0, 0},  //TV = 7.01(97000 lines)  AV=2.97  SV=5.27  BV=4.71
    {8320,1152,1096, 0, 0, 0},  //TV = 6.91(104000 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1280,1064, 0, 0, 0},  //TV = 6.91(104000 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1408,1032, 0, 0, 0},  //TV = 6.91(104000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8320,1408,1104, 0, 0, 0},  //TV = 6.91(104000 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,1536,1088, 0, 0, 0},  //TV = 6.91(104000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8320,1664,1072, 0, 0, 0},  //TV = 6.91(104000 lines)  AV=2.97  SV=5.77  BV=4.11
    {8320,1792,1072, 0, 0, 0},  //TV = 6.91(104000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8320,1920,1072, 0, 0, 0},  //TV = 6.91(104000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8320,2048,1080, 0, 0, 0},  //TV = 6.91(104000 lines)  AV=2.97  SV=6.08  BV=3.80
    {8320,2304,1024, 0, 0, 0},  //TV = 6.91(104000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16640,1152,1096, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=5.27  BV=3.61
    {16640,1280,1056, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=5.37  BV=3.51
    {16640,1408,1032, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=5.47  BV=3.41
    {16640,1536,1024, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=5.58  BV=3.30
    {16640,1536,1088, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=5.67  BV=3.21
    {16640,1664,1080, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=5.78  BV=3.10
    {16640,1792,1072, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=5.87  BV=3.01
    {16640,1920,1064, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=5.96  BV=2.92
    {16640,2048,1072, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=6.07  BV=2.81
    {16640,2304,1024, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=6.17  BV=2.71
    {16640,2432,1040, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=6.27  BV=2.61
    {16640,2560,1056, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=6.37  BV=2.51
    {16640,2816,1032, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=6.47  BV=2.41
    {16640,2944,1056, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=6.57  BV=2.31
    {16640,3200,1040, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=6.67  BV=2.21
    {16640,3456,1032, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=6.77  BV=2.11
    {16640,3712,1032, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=6.87  BV=2.01
    {16640,3968,1032, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=6.97  BV=1.91
    {16640,4096,1072, 0, 0, 0},  //TV = 5.91(208000 lines)  AV=2.97  SV=7.07  BV=1.81
    {24960,3072,1024, 0, 0, 0},  //TV = 5.32(312000 lines)  AV=2.97  SV=6.58  BV=1.71
    {24960,3200,1056, 0, 0, 0},  //TV = 5.32(312000 lines)  AV=2.97  SV=6.69  BV=1.61
    {24960,3456,1040, 0, 0, 0},  //TV = 5.32(312000 lines)  AV=2.97  SV=6.78  BV=1.52
    {24960,3712,1040, 0, 0, 0},  //TV = 5.32(312000 lines)  AV=2.97  SV=6.88  BV=1.41
    {24960,3968,1048, 0, 0, 0},  //TV = 5.32(312000 lines)  AV=2.97  SV=6.99  BV=1.31
    {33360,3200,1040, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=6.67  BV=1.21
    {33360,3456,1032, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=6.77  BV=1.11
    {33360,3712,1024, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=6.86  BV=1.02
    {33360,3968,1032, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=6.97  BV=0.91
    {33360,4096,1072, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=7.07  BV=0.81
    {33360,4096,1152, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=7.17  BV=0.71
    {33360,4096,1232, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=7.27  BV=0.61
    {33360,4096,1320, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=7.37  BV=0.51
    {33360,4096,1416, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=7.47  BV=0.41
    {33360,4096,1512, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=7.56  BV=0.31
    {33360,4096,1632, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=7.67  BV=0.20
    {33360,4096,1752, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=7.77  BV=0.10
    {33360,4096,1888, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=7.88  BV=-0.01
    {33360,4096,2024, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33360,4096,2168, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=8.08  BV=-0.21
    {33360,4096,2320, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33360,4096,2488, 0, 0, 0},  //TV = 4.91(417000 lines)  AV=2.97  SV=8.28  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {80,1536,1024, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=5.58  BV=11.00
    {80,1536,1088, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=5.67  BV=10.91
    {80,1664,1088, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=5.79  BV=10.79
    {80,1792,1080, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=5.88  BV=10.70
    {80,1920,1072, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=5.97  BV=10.61
    {80,2176,1032, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=6.10  BV=10.48
    {80,2304,1048, 0, 0, 0},  //TV = 13.61(1000 lines)  AV=2.97  SV=6.20  BV=10.38
    {160,1280,1024, 0, 0, 0},  //TV = 12.61(2000 lines)  AV=2.97  SV=5.32  BV=10.26
    {160,1280,1056, 0, 0, 0},  //TV = 12.61(2000 lines)  AV=2.97  SV=5.37  BV=10.21
    {160,1408,1040, 0, 0, 0},  //TV = 12.61(2000 lines)  AV=2.97  SV=5.48  BV=10.10
    {160,1536,1024, 0, 0, 0},  //TV = 12.61(2000 lines)  AV=2.97  SV=5.58  BV=10.00
    {160,1536,1088, 0, 0, 0},  //TV = 12.61(2000 lines)  AV=2.97  SV=5.67  BV=9.91
    {160,1664,1072, 0, 0, 0},  //TV = 12.61(2000 lines)  AV=2.97  SV=5.77  BV=9.81
    {240,1152,1112, 0, 0, 0},  //TV = 12.02(3000 lines)  AV=2.97  SV=5.29  BV=9.71
    {240,1280,1072, 0, 0, 0},  //TV = 12.02(3000 lines)  AV=2.97  SV=5.39  BV=9.61
    {240,1408,1040, 0, 0, 0},  //TV = 12.02(3000 lines)  AV=2.97  SV=5.48  BV=9.51
    {240,1536,1024, 0, 0, 0},  //TV = 12.02(3000 lines)  AV=2.97  SV=5.58  BV=9.41
    {320,1152,1096, 0, 0, 0},  //TV = 11.61(4000 lines)  AV=2.97  SV=5.27  BV=9.31
    {320,1280,1056, 0, 0, 0},  //TV = 11.61(4000 lines)  AV=2.97  SV=5.37  BV=9.21
    {320,1408,1032, 0, 0, 0},  //TV = 11.61(4000 lines)  AV=2.97  SV=5.47  BV=9.11
    {320,1408,1104, 0, 0, 0},  //TV = 11.61(4000 lines)  AV=2.97  SV=5.57  BV=9.01
    {400,1280,1040, 0, 0, 0},  //TV = 11.29(5000 lines)  AV=2.97  SV=5.34  BV=8.91
    {400,1408,1024, 0, 0, 0},  //TV = 11.29(5000 lines)  AV=2.97  SV=5.46  BV=8.80
    {480,1152,1112, 0, 0, 0},  //TV = 11.02(6000 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1280,1072, 0, 0, 0},  //TV = 11.02(6000 lines)  AV=2.97  SV=5.39  BV=8.61
    {560,1152,1088, 0, 0, 0},  //TV = 10.80(7000 lines)  AV=2.97  SV=5.26  BV=8.52
    {560,1280,1056, 0, 0, 0},  //TV = 10.80(7000 lines)  AV=2.97  SV=5.37  BV=8.41
    {640,1152,1096, 0, 0, 0},  //TV = 10.61(8000 lines)  AV=2.97  SV=5.27  BV=8.31
    {640,1280,1056, 0, 0, 0},  //TV = 10.61(8000 lines)  AV=2.97  SV=5.37  BV=8.21
    {720,1152,1120, 0, 0, 0},  //TV = 10.44(9000 lines)  AV=2.97  SV=5.30  BV=8.11
    {720,1280,1080, 0, 0, 0},  //TV = 10.44(9000 lines)  AV=2.97  SV=5.40  BV=8.01
    {800,1280,1040, 0, 0, 0},  //TV = 10.29(10000 lines)  AV=2.97  SV=5.34  BV=7.91
    {880,1152,1128, 0, 0, 0},  //TV = 10.15(11000 lines)  AV=2.97  SV=5.31  BV=7.81
    {960,1152,1112, 0, 0, 0},  //TV = 10.02(12000 lines)  AV=2.97  SV=5.29  BV=7.71
    {1040,1152,1096, 0, 0, 0},  //TV = 9.91(13000 lines)  AV=2.97  SV=5.27  BV=7.61
    {1120,1152,1088, 0, 0, 0},  //TV = 9.80(14000 lines)  AV=2.97  SV=5.26  BV=7.52
    {1200,1152,1096, 0, 0, 0},  //TV = 9.70(15000 lines)  AV=2.97  SV=5.27  BV=7.41
    {1280,1152,1096, 0, 0, 0},  //TV = 9.61(16000 lines)  AV=2.97  SV=5.27  BV=7.31
    {1360,1152,1104, 0, 0, 0},  //TV = 9.52(17000 lines)  AV=2.97  SV=5.28  BV=7.21
    {1440,1152,1120, 0, 0, 0},  //TV = 9.44(18000 lines)  AV=2.97  SV=5.30  BV=7.11
    {1520,1280,1032, 0, 0, 0},  //TV = 9.36(19000 lines)  AV=2.97  SV=5.33  BV=7.00
    {1680,1152,1104, 0, 0, 0},  //TV = 9.22(21000 lines)  AV=2.97  SV=5.28  BV=6.91
    {1760,1280,1024, 0, 0, 0},  //TV = 9.15(22000 lines)  AV=2.97  SV=5.32  BV=6.80
    {1920,1152,1112, 0, 0, 0},  //TV = 9.02(24000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2080,1152,1096, 0, 0, 0},  //TV = 8.91(26000 lines)  AV=2.97  SV=5.27  BV=6.61
    {2240,1152,1088, 0, 0, 0},  //TV = 8.80(28000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2320,1152,1128, 0, 0, 0},  //TV = 8.75(29000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2560,1152,1096, 0, 0, 0},  //TV = 8.61(32000 lines)  AV=2.97  SV=5.27  BV=6.31
    {2720,1152,1104, 0, 0, 0},  //TV = 8.52(34000 lines)  AV=2.97  SV=5.28  BV=6.21
    {2880,1152,1120, 0, 0, 0},  //TV = 8.44(36000 lines)  AV=2.97  SV=5.30  BV=6.11
    {3120,1152,1104, 0, 0, 0},  //TV = 8.32(39000 lines)  AV=2.97  SV=5.28  BV=6.02
    {3360,1152,1104, 0, 0, 0},  //TV = 8.22(42000 lines)  AV=2.97  SV=5.28  BV=5.91
    {3600,1152,1104, 0, 0, 0},  //TV = 8.12(45000 lines)  AV=2.97  SV=5.28  BV=5.81
    {3840,1152,1112, 0, 0, 0},  //TV = 8.02(48000 lines)  AV=2.97  SV=5.29  BV=5.71
    {4160,1152,1096, 0, 0, 0},  //TV = 7.91(52000 lines)  AV=2.97  SV=5.27  BV=5.61
    {4400,1152,1112, 0, 0, 0},  //TV = 7.83(55000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4800,1152,1096, 0, 0, 0},  //TV = 7.70(60000 lines)  AV=2.97  SV=5.27  BV=5.41
    {5120,1152,1096, 0, 0, 0},  //TV = 7.61(64000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5520,1152,1088, 0, 0, 0},  //TV = 7.50(69000 lines)  AV=2.97  SV=5.26  BV=5.21
    {5920,1152,1088, 0, 0, 0},  //TV = 7.40(74000 lines)  AV=2.97  SV=5.26  BV=5.11
    {6320,1152,1096, 0, 0, 0},  //TV = 7.31(79000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6720,1152,1104, 0, 0, 0},  //TV = 7.22(84000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7200,1152,1104, 0, 0, 0},  //TV = 7.12(90000 lines)  AV=2.97  SV=5.28  BV=4.81
    {7760,1152,1096, 0, 0, 0},  //TV = 7.01(97000 lines)  AV=2.97  SV=5.27  BV=4.71
    {8400,1152,1088, 0, 0, 0},  //TV = 6.90(105000 lines)  AV=2.97  SV=5.26  BV=4.61
    {8880,1152,1096, 0, 0, 0},  //TV = 6.82(111000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9520,1152,1096, 0, 0, 0},  //TV = 6.71(119000 lines)  AV=2.97  SV=5.27  BV=4.42
    {10000,1152,1128, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1280,1088, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=5.41  BV=4.21
    {10000,1408,1056, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=5.50  BV=4.11
    {10000,1536,1040, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,1664,1024, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,1792,1024, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=5.81  BV=3.81
    {10000,1920,1024, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=5.91  BV=3.71
    {10000,2048,1024, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=6.00  BV=3.61
    {10000,2176,1032, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=6.10  BV=3.52
    {10000,2304,1048, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=6.20  BV=3.41
    {10000,2432,1064, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=6.30  BV=3.31
    {10000,2688,1032, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,2816,1056, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=6.50  BV=3.11
    {10000,3072,1040, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=6.61  BV=3.01
    {10000,3328,1024, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,3584,1024, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,3840,1024, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=6.91  BV=2.71
    {10000,4096,1024, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=7.00  BV=2.61
    {10000,4096,1096, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=7.10  BV=2.52
    {10000,4096,1184, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=7.21  BV=2.41
    {10000,4096,1264, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=7.30  BV=2.31
    {10000,4096,1360, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=7.41  BV=2.21
    {10000,4096,1456, 0, 0, 0},  //TV = 6.64(125000 lines)  AV=2.97  SV=7.51  BV=2.11
    {20000,3072,1040, 0, 0, 0},  //TV = 5.64(250000 lines)  AV=2.97  SV=6.61  BV=2.01
    {20000,3328,1024, 0, 0, 0},  //TV = 5.64(250000 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,3584,1024, 0, 0, 0},  //TV = 5.64(250000 lines)  AV=2.97  SV=6.81  BV=1.81
    {20000,3840,1024, 0, 0, 0},  //TV = 5.64(250000 lines)  AV=2.97  SV=6.91  BV=1.71
    {20000,4096,1024, 0, 0, 0},  //TV = 5.64(250000 lines)  AV=2.97  SV=7.00  BV=1.61
    {20000,4096,1104, 0, 0, 0},  //TV = 5.64(250000 lines)  AV=2.97  SV=7.11  BV=1.51
    {30000,3072,1048, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=6.62  BV=1.41
    {30000,3328,1040, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,3584,1032, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,3840,1032, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=6.92  BV=1.11
    {30000,4096,1040, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,4096,1120, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=7.13  BV=0.90
    {30000,4096,1192, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=7.22  BV=0.81
    {30000,4096,1280, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,4096,1368, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=7.42  BV=0.61
    {30000,4096,1472, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,4096,1576, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=7.62  BV=0.41
    {30000,4096,1696, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=7.73  BV=0.30
    {30000,4096,1816, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=7.83  BV=0.20
    {30000,4096,1944, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=7.92  BV=0.10
    {30000,4096,2096, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=8.03  BV=-0.00
    {30000,4096,2248, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=8.13  BV=-0.10
    {30000,4096,2408, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=8.23  BV=-0.20
    {30000,4096,2576, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=8.33  BV=-0.30
    {30000,4096,2760, 0, 0, 0},  //TV = 5.06(375000 lines)  AV=2.97  SV=8.43  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    115,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -4,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.38  BV=3.50
    {16683,1408,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.46  BV=3.42
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {24983,1152,1104, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.28  BV=3.02
    {24983,1280,1072, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.39  BV=2.91
    {24983,1408,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.48  BV=2.81
    {24983,1536,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.58  BV=2.71
    {33034,1152,1104, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=5.28  BV=2.61
    {33034,1280,1064, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=5.38  BV=2.51
    {33034,1408,1040, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=5.48  BV=2.41
    {33034,1536,1024, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=5.58  BV=2.31
    {33034,1536,1096, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=5.68  BV=2.21
    {33034,1664,1080, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=5.78  BV=2.11
    {33034,1792,1080, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=5.88  BV=2.01
    {33034,1920,1072, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=5.97  BV=1.92
    {33034,2048,1080, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.08  BV=1.81
    {33034,2304,1032, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.18  BV=1.71
    {33034,2432,1048, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.28  BV=1.61
    {33034,2688,1024, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.39  BV=1.50
    {33034,2816,1040, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.48  BV=1.41
    {33034,3072,1024, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.58  BV=1.31
    {33034,3200,1048, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.68  BV=1.21
    {33034,3456,1040, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.78  BV=1.11
    {33034,3712,1040, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.88  BV=1.01
    {33034,3968,1048, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=6.99  BV=0.90
    {33034,4096,1080, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.08  BV=0.81
    {33034,4096,1160, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.18  BV=0.71
    {33034,4096,1240, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.28  BV=0.61
    {33034,4096,1328, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.38  BV=0.52
    {33034,4096,1432, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.48  BV=0.41
    {33034,4096,1536, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.58  BV=0.31
    {33034,4096,1648, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.69  BV=0.20
    {33034,4096,1760, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.78  BV=0.11
    {33034,4096,1904, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.89  BV=-0.00
    {33034,4096,2040, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=7.99  BV=-0.10
    {33034,4096,2184, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=8.09  BV=-0.20
    {33034,4096,2336, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=8.19  BV=-0.30
    {33034,4096,2504, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=8.29  BV=-0.40
    {33034,4096,2688, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=8.39  BV=-0.50
    {33034,4096,2880, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=8.49  BV=-0.60
    {33034,4096,3088, 0, 0, 0},  //TV = 4.92(398000 lines)  AV=2.97  SV=8.59  BV=-0.70
    {41666,4096,2624, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=8.36  BV=-0.80
    {41666,4096,2816, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=8.46  BV=-0.90
    {41666,4096,3016, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=8.56  BV=-1.00
    {49966,4096,2696, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.40  BV=-1.10
    {49966,4096,2888, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.50  BV=-1.20
    {58349,4096,2648, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=8.37  BV=-1.30
    {58349,4096,2840, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=8.47  BV=-1.40
    {66400,4096,2672, 0, 0, 0},  //TV = 3.91(800000 lines)  AV=2.97  SV=8.38  BV=-1.50
    {66400,4096,2864, 0, 0, 0},  //TV = 3.91(800000 lines)  AV=2.97  SV=8.48  BV=-1.60
    {75032,4096,2720, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=8.41  BV=-1.70
    {83332,4096,2624, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=8.36  BV=-1.80
    {83332,4096,2808, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=8.46  BV=-1.90
    {91632,4096,2736, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=8.42  BV=-2.00
    {100015,4096,2704, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.40  BV=-2.11
    {100015,4096,2896, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.50  BV=-2.21
    {100015,4096,3104, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.60  BV=-2.31
    {100015,4096,3320, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.70  BV=-2.40
    {100015,4096,3560, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.80  BV=-2.51
    {100015,4096,3816, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.90  BV=-2.61
    {100015,4096,4088, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.00  BV=-2.70
    {100015,4096,4376, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.10  BV=-2.80
    {100015,4096,4696, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.20  BV=-2.90
    {100015,4096,5032, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.30  BV=-3.00
    {100015,4096,5384, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.39  BV=-3.10
    {100015,4096,5776, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.50  BV=-3.20
    {100015,4096,6184, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.59  BV=-3.30
    {100015,4096,6632, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.70  BV=-3.40
    {100015,4096,7104, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.79  BV=-3.50
    {100015,4096,7616, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.89  BV=-3.60
    {100015,4096,8160, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.99  BV=-3.70
    {100015,4096,8744, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=10.09  BV=-3.80
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {20003,1280,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.32  BV=3.29
    {20003,1280,1088, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.41  BV=3.21
    {20003,1408,1056, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.50  BV=3.11
    {20003,1536,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.61  BV=3.01
    {20003,1664,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.70  BV=2.91
    {20003,1792,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.81  BV=2.81
    {29963,1280,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.32  BV=2.71
    {29963,1280,1096, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.42  BV=2.61
    {29963,1408,1064, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.51  BV=2.52
    {29963,1536,1056, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.63  BV=2.40
    {29963,1664,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.73  BV=2.30
    {29963,1792,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.82  BV=2.21
    {29963,1920,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.92  BV=2.11
    {29963,2048,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.02  BV=2.01
    {29963,2176,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.12  BV=1.91
    {29963,2304,1064, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.23  BV=1.81
    {29963,2560,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.32  BV=1.71
    {29963,2688,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.43  BV=1.61
    {29963,2944,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.52  BV=1.51
    {29963,3072,1056, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.63  BV=1.40
    {29963,3328,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.72  BV=1.31
    {29963,3584,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.82  BV=1.21
    {29963,3840,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.92  BV=1.11
    {29963,4096,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.02  BV=1.01
    {29963,4096,1120, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.13  BV=0.90
    {29963,4096,1192, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.22  BV=0.81
    {29963,4096,1280, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.32  BV=0.71
    {29963,4096,1368, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.42  BV=0.61
    {29963,4096,1464, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.52  BV=0.52
    {29963,4096,1584, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.63  BV=0.40
    {29963,4096,1696, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.73  BV=0.30
    {29963,4096,1816, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.83  BV=0.20
    {29963,4096,1944, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.92  BV=0.11
    {29963,4096,2096, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29963,4096,2248, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29963,4096,2408, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.23  BV=-0.20
    {29963,4096,2576, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.33  BV=-0.30
    {29963,4096,2760, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.43  BV=-0.40
    {29963,4096,2968, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.54  BV=-0.50
    {29963,4096,3176, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.63  BV=-0.60
    {29963,4096,3408, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.73  BV=-0.70
    {40006,4096,2736, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=8.42  BV=-0.80
    {40006,4096,2928, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=8.52  BV=-0.90
    {40006,4096,3136, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=8.61  BV=-1.00
    {49966,4096,2696, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.40  BV=-1.10
    {49966,4096,2888, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.50  BV=-1.20
    {60009,4096,2576, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.33  BV=-1.30
    {60009,4096,2760, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.43  BV=-1.40
    {60009,4096,2960, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.53  BV=-1.50
    {69969,4096,2720, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=8.41  BV=-1.60
    {69969,4096,2912, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=8.51  BV=-1.70
    {80012,4096,2728, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=8.41  BV=-1.80
    {89972,4096,2600, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=8.34  BV=-1.90
    {89972,4096,2792, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=8.45  BV=-2.00
    {100015,4096,2704, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.40  BV=-2.11
    {100015,4096,2896, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.50  BV=-2.21
    {100015,4096,3104, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.60  BV=-2.31
    {100015,4096,3320, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.70  BV=-2.40
    {100015,4096,3560, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.80  BV=-2.51
    {100015,4096,3816, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.90  BV=-2.61
    {100015,4096,4088, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.00  BV=-2.70
    {100015,4096,4376, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.10  BV=-2.80
    {100015,4096,4696, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.20  BV=-2.90
    {100015,4096,5032, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.30  BV=-3.00
    {100015,4096,5384, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.39  BV=-3.10
    {100015,4096,5776, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.50  BV=-3.20
    {100015,4096,6184, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.59  BV=-3.30
    {100015,4096,6632, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.70  BV=-3.40
    {100015,4096,7104, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.79  BV=-3.50
    {100015,4096,7616, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.89  BV=-3.60
    {100015,4096,8160, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.99  BV=-3.70
    {100015,4096,8744, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=10.09  BV=-3.80
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    149,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -38,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.38  BV=3.50
    {16683,1408,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.46  BV=3.42
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {24983,1152,1104, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.28  BV=3.02
    {24983,1280,1072, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.39  BV=2.91
    {24983,1408,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.48  BV=2.81
    {24983,1536,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.58  BV=2.71
    {33366,1152,1088, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.26  BV=2.62
    {33366,1280,1056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.37  BV=2.51
    {33366,1408,1024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.46  BV=2.42
    {33366,1408,1104, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.57  BV=2.31
    {41666,1280,1040, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=5.34  BV=2.21
    {41666,1408,1024, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=5.46  BV=2.10
    {49966,1152,1104, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.28  BV=2.02
    {49966,1280,1072, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.39  BV=1.91
    {49966,1408,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.48  BV=1.81
    {58349,1280,1056, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.37  BV=1.70
    {66649,1152,1096, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.27  BV=1.61
    {66649,1280,1056, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.37  BV=1.51
    {75032,1152,1120, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=5.30  BV=1.41
    {75032,1280,1080, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=5.40  BV=1.31
    {83332,1280,1040, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=5.34  BV=1.21
    {91632,1280,1024, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=5.32  BV=1.10
    {100015,1152,1104, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=5.28  BV=1.01
    {100015,1280,1064, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=5.38  BV=0.92
    {116698,1152,1088, 0, 0, 0},  //TV = 3.10(1406000 lines)  AV=2.97  SV=5.26  BV=0.81
    {124998,1152,1088, 0, 0, 0},  //TV = 3.00(1506000 lines)  AV=2.97  SV=5.26  BV=0.71
    {133298,1152,1096, 0, 0, 0},  //TV = 2.91(1606000 lines)  AV=2.97  SV=5.27  BV=0.61
    {141681,1152,1104, 0, 0, 0},  //TV = 2.82(1707000 lines)  AV=2.97  SV=5.28  BV=0.51
    {149981,1152,1120, 0, 0, 0},  //TV = 2.74(1807000 lines)  AV=2.97  SV=5.30  BV=0.41
    {158364,1280,1024, 0, 0, 0},  //TV = 2.66(1908000 lines)  AV=2.97  SV=5.32  BV=0.31
    {174964,1152,1096, 0, 0, 0},  //TV = 2.51(2108000 lines)  AV=2.97  SV=5.27  BV=0.22
    {183347,1152,1128, 0, 0, 0},  //TV = 2.45(2209000 lines)  AV=2.97  SV=5.31  BV=0.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {20003,1280,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.32  BV=3.29
    {20003,1280,1088, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.41  BV=3.21
    {20003,1408,1056, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.50  BV=3.11
    {20003,1536,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.61  BV=3.01
    {20003,1664,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.70  BV=2.91
    {20003,1792,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.81  BV=2.81
    {29963,1280,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.32  BV=2.71
    {29963,1280,1096, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.42  BV=2.61
    {29963,1408,1064, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.51  BV=2.52
    {29963,1536,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.62  BV=2.41
    {40006,1152,1128, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.31  BV=2.31
    {40006,1280,1088, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.41  BV=2.21
    {40006,1408,1056, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.50  BV=2.11
    {49966,1152,1104, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.28  BV=2.02
    {49966,1280,1072, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.39  BV=1.91
    {49966,1408,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.48  BV=1.81
    {60009,1280,1024, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.32  BV=1.71
    {60009,1280,1096, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.42  BV=1.61
    {69969,1152,1120, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=5.30  BV=1.51
    {69969,1280,1080, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=5.40  BV=1.41
    {80012,1152,1128, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=5.31  BV=1.31
    {80012,1280,1088, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=5.41  BV=1.21
    {89972,1280,1040, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=5.34  BV=1.10
    {100015,1152,1104, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=5.28  BV=1.01
    {100015,1280,1064, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=5.38  BV=0.92
    {109975,1280,1040, 0, 0, 0},  //TV = 3.18(1325000 lines)  AV=2.97  SV=5.34  BV=0.81
    {120018,1280,1024, 0, 0, 0},  //TV = 3.06(1446000 lines)  AV=2.97  SV=5.32  BV=0.71
    {129978,1152,1128, 0, 0, 0},  //TV = 2.94(1566000 lines)  AV=2.97  SV=5.31  BV=0.61
    {140021,1152,1120, 0, 0, 0},  //TV = 2.84(1687000 lines)  AV=2.97  SV=5.30  BV=0.51
    {149981,1152,1120, 0, 0, 0},  //TV = 2.74(1807000 lines)  AV=2.97  SV=5.30  BV=0.41
    {160024,1152,1128, 0, 0, 0},  //TV = 2.64(1928000 lines)  AV=2.97  SV=5.31  BV=0.31
    {169984,1280,1024, 0, 0, 0},  //TV = 2.56(2048000 lines)  AV=2.97  SV=5.32  BV=0.21
    {180027,1280,1032, 0, 0, 0},  //TV = 2.47(2169000 lines)  AV=2.97  SV=5.33  BV=0.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    110,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    1,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {498,1408,1080, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.54  BV=8.41
    {498,1536,1064, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.64  BV=8.30
    {498,1664,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.73  BV=8.21
    {498,1792,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.83  BV=8.11
    {498,1920,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.93  BV=8.01
    {498,2048,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.03  BV=7.91
    {498,2176,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.13  BV=7.81
    {498,2304,1072, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.24  BV=7.71
    {498,2560,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.33  BV=7.61
    {498,2688,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.43  BV=7.52
    {581,2432,1072, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=6.31  BV=7.41
    {581,2688,1040, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=6.41  BV=7.31
    {664,2560,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=6.32  BV=7.21
    {664,2688,1040, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=6.41  BV=7.11
    {747,2560,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=6.34  BV=7.01
    {830,2432,1064, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=6.30  BV=6.90
    {830,2688,1024, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=6.39  BV=6.81
    {913,2560,1048, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=6.36  BV=6.71
    {996,2560,1032, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=6.33  BV=6.61
    {1079,2432,1072, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=6.31  BV=6.51
    {1162,2432,1064, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=6.30  BV=6.42
    {1245,2432,1064, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=6.30  BV=6.32
    {1328,2432,1072, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=6.31  BV=6.21
    {1411,2560,1032, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=6.33  BV=6.11
    {1577,2432,1040, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=6.27  BV=6.01
    {1660,2432,1056, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=6.29  BV=5.91
    {1743,2560,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=6.32  BV=5.81
    {1909,2432,1056, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=6.29  BV=5.71
    {2075,2432,1040, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=6.27  BV=5.61
    {2158,2432,1072, 0, 0, 0},  //TV = 8.86(26000 lines)  AV=2.97  SV=6.31  BV=5.51
    {2324,2432,1072, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=6.31  BV=5.41
    {2490,2432,1064, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=6.30  BV=5.32
    {2739,2432,1048, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=6.28  BV=5.20
    {2905,2432,1056, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=6.29  BV=5.11
    {3154,2432,1040, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=6.27  BV=5.01
    {3320,2432,1056, 0, 0, 0},  //TV = 8.23(40000 lines)  AV=2.97  SV=6.29  BV=4.91
    {3569,2432,1056, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=6.29  BV=4.81
    {3818,2432,1056, 0, 0, 0},  //TV = 8.03(46000 lines)  AV=2.97  SV=6.29  BV=4.71
    {4150,2432,1040, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=6.27  BV=4.61
    {4482,2432,1032, 0, 0, 0},  //TV = 7.80(54000 lines)  AV=2.97  SV=6.26  BV=4.51
    {4731,2432,1048, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=6.28  BV=4.41
    {5063,2432,1048, 0, 0, 0},  //TV = 7.63(61000 lines)  AV=2.97  SV=6.28  BV=4.32
    {5478,2432,1040, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=6.27  BV=4.21
    {5893,2432,1040, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=6.27  BV=4.11
    {6308,2432,1040, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=6.27  BV=4.01
    {6806,2432,1032, 0, 0, 0},  //TV = 7.20(82000 lines)  AV=2.97  SV=6.26  BV=3.91
    {7221,2432,1040, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=6.27  BV=3.81
    {7802,2432,1032, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=6.26  BV=3.71
    {8300,2432,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.27  BV=3.61
    {8300,2560,1064, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.38  BV=3.51
    {8300,2816,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.47  BV=3.41
    {8300,2944,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.57  BV=3.32
    {8300,3200,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.67  BV=3.22
    {8300,3456,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.77  BV=3.12
    {8300,3712,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.87  BV=3.01
    {8300,3968,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.97  BV=2.92
    {8300,4096,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.07  BV=2.82
    {8300,4096,1160, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.18  BV=2.70
    {16683,2432,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.26  BV=2.62
    {16683,2560,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.37  BV=2.51
    {16683,2816,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.47  BV=2.41
    {16683,2944,1056, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.57  BV=2.31
    {16683,3200,1040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.67  BV=2.21
    {16683,3456,1032, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=6.77  BV=2.11
    {24983,2432,1048, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.28  BV=2.01
    {24983,2688,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.39  BV=1.90
    {24983,2816,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.48  BV=1.81
    {24983,3072,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=6.58  BV=1.71
    {33366,2432,1040, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.27  BV=1.61
    {33366,2560,1056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.37  BV=1.51
    {33366,2816,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.47  BV=1.41
    {33366,2944,1056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.57  BV=1.31
    {41666,2560,1040, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=6.34  BV=1.21
    {41666,2688,1064, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=6.45  BV=1.11
    {49966,2432,1048, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=6.28  BV=1.01
    {49966,2560,1072, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=6.39  BV=0.91
    {49966,2816,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=6.48  BV=0.81
    {58349,2560,1056, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=6.37  BV=0.70
    {66649,2432,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.27  BV=0.61
    {66649,2560,1056, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.37  BV=0.51
    {75032,2432,1064, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=6.30  BV=0.40
    {75032,2688,1024, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=6.39  BV=0.31
    {83332,2560,1040, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=6.34  BV=0.21
    {91632,2432,1064, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=6.30  BV=0.12
    {100015,2432,1056, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.29  BV=0.00
    {108315,2432,1040, 0, 0, 0},  //TV = 3.21(1305000 lines)  AV=2.97  SV=6.27  BV=-0.09
    {116698,2432,1040, 0, 0, 0},  //TV = 3.10(1406000 lines)  AV=2.97  SV=6.27  BV=-0.20
    {124998,2432,1040, 0, 0, 0},  //TV = 3.00(1506000 lines)  AV=2.97  SV=6.27  BV=-0.30
    {133298,2432,1040, 0, 0, 0},  //TV = 2.91(1606000 lines)  AV=2.97  SV=6.27  BV=-0.39
    {141681,2432,1056, 0, 0, 0},  //TV = 2.82(1707000 lines)  AV=2.97  SV=6.29  BV=-0.50
    {149981,2432,1064, 0, 0, 0},  //TV = 2.74(1807000 lines)  AV=2.97  SV=6.30  BV=-0.60
    {158364,2560,1032, 0, 0, 0},  //TV = 2.66(1908000 lines)  AV=2.97  SV=6.33  BV=-0.70
    {174964,2432,1048, 0, 0, 0},  //TV = 2.51(2108000 lines)  AV=2.97  SV=6.28  BV=-0.80
    {183347,2560,1024, 0, 0, 0},  //TV = 2.45(2209000 lines)  AV=2.97  SV=6.32  BV=-0.90
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {498,1408,1080, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.54  BV=8.41
    {498,1536,1064, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.64  BV=8.30
    {498,1664,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.73  BV=8.21
    {498,1792,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.83  BV=8.11
    {498,1920,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.93  BV=8.01
    {498,2048,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.03  BV=7.91
    {498,2176,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.13  BV=7.81
    {498,2304,1072, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.24  BV=7.71
    {498,2560,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.33  BV=7.61
    {498,2688,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.43  BV=7.52
    {581,2432,1072, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=6.31  BV=7.41
    {581,2688,1040, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=6.41  BV=7.31
    {664,2560,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=6.32  BV=7.21
    {664,2688,1040, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=6.41  BV=7.11
    {747,2560,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=6.34  BV=7.01
    {830,2432,1064, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=6.30  BV=6.90
    {830,2688,1024, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=6.39  BV=6.81
    {913,2560,1048, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=6.36  BV=6.71
    {996,2560,1032, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=6.33  BV=6.61
    {1079,2432,1072, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=6.31  BV=6.51
    {1162,2432,1064, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=6.30  BV=6.42
    {1245,2432,1064, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=6.30  BV=6.32
    {1328,2432,1072, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=6.31  BV=6.21
    {1411,2560,1032, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=6.33  BV=6.11
    {1577,2432,1040, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=6.27  BV=6.01
    {1660,2432,1056, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=6.29  BV=5.91
    {1743,2560,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=6.32  BV=5.81
    {1909,2432,1056, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=6.29  BV=5.71
    {2075,2432,1040, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=6.27  BV=5.61
    {2158,2432,1072, 0, 0, 0},  //TV = 8.86(26000 lines)  AV=2.97  SV=6.31  BV=5.51
    {2324,2432,1072, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=6.31  BV=5.41
    {2490,2432,1064, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=6.30  BV=5.32
    {2739,2432,1048, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=6.28  BV=5.20
    {2905,2432,1056, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=6.29  BV=5.11
    {3154,2432,1040, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=6.27  BV=5.01
    {3320,2432,1056, 0, 0, 0},  //TV = 8.23(40000 lines)  AV=2.97  SV=6.29  BV=4.91
    {3569,2432,1056, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=6.29  BV=4.81
    {3818,2432,1056, 0, 0, 0},  //TV = 8.03(46000 lines)  AV=2.97  SV=6.29  BV=4.71
    {4150,2432,1040, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=6.27  BV=4.61
    {4482,2432,1032, 0, 0, 0},  //TV = 7.80(54000 lines)  AV=2.97  SV=6.26  BV=4.51
    {4731,2432,1048, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=6.28  BV=4.41
    {5063,2432,1048, 0, 0, 0},  //TV = 7.63(61000 lines)  AV=2.97  SV=6.28  BV=4.32
    {5478,2432,1040, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=6.27  BV=4.21
    {5893,2432,1040, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=6.27  BV=4.11
    {6308,2432,1040, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=6.27  BV=4.01
    {6806,2432,1032, 0, 0, 0},  //TV = 7.20(82000 lines)  AV=2.97  SV=6.26  BV=3.91
    {7221,2432,1040, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=6.27  BV=3.81
    {7802,2432,1032, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=6.26  BV=3.71
    {8300,2432,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.27  BV=3.61
    {8964,2432,1032, 0, 0, 0},  //TV = 6.80(108000 lines)  AV=2.97  SV=6.26  BV=3.51
    {9545,2432,1040, 0, 0, 0},  //TV = 6.71(115000 lines)  AV=2.97  SV=6.27  BV=3.41
    {9960,2432,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.30  BV=3.32
    {9960,2688,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.40  BV=3.22
    {9960,2816,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.50  BV=3.12
    {9960,3072,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.61  BV=3.01
    {9960,3328,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.70  BV=2.92
    {9960,3584,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.81  BV=2.81
    {9960,3840,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.92  BV=2.70
    {9960,4096,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.01  BV=2.61
    {9960,4096,1112, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.12  BV=2.50
    {9960,4096,1192, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.22  BV=2.40
    {20003,2432,1064, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.30  BV=2.31
    {20003,2688,1032, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.40  BV=2.21
    {20003,2816,1056, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.50  BV=2.11
    {20003,3072,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.61  BV=2.01
    {20003,3328,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.70  BV=1.91
    {20003,3584,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=6.81  BV=1.81
    {29963,2560,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.32  BV=1.71
    {29963,2688,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.43  BV=1.61
    {29963,2944,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.52  BV=1.51
    {29963,3072,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.62  BV=1.41
    {40006,2432,1064, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=6.30  BV=1.31
    {40006,2688,1032, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=6.40  BV=1.21
    {40006,2816,1056, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=6.50  BV=1.11
    {49966,2432,1048, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=6.28  BV=1.01
    {49966,2560,1072, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=6.39  BV=0.91
    {49966,2816,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=6.48  BV=0.81
    {60009,2560,1024, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.32  BV=0.71
    {60009,2688,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.43  BV=0.60
    {69969,2432,1064, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=6.30  BV=0.50
    {69969,2688,1024, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=6.39  BV=0.42
    {80012,2432,1064, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.30  BV=0.31
    {80012,2688,1032, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=6.40  BV=0.21
    {89972,2560,1032, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=6.33  BV=0.11
    {100015,2432,1056, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.29  BV=0.00
    {100015,2688,1024, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=6.39  BV=-0.10
    {109975,2560,1048, 0, 0, 0},  //TV = 3.18(1325000 lines)  AV=2.97  SV=6.36  BV=-0.20
    {120018,2560,1032, 0, 0, 0},  //TV = 3.06(1446000 lines)  AV=2.97  SV=6.33  BV=-0.30
    {129978,2432,1072, 0, 0, 0},  //TV = 2.94(1566000 lines)  AV=2.97  SV=6.31  BV=-0.40
    {140021,2432,1064, 0, 0, 0},  //TV = 2.84(1687000 lines)  AV=2.97  SV=6.30  BV=-0.50
    {149981,2432,1064, 0, 0, 0},  //TV = 2.74(1807000 lines)  AV=2.97  SV=6.30  BV=-0.60
    {160024,2432,1072, 0, 0, 0},  //TV = 2.64(1928000 lines)  AV=2.97  SV=6.31  BV=-0.70
    {169984,2560,1024, 0, 0, 0},  //TV = 2.56(2048000 lines)  AV=2.97  SV=6.32  BV=-0.79
    {189987,2432,1040, 0, 0, 0},  //TV = 2.40(2289000 lines)  AV=2.97  SV=6.27  BV=-0.90
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    120,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -9,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {498,1408,1080, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.54  BV=8.41
    {498,1536,1064, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.64  BV=8.30
    {498,1664,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.73  BV=8.21
    {498,1792,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.83  BV=8.11
    {498,1920,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.93  BV=8.01
    {498,2048,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.03  BV=7.91
    {498,2176,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.13  BV=7.81
    {498,2304,1072, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.24  BV=7.71
    {498,2560,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.33  BV=7.61
    {498,2688,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.43  BV=7.52
    {498,2944,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.53  BV=7.41
    {498,3072,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.63  BV=7.31
    {498,3328,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.73  BV=7.21
    {498,3584,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.83  BV=7.11
    {498,3840,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.93  BV=7.01
    {498,4096,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.03  BV=6.91
    {498,4096,1120, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.13  BV=6.81
    {498,4096,1200, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.23  BV=6.71
    {498,4096,1288, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.33  BV=6.61
    {498,4096,1384, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.43  BV=6.51
    {581,4096,1272, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=7.31  BV=6.41
    {581,4096,1368, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=7.42  BV=6.30
    {664,4096,1272, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=7.31  BV=6.21
    {664,4096,1368, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=7.42  BV=6.11
    {747,4096,1304, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=7.35  BV=6.01
    {830,4096,1256, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=7.29  BV=5.91
    {830,4096,1344, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=7.39  BV=5.81
    {913,4096,1312, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=7.36  BV=5.71
    {996,4096,1288, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=7.33  BV=5.61
    {1079,4096,1280, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=7.32  BV=5.51
    {1162,4096,1264, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=7.30  BV=5.42
    {1245,4096,1272, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=7.31  BV=5.31
    {1328,4096,1280, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=7.32  BV=5.21
    {1411,4096,1288, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=7.33  BV=5.11
    {1577,4096,1240, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=7.28  BV=5.00
    {1660,4096,1256, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=7.29  BV=4.91
    {1826,4096,1232, 0, 0, 0},  //TV = 9.10(22000 lines)  AV=2.97  SV=7.27  BV=4.80
    {1909,4096,1256, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=7.29  BV=4.71
    {2075,4096,1232, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=7.27  BV=4.62
    {2241,4096,1232, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=7.27  BV=4.51
    {2324,4096,1272, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=7.31  BV=4.41
    {2490,4096,1264, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=7.30  BV=4.32
    {2739,4096,1240, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=7.28  BV=4.21
    {2905,4096,1256, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=7.29  BV=4.10
    {3154,4096,1232, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=7.27  BV=4.01
    {3320,4096,1256, 0, 0, 0},  //TV = 8.23(40000 lines)  AV=2.97  SV=7.29  BV=3.91
    {3652,4096,1232, 0, 0, 0},  //TV = 8.10(44000 lines)  AV=2.97  SV=7.27  BV=3.80
    {3901,4096,1232, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=7.27  BV=3.71
    {4150,4096,1240, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=7.28  BV=3.61
    {4482,4096,1224, 0, 0, 0},  //TV = 7.80(54000 lines)  AV=2.97  SV=7.26  BV=3.52
    {4731,4096,1248, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=7.29  BV=3.41
    {5063,4096,1248, 0, 0, 0},  //TV = 7.63(61000 lines)  AV=2.97  SV=7.29  BV=3.31
    {5478,4096,1240, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=7.28  BV=3.21
    {5893,4096,1240, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=7.28  BV=3.10
    {6308,4096,1240, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=7.28  BV=3.00
    {6806,4096,1224, 0, 0, 0},  //TV = 7.20(82000 lines)  AV=2.97  SV=7.26  BV=2.91
    {7221,4096,1240, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=7.28  BV=2.81
    {7802,4096,1232, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=7.27  BV=2.71
    {8300,4096,1240, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.28  BV=2.61
    {8300,4096,1328, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.38  BV=2.51
    {8300,4096,1424, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.48  BV=2.41
    {8300,4096,1520, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.57  BV=2.31
    {8300,4096,1632, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.67  BV=2.21
    {8300,4096,1760, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.78  BV=2.10
    {8300,4096,1888, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.88  BV=2.00
    {8300,4096,2016, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.98  BV=1.91
    {8300,4096,2168, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.08  BV=1.80
    {8300,4096,2320, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.18  BV=1.70
    {16683,4096,1232, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.27  BV=1.61
    {16683,4096,1320, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.37  BV=1.51
    {16683,4096,1416, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.47  BV=1.41
    {16683,4096,1520, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.57  BV=1.31
    {16683,4096,1632, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.67  BV=1.20
    {16683,4096,1744, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.77  BV=1.11
    {24983,4096,1248, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=7.29  BV=1.01
    {24983,4096,1336, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=7.38  BV=0.91
    {24983,4096,1432, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=7.48  BV=0.81
    {24983,4096,1536, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=7.58  BV=0.71
    {33366,4096,1232, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.27  BV=0.61
    {33366,4096,1320, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.37  BV=0.51
    {33366,4096,1416, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.47  BV=0.41
    {33366,4096,1520, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.57  BV=0.31
    {41666,4096,1304, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=7.35  BV=0.21
    {41666,4096,1392, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=7.44  BV=0.11
    {49966,4096,1256, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=7.29  BV=-0.00
    {49966,4096,1344, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=7.39  BV=-0.10
    {58349,4096,1232, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=7.27  BV=-0.20
    {58349,4096,1320, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=7.37  BV=-0.30
    {66649,4096,1240, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=7.28  BV=-0.40
    {66649,4096,1328, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=7.38  BV=-0.50
    {75032,4096,1264, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=7.30  BV=-0.60
    {75032,4096,1360, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=7.41  BV=-0.70
    {83332,4096,1312, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=7.36  BV=-0.80
    {91632,4096,1272, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=7.31  BV=-0.89
    {100015,4096,1256, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.29  BV=-1.00
    {108315,4096,1240, 0, 0, 0},  //TV = 3.21(1305000 lines)  AV=2.97  SV=7.28  BV=-1.10
    {116698,4096,1232, 0, 0, 0},  //TV = 3.10(1406000 lines)  AV=2.97  SV=7.27  BV=-1.20
    {124998,4096,1232, 0, 0, 0},  //TV = 3.00(1506000 lines)  AV=2.97  SV=7.27  BV=-1.30
    {133298,4096,1240, 0, 0, 0},  //TV = 2.91(1606000 lines)  AV=2.97  SV=7.28  BV=-1.40
    {141681,4096,1248, 0, 0, 0},  //TV = 2.82(1707000 lines)  AV=2.97  SV=7.29  BV=-1.50
    {149981,4096,1264, 0, 0, 0},  //TV = 2.74(1807000 lines)  AV=2.97  SV=7.30  BV=-1.60
    {158364,4096,1288, 0, 0, 0},  //TV = 2.66(1908000 lines)  AV=2.97  SV=7.33  BV=-1.70
    {174964,4096,1248, 0, 0, 0},  //TV = 2.51(2108000 lines)  AV=2.97  SV=7.29  BV=-1.80
    {183347,4096,1272, 0, 0, 0},  //TV = 2.45(2209000 lines)  AV=2.97  SV=7.31  BV=-1.89
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {498,1408,1080, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.54  BV=8.41
    {498,1536,1064, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.64  BV=8.30
    {498,1664,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.73  BV=8.21
    {498,1792,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.83  BV=8.11
    {498,1920,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.93  BV=8.01
    {498,2048,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.03  BV=7.91
    {498,2176,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.13  BV=7.81
    {498,2304,1072, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.24  BV=7.71
    {498,2560,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.33  BV=7.61
    {498,2688,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.43  BV=7.52
    {498,2944,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.53  BV=7.41
    {498,3072,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.63  BV=7.31
    {498,3328,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.73  BV=7.21
    {498,3584,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.83  BV=7.11
    {498,3840,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.93  BV=7.01
    {498,4096,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.03  BV=6.91
    {498,4096,1120, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.13  BV=6.81
    {498,4096,1200, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.23  BV=6.71
    {498,4096,1288, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.33  BV=6.61
    {498,4096,1384, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.43  BV=6.51
    {581,4096,1272, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=7.31  BV=6.41
    {581,4096,1368, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=7.42  BV=6.30
    {664,4096,1272, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=7.31  BV=6.21
    {664,4096,1368, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=7.42  BV=6.11
    {747,4096,1304, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=7.35  BV=6.01
    {830,4096,1256, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=7.29  BV=5.91
    {830,4096,1344, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=7.39  BV=5.81
    {913,4096,1312, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=7.36  BV=5.71
    {996,4096,1288, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=7.33  BV=5.61
    {1079,4096,1280, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=7.32  BV=5.51
    {1162,4096,1264, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=7.30  BV=5.42
    {1245,4096,1272, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=7.31  BV=5.31
    {1328,4096,1280, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=7.32  BV=5.21
    {1411,4096,1288, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=7.33  BV=5.11
    {1577,4096,1240, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=7.28  BV=5.00
    {1660,4096,1256, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=7.29  BV=4.91
    {1826,4096,1232, 0, 0, 0},  //TV = 9.10(22000 lines)  AV=2.97  SV=7.27  BV=4.80
    {1909,4096,1256, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=7.29  BV=4.71
    {2075,4096,1232, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=7.27  BV=4.62
    {2241,4096,1232, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=7.27  BV=4.51
    {2324,4096,1272, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=7.31  BV=4.41
    {2490,4096,1264, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=7.30  BV=4.32
    {2739,4096,1240, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=7.28  BV=4.21
    {2905,4096,1256, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=7.29  BV=4.10
    {3154,4096,1232, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=7.27  BV=4.01
    {3320,4096,1256, 0, 0, 0},  //TV = 8.23(40000 lines)  AV=2.97  SV=7.29  BV=3.91
    {3652,4096,1232, 0, 0, 0},  //TV = 8.10(44000 lines)  AV=2.97  SV=7.27  BV=3.80
    {3901,4096,1232, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=7.27  BV=3.71
    {4150,4096,1240, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=7.28  BV=3.61
    {4482,4096,1224, 0, 0, 0},  //TV = 7.80(54000 lines)  AV=2.97  SV=7.26  BV=3.52
    {4731,4096,1248, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=7.29  BV=3.41
    {5063,4096,1248, 0, 0, 0},  //TV = 7.63(61000 lines)  AV=2.97  SV=7.29  BV=3.31
    {5478,4096,1240, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=7.28  BV=3.21
    {5893,4096,1240, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=7.28  BV=3.10
    {6308,4096,1240, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=7.28  BV=3.00
    {6806,4096,1224, 0, 0, 0},  //TV = 7.20(82000 lines)  AV=2.97  SV=7.26  BV=2.91
    {7221,4096,1240, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=7.28  BV=2.81
    {7802,4096,1232, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=7.27  BV=2.71
    {8300,4096,1240, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.28  BV=2.61
    {8964,4096,1224, 0, 0, 0},  //TV = 6.80(108000 lines)  AV=2.97  SV=7.26  BV=2.52
    {9545,4096,1232, 0, 0, 0},  //TV = 6.71(115000 lines)  AV=2.97  SV=7.27  BV=2.42
    {9960,4096,1264, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.30  BV=2.32
    {9960,4096,1360, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.41  BV=2.21
    {9960,4096,1464, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.52  BV=2.10
    {9960,4096,1568, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.61  BV=2.01
    {9960,4096,1680, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.71  BV=1.91
    {9960,4096,1800, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.81  BV=1.81
    {9960,4096,1936, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.92  BV=1.70
    {9960,4096,2072, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=8.02  BV=1.60
    {9960,4096,2216, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=8.11  BV=1.51
    {9960,4096,2376, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=8.21  BV=1.41
    {20003,4096,1264, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.30  BV=1.31
    {20003,4096,1360, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.41  BV=1.21
    {20003,4096,1456, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.51  BV=1.11
    {20003,4096,1560, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.61  BV=1.01
    {20003,4096,1672, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.71  BV=0.91
    {20003,4096,1792, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.81  BV=0.81
    {29963,4096,1280, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.32  BV=0.71
    {29963,4096,1376, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.43  BV=0.61
    {29963,4096,1472, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.52  BV=0.51
    {29963,4096,1576, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.62  BV=0.41
    {40006,4096,1264, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=7.30  BV=0.31
    {40006,4096,1352, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=7.40  BV=0.21
    {40006,4096,1456, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=7.51  BV=0.11
    {49966,4096,1256, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=7.29  BV=-0.00
    {49966,4096,1344, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=7.39  BV=-0.10
    {49966,4096,1440, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=7.49  BV=-0.20
    {60009,4096,1288, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=7.33  BV=-0.30
    {60009,4096,1376, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=7.43  BV=-0.40
    {69969,4096,1264, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=7.30  BV=-0.50
    {69969,4096,1360, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=7.41  BV=-0.60
    {80012,4096,1272, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=7.31  BV=-0.70
    {80012,4096,1360, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=7.41  BV=-0.79
    {89972,4096,1296, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=7.34  BV=-0.89
    {100015,4096,1256, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.29  BV=-1.00
    {100015,4096,1344, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.39  BV=-1.10
    {109975,4096,1312, 0, 0, 0},  //TV = 3.18(1325000 lines)  AV=2.97  SV=7.36  BV=-1.20
    {120018,4096,1288, 0, 0, 0},  //TV = 3.06(1446000 lines)  AV=2.97  SV=7.33  BV=-1.30
    {129978,4096,1272, 0, 0, 0},  //TV = 2.94(1566000 lines)  AV=2.97  SV=7.31  BV=-1.40
    {140021,4096,1264, 0, 0, 0},  //TV = 2.84(1687000 lines)  AV=2.97  SV=7.30  BV=-1.50
    {149981,4096,1264, 0, 0, 0},  //TV = 2.74(1807000 lines)  AV=2.97  SV=7.30  BV=-1.60
    {160024,4096,1272, 0, 0, 0},  //TV = 2.64(1928000 lines)  AV=2.97  SV=7.31  BV=-1.70
    {169984,4096,1280, 0, 0, 0},  //TV = 2.56(2048000 lines)  AV=2.97  SV=7.32  BV=-1.79
    {189987,4096,1232, 0, 0, 0},  //TV = 2.40(2289000 lines)  AV=2.97  SV=7.27  BV=-1.90
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    130,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -19,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {498,1408,1080, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.54  BV=8.41
    {498,1536,1064, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.64  BV=8.30
    {498,1664,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.73  BV=8.21
    {498,1792,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.83  BV=8.11
    {498,1920,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.93  BV=8.01
    {498,2048,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.03  BV=7.91
    {498,2176,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.13  BV=7.81
    {498,2304,1072, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.24  BV=7.71
    {498,2560,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.33  BV=7.61
    {498,2688,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.43  BV=7.52
    {498,2944,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.53  BV=7.41
    {498,3072,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.63  BV=7.31
    {498,3328,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.73  BV=7.21
    {498,3584,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.83  BV=7.11
    {498,3840,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.93  BV=7.01
    {498,4096,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.03  BV=6.91
    {498,4096,1120, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.13  BV=6.81
    {498,4096,1200, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.23  BV=6.71
    {498,4096,1288, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.33  BV=6.61
    {498,4096,1376, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.43  BV=6.52
    {498,4096,1488, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.54  BV=6.40
    {498,4096,1592, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.64  BV=6.31
    {498,4096,1704, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.73  BV=6.21
    {498,4096,1832, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.84  BV=6.10
    {498,4096,1960, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.94  BV=6.01
    {498,4096,2096, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.03  BV=5.91
    {498,4096,2248, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.13  BV=5.81
    {498,4096,2408, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.23  BV=5.71
    {498,4096,2584, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.34  BV=5.61
    {498,4096,2760, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.43  BV=5.51
    {581,4096,2544, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=8.31  BV=5.41
    {581,4096,2736, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=8.42  BV=5.30
    {664,4096,2552, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=8.32  BV=5.21
    {664,4096,2744, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=8.42  BV=5.11
    {747,4096,2608, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=8.35  BV=5.01
    {830,4096,2520, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=8.30  BV=4.91
    {830,4096,2688, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=8.39  BV=4.81
    {913,4096,2624, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=8.36  BV=4.71
    {996,4096,2584, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=8.34  BV=4.61
    {1079,4096,2560, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=8.32  BV=4.51
    {1162,4096,2552, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=8.32  BV=4.40
    {1245,4096,2536, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=8.31  BV=4.31
    {1328,4096,2560, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=8.32  BV=4.21
    {1411,4096,2576, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=8.33  BV=4.11
    {1577,4096,2472, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=8.27  BV=4.01
    {1660,4096,2512, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=8.29  BV=3.91
    {1826,4096,2456, 0, 0, 0},  //TV = 9.10(22000 lines)  AV=2.97  SV=8.26  BV=3.81
    {1909,4096,2512, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=8.29  BV=3.71
    {2075,4096,2472, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=8.27  BV=3.61
    {2241,4096,2464, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=8.27  BV=3.51
    {2324,4096,2544, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=8.31  BV=3.41
    {2490,4096,2536, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=8.31  BV=3.31
    {2739,4096,2488, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=8.28  BV=3.20
    {2905,4096,2504, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=8.29  BV=3.11
    {3154,4096,2472, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=8.27  BV=3.01
    {3320,4096,2512, 0, 0, 0},  //TV = 8.23(40000 lines)  AV=2.97  SV=8.29  BV=2.91
    {3652,4096,2464, 0, 0, 0},  //TV = 8.10(44000 lines)  AV=2.97  SV=8.27  BV=2.80
    {3901,4096,2464, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=8.27  BV=2.71
    {4150,4096,2480, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=8.28  BV=2.61
    {4482,4096,2456, 0, 0, 0},  //TV = 7.80(54000 lines)  AV=2.97  SV=8.26  BV=2.51
    {4731,4096,2496, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=8.29  BV=2.41
    {5146,4096,2472, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=8.27  BV=2.30
    {5478,4096,2488, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=8.28  BV=2.20
    {5893,4096,2472, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=8.27  BV=2.11
    {6308,4096,2480, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=8.28  BV=2.00
    {6806,4096,2456, 0, 0, 0},  //TV = 7.20(82000 lines)  AV=2.97  SV=8.26  BV=1.91
    {7221,4096,2480, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=8.28  BV=1.81
    {7802,4096,2464, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=8.27  BV=1.71
    {8300,4096,2480, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.28  BV=1.61
    {8300,4096,2656, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.38  BV=1.51
    {8300,4096,2840, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.47  BV=1.41
    {8300,4096,3048, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.57  BV=1.31
    {8300,4096,3264, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.67  BV=1.21
    {8300,4096,3520, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.78  BV=1.10
    {8300,4096,3776, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.88  BV=1.00
    {8300,4096,4040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.98  BV=0.90
    {8300,4096,4328, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.08  BV=0.80
    {8300,4096,4640, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.18  BV=0.70
    {16683,4096,2472, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=8.27  BV=0.60
    {16683,4096,2648, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=8.37  BV=0.51
    {16683,4096,2840, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=8.47  BV=0.40
    {16683,4096,3040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=8.57  BV=0.31
    {16683,4096,3256, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=8.67  BV=0.21
    {16683,4096,3496, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=8.77  BV=0.10
    {24983,4096,2520, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=8.30  BV=-0.01
    {24983,4096,2696, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=8.40  BV=-0.10
    {24983,4096,2888, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=8.50  BV=-0.20
    {24983,4096,3096, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=8.60  BV=-0.30
    {33366,4096,2488, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.28  BV=-0.40
    {33366,4096,2664, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.38  BV=-0.50
    {33366,4096,2856, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.48  BV=-0.60
    {33366,4096,3056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.58  BV=-0.70
    {41666,4096,2624, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=8.36  BV=-0.80
    {41666,4096,2808, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=8.46  BV=-0.90
    {49966,4096,2512, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.29  BV=-1.00
    {49966,4096,2696, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.40  BV=-1.10
    {58349,4096,2472, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=8.27  BV=-1.20
    {58349,4096,2648, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=8.37  BV=-1.30
    {66649,4096,2488, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=8.28  BV=-1.40
    {66649,4096,2664, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=8.38  BV=-1.50
    {75032,4096,2536, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=8.31  BV=-1.60
    {75032,4096,2720, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=8.41  BV=-1.70
    {83332,4096,2624, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=8.36  BV=-1.80
    {91632,4096,2552, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=8.32  BV=-1.90
    {100015,4096,2512, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.29  BV=-2.00
    {108315,4096,2480, 0, 0, 0},  //TV = 3.21(1305000 lines)  AV=2.97  SV=8.28  BV=-2.10
    {116698,4096,2472, 0, 0, 0},  //TV = 3.10(1406000 lines)  AV=2.97  SV=8.27  BV=-2.20
    {124998,4096,2472, 0, 0, 0},  //TV = 3.00(1506000 lines)  AV=2.97  SV=8.27  BV=-2.30
    {133298,4096,2480, 0, 0, 0},  //TV = 2.91(1606000 lines)  AV=2.97  SV=8.28  BV=-2.40
    {141681,4096,2504, 0, 0, 0},  //TV = 2.82(1707000 lines)  AV=2.97  SV=8.29  BV=-2.50
    {149981,4096,2536, 0, 0, 0},  //TV = 2.74(1807000 lines)  AV=2.97  SV=8.31  BV=-2.60
    {158364,4096,2576, 0, 0, 0},  //TV = 2.66(1908000 lines)  AV=2.97  SV=8.33  BV=-2.70
    {174964,4096,2496, 0, 0, 0},  //TV = 2.51(2108000 lines)  AV=2.97  SV=8.29  BV=-2.80
    {183347,4096,2552, 0, 0, 0},  //TV = 2.45(2209000 lines)  AV=2.97  SV=8.32  BV=-2.90
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {498,1408,1080, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.54  BV=8.41
    {498,1536,1064, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.64  BV=8.30
    {498,1664,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.73  BV=8.21
    {498,1792,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.83  BV=8.11
    {498,1920,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.93  BV=8.01
    {498,2048,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.03  BV=7.91
    {498,2176,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.13  BV=7.81
    {498,2304,1072, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.24  BV=7.71
    {498,2560,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.33  BV=7.61
    {498,2688,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.43  BV=7.52
    {498,2944,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.53  BV=7.41
    {498,3072,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.63  BV=7.31
    {498,3328,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.73  BV=7.21
    {498,3584,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.83  BV=7.11
    {498,3840,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.93  BV=7.01
    {498,4096,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.03  BV=6.91
    {498,4096,1120, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.13  BV=6.81
    {498,4096,1200, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.23  BV=6.71
    {498,4096,1288, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.33  BV=6.61
    {498,4096,1376, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.43  BV=6.52
    {498,4096,1488, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.54  BV=6.40
    {498,4096,1592, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.64  BV=6.31
    {498,4096,1704, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.73  BV=6.21
    {498,4096,1832, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.84  BV=6.10
    {498,4096,1960, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.94  BV=6.01
    {498,4096,2096, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.03  BV=5.91
    {498,4096,2248, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.13  BV=5.81
    {498,4096,2408, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.23  BV=5.71
    {498,4096,2584, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.34  BV=5.61
    {498,4096,2760, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.43  BV=5.51
    {581,4096,2544, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=8.31  BV=5.41
    {581,4096,2736, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=8.42  BV=5.30
    {664,4096,2552, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=8.32  BV=5.21
    {664,4096,2744, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=8.42  BV=5.11
    {747,4096,2608, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=8.35  BV=5.01
    {830,4096,2520, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=8.30  BV=4.91
    {830,4096,2688, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=8.39  BV=4.81
    {913,4096,2624, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=8.36  BV=4.71
    {996,4096,2584, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=8.34  BV=4.61
    {1079,4096,2560, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=8.32  BV=4.51
    {1162,4096,2552, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=8.32  BV=4.40
    {1245,4096,2536, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=8.31  BV=4.31
    {1328,4096,2560, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=8.32  BV=4.21
    {1411,4096,2576, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=8.33  BV=4.11
    {1577,4096,2472, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=8.27  BV=4.01
    {1660,4096,2512, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=8.29  BV=3.91
    {1826,4096,2456, 0, 0, 0},  //TV = 9.10(22000 lines)  AV=2.97  SV=8.26  BV=3.81
    {1909,4096,2512, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=8.29  BV=3.71
    {2075,4096,2472, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=8.27  BV=3.61
    {2241,4096,2464, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=8.27  BV=3.51
    {2324,4096,2544, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=8.31  BV=3.41
    {2490,4096,2536, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=8.31  BV=3.31
    {2739,4096,2488, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=8.28  BV=3.20
    {2905,4096,2504, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=8.29  BV=3.11
    {3154,4096,2472, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=8.27  BV=3.01
    {3320,4096,2512, 0, 0, 0},  //TV = 8.23(40000 lines)  AV=2.97  SV=8.29  BV=2.91
    {3652,4096,2464, 0, 0, 0},  //TV = 8.10(44000 lines)  AV=2.97  SV=8.27  BV=2.80
    {3901,4096,2464, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=8.27  BV=2.71
    {4150,4096,2480, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=8.28  BV=2.61
    {4482,4096,2456, 0, 0, 0},  //TV = 7.80(54000 lines)  AV=2.97  SV=8.26  BV=2.51
    {4731,4096,2496, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=8.29  BV=2.41
    {5146,4096,2472, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=8.27  BV=2.30
    {5478,4096,2488, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=8.28  BV=2.20
    {5893,4096,2472, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=8.27  BV=2.11
    {6308,4096,2480, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=8.28  BV=2.00
    {6806,4096,2456, 0, 0, 0},  //TV = 7.20(82000 lines)  AV=2.97  SV=8.26  BV=1.91
    {7221,4096,2480, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=8.28  BV=1.81
    {7802,4096,2464, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=8.27  BV=1.71
    {8300,4096,2480, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=8.28  BV=1.61
    {8964,4096,2456, 0, 0, 0},  //TV = 6.80(108000 lines)  AV=2.97  SV=8.26  BV=1.51
    {9545,4096,2472, 0, 0, 0},  //TV = 6.71(115000 lines)  AV=2.97  SV=8.27  BV=1.41
    {9960,4096,2536, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=8.31  BV=1.31
    {9960,4096,2736, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=8.42  BV=1.20
    {9960,4096,2936, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=8.52  BV=1.10
    {9960,4096,3144, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=8.62  BV=1.00
    {9960,4096,3368, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=8.72  BV=0.90
    {9960,4096,3608, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=8.82  BV=0.80
    {9960,4096,3864, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=8.92  BV=0.70
    {9960,4096,4144, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=9.02  BV=0.60
    {9960,4096,4440, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=9.12  BV=0.50
    {9960,4096,4760, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=9.22  BV=0.40
    {20003,4096,2536, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=8.31  BV=0.31
    {20003,4096,2720, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=8.41  BV=0.21
    {20003,4096,2912, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=8.51  BV=0.11
    {20003,4096,3144, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=8.62  BV=-0.00
    {20003,4096,3368, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=8.72  BV=-0.10
    {20003,4096,3608, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=8.82  BV=-0.20
    {29963,4096,2584, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.34  BV=-0.30
    {29963,4096,2768, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.43  BV=-0.40
    {29963,4096,2968, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.54  BV=-0.50
    {29963,4096,3176, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.63  BV=-0.60
    {40006,4096,2552, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=8.32  BV=-0.70
    {40006,4096,2736, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=8.42  BV=-0.80
    {40006,4096,2928, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=8.52  BV=-0.90
    {49966,4096,2512, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.29  BV=-1.00
    {49966,4096,2696, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.40  BV=-1.10
    {49966,4096,2888, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.50  BV=-1.20
    {60009,4096,2576, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.33  BV=-1.30
    {60009,4096,2760, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.43  BV=-1.40
    {69969,4096,2536, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=8.31  BV=-1.50
    {69969,4096,2720, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=8.41  BV=-1.60
    {80012,4096,2544, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=8.31  BV=-1.70
    {80012,4096,2728, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=8.41  BV=-1.80
    {89972,4096,2600, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=8.34  BV=-1.90
    {100015,4096,2512, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.29  BV=-2.00
    {100015,4096,2688, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.39  BV=-2.10
    {109975,4096,2624, 0, 0, 0},  //TV = 3.18(1325000 lines)  AV=2.97  SV=8.36  BV=-2.20
    {120018,4096,2576, 0, 0, 0},  //TV = 3.06(1446000 lines)  AV=2.97  SV=8.33  BV=-2.30
    {129978,4096,2544, 0, 0, 0},  //TV = 2.94(1566000 lines)  AV=2.97  SV=8.31  BV=-2.40
    {140021,4096,2536, 0, 0, 0},  //TV = 2.84(1687000 lines)  AV=2.97  SV=8.31  BV=-2.50
    {149981,4096,2536, 0, 0, 0},  //TV = 2.74(1807000 lines)  AV=2.97  SV=8.31  BV=-2.60
    {160024,4096,2544, 0, 0, 0},  //TV = 2.64(1928000 lines)  AV=2.97  SV=8.31  BV=-2.70
    {169984,4096,2568, 0, 0, 0},  //TV = 2.56(2048000 lines)  AV=2.97  SV=8.33  BV=-2.80
    {189987,4096,2464, 0, 0, 0},  //TV = 2.40(2289000 lines)  AV=2.97  SV=8.27  BV=-2.90
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    140,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -29,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {498,1408,1080, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.54  BV=8.41
    {498,1536,1064, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.64  BV=8.30
    {498,1664,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.73  BV=8.21
    {498,1792,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.83  BV=8.11
    {498,1920,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.93  BV=8.01
    {498,2048,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.03  BV=7.91
    {498,2176,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.13  BV=7.81
    {498,2304,1072, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.24  BV=7.71
    {498,2560,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.33  BV=7.61
    {498,2688,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.43  BV=7.52
    {498,2944,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.53  BV=7.41
    {498,3072,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.63  BV=7.31
    {498,3328,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.73  BV=7.21
    {498,3584,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.83  BV=7.11
    {498,3840,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.93  BV=7.01
    {498,4096,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.03  BV=6.91
    {498,4096,1120, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.13  BV=6.81
    {498,4096,1200, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.23  BV=6.71
    {498,4096,1288, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.33  BV=6.61
    {498,4096,1376, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.43  BV=6.52
    {498,4096,1488, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.54  BV=6.40
    {498,4096,1592, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.64  BV=6.31
    {498,4096,1704, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.73  BV=6.21
    {498,4096,1832, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.84  BV=6.10
    {498,4096,1960, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.94  BV=6.01
    {498,4096,2096, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.03  BV=5.91
    {498,4096,2248, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.13  BV=5.81
    {498,4096,2408, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.23  BV=5.71
    {498,4096,2576, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.33  BV=5.61
    {498,4096,2768, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.43  BV=5.51
    {498,4096,2960, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.53  BV=5.41
    {498,4096,3176, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.63  BV=5.31
    {498,4096,3400, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.73  BV=5.21
    {498,4096,3672, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.84  BV=5.10
    {498,4096,3928, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.94  BV=5.00
    {498,4096,4208, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=9.04  BV=4.90
    {498,4096,4512, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=9.14  BV=4.80
    {498,4096,4832, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=9.24  BV=4.70
    {498,4096,5176, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=9.34  BV=4.60
    {498,4096,5528, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=9.43  BV=4.51
    {581,4096,5096, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=9.32  BV=4.40
    {581,4096,5464, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=9.42  BV=4.30
    {664,4096,5112, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=9.32  BV=4.21
    {664,4096,5496, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=9.42  BV=4.10
    {747,4096,5216, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=9.35  BV=4.01
    {830,4096,5048, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=9.30  BV=3.90
    {830,4096,5384, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=9.39  BV=3.81
    {913,4096,5248, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=9.36  BV=3.71
    {996,4096,5160, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=9.33  BV=3.61
    {1079,4096,5120, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=9.32  BV=3.51
    {1162,4096,5104, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=9.32  BV=3.40
    {1245,4096,5080, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=9.31  BV=3.31
    {1328,4096,5128, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=9.32  BV=3.20
    {1411,4096,5152, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=9.33  BV=3.11
    {1577,4096,4952, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=9.27  BV=3.01
    {1660,4096,5032, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=9.30  BV=2.91
    {1826,4096,4920, 0, 0, 0},  //TV = 9.10(22000 lines)  AV=2.97  SV=9.26  BV=2.80
    {1909,4096,5032, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=9.30  BV=2.71
    {2075,4096,4952, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=9.27  BV=2.61
    {2241,4096,4936, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=9.27  BV=2.50
    {2324,4096,5088, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=9.31  BV=2.41
    {2490,4096,5080, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=9.31  BV=2.31
    {2739,4096,4976, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=9.28  BV=2.20
    {2905,4096,5016, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=9.29  BV=2.11
    {3154,4096,4944, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=9.27  BV=2.01
    {3320,4096,5032, 0, 0, 0},  //TV = 8.23(40000 lines)  AV=2.97  SV=9.30  BV=1.91
    {3652,4096,4928, 0, 0, 0},  //TV = 8.10(44000 lines)  AV=2.97  SV=9.27  BV=1.80
    {3901,4096,4936, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=9.27  BV=1.70
    {4150,4096,4968, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=9.28  BV=1.61
    {4482,4096,4920, 0, 0, 0},  //TV = 7.80(54000 lines)  AV=2.97  SV=9.26  BV=1.51
    {4731,4096,4992, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=9.29  BV=1.41
    {5146,4096,4944, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=9.27  BV=1.30
    {5478,4096,4976, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=9.28  BV=1.20
    {5893,4096,4952, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=9.27  BV=1.10
    {6308,4096,4960, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=9.28  BV=1.00
    {6806,4096,4920, 0, 0, 0},  //TV = 7.20(82000 lines)  AV=2.97  SV=9.26  BV=0.91
    {7221,4096,4968, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=9.28  BV=0.81
    {7802,4096,4928, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=9.27  BV=0.71
    {8300,4096,4960, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.28  BV=0.61
    {8300,4096,5312, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.38  BV=0.51
    {8300,4096,5688, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.47  BV=0.41
    {8300,4096,6096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.57  BV=0.31
    {8300,4096,6528, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.67  BV=0.21
    {8300,4096,7048, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.78  BV=0.10
    {8300,4096,7600, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.89  BV=-0.01
    {8300,4096,8144, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.99  BV=-0.11
    {8300,4096,8728, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=10.09  BV=-0.21
    {8300,4096,9352, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=10.19  BV=-0.31
    {16683,4096,4984, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=9.28  BV=-0.41
    {16683,4096,5336, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=9.38  BV=-0.51
    {16683,4096,5720, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=9.48  BV=-0.61
    {16683,4096,6128, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=9.58  BV=-0.70
    {16683,4096,6568, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=9.68  BV=-0.80
    {16683,4096,7040, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=9.78  BV=-0.91
    {24983,4096,5032, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=9.30  BV=-1.00
    {24983,4096,5392, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=9.40  BV=-1.10
    {24983,4096,5784, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=9.50  BV=-1.20
    {24983,4096,6200, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=9.60  BV=-1.30
    {33366,4096,4968, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=9.28  BV=-1.40
    {33366,4096,5328, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=9.38  BV=-1.50
    {33366,4096,5712, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=9.48  BV=-1.60
    {33366,4096,6120, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=9.58  BV=-1.70
    {41666,4096,5248, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=9.36  BV=-1.80
    {41666,4096,5624, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=9.46  BV=-1.90
    {49966,4096,5024, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=9.29  BV=-2.00
    {49966,4096,5392, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=9.40  BV=-2.10
    {58349,4096,4944, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=9.27  BV=-2.20
    {58349,4096,5296, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=9.37  BV=-2.30
    {66649,4096,4968, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=9.28  BV=-2.40
    {66649,4096,5328, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=9.38  BV=-2.50
    {75032,4096,5072, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=9.31  BV=-2.60
    {75032,4096,5440, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=9.41  BV=-2.70
    {83332,4096,5248, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=9.36  BV=-2.80
    {91632,4096,5112, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=9.32  BV=-2.90
    {100015,4096,5024, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.29  BV=-3.00
    {108315,4096,4968, 0, 0, 0},  //TV = 3.21(1305000 lines)  AV=2.97  SV=9.28  BV=-3.10
    {116698,4096,4944, 0, 0, 0},  //TV = 3.10(1406000 lines)  AV=2.97  SV=9.27  BV=-3.20
    {124998,4096,4944, 0, 0, 0},  //TV = 3.00(1506000 lines)  AV=2.97  SV=9.27  BV=-3.30
    {133298,4096,4968, 0, 0, 0},  //TV = 2.91(1606000 lines)  AV=2.97  SV=9.28  BV=-3.40
    {141681,4096,5008, 0, 0, 0},  //TV = 2.82(1707000 lines)  AV=2.97  SV=9.29  BV=-3.50
    {149981,4096,5072, 0, 0, 0},  //TV = 2.74(1807000 lines)  AV=2.97  SV=9.31  BV=-3.60
    {158364,4096,5152, 0, 0, 0},  //TV = 2.66(1908000 lines)  AV=2.97  SV=9.33  BV=-3.70
    {174964,4096,4992, 0, 0, 0},  //TV = 2.51(2108000 lines)  AV=2.97  SV=9.29  BV=-3.80
    {183347,4096,5112, 0, 0, 0},  //TV = 2.45(2209000 lines)  AV=2.97  SV=9.32  BV=-3.90
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {498,1408,1080, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.54  BV=8.41
    {498,1536,1064, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.64  BV=8.30
    {498,1664,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.73  BV=8.21
    {498,1792,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.83  BV=8.11
    {498,1920,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.93  BV=8.01
    {498,2048,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.03  BV=7.91
    {498,2176,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.13  BV=7.81
    {498,2304,1072, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.24  BV=7.71
    {498,2560,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.33  BV=7.61
    {498,2688,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.43  BV=7.52
    {498,2944,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.53  BV=7.41
    {498,3072,1056, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.63  BV=7.31
    {498,3328,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.73  BV=7.21
    {498,3584,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.83  BV=7.11
    {498,3840,1040, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=6.93  BV=7.01
    {498,4096,1048, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.03  BV=6.91
    {498,4096,1120, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.13  BV=6.81
    {498,4096,1200, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.23  BV=6.71
    {498,4096,1288, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.33  BV=6.61
    {498,4096,1376, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.43  BV=6.52
    {498,4096,1488, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.54  BV=6.40
    {498,4096,1592, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.64  BV=6.31
    {498,4096,1704, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.73  BV=6.21
    {498,4096,1832, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.84  BV=6.10
    {498,4096,1960, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=7.94  BV=6.01
    {498,4096,2096, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.03  BV=5.91
    {498,4096,2248, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.13  BV=5.81
    {498,4096,2408, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.23  BV=5.71
    {498,4096,2576, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.33  BV=5.61
    {498,4096,2768, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.43  BV=5.51
    {498,4096,2960, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.53  BV=5.41
    {498,4096,3176, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.63  BV=5.31
    {498,4096,3400, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.73  BV=5.21
    {498,4096,3672, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.84  BV=5.10
    {498,4096,3928, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=8.94  BV=5.00
    {498,4096,4208, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=9.04  BV=4.90
    {498,4096,4512, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=9.14  BV=4.80
    {498,4096,4832, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=9.24  BV=4.70
    {498,4096,5176, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=9.34  BV=4.60
    {498,4096,5528, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=9.43  BV=4.51
    {581,4096,5096, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=9.32  BV=4.40
    {581,4096,5464, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=9.42  BV=4.30
    {664,4096,5112, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=9.32  BV=4.21
    {664,4096,5496, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=9.42  BV=4.10
    {747,4096,5216, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=9.35  BV=4.01
    {830,4096,5048, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=9.30  BV=3.90
    {830,4096,5384, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=9.39  BV=3.81
    {913,4096,5248, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=9.36  BV=3.71
    {996,4096,5160, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=9.33  BV=3.61
    {1079,4096,5120, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=9.32  BV=3.51
    {1162,4096,5104, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=9.32  BV=3.40
    {1245,4096,5080, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=9.31  BV=3.31
    {1328,4096,5128, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=9.32  BV=3.20
    {1411,4096,5152, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=9.33  BV=3.11
    {1577,4096,4952, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=9.27  BV=3.01
    {1660,4096,5032, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=9.30  BV=2.91
    {1826,4096,4920, 0, 0, 0},  //TV = 9.10(22000 lines)  AV=2.97  SV=9.26  BV=2.80
    {1909,4096,5032, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=9.30  BV=2.71
    {2075,4096,4952, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=9.27  BV=2.61
    {2241,4096,4936, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=9.27  BV=2.50
    {2324,4096,5088, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=9.31  BV=2.41
    {2490,4096,5080, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=9.31  BV=2.31
    {2739,4096,4976, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=9.28  BV=2.20
    {2905,4096,5016, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=9.29  BV=2.11
    {3154,4096,4944, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=9.27  BV=2.01
    {3320,4096,5032, 0, 0, 0},  //TV = 8.23(40000 lines)  AV=2.97  SV=9.30  BV=1.91
    {3652,4096,4928, 0, 0, 0},  //TV = 8.10(44000 lines)  AV=2.97  SV=9.27  BV=1.80
    {3901,4096,4936, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=9.27  BV=1.70
    {4150,4096,4968, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=9.28  BV=1.61
    {4482,4096,4920, 0, 0, 0},  //TV = 7.80(54000 lines)  AV=2.97  SV=9.26  BV=1.51
    {4731,4096,4992, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=9.29  BV=1.41
    {5146,4096,4944, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=9.27  BV=1.30
    {5478,4096,4976, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=9.28  BV=1.20
    {5893,4096,4952, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=9.27  BV=1.10
    {6308,4096,4960, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=9.28  BV=1.00
    {6806,4096,4920, 0, 0, 0},  //TV = 7.20(82000 lines)  AV=2.97  SV=9.26  BV=0.91
    {7221,4096,4968, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=9.28  BV=0.81
    {7802,4096,4928, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=9.27  BV=0.71
    {8300,4096,4960, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=9.28  BV=0.61
    {8964,4096,4920, 0, 0, 0},  //TV = 6.80(108000 lines)  AV=2.97  SV=9.26  BV=0.51
    {9545,4096,4944, 0, 0, 0},  //TV = 6.71(115000 lines)  AV=2.97  SV=9.27  BV=0.41
    {9960,4096,5080, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=9.31  BV=0.31
    {9960,4096,5440, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=9.41  BV=0.21
    {9960,4096,5872, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=9.52  BV=0.10
    {9960,4096,6336, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=9.63  BV=-0.01
    {9960,4096,6784, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=9.73  BV=-0.11
    {9960,4096,7272, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=9.83  BV=-0.21
    {9960,4096,7792, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=9.93  BV=-0.31
    {9960,4096,8344, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=10.03  BV=-0.41
    {9960,4096,8944, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=10.13  BV=-0.51
    {9960,4096,9584, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=10.23  BV=-0.61
    {20003,4096,5112, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=9.32  BV=-0.71
    {20003,4096,5480, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=9.42  BV=-0.81
    {20003,4096,5872, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=9.52  BV=-0.91
    {20003,4096,6288, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=9.62  BV=-1.00
    {20003,4096,6736, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=9.72  BV=-1.10
    {20003,4096,7224, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=9.82  BV=-1.20
    {29963,4096,5168, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=9.34  BV=-1.30
    {29963,4096,5536, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=9.43  BV=-1.40
    {29963,4096,5936, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=9.54  BV=-1.50
    {29963,4096,6360, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=9.63  BV=-1.60
    {40006,4096,5104, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=9.32  BV=-1.70
    {40006,4096,5472, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=9.42  BV=-1.80
    {40006,4096,5864, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=9.52  BV=-1.90
    {49966,4096,5024, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=9.29  BV=-2.00
    {49966,4096,5392, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=9.40  BV=-2.10
    {49966,4096,5776, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=9.50  BV=-2.20
    {60009,4096,5152, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=9.33  BV=-2.30
    {60009,4096,5520, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=9.43  BV=-2.40
    {69969,4096,5072, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=9.31  BV=-2.50
    {69969,4096,5440, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=9.41  BV=-2.60
    {80012,4096,5096, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=9.32  BV=-2.70
    {80012,4096,5464, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=9.42  BV=-2.80
    {89972,4096,5208, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=9.35  BV=-2.90
    {100015,4096,5024, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.29  BV=-3.00
    {100015,4096,5384, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.39  BV=-3.10
    {109975,4096,5240, 0, 0, 0},  //TV = 3.18(1325000 lines)  AV=2.97  SV=9.36  BV=-3.20
    {120018,4096,5152, 0, 0, 0},  //TV = 3.06(1446000 lines)  AV=2.97  SV=9.33  BV=-3.30
    {129978,4096,5096, 0, 0, 0},  //TV = 2.94(1566000 lines)  AV=2.97  SV=9.32  BV=-3.40
    {140021,4096,5072, 0, 0, 0},  //TV = 2.84(1687000 lines)  AV=2.97  SV=9.31  BV=-3.50
    {149981,4096,5072, 0, 0, 0},  //TV = 2.74(1807000 lines)  AV=2.97  SV=9.31  BV=-3.60
    {160024,4096,5096, 0, 0, 0},  //TV = 2.64(1928000 lines)  AV=2.97  SV=9.32  BV=-3.70
    {169984,4096,5144, 0, 0, 0},  //TV = 2.56(2048000 lines)  AV=2.97  SV=9.33  BV=-3.80
    {189987,4096,4928, 0, 0, 0},  //TV = 2.40(2289000 lines)  AV=2.97  SV=9.27  BV=-3.90
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    150,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -39,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.38  BV=3.50
    {16683,1408,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.46  BV=3.42
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {24983,1152,1104, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.28  BV=3.02
    {24983,1280,1072, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.39  BV=2.91
    {24983,1408,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.48  BV=2.81
    {24983,1536,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.58  BV=2.71
    {33366,1152,1088, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.26  BV=2.62
    {33366,1280,1056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.37  BV=2.51
    {33366,1408,1024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.46  BV=2.42
    {33366,1408,1104, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.57  BV=2.31
    {41666,1280,1040, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=5.34  BV=2.21
    {41666,1408,1024, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=5.46  BV=2.10
    {49966,1152,1104, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.28  BV=2.02
    {49966,1280,1072, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.39  BV=1.91
    {49966,1408,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.48  BV=1.81
    {58349,1280,1056, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.37  BV=1.70
    {66649,1152,1096, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.27  BV=1.61
    {66649,1280,1064, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.38  BV=1.50
    {66649,1408,1032, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.47  BV=1.41
    {66649,1408,1104, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.57  BV=1.31
    {66649,1536,1088, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.67  BV=1.21
    {66649,1664,1072, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.77  BV=1.11
    {66649,1792,1072, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.87  BV=1.00
    {66649,1920,1064, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.96  BV=0.92
    {66649,2048,1080, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.08  BV=0.80
    {66649,2304,1024, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.17  BV=0.71
    {66649,2432,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.27  BV=0.61
    {66649,2560,1056, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.37  BV=0.51
    {66649,2816,1032, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.47  BV=0.41
    {66649,2944,1056, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.57  BV=0.31
    {66649,3200,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.67  BV=0.21
    {66649,3456,1032, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.77  BV=0.11
    {66649,3712,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.88  BV=-0.00
    {66649,3968,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.98  BV=-0.10
    {66649,4096,1080, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=7.08  BV=-0.20
    {75032,4096,1024, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=7.00  BV=-0.29
    {75032,4096,1104, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83332,4096,1064, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=7.06  BV=-0.50
    {91632,4096,1032, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=7.01  BV=-0.59
    {91632,4096,1112, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100015,4096,1096, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.10  BV=-0.81
    {100015,4096,1168, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100015,4096,1256, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.29  BV=-1.00
    {100015,4096,1344, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.39  BV=-1.10
    {100015,4096,1448, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.50  BV=-1.21
    {100015,4096,1552, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.60  BV=-1.31
    {100015,4096,1664, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.70  BV=-1.41
    {100015,4096,1776, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.79  BV=-1.50
    {100015,4096,1904, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.89  BV=-1.60
    {100015,4096,2040, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.99  BV=-1.70
    {100015,4096,2184, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.09  BV=-1.80
    {100015,4096,2344, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.19  BV=-1.90
    {100015,4096,2512, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.29  BV=-2.00
    {100015,4096,2688, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.39  BV=-2.10
    {100015,4096,2880, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.49  BV=-2.20
    {100015,4096,3104, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.60  BV=-2.31
    {100015,4096,3328, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.70  BV=-2.41
    {100015,4096,3568, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.80  BV=-2.51
    {100015,4096,3816, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.90  BV=-2.61
    {100015,4096,4096, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.00  BV=-2.71
    {100015,4096,4384, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.10  BV=-2.81
    {100015,4096,4696, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.20  BV=-2.90
    {100015,4096,5032, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.30  BV=-3.00
    {100015,4096,5392, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.40  BV=-3.10
    {100015,4096,5784, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.50  BV=-3.21
    {100015,4096,6200, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.60  BV=-3.31
    {100015,4096,6640, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.70  BV=-3.40
    {100015,4096,7112, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.80  BV=-3.50
    {100015,4096,7624, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.90  BV=-3.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {20003,1280,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.32  BV=3.29
    {20003,1280,1088, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.41  BV=3.21
    {20003,1408,1056, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.50  BV=3.11
    {20003,1536,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.61  BV=3.01
    {20003,1664,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.70  BV=2.91
    {20003,1792,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.81  BV=2.81
    {29963,1280,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.32  BV=2.71
    {29963,1280,1096, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.42  BV=2.61
    {29963,1408,1064, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.51  BV=2.52
    {29963,1536,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.62  BV=2.41
    {40006,1152,1128, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.31  BV=2.31
    {40006,1280,1088, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.41  BV=2.21
    {40006,1408,1056, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.50  BV=2.11
    {49966,1152,1104, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.28  BV=2.02
    {49966,1280,1072, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.39  BV=1.91
    {49966,1408,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.48  BV=1.81
    {60009,1280,1024, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.32  BV=1.71
    {60009,1280,1096, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.42  BV=1.61
    {60009,1408,1064, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.51  BV=1.51
    {60009,1536,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.62  BV=1.41
    {60009,1664,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.71  BV=1.32
    {60009,1792,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.82  BV=1.21
    {60009,1920,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.93  BV=1.10
    {60009,2048,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.02  BV=1.01
    {60009,2176,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.12  BV=0.91
    {60009,2304,1064, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.23  BV=0.80
    {60009,2560,1024, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.32  BV=0.71
    {60009,2688,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.41  BV=0.61
    {60009,2816,1064, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.51  BV=0.51
    {60009,3072,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.62  BV=0.41
    {60009,3328,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.72  BV=0.31
    {60009,3584,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.82  BV=0.21
    {60009,3840,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.92  BV=0.11
    {60009,4096,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=7.03  BV=-0.00
    {60009,4096,1120, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=7.13  BV=-0.10
    {69969,4096,1032, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=7.01  BV=-0.20
    {69969,4096,1104, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=7.11  BV=-0.30
    {80012,4096,1032, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=7.01  BV=-0.40
    {80012,4096,1104, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=7.11  BV=-0.49
    {89972,4096,1056, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=7.04  BV=-0.60
    {89972,4096,1128, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=7.14  BV=-0.69
    {100015,4096,1096, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.10  BV=-0.81
    {100015,4096,1168, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100015,4096,1256, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.29  BV=-1.00
    {100015,4096,1344, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.39  BV=-1.10
    {100015,4096,1448, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.50  BV=-1.21
    {100015,4096,1552, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.60  BV=-1.31
    {100015,4096,1664, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.70  BV=-1.41
    {100015,4096,1776, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.79  BV=-1.50
    {100015,4096,1904, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.89  BV=-1.60
    {100015,4096,2040, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.99  BV=-1.70
    {100015,4096,2184, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.09  BV=-1.80
    {100015,4096,2344, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.19  BV=-1.90
    {100015,4096,2512, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.29  BV=-2.00
    {100015,4096,2688, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.39  BV=-2.10
    {100015,4096,2880, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.49  BV=-2.20
    {100015,4096,3104, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.60  BV=-2.31
    {100015,4096,3328, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.70  BV=-2.41
    {100015,4096,3568, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.80  BV=-2.51
    {100015,4096,3816, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=8.90  BV=-2.61
    {100015,4096,4096, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.00  BV=-2.71
    {100015,4096,4384, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.10  BV=-2.81
    {100015,4096,4696, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.20  BV=-2.90
    {100015,4096,5032, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.30  BV=-3.00
    {100015,4096,5392, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.40  BV=-3.10
    {100015,4096,5784, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.50  BV=-3.21
    {100015,4096,6200, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.60  BV=-3.31
    {100015,4096,6640, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.70  BV=-3.40
    {100015,4096,7112, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.80  BV=-3.50
    {100015,4096,7624, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.90  BV=-3.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    147,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -36,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.38  BV=3.50
    {16683,1408,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.46  BV=3.42
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {24983,1152,1104, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.28  BV=3.02
    {24983,1280,1072, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.39  BV=2.91
    {24983,1408,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.48  BV=2.81
    {24983,1536,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.58  BV=2.71
    {33366,1152,1088, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.26  BV=2.62
    {33366,1280,1056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.37  BV=2.51
    {33366,1408,1024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.46  BV=2.42
    {33366,1408,1104, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.57  BV=2.31
    {41666,1280,1040, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=5.34  BV=2.21
    {41666,1408,1024, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=5.46  BV=2.10
    {49966,1152,1104, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.28  BV=2.02
    {49966,1280,1072, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.39  BV=1.91
    {49966,1408,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.48  BV=1.81
    {58349,1280,1056, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=5.37  BV=1.70
    {66649,1152,1096, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.27  BV=1.61
    {66649,1280,1064, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.38  BV=1.50
    {66649,1408,1032, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.47  BV=1.41
    {66649,1408,1104, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.57  BV=1.31
    {66649,1536,1088, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.67  BV=1.21
    {66649,1664,1072, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.77  BV=1.11
    {66649,1792,1072, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.87  BV=1.00
    {66649,1920,1064, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=5.96  BV=0.92
    {66649,2048,1080, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.08  BV=0.80
    {66649,2304,1024, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.17  BV=0.71
    {66649,2432,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.27  BV=0.61
    {66649,2560,1056, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.37  BV=0.51
    {66649,2816,1032, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.47  BV=0.41
    {66649,2944,1056, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.57  BV=0.31
    {66649,3200,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.67  BV=0.21
    {66649,3456,1032, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.77  BV=0.11
    {66649,3712,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.88  BV=-0.00
    {66649,3968,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.98  BV=-0.10
    {66649,4096,1080, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=7.08  BV=-0.20
    {75032,4096,1024, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=7.00  BV=-0.29
    {75032,4096,1104, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83332,4096,1064, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=7.06  BV=-0.50
    {91632,4096,1032, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=7.01  BV=-0.59
    {91632,4096,1112, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100015,4096,1088, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.09  BV=-0.79
    {108315,4096,1080, 0, 0, 0},  //TV = 3.21(1305000 lines)  AV=2.97  SV=7.08  BV=-0.90
    {116698,4096,1072, 0, 0, 0},  //TV = 3.10(1406000 lines)  AV=2.97  SV=7.07  BV=-1.00
    {124998,4096,1072, 0, 0, 0},  //TV = 3.00(1506000 lines)  AV=2.97  SV=7.07  BV=-1.10
    {133298,4096,1080, 0, 0, 0},  //TV = 2.91(1606000 lines)  AV=2.97  SV=7.08  BV=-1.20
    {149981,4096,1024, 0, 0, 0},  //TV = 2.74(1807000 lines)  AV=2.97  SV=7.00  BV=-1.29
    {158364,4096,1040, 0, 0, 0},  //TV = 2.66(1908000 lines)  AV=2.97  SV=7.02  BV=-1.39
    {166664,4096,1064, 0, 0, 0},  //TV = 2.58(2008000 lines)  AV=2.97  SV=7.06  BV=-1.50
    {183347,4096,1032, 0, 0, 0},  //TV = 2.45(2209000 lines)  AV=2.97  SV=7.01  BV=-1.59
    {191647,4096,1064, 0, 0, 0},  //TV = 2.38(2309000 lines)  AV=2.97  SV=7.06  BV=-1.70
    {200030,4096,1096, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.10  BV=-1.81
    {200030,4096,1168, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.19  BV=-1.90
    {200030,4096,1256, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.29  BV=-2.00
    {200030,4096,1344, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.39  BV=-2.10
    {200030,4096,1448, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.50  BV=-2.21
    {200030,4096,1552, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.60  BV=-2.31
    {200030,4096,1664, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.70  BV=-2.41
    {200030,4096,1776, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.79  BV=-2.50
    {200030,4096,1904, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.89  BV=-2.60
    {200030,4096,2040, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.99  BV=-2.70
    {200030,4096,2184, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.09  BV=-2.80
    {200030,4096,2344, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.19  BV=-2.90
    {200030,4096,2512, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.29  BV=-3.00
    {200030,4096,2688, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.39  BV=-3.10
    {200030,4096,2880, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.49  BV=-3.20
    {200030,4096,3104, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.60  BV=-3.31
    {200030,4096,3328, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.70  BV=-3.41
    {200030,4096,3568, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.80  BV=-3.51
    {200030,4096,3816, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.90  BV=-3.61
    {200030,4096,4096, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.00  BV=-3.71
    {200030,4096,4384, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.10  BV=-3.81
    {200030,4096,4696, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.20  BV=-3.90
    {200030,4096,5032, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.30  BV=-4.00
    {200030,4096,5392, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.40  BV=-4.10
    {200030,4096,5784, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.50  BV=-4.21
    {200030,4096,6200, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.60  BV=-4.31
    {200030,4096,6640, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.70  BV=-4.40
    {200030,4096,7112, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.80  BV=-4.50
    {200030,4096,7624, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.90  BV=-4.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {20003,1280,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.32  BV=3.29
    {20003,1280,1088, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.41  BV=3.21
    {20003,1408,1056, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.50  BV=3.11
    {20003,1536,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.61  BV=3.01
    {20003,1664,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.70  BV=2.91
    {20003,1792,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.81  BV=2.81
    {29963,1280,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.32  BV=2.71
    {29963,1280,1096, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.42  BV=2.61
    {29963,1408,1064, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.51  BV=2.52
    {29963,1536,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.62  BV=2.41
    {40006,1152,1128, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.31  BV=2.31
    {40006,1280,1088, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.41  BV=2.21
    {40006,1408,1056, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=5.50  BV=2.11
    {49966,1152,1104, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.28  BV=2.02
    {49966,1280,1072, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.39  BV=1.91
    {49966,1408,1040, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=5.48  BV=1.81
    {60009,1280,1024, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.32  BV=1.71
    {60009,1280,1096, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.42  BV=1.61
    {60009,1408,1064, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.51  BV=1.51
    {60009,1536,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.62  BV=1.41
    {60009,1664,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.71  BV=1.32
    {60009,1792,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.82  BV=1.21
    {60009,1920,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=5.93  BV=1.10
    {60009,2048,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.02  BV=1.01
    {60009,2176,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.12  BV=0.91
    {60009,2304,1064, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.23  BV=0.80
    {60009,2560,1024, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.32  BV=0.71
    {60009,2688,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.41  BV=0.61
    {60009,2816,1064, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.51  BV=0.51
    {60009,3072,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.62  BV=0.41
    {60009,3328,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.72  BV=0.31
    {60009,3584,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.82  BV=0.21
    {60009,3840,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.92  BV=0.11
    {60009,4096,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=7.03  BV=-0.00
    {60009,4096,1120, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=7.13  BV=-0.10
    {69969,4096,1032, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=7.01  BV=-0.20
    {69969,4096,1104, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=7.11  BV=-0.30
    {80012,4096,1032, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=7.01  BV=-0.40
    {80012,4096,1104, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=7.11  BV=-0.49
    {89972,4096,1056, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=7.04  BV=-0.60
    {89972,4096,1128, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=7.14  BV=-0.69
    {100015,4096,1088, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.09  BV=-0.79
    {109975,4096,1064, 0, 0, 0},  //TV = 3.18(1325000 lines)  AV=2.97  SV=7.06  BV=-0.90
    {120018,4096,1040, 0, 0, 0},  //TV = 3.06(1446000 lines)  AV=2.97  SV=7.02  BV=-0.99
    {129978,4096,1032, 0, 0, 0},  //TV = 2.94(1566000 lines)  AV=2.97  SV=7.01  BV=-1.10
    {140021,4096,1024, 0, 0, 0},  //TV = 2.84(1687000 lines)  AV=2.97  SV=7.00  BV=-1.19
    {149981,4096,1024, 0, 0, 0},  //TV = 2.74(1807000 lines)  AV=2.97  SV=7.00  BV=-1.29
    {160024,4096,1032, 0, 0, 0},  //TV = 2.64(1928000 lines)  AV=2.97  SV=7.01  BV=-1.40
    {169984,4096,1040, 0, 0, 0},  //TV = 2.56(2048000 lines)  AV=2.97  SV=7.02  BV=-1.49
    {180027,4096,1064, 0, 0, 0},  //TV = 2.47(2169000 lines)  AV=2.97  SV=7.06  BV=-1.61
    {189987,4096,1072, 0, 0, 0},  //TV = 2.40(2289000 lines)  AV=2.97  SV=7.07  BV=-1.70
    {200030,4096,1096, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.10  BV=-1.81
    {200030,4096,1168, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.19  BV=-1.90
    {200030,4096,1256, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.29  BV=-2.00
    {200030,4096,1344, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.39  BV=-2.10
    {200030,4096,1448, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.50  BV=-2.21
    {200030,4096,1552, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.60  BV=-2.31
    {200030,4096,1664, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.70  BV=-2.41
    {200030,4096,1776, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.79  BV=-2.50
    {200030,4096,1904, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.89  BV=-2.60
    {200030,4096,2040, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=7.99  BV=-2.70
    {200030,4096,2184, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.09  BV=-2.80
    {200030,4096,2344, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.19  BV=-2.90
    {200030,4096,2512, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.29  BV=-3.00
    {200030,4096,2688, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.39  BV=-3.10
    {200030,4096,2880, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.49  BV=-3.20
    {200030,4096,3104, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.60  BV=-3.31
    {200030,4096,3328, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.70  BV=-3.41
    {200030,4096,3568, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.80  BV=-3.51
    {200030,4096,3816, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=8.90  BV=-3.61
    {200030,4096,4096, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.00  BV=-3.71
    {200030,4096,4384, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.10  BV=-3.81
    {200030,4096,4696, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.20  BV=-3.90
    {200030,4096,5032, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.30  BV=-4.00
    {200030,4096,5392, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.40  BV=-4.10
    {200030,4096,5784, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.50  BV=-4.21
    {200030,4096,6200, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.60  BV=-4.31
    {200030,4096,6640, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.70  BV=-4.40
    {200030,4096,7112, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.80  BV=-4.50
    {200030,4096,7624, 0, 0, 0},  //TV = 2.32(2410000 lines)  AV=2.97  SV=9.90  BV=-4.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    157,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -46,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {8300,2432,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.27  BV=3.61
    {8300,2560,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.37  BV=3.52
    {8300,2816,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.48  BV=3.40
    {8300,2944,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.57  BV=3.32
    {8300,3200,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.67  BV=3.22
    {8300,3456,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.77  BV=3.12
    {8300,3712,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.88  BV=3.00
    {8300,3968,1040, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.98  BV=2.91
    {8300,4096,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.08  BV=2.81
    {8300,4096,1152, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.17  BV=2.71
    {8300,4096,1240, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.28  BV=2.61
    {8300,4096,1328, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.38  BV=2.51
    {8300,4096,1424, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.48  BV=2.41
    {8300,4096,1528, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.58  BV=2.31
    {8300,4096,1632, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.67  BV=2.21
    {8300,4096,1752, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.77  BV=2.11
    {8300,4096,1872, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.87  BV=2.01
    {8300,4096,2008, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=7.97  BV=1.91
    {16683,4096,1080, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.08  BV=1.80
    {16683,4096,1144, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.16  BV=1.72
    {16683,4096,1232, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.27  BV=1.61
    {16683,4096,1328, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.38  BV=1.50
    {16683,4096,1424, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.48  BV=1.40
    {16683,4096,1520, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=7.57  BV=1.31
    {24983,4096,1088, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=7.09  BV=1.21
    {24983,4096,1168, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=7.19  BV=1.10
    {24983,4096,1248, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=7.29  BV=1.01
    {24983,4096,1344, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=7.39  BV=0.90
    {33366,4096,1080, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.08  BV=0.80
    {33366,4096,1152, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.17  BV=0.71
    {33366,4096,1232, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.27  BV=0.61
    {33366,4096,1320, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.37  BV=0.51
    {33366,4096,1416, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.47  BV=0.41
    {33366,4096,1520, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.57  BV=0.31
    {33366,4096,1624, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.67  BV=0.21
    {33366,4096,1744, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.77  BV=0.11
    {33366,4096,1880, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.88  BV=-0.00
    {33366,4096,2024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33366,4096,2168, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.08  BV=-0.21
    {33366,4096,2320, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33366,4096,2488, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.28  BV=-0.40
    {33366,4096,2664, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.38  BV=-0.50
    {33366,4096,2856, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.48  BV=-0.60
    {33366,4096,3056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.58  BV=-0.70
    {33366,4096,3280, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.68  BV=-0.80
    {33366,4096,3512, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.78  BV=-0.90
    {33366,4096,3760, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.88  BV=-1.00
    {33366,4096,4032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.98  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.92  BV=3.70
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {9960,2432,1072, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.31  BV=3.31
    {9960,2688,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.40  BV=3.22
    {9960,2816,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.50  BV=3.12
    {9960,3072,1048, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.62  BV=3.00
    {9960,3328,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.71  BV=2.91
    {9960,3584,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.81  BV=2.81
    {9960,3840,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.91  BV=2.71
    {9960,4096,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.01  BV=2.61
    {9960,4096,1104, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.11  BV=2.51
    {9960,4096,1184, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.21  BV=2.41
    {9960,4096,1272, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.31  BV=2.31
    {9960,4096,1360, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.41  BV=2.21
    {9960,4096,1456, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.51  BV=2.11
    {9960,4096,1560, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.61  BV=2.01
    {9960,4096,1672, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.71  BV=1.91
    {9960,4096,1792, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.81  BV=1.81
    {9960,4096,1920, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=7.91  BV=1.71
    {20003,4096,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.00  BV=1.61
    {20003,4096,1104, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.11  BV=1.51
    {20003,4096,1176, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.20  BV=1.41
    {20003,4096,1272, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.31  BV=1.30
    {20003,4096,1360, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.41  BV=1.21
    {20003,4096,1456, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=7.51  BV=1.11
    {29963,4096,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.02  BV=1.01
    {29963,4096,1120, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.13  BV=0.90
    {29963,4096,1192, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.22  BV=0.81
    {29963,4096,1280, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.32  BV=0.71
    {29963,4096,1376, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.43  BV=0.61
    {29963,4096,1472, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.52  BV=0.51
    {29963,4096,1576, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.62  BV=0.41
    {29963,4096,1688, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.72  BV=0.31
    {29963,4096,1808, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.82  BV=0.21
    {29963,4096,1936, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.92  BV=0.11
    {29963,4096,2088, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.03  BV=0.00
    {29963,4096,2256, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.14  BV=-0.11
    {29963,4096,2416, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.24  BV=-0.21
    {29963,4096,2584, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.34  BV=-0.30
    {29963,4096,2768, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.43  BV=-0.40
    {29963,4096,2968, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.54  BV=-0.50
    {29963,4096,3184, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.64  BV=-0.61
    {29963,4096,3408, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.73  BV=-0.70
    {29963,4096,3648, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.83  BV=-0.80
    {29963,4096,3912, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.93  BV=-0.90
    {29963,4096,4192, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=9.03  BV=-1.00
    {29963,4096,4488, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=9.13  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    122,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -11,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.38  BV=3.50
    {16683,1408,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.46  BV=3.42
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {24983,1152,1104, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.28  BV=3.02
    {24983,1280,1072, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.39  BV=2.91
    {24983,1408,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.48  BV=2.81
    {24983,1536,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.58  BV=2.71
    {33366,1152,1088, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.26  BV=2.62
    {33366,1280,1056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.37  BV=2.51
    {33366,1408,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.47  BV=2.41
    {33366,1408,1104, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.57  BV=2.31
    {33366,1536,1088, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.67  BV=2.20
    {33366,1664,1072, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.77  BV=2.11
    {33366,1792,1064, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.86  BV=2.01
    {33366,1920,1064, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.96  BV=1.91
    {33366,2048,1080, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.08  BV=1.80
    {33366,2304,1024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.17  BV=1.71
    {33366,2432,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.26  BV=1.62
    {41666,2048,1056, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=6.04  BV=1.51
    {41666,2176,1064, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=6.14  BV=1.41
    {41666,2432,1024, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=6.25  BV=1.31
    {49966,2176,1024, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=6.09  BV=1.21
    {49966,2304,1032, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=6.18  BV=1.11
    {58349,2048,1064, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=6.06  BV=1.01
    {58349,2304,1024, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=6.17  BV=0.90
    {66649,2048,1080, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.08  BV=0.80
    {66649,2304,1024, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.17  BV=0.71
    {66649,2432,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.27  BV=0.61
    {66649,2560,1056, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.37  BV=0.51
    {66649,2816,1032, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.47  BV=0.41
    {66649,2944,1056, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.57  BV=0.31
    {66649,3200,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.67  BV=0.21
    {66649,3456,1032, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.77  BV=0.11
    {66649,3712,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.88  BV=-0.00
    {66649,3968,1040, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=6.98  BV=-0.10
    {66649,4096,1080, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=7.08  BV=-0.20
    {75032,4096,1024, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=7.00  BV=-0.29
    {75032,4096,1104, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83332,4096,1064, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=7.06  BV=-0.50
    {91632,4096,1032, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=7.01  BV=-0.59
    {91632,4096,1112, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=7.12  BV=-0.70
    {100015,4096,1096, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.10  BV=-0.81
    {100015,4096,1168, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100015,4096,1256, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.29  BV=-1.00
    {100015,4096,1344, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.39  BV=-1.10
    {100015,4096,1448, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.50  BV=-1.21
    {100015,4096,1552, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.60  BV=-1.31
    {100015,4096,1664, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.70  BV=-1.41
    {100015,4096,1776, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.79  BV=-1.50
    {100015,4096,1904, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.89  BV=-1.60
    {100015,4096,2040, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.99  BV=-1.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {20003,1280,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.32  BV=3.29
    {20003,1280,1088, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.41  BV=3.21
    {20003,1408,1056, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.50  BV=3.11
    {20003,1536,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.61  BV=3.01
    {20003,1664,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.70  BV=2.91
    {20003,1792,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.81  BV=2.81
    {29963,1280,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.32  BV=2.71
    {29963,1280,1096, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.42  BV=2.61
    {29963,1408,1064, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.51  BV=2.52
    {29963,1536,1056, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.63  BV=2.40
    {29963,1664,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.73  BV=2.30
    {29963,1792,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.82  BV=2.21
    {29963,1920,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.92  BV=2.11
    {29963,2048,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.02  BV=2.01
    {29963,2176,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.12  BV=1.91
    {29963,2304,1056, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.21  BV=1.82
    {29963,2560,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.32  BV=1.71
    {40006,2048,1024, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=6.00  BV=1.61
    {40006,2176,1032, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=6.10  BV=1.52
    {40006,2304,1048, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=6.20  BV=1.41
    {40006,2432,1072, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=6.31  BV=1.30
    {49966,2176,1024, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=6.09  BV=1.21
    {49966,2304,1032, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=6.18  BV=1.11
    {60009,2048,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.02  BV=1.01
    {60009,2176,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.12  BV=0.91
    {60009,2304,1064, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.23  BV=0.80
    {60009,2560,1024, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.32  BV=0.71
    {60009,2688,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.41  BV=0.61
    {60009,2816,1064, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.51  BV=0.51
    {60009,3072,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.62  BV=0.41
    {60009,3328,1040, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.72  BV=0.31
    {60009,3584,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.82  BV=0.21
    {60009,3840,1032, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=6.92  BV=0.11
    {60009,4096,1048, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=7.03  BV=-0.00
    {60009,4096,1120, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=7.13  BV=-0.10
    {69969,4096,1032, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=7.01  BV=-0.20
    {69969,4096,1104, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=7.11  BV=-0.30
    {80012,4096,1032, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=7.01  BV=-0.40
    {80012,4096,1104, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=7.11  BV=-0.49
    {89972,4096,1056, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=7.04  BV=-0.60
    {89972,4096,1128, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=7.14  BV=-0.69
    {100015,4096,1096, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.10  BV=-0.81
    {100015,4096,1168, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100015,4096,1256, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.29  BV=-1.00
    {100015,4096,1344, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.39  BV=-1.10
    {100015,4096,1448, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.50  BV=-1.21
    {100015,4096,1552, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.60  BV=-1.31
    {100015,4096,1664, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.70  BV=-1.41
    {100015,4096,1776, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.79  BV=-1.50
    {100015,4096,1904, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.89  BV=-1.60
    {100015,4096,2040, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=7.99  BV=-1.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    128,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
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
    {249996,1664,1048, 0, 0, 0},  //TV = 2.00(3012000 lines)  AV=2.97  SV=5.73  BV=-0.76
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {249996,1664,1048, 0, 0, 0},  //TV = 2.00(3012000 lines)  AV=2.97  SV=5.73  BV=-0.76
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    -7,    //i4MaxBV
    -7,    //i4MinBV
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8300,1280,1056, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.37  BV=4.52
    {8300,1408,1032, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.47  BV=4.41
    {8300,1536,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.58  BV=4.30
    {8300,1536,1088, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.67  BV=4.21
    {8300,1664,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.78  BV=4.11
    {8300,1792,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.87  BV=4.01
    {8300,1920,1072, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.97  BV=3.91
    {8300,2048,1080, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.08  BV=3.81
    {8300,2304,1024, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=6.17  BV=3.71
    {16683,1152,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.26  BV=3.62
    {16683,1280,1064, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.38  BV=3.50
    {16683,1408,1024, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.46  BV=3.42
    {16683,1408,1104, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.57  BV=3.31
    {16683,1536,1088, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.67  BV=3.20
    {16683,1664,1072, 0, 0, 0},  //TV = 5.91(201000 lines)  AV=2.97  SV=5.77  BV=3.11
    {24983,1152,1104, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.28  BV=3.02
    {24983,1280,1072, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.39  BV=2.91
    {24983,1408,1040, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.48  BV=2.81
    {24983,1536,1024, 0, 0, 0},  //TV = 5.32(301000 lines)  AV=2.97  SV=5.58  BV=2.71
    {33366,1152,1088, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.26  BV=2.62
    {33366,1280,1056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.37  BV=2.51
    {33366,1408,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.47  BV=2.41
    {33366,1408,1104, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.57  BV=2.31
    {33366,1536,1088, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.67  BV=2.20
    {33366,1664,1072, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.77  BV=2.11
    {33366,1792,1064, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.86  BV=2.01
    {33366,1920,1064, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=5.96  BV=1.91
    {33366,2048,1080, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.08  BV=1.80
    {33366,2304,1024, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.17  BV=1.71
    {33366,2432,1040, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.27  BV=1.61
    {33366,2560,1056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.37  BV=1.51
    {33366,2816,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.47  BV=1.41
    {33366,2944,1056, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.57  BV=1.31
    {33366,3200,1040, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.67  BV=1.21
    {33366,3456,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.77  BV=1.11
    {33366,3712,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.87  BV=1.01
    {33366,3968,1032, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=6.97  BV=0.91
    {33366,4096,1072, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.07  BV=0.81
    {33366,4096,1152, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.17  BV=0.71
    {33366,4096,1232, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.27  BV=0.61
    {33366,4096,1328, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.38  BV=0.50
    {33366,4096,1424, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.48  BV=0.40
    {33366,4096,1520, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.57  BV=0.31
    {33366,4096,1632, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.67  BV=0.20
    {33366,4096,1744, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.77  BV=0.11
    {33366,4096,1880, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.88  BV=-0.00
    {33366,4096,2016, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=7.98  BV=-0.10
    {33366,4096,2160, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.08  BV=-0.20
    {33366,4096,2312, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.17  BV=-0.30
    {33366,4096,2480, 0, 0, 0},  //TV = 4.91(402000 lines)  AV=2.97  SV=8.28  BV=-0.40
    {41666,4096,2128, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=8.06  BV=-0.50
    {41666,4096,2280, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=8.15  BV=-0.60
    {41666,4096,2448, 0, 0, 0},  //TV = 4.58(502000 lines)  AV=2.97  SV=8.26  BV=-0.70
    {49966,4096,2184, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.09  BV=-0.80
    {49966,4096,2344, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.19  BV=-0.90
    {58349,4096,2152, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=8.07  BV=-1.00
    {58349,4096,2304, 0, 0, 0},  //TV = 4.10(703000 lines)  AV=2.97  SV=8.17  BV=-1.10
    {66649,4096,2160, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=8.08  BV=-1.20
    {66649,4096,2312, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=8.17  BV=-1.30
    {66649,4096,2480, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=8.28  BV=-1.40
    {66649,4096,2672, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=8.38  BV=-1.51
    {66649,4096,2864, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=8.48  BV=-1.61
    {66649,4096,3072, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=8.58  BV=-1.71
    {66649,4096,3288, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=8.68  BV=-1.80
    {66649,4096,3528, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=8.78  BV=-1.91
    {66649,4096,3776, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=8.88  BV=-2.00
    {66649,4096,4048, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=8.98  BV=-2.10
    {66649,4096,4328, 0, 0, 0},  //TV = 3.91(803000 lines)  AV=2.97  SV=9.08  BV=-2.20
    {75032,4096,4120, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=9.01  BV=-2.30
    {75032,4096,4416, 0, 0, 0},  //TV = 3.74(904000 lines)  AV=2.97  SV=9.11  BV=-2.40
    {83332,4096,4264, 0, 0, 0},  //TV = 3.58(1004000 lines)  AV=2.97  SV=9.06  BV=-2.50
    {91632,4096,4152, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=9.02  BV=-2.60
    {91632,4096,4448, 0, 0, 0},  //TV = 3.45(1104000 lines)  AV=2.97  SV=9.12  BV=-2.70
    {100015,4096,4384, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.10  BV=-2.81
    {100015,4096,4696, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.20  BV=-2.90
    {100015,4096,5032, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.30  BV=-3.00
    {100015,4096,5392, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.40  BV=-3.10
    {100015,4096,5784, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.50  BV=-3.21
    {100015,4096,6200, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.60  BV=-3.31
    {100015,4096,6640, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.70  BV=-3.40
    {100015,4096,7112, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.80  BV=-3.50
    {100015,4096,7624, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.90  BV=-3.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    {83,1408,1080, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.54  BV=10.99
    {83,1536,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.62  BV=10.91
    {83,1664,1048, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.73  BV=10.79
    {83,1792,1040, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.83  BV=10.70
    {83,1920,1032, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=5.92  BV=10.61
    {83,2048,1056, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.04  BV=10.48
    {83,2176,1072, 0, 0, 0},  //TV = 13.56(1000 lines)  AV=2.97  SV=6.15  BV=10.37
    {166,1152,1088, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.26  BV=10.27
    {166,1280,1024, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.32  BV=10.21
    {166,1280,1104, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.43  BV=10.10
    {166,1408,1080, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.54  BV=9.99
    {166,1536,1048, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.62  BV=9.91
    {166,1664,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.71  BV=9.82
    {166,1792,1032, 0, 0, 0},  //TV = 12.56(2000 lines)  AV=2.97  SV=5.82  BV=9.71
    {249,1280,1032, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.33  BV=9.61
    {249,1280,1104, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.43  BV=9.51
    {249,1408,1080, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.54  BV=9.41
    {249,1536,1056, 0, 0, 0},  //TV = 11.97(3000 lines)  AV=2.97  SV=5.63  BV=9.31
    {332,1280,1024, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.32  BV=9.21
    {332,1280,1088, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.41  BV=9.12
    {332,1408,1064, 0, 0, 0},  //TV = 11.56(4000 lines)  AV=2.97  SV=5.51  BV=9.01
    {415,1152,1120, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.30  BV=8.91
    {415,1280,1080, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.40  BV=8.81
    {415,1408,1048, 0, 0, 0},  //TV = 11.23(5000 lines)  AV=2.97  SV=5.49  BV=8.71
    {498,1280,1032, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.33  BV=8.61
    {498,1280,1104, 0, 0, 0},  //TV = 10.97(6000 lines)  AV=2.97  SV=5.43  BV=8.51
    {581,1152,1128, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.31  BV=8.41
    {581,1280,1088, 0, 0, 0},  //TV = 10.75(7000 lines)  AV=2.97  SV=5.41  BV=8.31
    {664,1280,1024, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.32  BV=8.21
    {664,1280,1096, 0, 0, 0},  //TV = 10.56(8000 lines)  AV=2.97  SV=5.42  BV=8.11
    {747,1280,1040, 0, 0, 0},  //TV = 10.39(9000 lines)  AV=2.97  SV=5.34  BV=8.01
    {830,1152,1120, 0, 0, 0},  //TV = 10.23(10000 lines)  AV=2.97  SV=5.30  BV=7.91
    {913,1152,1088, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.26  BV=7.81
    {913,1280,1056, 0, 0, 0},  //TV = 10.10(11000 lines)  AV=2.97  SV=5.37  BV=7.70
    {996,1280,1040, 0, 0, 0},  //TV = 9.97(12000 lines)  AV=2.97  SV=5.34  BV=7.60
    {1079,1280,1024, 0, 0, 0},  //TV = 9.86(13000 lines)  AV=2.97  SV=5.32  BV=7.51
    {1162,1152,1128, 0, 0, 0},  //TV = 9.75(14000 lines)  AV=2.97  SV=5.31  BV=7.41
    {1245,1152,1128, 0, 0, 0},  //TV = 9.65(15000 lines)  AV=2.97  SV=5.31  BV=7.31
    {1328,1280,1024, 0, 0, 0},  //TV = 9.56(16000 lines)  AV=2.97  SV=5.32  BV=7.21
    {1411,1280,1024, 0, 0, 0},  //TV = 9.47(17000 lines)  AV=2.97  SV=5.32  BV=7.12
    {1577,1152,1096, 0, 0, 0},  //TV = 9.31(19000 lines)  AV=2.97  SV=5.27  BV=7.01
    {1660,1152,1120, 0, 0, 0},  //TV = 9.23(20000 lines)  AV=2.97  SV=5.30  BV=6.91
    {1743,1280,1024, 0, 0, 0},  //TV = 9.16(21000 lines)  AV=2.97  SV=5.32  BV=6.81
    {1909,1152,1112, 0, 0, 0},  //TV = 9.03(23000 lines)  AV=2.97  SV=5.29  BV=6.71
    {2075,1152,1096, 0, 0, 0},  //TV = 8.91(25000 lines)  AV=2.97  SV=5.27  BV=6.62
    {2241,1152,1088, 0, 0, 0},  //TV = 8.80(27000 lines)  AV=2.97  SV=5.26  BV=6.52
    {2324,1152,1128, 0, 0, 0},  //TV = 8.75(28000 lines)  AV=2.97  SV=5.31  BV=6.41
    {2490,1152,1128, 0, 0, 0},  //TV = 8.65(30000 lines)  AV=2.97  SV=5.31  BV=6.31
    {2739,1152,1096, 0, 0, 0},  //TV = 8.51(33000 lines)  AV=2.97  SV=5.27  BV=6.22
    {2905,1152,1112, 0, 0, 0},  //TV = 8.43(35000 lines)  AV=2.97  SV=5.29  BV=6.11
    {3154,1152,1104, 0, 0, 0},  //TV = 8.31(38000 lines)  AV=2.97  SV=5.28  BV=6.00
    {3403,1152,1088, 0, 0, 0},  //TV = 8.20(41000 lines)  AV=2.97  SV=5.26  BV=5.91
    {3569,1152,1112, 0, 0, 0},  //TV = 8.13(43000 lines)  AV=2.97  SV=5.29  BV=5.81
    {3901,1152,1088, 0, 0, 0},  //TV = 8.00(47000 lines)  AV=2.97  SV=5.26  BV=5.72
    {4150,1152,1096, 0, 0, 0},  //TV = 7.91(50000 lines)  AV=2.97  SV=5.27  BV=5.62
    {4399,1152,1112, 0, 0, 0},  //TV = 7.83(53000 lines)  AV=2.97  SV=5.29  BV=5.51
    {4731,1152,1104, 0, 0, 0},  //TV = 7.72(57000 lines)  AV=2.97  SV=5.28  BV=5.42
    {5146,1152,1096, 0, 0, 0},  //TV = 7.60(62000 lines)  AV=2.97  SV=5.27  BV=5.31
    {5478,1152,1096, 0, 0, 0},  //TV = 7.51(66000 lines)  AV=2.97  SV=5.27  BV=5.22
    {5893,1152,1096, 0, 0, 0},  //TV = 7.41(71000 lines)  AV=2.97  SV=5.27  BV=5.11
    {6308,1152,1096, 0, 0, 0},  //TV = 7.31(76000 lines)  AV=2.97  SV=5.27  BV=5.01
    {6723,1152,1104, 0, 0, 0},  //TV = 7.22(81000 lines)  AV=2.97  SV=5.28  BV=4.91
    {7221,1152,1096, 0, 0, 0},  //TV = 7.11(87000 lines)  AV=2.97  SV=5.27  BV=4.82
    {7802,1152,1096, 0, 0, 0},  //TV = 7.00(94000 lines)  AV=2.97  SV=5.27  BV=4.70
    {8300,1152,1096, 0, 0, 0},  //TV = 6.91(100000 lines)  AV=2.97  SV=5.27  BV=4.62
    {8881,1152,1096, 0, 0, 0},  //TV = 6.82(107000 lines)  AV=2.97  SV=5.27  BV=4.52
    {9628,1152,1088, 0, 0, 0},  //TV = 6.70(116000 lines)  AV=2.97  SV=5.26  BV=4.41
    {9960,1152,1128, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.31  BV=4.31
    {9960,1280,1088, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.41  BV=4.21
    {9960,1408,1064, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.51  BV=4.11
    {9960,1536,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.61  BV=4.01
    {9960,1664,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.71  BV=3.91
    {9960,1792,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.81  BV=3.81
    {9960,1920,1024, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=5.91  BV=3.71
    {9960,2048,1032, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.01  BV=3.61
    {9960,2176,1040, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.11  BV=3.51
    {9960,2304,1056, 0, 0, 0},  //TV = 6.65(120000 lines)  AV=2.97  SV=6.21  BV=3.41
    {20003,1280,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.32  BV=3.29
    {20003,1280,1088, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.41  BV=3.21
    {20003,1408,1056, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.50  BV=3.11
    {20003,1536,1040, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.61  BV=3.01
    {20003,1664,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.70  BV=2.91
    {20003,1792,1024, 0, 0, 0},  //TV = 5.64(241000 lines)  AV=2.97  SV=5.81  BV=2.81
    {29963,1280,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.32  BV=2.71
    {29963,1280,1096, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.42  BV=2.61
    {29963,1408,1064, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.51  BV=2.52
    {29963,1536,1056, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.63  BV=2.40
    {29963,1664,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.73  BV=2.30
    {29963,1792,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.82  BV=2.21
    {29963,1920,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=5.92  BV=2.11
    {29963,2048,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.02  BV=2.01
    {29963,2176,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.12  BV=1.91
    {29963,2304,1064, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.23  BV=1.81
    {29963,2560,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.32  BV=1.71
    {29963,2688,1048, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.43  BV=1.61
    {29963,2944,1024, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.52  BV=1.51
    {29963,3072,1056, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.63  BV=1.40
    {29963,3328,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.72  BV=1.31
    {29963,3584,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.82  BV=1.21
    {29963,3840,1032, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=6.92  BV=1.11
    {29963,4096,1040, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.02  BV=1.01
    {29963,4096,1120, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.13  BV=0.90
    {29963,4096,1192, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.22  BV=0.81
    {29963,4096,1280, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.32  BV=0.71
    {29963,4096,1368, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.42  BV=0.61
    {29963,4096,1464, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.52  BV=0.52
    {29963,4096,1584, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.63  BV=0.40
    {29963,4096,1696, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.73  BV=0.30
    {29963,4096,1816, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.83  BV=0.20
    {29963,4096,1944, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=7.92  BV=0.11
    {29963,4096,2096, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29963,4096,2248, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29963,4096,2408, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.23  BV=-0.20
    {29963,4096,2576, 0, 0, 0},  //TV = 5.06(361000 lines)  AV=2.97  SV=8.33  BV=-0.30
    {40006,4096,2072, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=8.02  BV=-0.40
    {40006,4096,2216, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=8.11  BV=-0.50
    {40006,4096,2376, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=8.21  BV=-0.60
    {40006,4096,2544, 0, 0, 0},  //TV = 4.64(482000 lines)  AV=2.97  SV=8.31  BV=-0.70
    {49966,4096,2184, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.09  BV=-0.80
    {49966,4096,2344, 0, 0, 0},  //TV = 4.32(602000 lines)  AV=2.97  SV=8.19  BV=-0.90
    {60009,4096,2088, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.03  BV=-1.00
    {60009,4096,2240, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.13  BV=-1.10
    {60009,4096,2400, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.23  BV=-1.20
    {60009,4096,2568, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.33  BV=-1.30
    {60009,4096,2776, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.44  BV=-1.41
    {60009,4096,2976, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.54  BV=-1.51
    {60009,4096,3184, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.64  BV=-1.61
    {60009,4096,3416, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.74  BV=-1.71
    {60009,4096,3656, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.84  BV=-1.81
    {60009,4096,3920, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=8.94  BV=-1.91
    {60009,4096,4200, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=9.04  BV=-2.01
    {60009,4096,4496, 0, 0, 0},  //TV = 4.06(723000 lines)  AV=2.97  SV=9.13  BV=-2.10
    {69969,4096,4120, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=9.01  BV=-2.20
    {69969,4096,4416, 0, 0, 0},  //TV = 3.84(843000 lines)  AV=2.97  SV=9.11  BV=-2.30
    {80012,4096,4144, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=9.02  BV=-2.40
    {80012,4096,4440, 0, 0, 0},  //TV = 3.64(964000 lines)  AV=2.97  SV=9.12  BV=-2.50
    {89972,4096,4232, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=9.05  BV=-2.60
    {89972,4096,4536, 0, 0, 0},  //TV = 3.47(1084000 lines)  AV=2.97  SV=9.15  BV=-2.70
    {100015,4096,4384, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.10  BV=-2.81
    {100015,4096,4696, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.20  BV=-2.90
    {100015,4096,5032, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.30  BV=-3.00
    {100015,4096,5392, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.40  BV=-3.10
    {100015,4096,5784, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.50  BV=-3.21
    {100015,4096,6200, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.60  BV=-3.31
    {100015,4096,6640, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.70  BV=-3.40
    {100015,4096,7112, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.80  BV=-3.50
    {100015,4096,7624, 0, 0, 0},  //TV = 3.32(1205000 lines)  AV=2.97  SV=9.90  BV=-3.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
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
    147,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    110,    //i4MaxBV
    -36,    //i4MinBV
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
        {1,10000,20,1232,1232},
        {2,20,16,1232,1232},
        {3,16,16,1232,2048},
        {4,16,12,2048,2048},
        {5,12,12,2048,3072},
        {6,12,10,3072,3072},
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
        {1,10000,20,1232,1232},
        {2,20,16,1232,1232},
        {3,16,16,1232,2048},
        {4,16,12,2048,2048},
        {5,12,12,2048,3072},
        {6,12,10,3072,3072},
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
        {1,10000,60,1232,1232},
        {2,60,30,1232,1232},
        {3,30,15,1232,1232},
        {4,15,15,1232,2048},
        {5,15,10,2048,2048},
        {6,10,10,2048,4096},
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
        {1,10000,120,1232,1232},
        {2,120,120,1232,21845},
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
        {1,10000,60,1232,1232},
        {2,60,60,1232,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
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
        {1,10000,60,1232,1232},
        {2,60,60,1232,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
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
        {1,10000,60,1232,1232},
        {2,60,60,1232,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
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
        {1,10000,60,1232,1232},
        {2,60,60,1232,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
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
        {1,10000,60,1232,1232},
        {2,60,60,1232,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
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
        {1,10000,60,1232,1232},
        {2,60,60,1232,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
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
        {1,10000,30,1232,1232},
        {2,30,30,1232,10240},
        {3,30,10,10240,10240},
        {4,10,10,10240,35200},
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
        {1,10000,5,1232,1232},
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
        {1,10000,2000,1232,1232},
        {2,2000,2000,1232,2460},
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
        {1,10000,2000,1232,1232},
        {2,2000,2000,1232,4920},
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
        {1,10000,2000,1232,1232},
        {2,2000,2000,1232,9840},
        {3,2000,5,9840,9840},
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
        {1,10000,2000,1232,1232},
        {2,2000,2000,1232,19680},
        {3,2000,5,19680,19680},
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
        {1,10000,15,1232,1232},
        {2,15,15,1232,4096},
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
        {1,10000,15,1232,1232},
        {2,15,15,1232,4096},
        {3,15,5,4096,4096},
        {4,5,5,4096,30720},
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
        {1,10000,100,1232,1232},
        {2,100,100,1232,4096},
        {3,100,30,4096,4096},
        {4,30,30,4096,16384},
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
        {1,10000,30,1232,1232},
        {2,30,30,1232,2048},
        {3,30,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,8192},
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
        {1,10000,30,1232,1232},
        {2,30,30,1232,8192},
        {3,30,15,8192,8192},
        {4,15,15,8192,16384},
        {5,15,10,16384,16384},
        {6,10,10,16384,30720},
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
MinGain,1232 
MaxGain,4096 
MiniISOGain,100 
GainStepUnitInTotalRange,128 
PreviewExposureLineUnit,83 
PreviewMaxFrameRate,30 
VideoExposureLineUnit,83 
VideoMaxFrameRate,30 
VideoToPreviewSensitivityRatio,1024 
CaptureExposureLineUnit,83 
CaptureMaxFrameRate,30 
CaptureToPreviewSensitivityRatio,1024 
Video1ExposureLineUnit,83 
Video1MaxFrameRate,30 
Video1ToPreviewSensitivityRatio,1024 
Video2ExposureLineUnit,83 
Video2MaxFrameRate,30 
Video2ToPreviewSensitivityRatio,1024 
Custom1ExposureLineUnit,83 
Custom1MaxFrameRate,30 
Custom1ToPreviewSensitivityRatio,1024 
Custom2ExposureLineUnit,83 
Custom2MaxFrameRate,30 
Custom2ToPreviewSensitivityRatio,1024 
Custom3ExposureLineUnit,83 
Custom3MaxFrameRate,30 
Custom3ToPreviewSensitivityRatio,1024 
Custom4ExposureLineUnit,83 
Custom4MaxFrameRate,30 
Custom4ToPreviewSensitivityRatio,1024 
Custom5ExposureLineUnit,80 
Custom5MaxFrameRate,30 
Custom5ToPreviewSensitivityRatio,1024 
FocusLength,350 
Fno,28 

// Preview table -- Use preview sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_RPEVIEW_AUTO
90,-10
1,10000,20,1232,1232
2,20,16,1232,1232
3,16,16,1232,2048
4,16,12,2048,2048
5,12,12,2048,3072
6,12,10,3072,3072
AETABLE_END

// Capture table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_AUTO
90,0
1,10000,20,1232,1232
2,20,16,1232,1232
3,16,16,1232,2048
4,16,12,2048,2048
5,12,12,2048,3072
6,12,10,3072,3072
AETABLE_END

// Video table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_AUTO
90,0
1,10000,60,1232,1232
2,60,30,1232,1232
3,30,15,1232,1232
4,15,15,1232,2048
5,15,10,2048,2048
6,10,10,2048,4096
AETABLE_END

// Video1 table -- Use Video1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO1_AUTO
90,0
1,10000,120,1232,1232
2,120,120,1232,21845
AETABLE_END

// Video2 table -- Use Video2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO2_AUTO
90,0
1,10000,60,1232,1232
2,60,60,1232,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom1 table -- Use Custom1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM1_AUTO
90,0
1,10000,60,1232,1232
2,60,60,1232,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom2 table -- Use Custom2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM2_AUTO
90,0
1,10000,60,1232,1232
2,60,60,1232,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom3 table -- Use Custom3 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM3_AUTO
90,0
1,10000,60,1232,1232
2,60,60,1232,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom4 table -- Use Custom4 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM4_AUTO
90,0
1,10000,60,1232,1232
2,60,60,1232,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom5 table -- Use Custom5 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM5_AUTO
90,0
1,10000,60,1232,1232
2,60,60,1232,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Video Night table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_NIGHT
90,-10
1,10000,30,1232,1232
2,30,30,1232,10240
3,30,10,10240,10240
4,10,10,10240,35200
AETABLE_END

// Capture ISO100 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO100
90,0
1,10000,5,1232,1232
AETABLE_END

// Capture ISO200 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO200
90,0
1,10000,2000,1232,1232
2,2000,2000,1232,2460
3,2000,5,2460,2460
AETABLE_END

// Capture ISO400 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO400
90,0
1,10000,2000,1232,1232
2,2000,2000,1232,4920
3,2000,5,4920,4920
AETABLE_END

// Capture ISO800 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO800
90,0
1,10000,2000,1232,1232
2,2000,2000,1232,9840
2,2000,5,9840,9840
AETABLE_END

// Capture ISO1600 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO1600
90,0
1,10000,2000,1232,1232
2,2000,2000,1232,19680
3,2000,5,19680,19680
AETABLE_END

// Strobe table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_STROBE
90,0
1,10000,15,1232,1232
2,15,15,1232,4096
3,15,10,4096,4096
4,10,10,4096,30720
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX1
90,-10
1,10000,15,1232,1232
2,15,15,1232,4096
3,15,5,4096,4096
4,5,5,4096,30720
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX2
90,0
1,10000,100,1232,1232
2,100,100,1232,4096
3,100,30,4096,4096
2,30,30,4096,16384
AETABLE_END

// Table1 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX3
90,0
1,10000,30,1232,1232
2,30,30,1232,2048
3,30,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,8192
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
1,10000,30,1232,1232
2,30,30,1232,8192
3,30,15,8192,8192
4,15,15,8192,16384
5,15,10,16384,16384
6,10,10,16384,30720
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
