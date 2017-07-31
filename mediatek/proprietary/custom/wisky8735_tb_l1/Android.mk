LOCAL_PATH:= $(call my-dir)
ifeq ($(MTK_PROJECT), wisky8735_tb_l1)
include $(call all-makefiles-under,$(LOCAL_PATH))
endif
