LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

#Be used to YYD product
product = $(word 1, $(subst _, $(space), $(MTK_PROJECT)))
ifeq ($(strip $(product)), y20a)
	src := $(MTK_PROJECT)/bootaudio.mp3
else ifeq ($(strip $(product)), y20b)
	src := $(MTK_PROJECT)/bootaudio.mp3
else
	src := common/bootaudio.mp3
endif

LOCAL_MODULE := bootaudio.mp3
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := media

LOCAL_SRC_FILES := $(src)

LOCAL_MODULE_PATH := $(TARGET_OUT)/media

include $(BUILD_PREBUILT)


