#include <utils/Log.h>
#include <fcntl.h>
#include <math.h>

#include "camera_custom_nvram.h"
#include "camera_custom_sensor.h"
#include "image_sensor.h"
#include "kd_imgsensor_define.h"
#include "camera_AE_PLineTable_sp0a09mipiraw.h"
#include "camera_info_sp0a09mipiraw.h"
#include "camera_custom_AEPlinetable.h"
#include "camera_custom_tsf_tbl.h"


const NVRAM_CAMERA_ISP_PARAM_STRUCT CAMERA_ISP_DEFAULT_VALUE =
{{
    //Version
    Version: NVRAM_CAMERA_PARA_FILE_VERSION,

    //SensorId
    SensorId: SENSOR_ID,
    ISPComm:{
      {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      }
    },
    ISPPca: {
#include INCLUDE_FILENAME_ISP_PCA_PARAM
    },
    ISPRegs:{
#include INCLUDE_FILENAME_ISP_REGS_PARAM
    },
    ISPMfbMixer:{{
      0x01FF0001, // MIX3_CTRL_0
      0x00FF0000, // MIX3_CTRL_1
      0xFFFF0000  // MIX3_SPARE
    }},
    ISPMulitCCM:{
      Poly22:{
        77875,      // i4R_AVG
        8809,      // i4R_STD
        70925,      // i4B_AVG
        18754,      // i4B_STD
        0,      // i4R_MAX
        0,      // i4R_MIN
        0,      // i4G_MAX
        0,      // i4G_MIN
        0,      // i4B_MAX
        0,      // i4B_MIN
        {  // i4P00[9]
            11171152, -5546180, -499972, -2083848, 7439888, -239635, -529045, -3545730, 9199775
        },
        {  // i4P10[9]
            2203312, -2277352, 72881, -46472, -22473, 54517, 145654, -240871, 94058
        },
        {  // i4P01[9]
            2024729, -1752169, -267758, -728197, 434069, 285689, -466873, -843709, 1315383
        },
        {  // i4P20[9]
            0, 0, 0, 0, 0, 0, 0, 0, 0
        },
        {  // i4P11[9]
            0, 0, 0, 0, 0, 0, 0, 0, 0
        },
        {  // i4P02[9]
            0, 0, 0, 0, 0, 0, 0, 0, 0
        }
      },
      AWBGain:{
        // Strobe
        {
          512,    // i4R
          512,    // i4G
          512    // i4B
        },
        // A
        {
          659,    // i4R
          512,    // i4G
          843    // i4B
        },
        // TL84
        {
          534,    // i4R
          512,    // i4G
          1009    // i4B
        },
        // CWF
        {
          845,    // i4R
          512,    // i4G
          548    // i4B
        },
        // D65
        {
          512,    // i4R
          512,    // i4G
          512    // i4B
        },
        // Reserved 1
        {
          512,    // i4R
          512,    // i4G
          512    // i4B
        },
        // Reserved 2
        {
          512,    // i4R
          512,    // i4G
          512    // i4B
        },
        // Reserved 3
        {
          512,    // i4R
          512,    // i4G
          512    // i4B
        }
      },
      Weight:{
        1, // Strobe
        1, // A
        1, // TL84
        1, // CWF
        1, // D65
        1, // Reserved 1
        1, // Reserved 2
        1  // Reserved 3
      }
    },
    //bInvokeSmoothCCM
    bInvokeSmoothCCM: MTRUE
}};

