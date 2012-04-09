# Copyright (C) 2007 The Android Open Source Project
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

USE_CAMERA_STUB := false

# Arch and board related defines
TARGET_NO_BOOTLOADER := true
TARGET_BOARD_PLATFORM := msm7x27
TARGET_CPU_ABI := armeabi-v6l
TARGET_CPU_ABI2 := armeabi
TARGET_ARCH_VARIANT := armv6-vfp
ARCH_ARM_HAVE_VFP := true

# Kernel
BOARD_KERNEL_BASE := 0x02600000

# Bluetooth
BOARD_HAVE_BLUETOOTH := true

# Browser
WITH_JIT := true
ENABLE_JSC_JIT := true
JS_ENGINE := v8
HTTP := chrome

# QCOM
BOARD_USES_QCOM_HARDWARE := true
BOARD_USES_QCOM_LIBS := true
COMMON_GLOBAL_CFLAGS += -DQCOM_HARDWARE 

# Touchscreen
BOARD_USE_LEGACY_TOUCHSCREEN := true

# CPU
TARGET_FORCE_CPU_UPLOAD := true
COMMON_GLOBAL_CFLAGS += -DFORCE_CPU_UPLOAD

# Headers
TARGET_SPECIFIC_HEADER_PATH := device/zte/common/include

# Graphics
BOARD_EGL_CFG := device/zte/common/prebuilt/lib/egl/egl.cfg
USE_OPENGL_RENDERER := true
COMMON_GLOBAL_CFLAGS += -DREFRESH_RATE=60
TARGET_USES_GENLOCK := true

# Libs
BOARD_PROVIDES_LIBRIL := true

# Recovery
BOARD_CUSTOM_RECOVERY_KEYMAPPING := ../../device/zte/common/recovery/recovery_keys.c
BOARD_CUSTOM_GRAPHICS := ../../../device/zte/common/recovery/graphics.c
TARGET_RECOVERY_INITRC := device/zte/common/recovery/recovery.rc

# USB 
TARGET_USE_CUSTOM_LUN_FILE_PATH := "/sys/devices/platform/msm_hsusb/gadget/lun0/file"
