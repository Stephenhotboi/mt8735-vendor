LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := libdngop
LOCAL_SRC_FILES_64 := libdngop.so
LOCAL_SRC_FILES_32 := arm/libdngop.so
LOCAL_SHARED_LIBRARIES := libmtk_drvb libstdc++
LOCAL_MULTILIB := both
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
LOCAL_MODULE_SUFFIX := .so
include $(BUILD_PREBUILT)
