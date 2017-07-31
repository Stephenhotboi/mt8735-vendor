LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

#Be used to YYD product
product = $(word 1, $(subst _, $(space), $(MTK_PROJECT)))
ifeq ($(strip $(product)), y20a)
	src := $(MTK_PROJECT)/shutaudio.mp3
else 
	src := common/shutaudio.mp3
endif

LOCAL_MODULE := shutaudio.mp3
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := media

LOCAL_SRC_FILES := $(src)

LOCAL_MODULE_PATH := $(TARGET_OUT)/media

include $(BUILD_PREBUILT)


