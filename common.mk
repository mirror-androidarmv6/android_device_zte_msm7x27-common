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

# Overlay
DEVICE_PACKAGE_OVERLAYS := device/zte/msm7x27-common/overlay

# Inherit qcom common
$(call inherit-product, device/qcom/msm7x27/msm7x27.mk)

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/tiny.mk)

# Inherit hdpi 512
$(call inherit-product, frameworks/native/build/phone-hdpi-512-dalvik-heap.mk)

# AAPT
PRODUCT_AAPT_CONFIG := normal hdpi
PRODUCT_AAPT_PREF_CONFIG := hdpi

# GPS
PRODUCT_PACKAGES += \
    librpc 

# Camera
PRODUCT_PACKAGES += \
    camera.msm7x27

# Misc 
PRODUCT_PACKAGES += \
    lights.msm7x27 \
    sensors.msm7x27

# Audio
PRODUCT_PACKAGES += \
    audio.primary.msm7x27 \
    audio_policy.msm7x27 \
    audio.usb.default

# GPS
PRODUCT_COPY_FILES += \
    device/common/gps/gps.conf_EU_SUPL:system/etc/gps.conf

# Media and vold
PRODUCT_COPY_FILES += \
    device/zte/msm7x27-common/vold.fstab:system/etc/vold.fstab \
    device/zte/msm7x27-common/media/AudioFilter.csv:system/etc/AudioFilter.csv \
    device/zte/msm7x27-common/media/AutoVolumeControl.txt:system/etc/AutoVolumeControl.txt \
    device/zte/msm7x27-common/media/media_profiles.xml:system/etc/media_profiles.xml \
    device/zte/msm7x27-common/media/audio_policy.conf:system/etc/audio_policy.conf \
    device/zte/msm7x27-common/media/media_codecs.xml:system/etc/media_codecs.xml
