#
# Copyright (C) 2012 The Android Open-Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# This variable is set first, so it can be overridden
# by BoardConfigVendor.mk
USE_CAMERA_STUB := true

# Use the non-open-source parts
include device/qcom/msm7x27/BoardConfigCommon.mk

# Target properties
TARGET_SPECIFIC_HEADER_PATH := device/zte/msm7x27-common/include
TARGET_BOOTLOADER_BOARD_NAME := sharp

# Recovery
TARGET_RECOVERY_FSTAB := device/zte/skate/fstab.skate
TARGET_PREBUILT_RECOVERY_KERNEL := device/zte/skate/recovery/recovery_kernel
# BOARD_CUSTOM_GRAPHICS := ../../../device/zte/msm7x27-common/recovery/graphics.c
BOARD_CUSTOM_RECOVERY_KEYMAPPING := ../../device/zte/msm7x27-common/recovery/recovery_keys.c
BOARD_RECOVERY_HANDLES_MOUNT := true
TARGET_NO_INITLOGO := true
TARGET_RECOVERY_PIXEL_FORMAT := "RGB_565"
TARGET_RECOVERY_LCD_BACKLIGHT_PATH := \"/sys/class/leds/lcd-backlight/brightness\"
TARGET_NO_SEPARATE_RECOVERY := true

# Kernel
TARGET_KERNEL_SOURCE := kernel/zte/msm7x27
BOARD_KERNEL_BASE := 0x02600000
BOARD_KERNEL_PAGESIZE := 2048
# MINIGZIP := $(shell which lzma)

# Provides
BOARD_PROVIDES_LIBRIL := true
TARGET_PROVIDES_LIBAUDIO := true
BOARD_QCOM_VOIP_ENABLED := true
TARGET_PROVIDES_LIBLIGHT := true

# FM Radio
#BOARD_USES_STE_FMRADIO := true
#BOARD_HAVE_QCOM_FM := true
#COMMON_GLOBAL_CFLAGS += -DSTE_FM -DQCOM_FM_ENABLED

# Bootanimation
TARGET_BOOTANIMATION_USE_RGB565 := true
TARGET_BOOTANIMATION_PRELOAD := true
TARGET_BOOTANIMATION_TEXTURE_CACHE := true

# Camera
BOARD_USE_NASTY_PTHREAD_CREATE_HACK := true
BOARD_CAMERA_NO_UNWANTED_MSG := true
COMMON_GLOBAL_CFLAGS += -DICS_CAMERA_BLOB -DZTE_CAMERA_HARDWARE

# Override healthd HAL
BOARD_HAL_STATIC_LIBRARIES := libhealthd.msm7x27

# Metadata
SKIP_SET_METADATA := true
USE_SET_METADATA := false

# USB
TARGET_USE_CUSTOM_LUN_FILE_PATH := /sys/devices/platform/msm_hsusb/gadget/lun0/file
BOARD_UMS_LUNFILE := "/sys/devices/platform/msm_hsusb/gadget/lun0/file"

# SELinux
BOARD_SEPOLICY_DIRS += device/zte/msm7x27-common/sepolicy
BOARD_SEPOLICY_UNION += \
    file_contexts \
    genfs_contexts

## Browser & WebKit
ENABLE_WEBGL := true
TARGET_WEBKIT_USE_MORE_MEMORY := true

## TEMPORARY HACK: skip building external/chromium_org/
PRODUCT_PREBUILT_WEBVIEWCHROMIUM := yes

# Fonts
SMALLER_FONT_FOOTPRINT := true
