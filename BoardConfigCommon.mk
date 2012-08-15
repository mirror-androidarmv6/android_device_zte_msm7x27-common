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
TARGET_CPU_ABI := armeabi-v6l
TARGET_CPU_ABI2 := armeabi
TARGET_ARCH_VARIANT := armv6-vfp
TARGET_NO_BOOTLOADER := true
TARGET_NO_RADIOIMAGE := true
TARGET_BOARD_PLATFORM := msm7x27
TARGET_SPECIFIC_HEADER_PATH := device/zte/msm7x27-common/include

# Recovery
BOARD_CUSTOM_GRAPHICS := ../../../device/zte/msm7x27-common/recovery/graphics.c
BOARD_CUSTOM_RECOVERY_KEYMAPPING := ../../device/zte/msm7x27-common/recovery/recovery_ui.c

# Kernel
TARGET_KERNEL_SOURCE := kernel/zte/zte-kernel-msm7x27
BOARD_KERNEL_BASE := 0x02600000

# Bluetooth
BOARD_HAVE_BLUETOOTH := true

# RIL
BOARD_PROVIDES_LIBRIL := true

# USB
TARGET_USE_CUSTOM_LUN_FILE_PATH := /sys/devices/platform/msm_hsusb/gadget/lun0/file
BOARD_UMS_LUNFILE := "/sys/devices/platform/msm_hsusb/gadget/lun0/file"

# QCOM
BOARD_USES_QCOM_HARDWARE := true
COMMON_GLOBAL_CFLAGS += -DQCOM_HARDWARE -DQCOM_ICS_COMPAT -DICS_CAMERA_BLOB -DQCOM_NO_SECURE_PLAYBACK
BOARD_USES_QCOM_LIBS := true
BOARD_NEEDS_MEMORYHEAPPMEM := true
TARGET_DISABLE_ARM_PIE := true

# Bootanimation Optimization
TARGET_BOOTANIMATION_USE_RGB565 := true
TARGET_BOOTANIMATION_PRELOAD := false
TARGET_BOOTANIMATION_TEXTURE_CACHE := true

# Graphics
BOARD_EGL_CFG := device/zte/msm7x27-common/egl.cfg
USE_OPENGL_RENDERER := true
BOARD_ADRENO_DECIDE_TEXTURE_TARGET := true
TARGET_USES_GENLOCK := true
TARGET_FORCE_CPU_UPLOAD := true
TARGET_NO_HW_VSYNC := true
COMMON_GLOBAL_CFLAGS += -DMISSING_EGL_PIXEL_FORMAT_YV12 -DMISSING_GRALLOC_BUFFERS -DUNABLE_TO_DEQUEUE -DMISSING_EGL_EXTERNAL_IMAGE

# Javascript and Browser
WITH_JIT := true
ENABLE_JSC_JIT := true
JS_ENGINE := v8
HTTP := chrome
ENABLE_WEBGL := true

# FM Radio
BOARD_FM_DEVICE := si4708
BOARD_HAVE_FM_RADIO := true
BOARD_GLOBAL_CFLAGS += -DHAVE_FM_RADIO -DFM_RADIO
