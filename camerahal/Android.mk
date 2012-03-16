LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)/hw
LOCAL_MODULE := camera.msm7x27

LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := cameraHAL.cpp
LOCAL_C_INCLUDES := $(TOP)/frameworks/base/include

LOCAL_SHARED_LIBRARIES := liblog libutils libcutils
LOCAL_SHARED_LIBRARIES += libui libhardware libcamera_client
LOCAL_SHARED_LIBRARIES += libcamera
LOCAL_PRELINK_MODULE := false

ifeq ($(BOARD_HAVE_HTC_FFC), true)
    LOCAL_CFLAGS += -DHTC_FFC
endif
ifeq ($(BOARD_USE_REVERSE_FFC), true)
    LOCAL_CFLAGS += -DREVERSE_FFC
endif
ifeq ($(TARGET_USE_CAF_PARAMS), true)
    LOCAL_CFLAGS += -DCAF_PARAMS
endif
ifeq ($(TARGET_MISALIGNED), true)
    LOCAL_CFLAGS += -DMISALIGNED
endif

include $(BUILD_SHARED_LIBRARY)

