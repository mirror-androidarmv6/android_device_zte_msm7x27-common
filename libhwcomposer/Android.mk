LOCAL_PATH := $(call my-dir)

# HAL module implemenation, not prelinked and stored in
# hw/<OVERLAY_HARDWARE_MODULE_ID>.<ro.product.board>.so
include $(CLEAR_VARS)
LOCAL_PRELINK_MODULE := false
LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)/hw
LOCAL_MODULE_TAGS := optional
LOCAL_SHARED_LIBRARIES := liblog libcutils libEGL libhardware libutils
LOCAL_SHARED_LIBRARIES += libgenlock libui

LOCAL_SRC_FILES := 	hwcomposer.cpp

LOCAL_CFLAGS:= -DLOG_TAG=\"$(TARGET_BOARD_PLATFORM).hwcomposer\"
LOCAL_CFLAGS += -DQCOM_HARDWARE

LOCAL_C_INCLUDES += hardware/qcom/display/libgralloc
LOCAL_C_INCLUDES += hardware/qcom/display/libcopybit
LOCAL_C_INCLUDES += hardware/qcom/display/libgenlock
LOCAL_C_INCLUDES += hardware/qcom/display/libqcomui

ifeq ($(TARGET_BOOTLOADER_BOARD_NAME),skate)
LOCAL_MODULE := hwcomposer.skate
include $(BUILD_SHARED_LIBRARY)
else ifeq ($(TARGET_BOOTLOADER_BOARD_NAME),blade)
LOCAL_MODULE := hwcomposer.blade
include $(BUILD_SHARED_LIBRARY)
else ifeq ($(TARGET_BOOTLOADER_BOARD_NAME),blade2)
LOCAL_MODULE := hwcomposer.blade2
include $(BUILD_SHARED_LIBRARY)
endif
