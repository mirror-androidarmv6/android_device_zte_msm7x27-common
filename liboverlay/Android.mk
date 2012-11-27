LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE                  := liboverlay
LOCAL_MODULE_PATH             := $(TARGET_OUT_SHARED_LIBRARIES)
LOCAL_MODULE_TAGS             := optional
LOCAL_C_INCLUDES              := $(common_includes) \
				$(TOP)/hardware/qcom/display/libgralloc
LOCAL_SHARED_LIBRARIES        := $(common_libs) libmemalloc liblog libutils libcutils libhardware
LOCAL_CFLAGS                  := $(common_flags) -DLOG_TAG=\"overlay\"
LOCAL_SRC_FILES := \
      overlay.cpp \
      overlayCtrl.cpp \
      overlayUtils.cpp \
      overlayMdp.cpp \
      overlayRotator.cpp

include $(BUILD_SHARED_LIBRARY)