const NVRAM_CAMERA_3A_STRUCT CAMERA_3A_NVRAM_DEFAULT_VALUE =
{
    NVRAM_CAMERA_3A_FILE_VERSION, // u4Version
    SENSOR_ID, // SensorId

    // AE NVRAM
    {
        // rDevicesInfo
        {
            1152,    // u4MinGain, 1024 base = 1x
            6144,    // u4MaxGain, 16x
            51,    // u4MiniISOGain, ISOxx  
            128,    // u4GainStepUnit, 1x/8 
            26306,    // u4PreExpUnit 
            30,    // u4PreMaxFrameRate
            26306,    // u4VideoExpUnit  
            30,    // u4VideoMaxFrameRate 
            1024,    // u4Video2PreRatio, 1024 base = 1x 
            26306,    // u4CapExpUnit 
            30,    // u4CapMaxFrameRate
            1024,    // u4Cap2PreRatio, 1024 base = 1x
            26306,    // u4Video1ExpUnit
            30,    // u4Video1MaxFrameRate
            1024,    // u4Video12PreRatio, 1024 base = 1x
            26306,    // u4Video2ExpUnit
            30,    // u4Video2MaxFrameRate
            1024,    // u4Video22PreRatio, 1024 base = 1x
            26306,    // u4Custom1ExpUnit
            30,    // u4Custom1MaxFrameRate
            1024,    // u4Custom12PreRatio, 1024 base = 1x
            26306,    // u4Custom2ExpUnit
            30,    // u4Custom2MaxFrameRate
            1024,    // u4Custom22PreRatio, 1024 base = 1x
            26306,    // u4Custom3ExpUnit
            30,    // u4Custom3MaxFrameRate
            1024,    // u4Custom32PreRatio, 1024 base = 1x
            26306,    // u4Custom4ExpUnit
            30,    // u4Custom4MaxFrameRate
            1024,    // u4Custom42PreRatio, 1024 base = 1x
            26306,    // u4Custom5ExpUnit
            30,    // u4Custom5MaxFrameRate
            1024,    // u4Custom52PreRatio, 1024 base = 1x
            28,    // u4LensFno, Fno = 2.8
            350     // u4FocusLength_100x
        },
        // rHistConfig
        {
            4, // 2,   // u4HistHighThres
            40,  // u4HistLowThres
            2,   // u4MostBrightRatio
            1,   // u4MostDarkRatio
            160, // u4CentralHighBound
            20,  // u4CentralLowBound
            {240, 230, 220, 210, 200}, // u4OverExpThres[AE_CCT_STRENGTH_NUM]
            {62, 70, 82, 108, 141},  // u4HistStretchThres[AE_CCT_STRENGTH_NUM]
            {18, 22, 26, 30, 34}       // u4BlackLightThres[AE_CCT_STRENGTH_NUM]
        },
        // rCCTConfig
        {
            TRUE,            // bEnableBlackLight
            TRUE,            // bEnableHistStretch
            FALSE, //TRUE,           // bEnableAntiOverExposure
            TRUE,            // bEnableTimeLPF
            TRUE,            // bEnableCaptureThres
            TRUE,            // bEnableVideoThres
            TRUE,            // bEnableVideo1Thres
            TRUE,            // bEnableVideo2Thres
            TRUE,            // bEnableCustom1Thres
            TRUE,            // bEnableCustom2Thres
            TRUE,            // bEnableCustom3Thres
            TRUE,            // bEnableCustom4Thres
            TRUE,            // bEnableCustom5Thres
            TRUE,            // bEnableStrobeThres
            47,                // u4AETarget
            47,                // u4StrobeAETarget

            50,                // u4InitIndex
            4,                 // u4BackLightWeight
            32,                // u4HistStretchWeight
            4,                 // u4AntiOverExpWeight
            2,                 // u4BlackLightStrengthIndex
            2,                 // u4HistStretchStrengthIndex
            2,                 // u4AntiOverExpStrengthIndex
            2,                 // u4TimeLPFStrengthIndex
            {1, 3, 5, 7, 8}, // u4LPFConvergeTable[AE_CCT_STRENGTH_NUM]
            90,                // u4InDoorEV = 9.0, 10 base
            -3,    // i4BVOffset delta BV = value/10 
            64,                 // u4PreviewFlareOffset
            64,                 // u4CaptureFlareOffset
            3,                 // u4CaptureFlareThres
            64,                 // u4VideoFlareOffset
            3,                 // u4VideoFlareThres
            64,               // u4CustomFlareOffset
            3,                 //  u4CustomFlareThres
            64,                 // u4StrobeFlareOffset //12 bits
            3,                 // u4StrobeFlareThres // 0.5%
            160,                 // u4PrvMaxFlareThres //12 bit
            0,                 // u4PrvMinFlareThres
            160,                 // u4VideoMaxFlareThres // 12 bit
            0,                 // u4VideoMinFlareThres
            18,                // u4FlatnessThres              // 10 base for flatness condition.
            75,    // u4FlatnessStrength
            //rMeteringSpec
            {
                //rHS_Spec
                {
                    TRUE,//bEnableHistStretch           // enable histogram stretch
                    1024,//u4HistStretchWeight          // Histogram weighting value
                    40, //50, //20,//u4Pcent                      // 1%=10, 0~1000
                    160, //166,//176,//u4Thd                        // 0~255
                    75, //54, //74,//u4FlatThd                    // 0~255

                    120,//u4FlatBrightPcent
                    120,//u4FlatDarkPcent
                    //sFlatRatio
                    {
                        1000,  //i4X1
                        1024,  //i4Y1
                        2400, //i4X2
                        0     //i4Y2
                    },
                    TRUE, //bEnableGreyTextEnhance
                    1800, //u4GreyTextFlatStart, > sFlatRatio.i4X1, < sFlatRatio.i4X2
                    {
                        10,     //i4X1
                        1024,   //i4Y1
                        80,     //i4X2
                        0       //i4Y2
                    }
                },
                //rAOE_Spec
                {
                    TRUE, //bEnableAntiOverExposure
                    1024, //u4AntiOverExpWeight
                    10,    //u4Pcent
                    200,  //u4Thd

                    TRUE, //bEnableCOEP
                    1,    //u4COEPcent
                    106,  //u4COEThd
                    0,  // u4BVCompRatio
                    //sCOEYRatio;     // the outer y ratio
                    {
                        23,   //i4X1
                        1024,  //i4Y1
                        47,   //i4X2
                        0     //i4Y2
                    },
                    //sCOEDiffRatio;  // inner/outer y difference ratio
                    {
                        1500, //i4X1
                        0,    //i4Y1
                        2100, //i4X2
                        1024   //i4Y2
                    }
                },
                //rABL_Spec
                {
                    TRUE,//bEnableBlackLigh
                    1024,//u4BackLightWeigh
                    400,//u4Pcent
                    22,//u4Thd,
                    255, // center luminance
                    256, // final target limitation, 256/128 = 2x
                    //sFgBgEVRatio
                    {
                        2200, //i4X1
                        0,    //i4Y1
                        4000, //i4X2
                        1024   //i4Y2
                    },
                    //sBVRatio
                    {
                        3800,//i4X1
                        0,   //i4Y1
                        5000,//i4X2
                        1024  //i4Y2
                    }
                },
                //rNS_Spec
                {
                    TRUE, // bEnableNightScene
                    5,    //u4Pcent
                    170,  //u4Thd
                    72, //52,   //u4FlatThd

                    200,  //u4BrightTonePcent
                    92, //u4BrightToneThd

                    500,  //u4LowBndPcent
                    5,    //u4LowBndThd
                    26,    //u4LowBndThdLimit

                    50,  //u4FlatBrightPcent;
                    300,   //u4FlatDarkPcent;
                    //sFlatRatio
                    {
                        1200, //i4X1
                        1024, //i4Y1
                        2400, //i4X2
                        0    //i4Y2
                    },
                    //sBVRatio
                    {
                        -500, //i4X1
                        1024,  //i4Y1
                        3000, //i4X2
                        0     //i4Y2
                    },
                    TRUE, // bEnableNightSkySuppresion
                    //sSkyBVRatio
                    {
                        -4000, //i4X1
                        1024, //i4X2
                        -2000,  //i4Y1
                        0     //i4Y2
                    }
                },
                // rTOUCHFD_Spec
                {
                    40, //uMeteringYLowBound;
                    50, //uMeteringYHighBound;
                    40, //uFaceYLowBound;
                    50, //uFaceYHighBound;
                    3,  //uFaceCentralWeight;
                    120,//u4MeteringStableMax;
                    80, //u4MeteringStableMin;
                }
            }, //End rMeteringSpec
            // rFlareSpec
            {
                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, //uPrvFlareWeightArr[16];
                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, //uVideoFlareWeightArr[16];
                96,                                               //u4FlareStdThrHigh;
                48,                                               //u4FlareStdThrLow;
                0,                                                //u4PrvCapFlareDiff;
                4,                                                //u4FlareMaxStepGap_Fast;
                0,                                                //u4FlareMaxStepGap_Slow;
                1800,                                             //u4FlarMaxStepGapLimitBV;
                0,                                                //u4FlareAEStableCount;
            },
            //rAEMoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                190, //u4Bright2TargetEnd
                20,   //u4Dark2TargetStart
                90, //u4B2TEnd
                70,  //u4B2TStart
                60,  //u4D2TEnd
                90,  //u4D2TStart
            },

            //rAEVideoMoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },

            //rAEVideo1MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },

            //rAEVideo2MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },

            //rAECustom1MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },

            //rAECustom2MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },

            //rAECustom3MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },

            //rAECustom4MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },

            //rAECustom5MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },

            //rAEFaceMoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                190,  //u4Bright2TargetEnd
                10,    //u4Dark2TargetStart
                80, //u4B2TEnd
                30,  //u4B2TStart
                20,  //u4D2TEnd
                60,  //u4D2TStart
            },

            //rAETrackingMoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                190,  //u4Bright2TargetEnd
                10,    //u4Dark2TargetStart
                80, //u4B2TEnd
                30,  //u4B2TStart
                20,  //u4D2TEnd
                60,  //u4D2TStart
            },
            //rAEAOENVRAMParam =
            {
                1,      // i4AOEStrengthIdx: 0 / 1 / 2
                128,    // u4BVCompRatio
                {
                    {
                        47,  //u4Y_Target
                        10,  //u4AOE_OE_percent
                        160,  //u4AOE_OEBound
                        15,    //u4AOE_DarkBound
                        950,    //u4AOE_LowlightPrecent
                        5,    //u4AOE_LowlightBound
                        100,    //u4AOESceneLV_L
                        150,    //u4AOESceneLV_H
                        40,    //u4AOE_SWHdrLE_Bound
                    },
                    {
                        47,  //u4Y_Target
                        10,  //u4AOE_OE_percent
                        180,  //u4AOE_OEBound
                20,    //u4AOE_DarkBound
                        950,    //u4AOE_LowlightPrecent
                10,    //u4AOE_LowlightBound
                100,    //u4AOESceneLV_L
                150,    //u4AOESceneLV_H
                        40,    //u4AOE_SWHdrLE_Bound
                    },
                    {
                        47,  //u4Y_Target
                        10,  //u4AOE_OE_percent
                        200,  //u4AOE_OEBound
                        25,    //u4AOE_DarkBound
                        950,    //u4AOE_LowlightPrecent
                        15,    //u4AOE_LowlightBound
                        100,    //u4AOESceneLV_L
                        150,    //u4AOESceneLV_H
                        40,    //u4AOE_SWHdrLE_Bound
                    }
                }
            }
        }
    },
        // AWB NVRAM
        {
        {
          {
            // AWB calibration data
            {
                // rUnitGain (unit gain: 1.0 = 512)
                {
                    0,    // i4R
                    0,    // i4G
                    0    // i4B
                },
                // rGoldenGain (golden sample gain: 1.0 = 512)
                {
                    0,    // i4R
                    0,    // i4G
                    0    // i4B
                },
                // rTuningUnitGain (Tuning sample unit gain: 1.0 = 512)
                {
                    0,    // i4R
                    0,    // i4G
                    0    // i4B
                },
                // rD65Gain (D65 WB gain: 1.0 = 512)
                {
                    843,    // D65Gain_R
                    512,    // D65Gain_G
                    549    // D65Gain_B
                }
            },
            // Original XY coordinate of AWB light source
            {
                // Strobe
                {
                    208,    // i4X
                    -193    // i4Y
                },
                // Horizon
                {
                    -334,    // OriX_Hor
                    -260    // OriY_Hor
                },
                // A
                {
                    -231,    // OriX_A
                    -266    // OriY_A
                },
                // TL84
                {
                    -83,    // OriX_TL84
                    -268    // OriY_TL84
                },
                // CWF
                {
                    -59,    // OriX_CWF
                    -345    // OriY_CWF
                },
                // DNP
                {
                    -15,    // OriX_DNP
                    -242    // OriY_DNP
                },
                // D65
                {
                    159,    // OriX_D65
                    -210    // OriY_D65
                },
                // DF
                {
                    0,    // OriX_DF
                    0    // OriY_DF
                }
            },
            // Rotated XY coordinate of AWB light source
            {
                // Strobe
                {
                    179,    // i4X
                    -221    // i4Y
                },
                // Horizon
                {
                    -368,    // RotX_Hor
                    -211    // RotY_Hor
                },
                // A
                {
                    -267,    // RotX_A
                    -231    // RotY_A
                },
                // TL84
                {
                    -120,    // RotX_TL84
                    -254    // RotY_TL84
                },
                // CWF
                {
                    -107,    // RotX_CWF
                    -334    // RotY_CWF
                },
                // DNP
                {
                    -49,    // RotX_DNP
                    -238    // RotY_DNP
                },
                // D65
                {
                    128,    // RotX_D65
                    -231    // RotY_D65
                },
                // DF
                {
                    100,    // RotX_DF
                    -322    // RotY_DF
                }
            },
            // AWB gain of AWB light source
            {
                // Strobe 
                {
                    899,    // i4R
                    523,    // i4G
                    512    // i4B
                },
                // Horizon 
                {
                    512,    // AWBGAIN_HOR_R
                    566,    // AWBGAIN_HOR_G
                    1264    // AWBGAIN_HOR_B
                },
                // A 
                {
                    537,    // AWBGAIN_A_R
                    512,    // AWBGAIN_A_G
                    1003    // AWBGAIN_A_B
                },
                // TL84 
                {
                    658,    // AWBGAIN_TL84_R
                    512,    // AWBGAIN_TL84_G
                    823    // AWBGAIN_TL84_B
                },
                // CWF 
                {
                    754,    // AWBGAIN_CWF_R
                    512,    // AWBGAIN_CWF_G
                    885    // AWBGAIN_CWF_B
                },
                // DNP 
                {
                    697,    // AWBGAIN_DNP_R
                    512,    // AWBGAIN_DNP_G
                    725    // AWBGAIN_DNP_B
                },
                // D65 
                {
                    843,    // AWBGAIN_D65_R
                    512,    // AWBGAIN_D65_G
                    549    // AWBGAIN_D65_B
                },
                // DF 
                {
                    512,    // AWBGAIN_DF_R
                    512,    // AWBGAIN_DF_G
                    512    // AWBGAIN_DF_B
                }
            },
            // Rotation matrix parameter
            {
                8,    // RotationAngle
                254,    // Cos
                36    // Sin
            },
            // Daylight locus parameter
            {
                -167,    // i4SlopeNumerator
                128    // i4SlopeDenominator
            },
            // Predictor gain
            {
                101, // i4PrefRatio100
                // DaylightLocus_L
                {
                    813,    // i4R
                    530,    // i4G
                    569    // i4B
                },
                // DaylightLocus_H
                {
                    669,    // i4R
                    512,    // i4G
                    748    // i4B
                },
                // Temporal General
                {
                    843,    // i4R
                    512,    // i4G
                    549    // i4B
                },
                // AWB LSC Gain
                {
                    669,        // i4R
                    512,        // i4G
                    748        // i4B
                }
            },
            // AWB light area
            {
                // Strobe:FIXME
                {
                    229,    // i4RightBound
                    129,    // i4LeftBound
                    -171,    // i4UpperBound
                    -271    // i4LowerBound
                },
                // Tungsten
                {
                    -179,    // TungRightBound
                    -768,    // TungLeftBound
                    -156,    // TungUpperBound
                    -243    // TungLowerBound
                },
                // Warm fluorescent
                {
                    -179,    // WFluoRightBound
                    -768,    // WFluoLeftBound
                    -243,    // WFluoUpperBound
                    -424    // WFluoLowerBound
                },
                // Fluorescent
                {
                    -72,    // FluoRightBound
                    -179,    // FluoLeftBound
                    -171,    // FluoUpperBound
                    -294    // FluoLowerBound
                },
                // CWF
                {
                -16,    // CWFRightBound
                -179,    // CWFLeftBound
                -294,    // CWFUpperBound
                -389    // CWFLowerBound
                },
                // Daylight
                {
                    158,    // DayRightBound
                    -72,    // DayLeftBound
                    -171,    // DayUpperBound
                    -294    // DayLowerBound
                },
                // Shade
                {
                    488,    // ShadeRightBound
                    158,    // ShadeLeftBound
                    -171,    // ShadeUpperBound
                    -272    // ShadeLowerBound
                },
                // Daylight Fluorescent
                {
                    158,    // DFRightBound
                    -16,    // DFLeftBound
                    -294,    // DFUpperBound
                    -389    // DFLowerBound
                }
            },
            // PWB light area
            {
                // Reference area
                {
                    488,    // PRefRightBound
                    -768,    // PRefLeftBound
                    -156,    // PRefUpperBound
                    -424    // PRefLowerBound
                },
                // Daylight
                {
                    183,    // PDayRightBound
                    -72,    // PDayLeftBound
                    -171,    // PDayUpperBound
                    -294    // PDayLowerBound
                },
                // Cloudy daylight
                {
                    283,    // PCloudyRightBound
                    108,    // PCloudyLeftBound
                    -171,    // PCloudyUpperBound
                    -294    // PCloudyLowerBound
                },
                // Shade
                {
                    383,    // PShadeRightBound
                    108,    // PShadeLeftBound
                    -171,    // PShadeUpperBound
                    -294    // PShadeLowerBound
                },
                // Twilight
                {
                    -72,    // PTwiRightBound
                    -232,    // PTwiLeftBound
                    -171,    // PTwiUpperBound
                    -294    // PTwiLowerBound
                },
                // Fluorescent
                {
                    178,    // PFluoRightBound
                    -220,    // PFluoLeftBound
                    -181,    // PFluoUpperBound
                    -384    // PFluoLowerBound
                },
                // Warm fluorescent
                {
                    -167,    // PWFluoRightBound
                    -367,    // PWFluoLeftBound
                    -181,    // PWFluoUpperBound
                    -384    // PWFluoLowerBound
                },
                // Incandescent
                {
                    -167,    // PIncaRightBound
                    -367,    // PIncaLeftBound
                    -171,    // PIncaUpperBound
                    -294    // PIncaLowerBound
                },
                // Gray World
                {
                    5000,    // PGWRightBound
                    -5000,    // PGWLeftBound
                    5000,    // PGWUpperBound
                    -5000    // PGWLowerBound
                }
            },
            // PWB default gain	
            {
                // Daylight
                {
                    778,    // PWB_Day_R
                    512,    // PWB_Day_G
                    614    // PWB_Day_B
                },
                // Cloudy daylight
                {
                    914,    // PWB_Cloudy_R
                    512,    // PWB_Cloudy_G
                    496    // PWB_Cloudy_B
                },
                // Shade
                {
                    968,    // PWB_Shade_R
                    512,    // PWB_Shade_G
                    460    // PWB_Shade_B
                },
                // Twilight
                {
                    613,    // PWB_Twi_R
                    512,    // PWB_Twi_G
                    843    // PWB_Twi_B
                },
                // Fluorescent
                {
                    769,    // PWB_Fluo_R
                    512,    // PWB_Fluo_G
                    731    // PWB_Fluo_B
                },
                // Warm fluorescent
                {
                    580,    // PWB_WFluo_R
                    512,    // PWB_WFluo_G
                    1065    // PWB_WFluo_B
                },
                // Incandescent
                {
                    537,    // PWB_Inca_R
                    512,    // PWB_Inca_G
                    1005    // PWB_Inca_B
                },
                // Gray World
                {
                    512,    // PWB_GW_R
                    512,    // PWB_GW_G
                    512    // PWB_GW_B
                }
            },
            // AWB preference color	
            {
                // Tungsten
                {
                    50,    // TUNG_SLIDER
                    4219    // TUNG_OFFS
                },
                // Warm fluorescent	
                {
                    50,    // WFluo_SLIDER
                    4219    // WFluo_OFFS
                },
                // Shade
                {
                    50,    // Shade_SLIDER
                    412    // Shade_OFFS
                },
                // Sunset Area
                {
                    -60,   // i4Sunset_BoundXr_Thr
                    -238    // i4Sunset_BoundYr_Thr
                },
                // Sunset Vertex
                {
                    -31,   // i4Sunset_BoundXr_Thr
                    -238    // i4Sunset_BoundYr_Thr
                },
                // Shade F Area
                {
                    -179,   // i4BoundXrThr
                    -268    // i4BoundYrThr
                },
                // Shade F Vertex
                {
                    -179,   // i4BoundXrThr
                    -276    // i4BoundYrThr
                },
                // Shade CWF Area
                {
                    -179,   // i4BoundXrThr
                    -359    // i4BoundYrThr
                },
                // Shade CWF Vertex
                {
                    -179,   // i4BoundXrThr
                    -364    // i4BoundYrThr
                },
                // Low CCT Area
                {
                    -388,   // i4BoundXrThr
                    196    // i4BoundYrThr
                },
                // Low CCT Vertex
                {
                    -388,   // i4BoundXrThr
                    196    // i4BoundYrThr
                }
            },
            // CCT estimation
            {
                // CCT
                {
                    2300,    // i4CCT[0]
                    2850,    // i4CCT[1]
                    3750,    // i4CCT[2]
                    5100,    // i4CCT[3]
                    6500     // i4CCT[4]
                },
                // Rotated X coordinate
                {
                -496,    // i4RotatedXCoordinate[0]
                -395,    // i4RotatedXCoordinate[1]
                -248,    // i4RotatedXCoordinate[2]
                -177,    // i4RotatedXCoordinate[3]
                0    // i4RotatedXCoordinate[4]
                }
            }
        },
        // Algorithm Tuning Paramter
        {
            // AWB Backup Enable
            0,

            // Daylight locus offset LUTs for tungsten
            {
                21, // i4Size: LUT dimension
                {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000}, // i4LUTIn
                {0, 350, 800, 1222, 1444, 1667, 1889, 2111, 2333, 2556, 2778, 3000, 3222, 3444, 3667, 3889, 4111, 4333, 4556, 4778, 5000} // i4LUTOut
            },
            // Daylight locus offset LUTs for WF
            {
                21, // i4Size: LUT dimension
                {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000}, // i4LUTIn
                {0, 350, 700, 1000, 1444, 1667, 1889, 2111, 2333, 2556, 2778, 3000, 3222, 3444, 3667, 3889, 4111, 4333, 4556, 4778, 5000} // i4LUTOut
            },
            // Daylight locus offset LUTs for Shade
            {
                21, // i4Size: LUT dimension
                {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000}, // i4LUTIn
                {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000} // i4LUTOut
            },
            // Preference gain for each light source
            {
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                }, // STROBE
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                }, // TUNGSTEN
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                }, // WARM F
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}
                }, // F
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                }, // CWF
                {
                    {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, 
                    {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}
                }, // DAYLIGHT
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                }, // SHADE
                {
                    {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, 
                    {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}, {520, 505, 512}
                } // DAYLIGHT F
            },
            // Parent block weight parameter
            {
                1,      // bEnable
                6           // i4ScalingFactor: [6] 1~12, [7] 1~6, [8] 1~3, [9] 1~2, [>=10]: 1
            },
            // AWB LV threshold for predictor
            {
                115,    // i4InitLVThr_L
                155,    // i4InitLVThr_H
                100      // i4EnqueueLVThr
            },
            // AWB number threshold for temporal predictor
            {
                65,     // i4Neutral_ParentBlk_Thr
                //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   2,   2,   2,   2,   2,   2,   2}  // (%) i4CWFDF_LUTThr
                },
                // AWB light neutral noise reduction for outdoor
                {
                    //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                    // Non neutral
                    {   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // Flurescent
                    {   0,   0,   0,   0,   0,   3,   5,   5,   5,   5,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // CWF
                    {   0,   0,   0,   0,   0,   3,   5,   5,   5,   5,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // Daylight
                    {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2},  // (%)
                    // DF
                    {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                },
                // AWB feature detection
                {
                    // Sunset Prop
                    {
                        1,          // i4Enable
                        120,        // i4LVThr_L
                        130,        // i4LVThr_H
                        10,         // i4SunsetCountThr
                        0,          // i4SunsetCountRatio_L
                        171         // i4SunsetCountRatio_H
                    },
                    // Shade F Detection
                    {
                        1,          // i4Enable
                        50,        // i4LVThr_L
                        70,        // i4LVThr_H
                        96         // i4DaylightProb
                    },
                    // Shade CWF Detection
                    {
                        1,          // i4Enable
                        50,        // i4LVThr_L
                        70,        // i4LVThr_H
                        192         // i4DaylightProb
                    },
                    // Low CCT
                    {
                        0,          // i4Enable
                        256        // i4SpeedRatio
                    }
                },
                // AWB non-neutral probability for spatial and temporal weighting look-up table (Max: 100; Min: 0)
                {
                    //LV0   1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16   17   18
                    {   0,  33,  66, 100, 100, 100, 100, 100, 100, 100, 100,  70,  30,  20,  10,   0,   0,   0,   0}
                },
                // AWB daylight locus probability look-up table (Max: 100; Min: 0)
                {   //LV0    1     2     3      4     5     6     7     8      9      10     11    12   13     14    15   16    17    18
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   0,   0,   0,   0}, // Strobe
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  25,   0,   0,   0}, // Tungsten
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  25,  25,  25,   0,   0,   0}, // Warm fluorescent
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  95,  75,  50,  25,  25,  25,   0,   0,   0}, // Fluorescent
                    {  90,  90,  90,  90,  90,  90,  90,  90,  90,  90,  80,  55,  30,  30,  30,  30,   0,   0,   0}, // CWF
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  40,  30,  20}, // Daylight
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  25,   0,   0,   0,   0}, // Shade
                    {  90,  90,  90,  90,  90,  90,  90,  90,  90,  90,  80,  55,  30,  30,  30,  30,   0,   0,   0} // Daylight fluorescent
                }
            }
        },
        {
          {
            // AWB calibration data
            {
                // rUnitGain (unit gain: 1.0 = 512)
                {
                    0,    // i4R
                    0,    // i4G
                    0    // i4B
                },
                // rGoldenGain (golden sample gain: 1.0 = 512)
                {
                    0,    // i4R
                    0,    // i4G
                    0    // i4B
                },
                // rTuningUnitGain (Tuning sample unit gain: 1.0 = 512)
                {
                    0,    // i4R
                    0,    // i4G
                    0    // i4B
                },
                // rD65Gain (D65 WB gain: 1.0 = 512)
                {
                    895,    // D65Gain_R
                    512,    // D65Gain_G
                    551    // D65Gain_B
                }
            },
            // Original XY coordinate of AWB light source
            {
                // Strobe
                {
                    228,    // i4X
                    -228    // i4Y
                },
                // Horizon
                {
                    -358,    // OriX_Hor
                    -296    // OriY_Hor
                },
                // A
                {
                    -255,    // OriX_A
                    -296    // OriY_A
                },
                // TL84
                {
                    -93,    // OriX_TL84
                    -302    // OriY_TL84
                },
                // CWF
                {
                    -61,    // OriX_CWF
                    -382    // OriY_CWF
                },
                // DNP
                {
                    19,    // OriX_DNP
                    -280    // OriY_DNP
                },
                // D65
                {
                    179,    // OriX_D65
                    -233    // OriY_D65
                },
                // DF
                {
                    0,    // OriX_DF
                    0    // OriY_DF
                }
            },
            // Rotated XY coordinate of AWB light source
            {
                // Strobe
                {
                    194,    // i4X
                    -258    // i4Y
                },
                // Horizon
                {
                    -397,    // RotX_Hor
                    -243    // RotY_Hor
                },
                // A
                {
                    -295,    // RotX_A
                    -258    // RotY_A
                },
                // TL84
                {
                    -135,    // RotX_TL84
                    -287    // RotY_TL84
                },
                // CWF
                {
                    -114,    // RotX_CWF
                    -370    // RotY_CWF
                },
                // DNP
                {
                    -21,    // RotX_DNP
                    -280    // RotY_DNP
                },
                // D65
                {
                    145,    // RotX_D65
                    -256    // RotY_D65
                },
                // DF
                {
                    121,    // RotX_DF
                    -356    // RotY_DF
                }
            },
            // AWB gain of AWB light source
            {
                // Strobe 
                {
                    948,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Horizon 
                {
                    512,    // AWBGAIN_HOR_R
                    557,    // AWBGAIN_HOR_G
                    1351    // AWBGAIN_HOR_B
                },
                // A 
                {
                    542,    // AWBGAIN_A_R
                    512,    // AWBGAIN_A_G
                    1079    // AWBGAIN_A_B
                },
                // TL84 
                {
                    679,    // AWBGAIN_TL84_R
                    512,    // AWBGAIN_TL84_G
                    874    // AWBGAIN_TL84_B
                },
                // CWF 
                {
                    791,    // AWBGAIN_CWF_R
                    512,    // AWBGAIN_CWF_G
                    933    // AWBGAIN_CWF_B
                },
                // DNP 
                {
                    767,    // AWBGAIN_DNP_R
                    512,    // AWBGAIN_DNP_G
                    730    // AWBGAIN_DNP_B
                },
                // D65 
                {
                    895,    // AWBGAIN_D65_R
                    512,    // AWBGAIN_D65_G
                    551    // AWBGAIN_D65_B
                },
                // DF 
                {
                    512,    // AWBGAIN_DF_R
                    512,    // AWBGAIN_DF_G
                    512    // AWBGAIN_DF_B
                }
            },
            // Rotation matrix parameter
            {
                8,    // RotationAngle
                254,    // Cos
                36    // Sin
            },
            // Daylight locus parameter
            {
                -170,    // i4SlopeNumerator
                128    // i4SlopeDenominator
            },
            // Predictor gain
            {
                101, // i4PrefRatio100
                // DaylightLocus_L
                {
                    865,    // i4R
                    530,    // i4G
                    571    // i4B
                },
                // DaylightLocus_H
                {
                    719,    // i4R
                    512,    // i4G
                    735    // i4B
                },
                // Temporal General
                {
                    895,    // i4R
                    512,    // i4G
                    551    // i4B
                },
                // AWB LSC Gain
                {
                    719,        // i4R
                    512,        // i4G
                    735        // i4B
                }
            },
            // AWB light area
            {
                // Strobe:FIXME
                {
                    244,    // i4RightBound
                    144,    // i4LeftBound
                    -208,    // i4UpperBound
                    -308    // i4LowerBound
                },
                // Tungsten
                {
                    -199,    // TungRightBound
                    -797,    // TungLeftBound
                    -188,    // TungUpperBound
                    -273    // TungLowerBound
                },
                // Warm fluorescent
                {
                    -199,    // WFluoRightBound
                    -797,    // WFluoLeftBound
                    -273,    // WFluoUpperBound
                    -460    // WFluoLowerBound
                },
                // Fluorescent
                {
                    -58,    // FluoRightBound
                    -199,    // FluoLeftBound
                    -216,    // FluoUpperBound
                    -329    // FluoLowerBound
                },
                // CWF
                {
                -11,    // CWFRightBound
                -199,    // CWFLeftBound
                -329,    // CWFUpperBound
                -425    // CWFLowerBound
                },
                // Daylight
                {
                    175,    // DayRightBound
                    -58,    // DayLeftBound
                    -216,    // DayUpperBound
                    -329    // DayLowerBound
                },
                // Shade
                {
                    505,    // ShadeRightBound
                    175,    // ShadeLeftBound
                    -216,    // ShadeUpperBound
                    -302    // ShadeLowerBound
                },
                // Daylight Fluorescent
                {
                    175,    // DFRightBound
                    -11,    // DFLeftBound
                    -329,    // DFUpperBound
                    -425    // DFLowerBound
                }
            },
            // PWB light area
            {
                // Reference area
                {
                    505,    // PRefRightBound
                    -797,    // PRefLeftBound
                    -163,    // PRefUpperBound
                    -460    // PRefLowerBound
                },
                // Daylight
                {
                    200,    // PDayRightBound
                    -58,    // PDayLeftBound
                    -216,    // PDayUpperBound
                    -329    // PDayLowerBound
                },
                // Cloudy daylight
                {
                    300,    // PCloudyRightBound
                    125,    // PCloudyLeftBound
                    -216,    // PCloudyUpperBound
                    -329    // PCloudyLowerBound
                },
                // Shade
                {
                    400,    // PShadeRightBound
                    125,    // PShadeLeftBound
                    -216,    // PShadeUpperBound
                    -329    // PShadeLowerBound
                },
                // Twilight
                {
                    -58,    // PTwiRightBound
                    -218,    // PTwiLeftBound
                    -216,    // PTwiUpperBound
                    -329    // PTwiLowerBound
                },
                // Fluorescent
                {
                    195,    // PFluoRightBound
                    -235,    // PFluoLeftBound
                    -206,    // PFluoUpperBound
                    -420    // PFluoLowerBound
                },
                // Warm fluorescent
                {
                    -195,    // PWFluoRightBound
                    -395,    // PWFluoLeftBound
                    -206,    // PWFluoUpperBound
                    -420    // PWFluoLowerBound
                },
                // Incandescent
                {
                    -195,    // PIncaRightBound
                    -395,    // PIncaLeftBound
                    -216,    // PIncaUpperBound
                    -329    // PIncaLowerBound
                },
                // Gray World
                {
                    5000,    // PGWRightBound
                    -5000,    // PGWLeftBound
                    5000,    // PGWUpperBound
                    -5000    // PGWLowerBound
                }
            },
            // PWB default gain	
            {
                // Daylight
                {
                    842,    // PWB_Day_R
                    512,    // PWB_Day_G
                    628    // PWB_Day_B
                },
                // Cloudy daylight
                {
                    991,    // PWB_Cloudy_R
                    512,    // PWB_Cloudy_G
                    506    // PWB_Cloudy_B
                },
                // Shade
                {
                    1049,    // PWB_Shade_R
                    512,    // PWB_Shade_G
                    469    // PWB_Shade_B
                },
                // Twilight
                {
                    663,    // PWB_Twi_R
                    512,    // PWB_Twi_G
                    864    // PWB_Twi_B
                },
                // Fluorescent
                {
                    807,    // PWB_Fluo_R
                    512,    // PWB_Fluo_G
                    756    // PWB_Fluo_B
                },
                // Warm fluorescent
                {
                    589,    // PWB_WFluo_R
                    512,    // PWB_WFluo_G
                    1151    // PWB_WFluo_B
                },
                // Incandescent
                {
                    553,    // PWB_Inca_R
                    512,    // PWB_Inca_G
                    1098    // PWB_Inca_B
                },
                // Gray World
                {
                    512,    // PWB_GW_R
                    512,    // PWB_GW_G
                    512    // PWB_GW_B
                }
            },
            // AWB preference color	
            {
                // Tungsten
                {
                    50,    // TUNG_SLIDER
                    4735    // TUNG_OFFS
                },
                // Warm fluorescent	
                {
                    50,    // WFluo_SLIDER
                    4735    // WFluo_OFFS
                },
                // Shade
                {
                    50,    // Shade_SLIDER
                    913    // Shade_OFFS
                },
                // Sunset Area
                {
                    8,   // i4Sunset_BoundXr_Thr
                    -280    // i4Sunset_BoundYr_Thr
                },
                // Sunset Vertex
                {
                    8,   // i4Sunset_BoundXr_Thr
                    -280    // i4Sunset_BoundYr_Thr
                },
                // Shade F Area
                {
                    -199,   // i4BoundXrThr
                    -291    // i4BoundYrThr
                },
                // Shade F Vertex
                {
                    -199,   // i4BoundXrThr
                    -310    // i4BoundYrThr
                },
                // Shade CWF Area
                {
                    -199,   // i4BoundXrThr
                    -374    // i4BoundYrThr
                },
                // Shade CWF Vertex
                {
                    -199,   // i4BoundXrThr
                    -400    // i4BoundYrThr
                },
                // Low CCT Area
                {
                    -417,   // i4BoundXrThr
                    187    // i4BoundYrThr
                },
                // Low CCT Vertex
                {
                    -417,   // i4BoundXrThr
                    187    // i4BoundYrThr
                }
            },
            // CCT estimation
            {
                // CCT
                {
                    2300,    // i4CCT[0]
                    2850,    // i4CCT[1]
                    3750,    // i4CCT[2]
                    5100,    // i4CCT[3]
                    6500     // i4CCT[4]
                },
                // Rotated X coordinate
                {
                -542,    // i4RotatedXCoordinate[0]
                -440,    // i4RotatedXCoordinate[1]
                -280,    // i4RotatedXCoordinate[2]
                -166,    // i4RotatedXCoordinate[3]
                0    // i4RotatedXCoordinate[4]
                }
            }
        },
        // Algorithm Tuning Paramter
        {
            // AWB Backup Enable
            0,

            // Daylight locus offset LUTs for tungsten
            {
                21, // i4Size: LUT dimension
                {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000}, // i4LUTIn
                {0, 350, 800, 1222, 1444, 1667, 1889, 2111, 2333, 2556, 2778, 3000, 3222, 3444, 3667, 3889, 4111, 4333, 4556, 4778, 5000} // i4LUTOut
            },
            // Daylight locus offset LUTs for WF
            {
                21, // i4Size: LUT dimension
                {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000}, // i4LUTIn
                {0, 350, 700, 1000, 1444, 1667, 1889, 2111, 2333, 2556, 2778, 3000, 3222, 3444, 3667, 3889, 4111, 4333, 4556, 4778, 5000} // i4LUTOut
            },
            // Daylight locus offset LUTs for Shade
            {
                21, // i4Size: LUT dimension
                {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000}, // i4LUTIn
                {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000} // i4LUTOut
            },
            // Preference gain for each light source
            {
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                }, // STROBE
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                }, // TUNGSTEN
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                }, // WARM F
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}
                }, // F
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                }, // CWF
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}
                }, // DAYLIGHT
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                }, // SHADE
                {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                } // DAYLIGHT F
            },
            // Parent block weight parameter
            {
                1,      // bEnable
                6           // i4ScalingFactor: [6] 1~12, [7] 1~6, [8] 1~3, [9] 1~2, [>=10]: 1
            },
            // AWB LV threshold for predictor
            {
                115,    // i4InitLVThr_L
                155,    // i4InitLVThr_H
                100      // i4EnqueueLVThr
            },
            // AWB number threshold for temporal predictor
            {
                65,     // i4Neutral_ParentBlk_Thr
                //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   2,   2,   2,   2,   2,   2,   2}  // (%) i4CWFDF_LUTThr
                },
                // AWB light neutral noise reduction for outdoor
                {
                    //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                    // Non neutral
                    {   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // Flurescent
                    {   0,   0,   0,   0,   0,   3,   5,   5,   5,   5,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // CWF
                    {   0,   0,   0,   0,   0,   3,   5,   5,   5,   5,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // Daylight
                    {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2},  // (%)
                    // DF
                    {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                },
                // AWB feature detection
                {
                    // Sunset Prop
                    {
                        1,          // i4Enable
                        120,        // i4LVThr_L
                        130,        // i4LVThr_H
                        10,         // i4SunsetCountThr
                        0,          // i4SunsetCountRatio_L
                        171         // i4SunsetCountRatio_H
                    },
                    // Shade F Detection
                    {
                        1,          // i4Enable
                        50,        // i4LVThr_L
                        70,        // i4LVThr_H
                        96         // i4DaylightProb
                    },
                    // Shade CWF Detection
                    {
                        1,          // i4Enable
                        50,        // i4LVThr_L
                        70,        // i4LVThr_H
                        192         // i4DaylightProb
                    },
                    // Low CCT
                    {
                        0,          // i4Enable
                        256        // i4SpeedRatio
                    }
                },
                // AWB non-neutral probability for spatial and temporal weighting look-up table (Max: 100; Min: 0)
                {
                    //LV0   1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16   17   18
                    {   0,  33,  66, 100, 100, 100, 100, 100, 100, 100, 100,  70,  30,  20,  10,   0,   0,   0,   0}
                },
                // AWB daylight locus probability look-up table (Max: 100; Min: 0)
                {   //LV0    1     2     3      4     5     6     7     8      9      10     11    12   13     14    15   16    17    18
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   0,   0,   0,   0}, // Strobe
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  25,   0,   0,   0}, // Tungsten
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  25,  25,  25,   0,   0,   0}, // Warm fluorescent
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  95,  75,  50,  25,  25,  25,   0,   0,   0}, // Fluorescent
                    {  90,  90,  90,  90,  90,  90,  90,  90,  90,  90,  80,  55,  30,  30,  30,  30,   0,   0,   0}, // CWF
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  40,  30,  20}, // Daylight
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  25,   0,   0,   0,   0}, // Shade
                    {  90,  90,  90,  90,  90,  90,  90,  90,  90,  90,  80,  55,  30,  30,  30,  30,   0,   0,   0} // Daylight fluorescent
                }
            }
        }
        },


    // Flash AWB NVRAM
    {
#include INCLUDE_FILENAME_FLASH_AWB_PARA
    },

    {0}
};

