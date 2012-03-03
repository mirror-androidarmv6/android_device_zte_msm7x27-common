LOCAL_PATH := $(call my-dir)
include $(call all-subdir-makefiles)

include $(CLEAR_VARS)

LOCAL_MODULE_TAGS    := optional
LOCAL_MODULE_PATH    := $(TARGET_OUT_SHARED_LIBRARIES)/hw
LOCAL_SRC_FILES      := cameraHal.cpp
LOCAL_PRELINK_MODULE := false
CAMERA_LIB           := camera

LOCAL_SHARED_LIBRARIES := liblog libdl libutils libcamera_client libbinder libcutils libhardware libcamera
LOCAL_C_INCLUDES       := frameworks/base/services/ frameworks/base/include
LOCAL_C_INCLUDES       += hardware/libhardware/include/ hardware/libhardware/modules/gralloc/

ifeq ($(TARGET_BOOTLOADER_BOARD_NAME),skate)
LOCAL_MODULE         := camera.skate
include $(BUILD_SHARED_LIBRARY)
else ifeq ($(TARGET_BOOTLOADER_BOARD_NAME),blade)
LOCAL_MODULE         := camera.blade
include $(BUILD_SHARED_LIBRARY)
else ifeq ($(TARGET_BOOTLOADER_BOARD_NAME),blade2)
LOCAL_MODULE         := camera.blade2
include $(BUILD_SHARED_LIBRARY)
endif
