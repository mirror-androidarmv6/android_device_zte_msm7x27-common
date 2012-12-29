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
BOARD_CUSTOM_GRAPHICS := ../../../device/zte/msm7x27-common/recovery/graphics.c
BOARD_CUSTOM_RECOVERY_KEYMAPPING := ../../device/zte/msm7x27-common/recovery/recovery_ui.c
BOARD_HAS_FLIPPED_SCREEN := true

# Kernel
TARGET_KERNEL_SOURCE := kernel/zte/msm7x27
BOARD_KERNEL_BASE := 0x02600000

# RIL
BOARD_PROVIDES_LIBRIL := true

# USB
TARGET_USE_CUSTOM_LUN_FILE_PATH := /sys/devices/platform/msm_hsusb/gadget/lun0/file
BOARD_UMS_LUNFILE := "/sys/devices/platform/msm_hsusb/gadget/lun0/file"

# Audio
TARGET_PROVIDES_LIBAUDIO := true

# Liblights
TARGET_PROVIDES_LIBLIGHT := true

# Graphics
TARGET_QCOM_DISPLAY_VARIANT := mr1

# Fonts
SMALLER_FONT_FOOTPRINT := true