#include INCLUDE_FILENAME_ISP_LSC_PARAM
//};  //  namespace

const CAMERA_TSF_TBL_STRUCT CAMERA_TSF_DEFAULT_VALUE =
{
    {
         1, //1,  // isTsfEn
        2,  // tsfCtIdx
        {20, 2000, -110, -110, 512, 512, 512, 0}    // rAWBInput[8]
    },

#include INCLUDE_FILENAME_TSF_PARA
#include INCLUDE_FILENAME_TSF_DATA
};

const NVRAM_CAMERA_FEATURE_STRUCT CAMERA_FEATURE_DEFAULT_VALUE =
{
#include INCLUDE_FILENAME_FEATURE_PARA
};

typedef NSFeature::RAWSensorInfo<SENSOR_ID> SensorInfoSingleton_T;


namespace NSFeature {
  template <>
  UINT32
  SensorInfoSingleton_T::
  impGetDefaultData(CAMERA_DATA_TYPE_ENUM const CameraDataType, VOID*const pDataBuf, UINT32 const size) const
  {
    UINT32 dataSize[CAMERA_DATA_TYPE_NUM] = {sizeof(NVRAM_CAMERA_ISP_PARAM_STRUCT),
        sizeof(NVRAM_CAMERA_3A_STRUCT),
        sizeof(NVRAM_CAMERA_SHADING_STRUCT),
        sizeof(NVRAM_LENS_PARA_STRUCT),
        sizeof(AE_PLINETABLE_T),
        0,
        sizeof(CAMERA_TSF_TBL_STRUCT),
        0,
        sizeof(NVRAM_CAMERA_FEATURE_STRUCT)
    };

    if (CameraDataType > CAMERA_NVRAM_DATA_FEATURE || NULL == pDataBuf || (size < dataSize[CameraDataType]))
    {
      return 1;
    }

    switch(CameraDataType)
    {
      case CAMERA_NVRAM_DATA_ISP:
        memcpy(pDataBuf,&CAMERA_ISP_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_ISP_PARAM_STRUCT));
        break;
      case CAMERA_NVRAM_DATA_3A:
        memcpy(pDataBuf,&CAMERA_3A_NVRAM_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_3A_STRUCT));
        break;
      case CAMERA_NVRAM_DATA_SHADING:
        memcpy(pDataBuf,&CAMERA_SHADING_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_SHADING_STRUCT));
        break;
      case CAMERA_DATA_AE_PLINETABLE:
        memcpy(pDataBuf,&g_PlineTableMapping,sizeof(AE_PLINETABLE_T));
        break;
      case CAMERA_DATA_TSF_TABLE:
        memcpy(pDataBuf,&CAMERA_TSF_DEFAULT_VALUE,sizeof(CAMERA_TSF_TBL_STRUCT));
        break;
      case CAMERA_NVRAM_DATA_FEATURE:
        memcpy(pDataBuf,&CAMERA_FEATURE_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_FEATURE_STRUCT));
        break;
      default:
        break;
    }
    return 0;
  }};  //  NSFeature


