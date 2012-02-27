LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := $(call all-java-files-under, src)

LOCAL_PACKAGE_NAME := ZteParts
LOCAL_CERTIFICATE := platform

ifeq ($(TARGET_BOOTLOADER_BOARD_NAME),skate)
include $(BUILD_PACKAGE)
endif
ifeq ($(TARGET_BOOTLOADER_BOARD_NAME),blade)
include $(BUILD_PACKAGE)
endif

include $(call all-makefiles-under,$(LOCAL_PATH))
