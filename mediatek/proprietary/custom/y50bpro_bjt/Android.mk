LOCAL_PATH:= $(call my-dir)
ifeq ($(MTK_PROJECT), y50bpro_bjt)
include $(call all-makefiles-under,$(LOCAL_PATH))
endif
