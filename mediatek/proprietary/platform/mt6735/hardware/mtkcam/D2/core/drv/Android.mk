#
# libcamdrv
#
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# Add a define value that can be used in the code to indicate that it's using LDVT now.
# For print message function when using LDVT.
# Note: It will be cleared by "CLEAR_VARS", so if this line needed in other module, it
# have to be set in other module again.
ifeq ($(BUILD_MTK_LDVT),yes)
    LOCAL_CFLAGS += -DUSING_MTK_LDVT
endif
ifeq ($(HAVE_AEE_FEATURE),yes)
    LOCAL_CFLAGS += -DHAVE_AEE_FEATURE
endif

#
#LOCAL_STATIC_LIBRARIES += \
#    libcamdrv_imgsensor \
#    libcamdrv_res_mgr \

ifeq ($(BUILD_MTK_LDVT),yes)
LOCAL_WHOLE_STATIC_LIBRARIES += libuvvf
endif

#
LOCAL_SHARED_LIBRARIES += liblog
LOCAL_SHARED_LIBRARIES += libcutils
LOCAL_SHARED_LIBRARIES += libstlport
LOCAL_SHARED_LIBRARIES += libm4u
LOCAL_SHARED_LIBRARIES += libbwc

ifeq ($(MTK_ION_SUPPORT),yes)
    LOCAL_SHARED_LIBRARIES += libion libion_mtk
endif

ifneq ($(BUILD_MTK_LDVT),yes)
##    LOCAL_SHARED_LIBRARIES += libcameracustom, no need if sensor relatede driver is not included
##    LOCAL_SHARED_LIBRARIES += libcam.exif #mark, no needed in SMT

ifeq ($(HAVE_AEE_FEATURE),yes)
    LOCAL_SHARED_LIBRARIES += libaed
endif

endif

#LOCAL_SHARED_LIBRARIES += libnvram



#
LOCAL_WHOLE_STATIC_LIBRARIES += \
    libcamdrv_isp \
    libcamdrv_tpipe \
    libcamdrv_res_mgr \
    libcamdrv_resmanager \
    libcamdrv_imem \


#
LOCAL_MODULE := libcamdrv
#LOCAL_MULTILIB := 32
#
LOCAL_PRELINK_MODULE := false

#
LOCAL_MODULE_TAGS := optional

#

#
# Start of common part ------------------------------------
-include $(TOP)/$(MTK_PATH_PLATFORM)/hardware/mtkcam/mtkcam.mk

#-----------------------------------------------------------
LOCAL_CFLAGS += $(MTKCAM_CFLAGS)

#-----------------------------------------------------------
LOCAL_C_INCLUDES += $(MTKCAM_C_INCLUDES)

#-----------------------------------------------------------
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/include
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_PLATFORM)/hardware/include/D2

# End of common part ---------------------------------------
#
include $(BUILD_SHARED_LIBRARY)

#include $(BUILD_STATIC_LIBRARY)

#
include $(call all-makefiles-under, $(LOCAL_PATH))
