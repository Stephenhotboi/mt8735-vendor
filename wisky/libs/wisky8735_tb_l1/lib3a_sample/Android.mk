LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := lib3a_sample
LOCAL_SRC_FILES_64 := lib3a_sample.so
LOCAL_SRC_FILES_32 := arm/lib3a_sample.so
LOCAL_SHARED_LIBRARIES := libstdc++ libstlport
LOCAL_MULTILIB := both
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
LOCAL_MODULE_SUFFIX := .so
include $(BUILD_PREBUILT)
