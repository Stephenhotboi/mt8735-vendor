LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := FTPreCheck
LOCAL_SRC_FILES_64 := FTPreCheck.apk
LOCAL_MODULE_CLASS := APPS
LOCAL_MODULE_SUFFIX := .apk
LOCAL_CERTIFICATE := platform
include $(BUILD_PREBUILT)
