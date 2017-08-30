/********************************************************************************************
 *     LEGAL DISCLAIMER
 *
 *     (Header of MediaTek Software/Firmware Release or Documentation)
 *
 *     BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 *     THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED
 *     FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS
 *     ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR IMPLIED,
 *     INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR
 *     A PARTICULAR PURPOSE OR NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY
 *     WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 *     INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK
 *     ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *     NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S SPECIFICATION
 *     OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *
 *     BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH
 *     RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION,
 *     TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE
 *     FEES OR SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 *     THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE WITH THE LAWS
 *     OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF LAWS PRINCIPLES.
 ************************************************************************************************/
#include <utils/Log.h>
#include <fcntl.h>
#include <math.h>

#include "camera_custom_nvram.h"
#include "camera_custom_lens.h"


const NVRAM_LENS_PARA_STRUCT FM50AF_LENS_PARA_DEFAULT_VALUE =
{
    //Version
    NVRAM_CAMERA_LENS_FILE_VERSION,

    // Focus Range NVRAM
    {0, 1023},

    // AF NVRAM
    {
        // ------------------------------ sAF_Coef -----------------------------------------
        {
            {
                50,  // i4Offset
                20,  // i4NormalNum
                20,  // i4MacroNum
                0,   // i4InfIdxOffset
                0,   // i4MacroIdxOffset
                {
                       0,  20,  40,  60,  80, 110, 140, 180, 220, 270,
                     320, 370, 430, 490, 550, 610, 670, 750, 830, 910,
                       0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                }
        },
        30,  // i4THRES_MAIN
        20,  // i4THRES_SUB
        2,  // i4AFC_FAIL_CNT
        0,  // i4FAIL_POS
        1,  // i4INIT_WAIT
        {500, 500, 500, 500, 500},  // i4FRAME_WAIT
        0,  // i4DONE_WAIT
        },
        // ------------------------------ sVAFC_Coef -----------------------------------------
        {
            {
                50,  // i4Offset
                20,  // i4NormalNum
                20,  // i4MacroNum
                0,   // i4InfIdxOffset
                0,   // i4MacroIdxOffset
                {
                       0,  20,  40,  60,  80, 110, 140, 180, 220, 270,
                     320, 370, 430, 490, 550, 610, 670, 750, 830, 910,
                       0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                }
        },
        30,  // i4THRES_MAIN
        20,  // i4THRES_SUB
        2,  // i4AFC_FAIL_CNT
        0,  // i4FAIL_POS
        1,  // i4INIT_WAIT
        {500, 500, 500, 500, 500},  // i4FRAME_WAIT
        0,  // i4DONE_WAIT
        },
        // -------------------- sAF_TH ---------------------
        {
            8,  // i4ISONum;
            {100, 150, 200, 300, 400, 600, 800, 1600},
            // SGG1~7
            {
             {11, 19, 12, 18, 12, 12, 11, 12},
             {19, 28, 20, 27, 20, 20, 19, 20},
             {31, 42, 33, 40, 33, 33, 32, 33},
             {50, 61, 52, 59, 52, 52, 51, 52},
             {78, 88, 80, 86, 80, 80, 79, 80},
             {118, 126, 119, 125, 119, 119, 119, 119},
             {175, 180, 176, 179, 176, 176, 175, 176},
            },
            // horizontal FV baseline
            {0, 0, 0, 0, 0, 0, 0, 0},

            // horizontal FV min. threshold
            {50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000},

            // horizontal FV threshold
            {8, 6, 9, 8, 10, 9, 9, 9},

            // vertical FV baseline
            {0, 0, 0, 0, 0, 0, 0, 0},

            // vertical FV min. threshold
            {0, 0, 0, 0, 0, 0, 0, 0},

            // vertical FV threshold
            {15, 11, 15, 14, 16, 15, 14, 15},

        },
        // -------------------- sZSD_AF_TH ---------------------
        {
            8,  // i4ISONum;
            {100, 150, 200, 300, 400, 600, 800, 1600},
            // SGG1~7
            {
             {10, 19, 11, 17, 10, 11, 12, 11},
             {17, 28, 19, 27, 18, 19, 20, 19},
             {29, 42, 32, 40, 31, 32, 33, 32},
             {48, 61, 51, 59, 50, 51, 52, 51},
             {76, 88, 78, 86, 78, 78, 79, 78},
             {116, 126, 118, 125, 118, 118, 119, 118},
             {174, 180, 175, 179, 175, 175, 176, 175},
            },
            // horizontal FV baseline
            {0, 0, 0, 0, 0, 0, 0, 0},

            // horizontal FV min. threshold
            {50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000},

            // horizontal FV threshold
            {10, 6, 10, 8, 10, 10, 10, 10},

            // vertical FV baseline
            {0, 0, 0, 0, 0, 0, 0, 0},

            // vertical FV min. threshold
            {0, 0, 0, 0, 0, 0, 0, 0},

            // vertical FV threshold
            {15, 10, 15, 14, 15, 15, 14, 15},
        },
        // ------------------- sVID_AF_TH -----------------------------------
        {
            0,  // i4ISONum;
            {0, 0, 0, 0, 0, 0, 0, 0},
            // SGG1~7
            {
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
            },
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0},// i4MIN_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4HW_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4MIN_TH2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0} // i4HW_TH2[ISO_MAX_NUM];
        },
        // -------------------- sVID1_AF_TH ---------------------
        {
            0,  // i4ISONum;
            {0,0,0,0,0,0,0,0}, // i4ISO[ISO_MAX_NUM];
            // SGG1~7
            {
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
            },
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0},// i4MIN_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4HW_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4MIN_TH2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0} // i4HW_TH2[ISO_MAX_NUM];
        },
        // -------------------- sVID2_AF_TH ---------------------
        {
            0,  // i4ISONum;
            {0,0,0,0,0,0,0,0}, // i4ISO[ISO_MAX_NUM];
            // SGG1~7
            {
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
            },
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0},// i4MIN_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4HW_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4MIN_TH2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0} // i4HW_TH2[ISO_MAX_NUM];
        },
        // -------------------- sIHDR_AF_TH ---------------------
        {
            0,  // i4ISONum;
            {0,0,0,0,0,0,0,0}, // i4ISO[ISO_MAX_NUM];
            // SGG1~7
            {
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
            },
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0},// i4MIN_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4HW_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4MIN_TH2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0} // i4HW_TH2[ISO_MAX_NUM];
        },
        // -------------------- sREV1_AF_TH ---------------------
        {
            0,  // i4ISONum;
            {0,0,0,0,0,0,0,0}, // i4ISO[ISO_MAX_NUM];
            // SGG1~7
            {
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
            },
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0},// i4MIN_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4HW_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4MIN_TH2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0} // i4HW_TH2[ISO_MAX_NUM];
        },
        // -------------------- sREV2_AF_TH ---------------------
        {
            0,  // i4ISONum;
            {0,0,0,0,0,0,0,0}, // i4ISO[ISO_MAX_NUM];
            // SGG1~7
            {
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
            },
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0},// i4MIN_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4HW_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4MIN_TH2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0} // i4HW_TH2[ISO_MAX_NUM];
        },
        // -------------------- sREV3_AF_TH ---------------------
        {
            0,  // i4ISONum;
            {0,0,0,0,0,0,0,0}, // i4ISO[ISO_MAX_NUM];
            // SGG1~7
            {
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
            },
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0},// i4MIN_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4HW_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4MIN_TH2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0} // i4HW_TH2[ISO_MAX_NUM];
        },
        // -------------------- sREV4_AF_TH ---------------------
        {
            0,  // i4ISONum;
            {0,0,0,0,0,0,0,0}, // i4ISO[ISO_MAX_NUM];
            // SGG1~7
            {
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
            },
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0},// i4MIN_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4HW_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4MIN_TH2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0} // i4HW_TH2[ISO_MAX_NUM];
        },
        // -------------------- sREV5_AF_TH ---------------------
        {
            0,  // i4ISONum;
            {0,0,0,0,0,0,0,0}, // i4ISO[ISO_MAX_NUM];
            // SGG1~7
            {
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
             {0, 0, 0, 0, 0, 0, 0, 0},
            },
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0},// i4MIN_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4HW_TH[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4FV_DC2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0}, // i4MIN_TH2[ISO_MAX_NUM];
            {0, 0, 0, 0, 0, 0, 0, 0} // i4HW_TH2[ISO_MAX_NUM];
        },
        // --- Common use ---        
        1,  // i4ReadOTP; 				// 0: disable, 1:enable
        3,  // i4StatGain;
        30,  // i4LV_THRES;
        200,  // i4InfPos;
        33,  // i4FRAME_TIME;
        {0, 50, 150, 250, 350}, // back jump
        400,//i4BackJumpPos
        20, // i4AFC_STEP_SIZE
        18, // i4SPOT_PERCENT_W;        // AFC window location
        24, // i4SPOT_PERCENT_H;        // AFC window location
        0, // i4CHANGE_CNT_DELTA
        1, // i4AFS_STEP_MIN_ENABLE
        4, // i4AFS_STEP_MIN_NORMAL
        4, // i4AFS_STEP_MIN_MACRO
        5, // i4FIRST_FV_WAIT
        12, // i4FV_1ST_STABLE_THRES
        10000, // i4FV_1ST_STABLE_OFFSET
        6, // i4FV_1ST_STABLE_NUM
        6, // i4FV_1ST_STABLE_CNT
        50, // i4FV_SHOCK_THRES
        30000, // i4FV_SHOCK_OFFSET
        5, // i4FV_VALID_CNT
        20, // i4FV_SHOCK_FRM_CNT
        5, // i4FV_SHOCK_CNT
        // --- FaceAF ---
        80, // i4FDWinPercent
        40, // i4FDSizeDiff
        15, // i4FD_DETECT_CNT
        5, // i4FD_NONE_CNT
        // --- AFv1.1/AFv1.2 ---
        0, // i4LeftSearchEnable
        1, // i4LeftJumpStep
        0, // No use
        0, // i4AfDoneDelay
        0, // i4VdoAfDoneDelay
        0, // i4ZoomInWinChg
        0, // i4SensorEnable
        70, // i4PostureComp
        2, // i4SceneMonitorLevel
        1, // i4VdoSceneMonitorLevel

        // Scene Monitor                                                  
        // {Type, Off, Thr{by level}, Cnt{by level}}                      
        // Type: 1 is &&, 0 is ||                                         
        // Off : value, min=0 is more sensitive                           
        // Thr : percentage(value for gyro/acce), min=0 is more sensitive 
        // Cnt : value, max=30 is more stable                             
        // preview params                                                 
        {1,                                       // FV 0:disable, 1:enable
         0,   100, { 40, 40, 30}, { 13, 10, 10},   //    chg; chgT lower to sensitive, chgN bigger to stable  
         1,  5000, { 15, 15, 15}, { 20, 15, 10} }, //    stb; stbT should fix, stbN bigger to stable      
        {1,                                       // GS 0:disable, 1:enable
         0,    15, { 20, 20, 15}, { 28, 25, 25},   //    chg; chgT lower to sensitive, chgN bigger to stable  
         1,     5, {  5,  5,  5}, { 12, 10,  7} }, //    stb; stbT should fix, stbN bigger to stable      
        {1,                                       // AEB 0:disable, 1:enable
         0,    15, { 30, 30, 25}, { 33, 30, 30},   //    chg; chgT lower to sensitive, chgN bigger to stable  
         1,     5, { 10, 10, 10}, { 12, 10,  7} }, //    stb; stbT should fix, stbN bigger to stable      
        {1,                                       // GYRO 0:disable, 1:enable
         0,     0, { 40, 40, 20}, {  5,  3,  3},    //    chg; off=0, chgT lower to sensitive, chgN bigger to stable
         1,     0, { 10, 10, 10}, { 12, 10,  7} },    //    stb; off=0, stbT should fix, stbN bigger to stable
        {1,                                       // ACCE 0:disable, 1:enable
         0,     0, { 80, 80, 60}, { 15, 12, 12},   //    chg; off=0, chgT lower to sensitive, chgN bigger to stable
         1,     0, { 50, 50, 50}, { 12, 10,  7} }, //    stb; off=0, stbT should fix, stbN bigger to stable
        {0,                                       //   0:disable, 1:enable
         0,   100, { 40, 40, 30}, { 13, 10, 10},   //    chg; chgT lower to sensitive, chgN bigger to stable  
         1,  5000, { 15, 15, 15}, { 20, 15, 10} }, //    stb; stbT should fix, stbN bigger to stable      
        {0,                                       //   0:disable, 1:enable
         0,    15, { 20, 20, 15}, { 28, 25, 25},   //    chg; chgT lower to sensitive, chgN bigger to stable  
         1,     5, {  5,  5,  5}, { 15, 13, 10} }, //    stb; stbT should fix, stbN bigger to stable      
        {0,                                       //   0:disable, 1:enable
         0,    15, { 30, 30, 25}, { 33, 30, 30},   //    chg; chgT lower to sensitive, chgN bigger to stable  
         1,     5, { 10, 10, 10}, { 15, 13, 10} }, //    stb; stbT should fix, stbN bigger to stable      
        {0,                                       //   0:disable, 1:enable
         0,     0, { 40, 40, 20}, {  7,  5,  5},   //    chg; chgT lower to sensitive, chgN bigger to stable  
         1,     0, { 10, 10, 10}, { 15, 13, 10} }, //    stb; stbT should fix, stbN bigger to stable      
        {0,                                       //   0:disable, 1:enable
         0,     0, { 80, 80, 60}, { 15, 12, 12},   //    chg; chgT lower to sensitive, chgN bigger to stable  
         1,     0, { 50, 50, 50}, { 13, 13, 10} }, //    stb; stbT should fix, stbN bigger to stable      
        // --- AFv2.0 ---     
        0,  // i4FvExtractEnable;           // 0:disable, 1:enable (for faceAF)
        30, // i4FvExtractThr               // percentage, fixed
        0,  // i4DampingCompEnable;         // 0:disable, 1:enable
        {0, 10, 20, 30, 40, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, },        // { step1, step2, ... , step 15(atmost) }
        {
            {  0, -3, -5, -7, -10, -13, 0, 0, 0, 0, 0, 0, 0, 0, 0, },// prerun0:{rComp1, rComp2, ..., rComp15(atmost)}
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, }   // prerun1:{rComp1, rComp2, ..., rComp15(atmost)}
        },
        {
            {  0, 3, 5, 7, 10, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, },// prerun0:{rComp1, rComp2, ..., rComp15(atmost)}
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, }   // prerun1:{rComp1, rComp2, ..., rComp15(atmost)}
        },
        0,  // i4DirSelectEnable;           // 0:disable, 1:enable
        -1, // i4InfDir;                    // 1:right, -1:left, 2:reverse, 0:keep
        -1, // i4MidDir;                    // 
        -1, // i4MacDir;                    // 
        40, // i4RatioInf;                  // below 16763774475f tableLength belongs to INF
        70, // i4RatioMac;                  // above 16763774475f tableLength belongs to MAC ; should be larger than i4RatioInf          
        0,  // i4StartBoundEnable;          // 0:disable, 1:enable
        3,  // i4StartCamCAF;               // 0:keep current, -1:force to INF, X:set to boundary if within X steps
        3,  // i4StartCamTAF;               // 
        0,  // i4StartVdoCAF;               // 
        0,  // i4StartVdoTAF;               // 
        0,  // i4FpsRemapTblEnable;         // 0:disable, 1:enable
        {10, 12}, // i4FpsThres[2];        // two fps threshold {very-low, low}
        {1, 0},   // i4TableClipPt[2];     // clip pts at macro side
        {80, 90}, // i4TableRemapPt[2];    // percentage of new/org table length

        // --- Easytuning ---   
        {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        },// i4EasyTuning[100]

        // --- DepthAF ---      
        {
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
              0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
        }, // i4DepthAF[500]

        // --- reserved ---     
        {    
		    // i4Coefs[0]  inclinePeak rejection;   0: is disable, 1: is enable
		    // i4Coefs[1]  fdOffMaxCnt;             fd turnOff maxCnt for exiting faceAF, 0: use default value 10
		    // i4Coefs[41]  isPLenable;             0: is disable, 1: is enable
		    // i4Coefs[42]  plFlashReject;          0: is default, 1: is reject PL when flash
		    // i4Coefs[43]  plThresNsLv;            lv for night scene
		    // i4Coefs[44]  plThresIdLv;            lv for indoor
		    // i4Coefs[45]  plRatioNs;              ratio 0~100, from detect rate high to false alarm low
		    // i4Coefs[46]  plRatioId;              ratio 0~100, from detect rate high to false alarm low
		    // i4Coefs[47]  plRev1;
		    // i4Coefs[48]  plRev2;
		    // i4Coefs[49]  plRev3;
		    // i4Coefs[50]  plRev4;
		    0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // [0]~[10]
		    0,0, 0, 0, 0, 0, 0, 0, 0, 0,     // [11]~[20] for SDAF
		    0,0, 0, 0, 0, 0, 0, 0, 0, 0,     // [21]~[30] for PDAF
		    0,0, 0, 0, 0, 0, 0, 0, 0, 0,     // [31]~[40] for DAF
		    0,0, 0, 0, 0, 0, 0, 0, 0, 0,     // [41]~[50] for PL detect
		    0,0, 0, 0, 0, 0, 0, 0, 0, 0,     // [51]~[60]
		    0,0, 0, 0, 0, 0, 0, 0, 0, 0,     // [61]~[70] for LaserAF
		    0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,     // [71]~[85] for LaserAF CalibData
		    0, 0, // [86]~[87] for LaserAF CalibData Offset, XTalk; Value = Enable * 10000 + CalibData
        } // i4Coefs[100];    
    },                          
    {//PD_NVRAM_T
        {//PD_CALIBRATION_DATA_T
            {0},
            0,
        },
        {//PD_ALGO_TUNING_T
            0,
            0,
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {
                {0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0},
            },
            0,
            0,
            0,
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        },
    },
    {0}                         
};                              
UINT32 FM50AF_getDefaultData(VOID *pDataBuf, UINT32 size)
{
    UINT32 dataSize = sizeof(NVRAM_LENS_PARA_STRUCT);

    if ((pDataBuf == NULL) || (size < dataSize))
    {
        return 1;
    }

    // copy from Buff to global struct
    memcpy(pDataBuf, &FM50AF_LENS_PARA_DEFAULT_VALUE, dataSize);
    return 0;
}
PFUNC_GETLENSDEFAULT pFM50AF_getDefaultData = FM50AF_getDefaultData;


