LOCAL_PATH:=$(call my-dir)
include $(CLEAR_VARS)


LOCAL_SRC_FILES:= \
	misc.cpp


LOCAL_C_INCLUDES:= \
      $(MTK_PATH_SOURCE)/external/nvram/libfile_op \
      $(MTK_PATH_SOURCE)/external/nvram/libnvram \
      $(MTK_PATH_SOURCE)/external/mtd_util \
	  
LOCAL_SHARED_LIBRARIES := libc libcutils libutils libcustom_nvram libnvram libfile_op

LOCAL_MODULE:= misc
LOCAL_MODULE_TAGS := optional
ifdef TARGET_32_BIT_SURFACEFLINGER
LOCAL_32_BIT_ONLY := true
endif
#LOCAL_PREBUILT_EXECUTABLES += test
include $(BUILD_EXECUTABLE)
#include $(BUILD_MULTI_PREBUILT)