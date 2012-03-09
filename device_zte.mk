# Copyright (C) 2009 The Android Open Source Project
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

LOCAL_PATH := $(call my-dir)

DEVICE_PACKAGE_OVERLAYS := device/zte/common/overlay

PRODUCT_MANUFACTURER := ZTE

$(call inherit-product, device/zte/common/build_prop.mk)

# HW decoding
PRODUCT_PACKAGES += \
    libmm-omxcore \
    libstagefrighthw \
    libopencorehw \
    libOmxCore \
    libOmxVidEnc

# Misc
PRODUCT_PACKAGES += \
    Gallery2 \
    hwcomposer.default \
    ZteParts \
    abtfilt \
    prox_cal \
    dexpreopt

# Audio
PRODUCT_PACKAGES += \
    audio.a2dp.default

PRODUCT_LOCALES := en_GB

# ZTE devices use high-density artwork where available
PRODUCT_LOCALES += hdpi

# We have enough storage space to hold precise GC data
PRODUCT_TAGS += dalvik.gc.type-precise
DISABLE_DEXPREOPT := false

# Sysctl
PRODUCT_COPY_FILES += \
    device/zte/common/prebuilt/etc/init.d/01sysctl:system/etc/init.d/01sysctl \
    device/zte/common/prebuilt/etc/sysctl.conf:system/etc/sysctl.conf

# Graphics
PRODUCT_COPY_FILES += \
    device/zte/common/prebuilt/lib/libgsl.so:system/lib/libgsl.so \
    device/zte/common/prebuilt/lib/egl/libEGL_adreno200.so:system/lib/egl/libEGL_adreno200.so \
    device/zte/common/prebuilt/lib/egl/libGLESv1_CM_adreno200.so:system/lib/egl/libGLESv1_CM_adreno200.so \
    device/zte/common/prebuilt/lib/egl/libGLESv2_adreno200.so:system/lib/egl/libGLESv2_adreno200.so \
    device/zte/common/prebuilt/lib/egl/libq3dtools_adreno200.so:system/lib/egl/libq3dtools_adreno200.so

# Audio
PRODUCT_COPY_FILES += \
    device/zte/common/prebuilt/etc/AutoVolumeControl.txt:system/etc/AutoVolumeControl.txt

# Install the features available on this device.
PRODUCT_COPY_FILES += \
    frameworks/base/data/etc/handheld_core_hardware.xml:system/etc/permissions/handheld_core_hardware.xml \
    frameworks/base/data/etc/android.hardware.telephony.gsm.xml:system/etc/permissions/android.hardware.telephony.gsm.xml \
    frameworks/base/data/etc/android.hardware.location.gps.xml:system/etc/permissions/android.hardware.location.gps.xml \
    frameworks/base/data/etc/android.hardware.wifi.xml:system/etc/permissions/android.hardware.wifi.xml \
    frameworks/base/data/etc/android.hardware.sensor.proximity.xml:system/etc/permissions/android.hardware.sensor.proximity.xml \
    frameworks/base/data/etc/android.hardware.sensor.light.xml:system/etc/permissions/android.hardware.sensor.light.xml \
    frameworks/base/data/etc/android.software.sip.voip.xml:system/etc/permissions/android.software.sip.voip.xml

# WiFi
PRODUCT_COPY_FILES += \
    device/zte/common/prebuilt/etc/dhcpcd/dhcpcd.conf:system/etc/dhcpcd/dhcpcd.conf \
    device/zte/common/prebuilt/etc/wifi/wpa_supplicant.conf:system/etc/wifi/wpa_supplicant.conf

# Vold and Touchscren
PRODUCT_COPY_FILES += \
    device/zte/common/prebuilt/etc/vold.fstab:system/etc/vold.fstab \
    device/zte/common/prebuilt/usr/idc/synaptics-rmi-touchscreen.idc:system/usr/idc/synaptics-rmi-touchscreen.idc \
    device/zte/common/prebuilt/usr/idc/synaptics-rmi4-ts.idc:system/usr/idc/synaptics-rmi4-ts.idc

# Camera
PRODUCT_COPY_FILES += \
    device/zte/common/prebuilt/lib/libcamera.so:system/lib/libcamera.so \
    device/zte/common/prebuilt/lib/libcameraservice.so:system/lib/libcameraservice.so \
    device/zte/common/prebuilt/lib/libcamera_client.so:system/lib/libcamera_client.so \
    device/zte/common/prebuilt/lib/libcamera.so:obj/lib/libcamera.so \
    device/zte/common/prebuilt/lib/libcameraservice.so:obj/lib/libcameraservice.so \
    device/zte/common/prebuilt/lib/libcamera_client.so:obj/lib/libcamera_client.so \
    device/zte/common/prebuilt/lib/liboemcamera.so:obj/lib/liboemcamera.so \
    device/zte/common/prebuilt/lib/liboemcamera.so:system/lib/liboemcamera.so

# RIL
PRODUCT_COPY_FILES += \
    device/zte/common/prebuilt/lib/libril.so:system/lib/libril.so \
    device/zte/common/prebuilt/lib/libril.so:obj/lib/libril.so

# Goo Manager
PRODUCT_COPY_FILES += \
    device/zte/common/prebuilt/app/GooManager.apk:system/app/GooManager.apk
