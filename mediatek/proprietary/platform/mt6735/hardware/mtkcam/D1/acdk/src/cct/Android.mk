#
# libacdk
#
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

#
LOCAL_SRC_FILES := \
    $(call all-c-cpp-files-under, if) \
LOCAL_SRC_FILES += \
    calibration/cct_calibration.cpp \
    calibration/cct_flash_cali.cpp \
    calibration/cct_imgtool.cpp \
#    $(call all-c-cpp-files-under, ctrl)


#
# Note: "/bionic" and "/external/stlport/stlport" is for stlport.
LOCAL_C_INCLUDES += \
    $(TOP)/bionic \
    $(TOP)/external/stlport/stlport \
    $(TOP)/$(MTK_PATH_SOURCE)/kernel/drivers/video \
    $(TOP)/$(MTK_PATH_PLATFORM)/hardware/ \
    $(TOP)/$(MTK_PATH_PLATFORM)/hardware/mtkcam/D1 \
    $(TOP)/$(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/acdk/inc/acdk \
    $(TOP)/$(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/acdk/inc/cct \
    $(TOP)/$(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/drv/imgsensor \
    $(TOP)/$(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/featureio/drv/inc \
    $(TOP)/$(MTK_PATH_CUSTOM)/hal/inc/camera_feature \
    $(TOP)/$(MTK_PATH_CUSTOM)/hal/inc/isp_tuning \
    $(TOP)/$(MTK_PATH_CUSTOM_PLATFORM)/hal/D1/inc/isp_tuning \
    $(TOP)/$(MTK_PATH_CUSTOM)/hal/inc/aaa \
    $(TOP)/$(MTK_PATH_CUSTOM)/hal/inc/aaa/debug_exif/aaa \
    $(TOP)/$(MTK_PATH_CUSTOM)/hal/inc/aaa/debug_exif/cam \
    $(TOP)/$(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/imageio/inc \
    $(TOP)/$(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/imageio/pipe/inc \
    $(TOP)/$(MTK_PATH_PLATFORM)/kernel/core/include/mach \
    $(TOP)/$(MTK_PATH_PLATFORM)/external/ldvt/include \
    $(TOP)/$(MTK_PATH_COMMON)/kernel/imgsensor/inc \
    $(TOP)/mediatek/source/external/mhal/src/core/drv/inc \
    $(TOP)/$(MTK_PATH_SOURCE)/kernel/include \
    $(MTK_PATH_SOURCE)/hardware/mtkcam/inc/acdk \
    $(MTK_PATH_SOURCE)/hardware/mtkcam/inc/drv \
    $(MTK_PATH_SOURCE)/hardware/mtkcam/inc/featureio \
    $(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/featureio/pipe/aaa/isp_mgr \
    $(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/featureio/pipe/aaa/isp_tuning \
    $(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/featureio/pipe/aaa/ispdrv_mgr \
    $(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/featureio/pipe/aaa/nvram_mgr \
    $(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/featureio/pipe/aaa/awb_mgr \
    $(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/featureio/pipe/aaa/af_mgr \
    $(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/featureio/pipe/aaa/ae_mgr \
    $(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/featureio/pipe/aaa/flash_mgr \
    $(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/featureio/pipe/aaa/sensor_mgr \
    $(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/featureio/pipe/aaa/lsc_mgr \
    $(MTK_PATH_CUSTOM_PLATFORM)/hal/D1/inc \
    $(MTK_PATH_CUSTOM_PLATFORM)/hal/D1/inc/aaa \
    $(MTK_PATH_CUSTOM)/hal/inc/debug_exif/aaa \
    $(MTK_PATH_CUSTOM)/hal/inc/debug_exif/cam \
    $(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/core/featureio/pipe/aaa \
    $(TOP)/$(MTK_PATH_PLATFORM)/hardware/include/D1/mtkcam/algorithm/liblsctrans \
    $(TOP)/$(MTK_PATH_PLATFORM)/hardware/include/D1/mtkcam/featureio \
		$(MTK_PATH_PLATFORM)/hardware/mtkcam/D1/hal/sensor \

# Add a define value that can be used in the code to indicate that it's using LDVT now.
# For print message function when using LDVT.
# Note: It will be cleared by "CLEAR_VARS", so if it is needed in other module, it
# has to be set in other module again.
ifeq ($(BUILD_MTK_LDVT),true)
    LOCAL_CFLAGS += -DUSING_MTK_LDVT
endif

#
LOCAL_STATIC_LIBRARIES := \

ifeq ($(BUILD_MTK_LDVT),true)
   LOCAL_WHOLE_STATIC_LIBRARIES += libuvvf
endif

#
LOCAL_WHOLE_STATIC_LIBRARIES := \
   liblsctrans \
#    libimageio_plat_pipe_mgr \
#    libimageio_plat_drv \
#    libcamdrv_imgsensor \

#
#LOCAL_SHARED_LIBRARIES := \
#     libstlport \
#     libcutils \
#     libimageio \
#     libcamdrv \

#
LOCAL_PRELINK_MODULE := false

#
LOCAL_MODULE_TAGS := optional

#
LOCAL_MODULE := libcct

#

#
# Start of common part ------------------------------------
sinclude $(TOP)/$(MTK_PATH_PLATFORM)/hardware/mtkcam/mtkcam.mk

#-----------------------------------------------------------
LOCAL_CFLAGS += $(MTKCAM_CFLAGS)

#-----------------------------------------------------------
LOCAL_C_INCLUDES += $(MTKCAM_C_INCLUDES)

#-----------------------------------------------------------
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/include
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_PLATFORM)/hardware/include/D1

# End of common part ---------------------------------------
#
include $(BUILD_STATIC_LIBRARY)


#include $(BUILD_SHARED_LIBRARY)
