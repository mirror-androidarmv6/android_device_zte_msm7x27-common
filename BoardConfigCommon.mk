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
TARGET_ARCH_VARIANT := armv6-vfp
TARGET_CPU_ABI := armeabi
TARGET_CPU_ABI := armeabi-v6l
TARGET_CPU_ABI2 := armeabi
TARGET_BOARD_PLATFORM_GPU := qcom-adreno200
TARGET_NO_BOOTLOADER := true

# Graphics
USE_OPENGL_RENDERER := true
COMMON_GLOBAL_CFLAGS += -DMISSING_EGL_EXTERNAL_IMAGE -DMISSING_GRALLOC_BUFFERS -DMISSING_EGL_PIXEL_FORMAT_YV12
COMMON_GLOBAL_CFLAGS += -DREFRESH_RATE=60 -DQCOM_HARDWARE -DFORCE_CPU_UPLOAD
BOARD_HAS_FLIPPED_SCREEN := true
TARGET_SPECIFIC_HEADER_PATH := device/zte/common/include
BOARD_EGL_CFG := device/zte/common/prebuilt/lib/egl/egl.cfg
TARGET_USES_OVERLAY                := false
TARGET_HAVE_BYPASS                 := false
TARGET_USES_SF_BYPASS              := false
TARGET_USES_C2D_COMPOSITION        := false
TARGET_USES_GENLOCK                := true
TARGET_GRALLOC_USES_ASHMEM         := true

# Kernel
BOARD_KERNEL_BASE := 0x02600000

# Bluetooth
BOARD_HAVE_BLUETOOTH := true

# Browser
JS_ENGINE := v8
HTTP := chrome
WITH_JIT := true

# QCOM and GPS
BOARD_USES_QCOM_HARDWARE := true
BOARD_USES_QCOM_LIBS := true
BOARD_USES_QCOM_GPS := true
BOARD_VENDOR_QCOM_GPS_LOC_API_AMSS_VERSION := 1240
BOARD_GPS_LIBRARIES := libloc
BOARD_GPS_LIBRARIES := libloc_api

# Sensors
BOARD_USE_LEGACY_TOUCHSCREEN := true

# Target libs check
TARGET_PROVIDES_LIBRIL := true
TARGET_PROVIDES_LIBAUDIO := true

# USB 
BOARD_DATA_DEVICE := /dev/block/mtdblock6	
BOARD_DATA_FILESYSTEM := auto  	
BOARD_DATA_FILESYSTEM_OPTIONS := rw	
BOARD_SYSTEM_DEVICE := /dev/block/mtdblock5
BOARD_SYSTEM_FILESYSTEM := auto
BOARD_SYSTEM_FILESYSTEM_OPTIONS := rw
BOARD_CACHE_DEVICE := /dev/block/mtdblock4
BOARD_CACHE_FILESYSTEM := auto
BOARD_CACHE_FILESYSTEM_OPTIONS := rw
BOARD_USE_USB_MASS_STORAGE_SWITCH := true
BOARD_HAS_SDCARD_INTERNAL := true
BOARD_SDCARD_DEVICE_INTERNAL := /dev/block/vold/179:1
BOARD_SDEXT_DEVICE := /dev/block/vold/179:2
BOARD_UMS_LUNFILE := /sys/devices/platform/msm_hsusb/gadget/lun0/file
TARGET_USE_CUSTOM_LUN_FILE_PATH := "/sys/devices/platform/msm_hsusb/gadget/lun0/file"
