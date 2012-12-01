#
# Copyright (C) 2011 The Android Open-Source Project
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

# Use the non-open-source parts, if they're present
-include vendor/zte/msm7x27-common/BoardConfigVendor.mk

# Target properties
TARGET_ARCH := arm
TARGET_CPU_ABI := armeabi
TARGET_CPU_ABI2 := armeabi-v6l
TARGET_ARCH_VARIANT := armv6-vfp
TARGET_NO_BOOTLOADER := true
TARGET_NO_RADIOIMAGE := true
TARGET_BOARD_PLATFORM := msm7x27
TARGET_SPECIFIC_HEADER_PATH := device/zte/msm7x27-common/include

# Recovery
BOARD_CUSTOM_GRAPHICS := ../../../device/zte/msm7x27-common/recovery/graphics.c
BOARD_CUSTOM_RECOVERY_KEYMAPPING := ../../device/zte/msm7x27-common/recovery/recovery_ui.c

# Kernel
TARGET_KERNEL_SOURCE := kernel/zte/msm7x27
BOARD_KERNEL_BASE := 0x02600000

# Bluetooth
BOARD_HAVE_BLUETOOTH := true

# RIL
BOARD_PROVIDES_LIBRIL := true

# USB
TARGET_USE_CUSTOM_LUN_FILE_PATH := /sys/devices/platform/msm_hsusb/gadget/lun0/file
BOARD_UMS_LUNFILE := "/sys/devices/platform/msm_hsusb/gadget/lun0/file"

# Webkit
ENABLE_WEBGL := true
TARGET_FORCE_CPU_UPLOAD := true

# QCOM
BOARD_USES_QCOM_HARDWARE := true
COMMON_GLOBAL_CFLAGS += -DQCOM_HARDWARE
BOARD_NEEDS_MEMORYHEAPPMEM := true

# Graphics
BOARD_EGL_CFG := device/zte/msm7x27-common/egl.cfg
USE_OPENGL_RENDERER := true
TARGET_NO_HW_VSYNC := true
COMMON_GLOBAL_CFLAGS += -DQCOM_ICS_COMPAT -DQCOM_NO_SECURE_PLAYBACK -DQCOM_LEGACY_OMX
BOARD_ADRENO_DECIDE_TEXTURE_TARGET := true
TARGET_NO_HW_OVERLAY := true
TARGET_NO_HW_VSYNC := true
BOARD_HAVE_HDMI_SUPPORT := false
TARGET_USES_ION := false

# Bootanimation
TARGET_BOOTANIMATION_USE_RGB565 := true

# Fonts
SMALLER_FONT_FOOTPRINT := true

# Camera
TARGET_DISABLE_ARM_PIE := true

# Javascript and Browser
WITH_JIT := true
ENABLE_JSC_JIT := true
JS_ENGINE := v8
HTTP := chrome

# Small system
BOARD_HAS_SMALL_SYSTEM_PARTITION := true
