LOCAL_PATH:= $(call my-dir)
ifeq ($(MTK_PROJECT), r150a_dev)
include $(call all-makefiles-under,$(LOCAL_PATH))
endif
