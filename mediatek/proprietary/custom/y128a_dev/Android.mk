LOCAL_PATH:= $(call my-dir)
ifeq ($(MTK_PROJECT), y128a_dev)
include $(call all-makefiles-under,$(LOCAL_PATH))
endif
