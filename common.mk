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

# Half-res bootanimation
TARGET_BOOTANIMATION_HALF_RES := true

# GPS
PRODUCT_PACKAGES += \
    librpc 

# Camera
PRODUCT_PACKAGES += \
    camera.msm7x27

# Misc 
PRODUCT_PACKAGES += \
    com.android.future.usb.accessory \
    lights.msm7x27 \
    sensors.msm7x27 \
    power.msm7x27 
	
# KSM
PRODUCT_PROPERTY_OVERRIDES += \
    ro.ksm.default=1
    
# WiFi
PRODUCT_PACKAGES += \
    libnetcmdiface

# FM Radio
# PRODUCT_PACKAGES += \
#    libfmradio.si4708 \
#    Effem

# Audio
PRODUCT_PACKAGES += \
    audio.primary.msm7x27 \
    audio_policy.msm7x27 \
    audio.usb.default

# FM Radio
# PRODUCT_COPY_FILES += \
#        frameworks/native/data/etc/com.stericsson.hardware.fm.receiver.xml:system/etc/permissions/com.stericsson.hardware.fm.receiver.xml

# Development & ADB authentication settings
ADDITIONAL_DEFAULT_PROPERTIES += \
    ro.debuggable=1 \
    ro.adb.secure=0 \
    ro.secure=0 \
    ro.allow.mock.location=0
	
# Dalvik
PRODUCT_PROPERTY_OVERRIDES += \
    dalvik.vm.checkjni=0 \
    dalvik.vm.debug.alloc=0 \
    dalvik.vm.dexopt-data-only=1

# Media and vold
PRODUCT_COPY_FILES += \
    device/zte/msm7x27-common/prebuilt/vold.fstab:system/etc/vold.fstab \
    device/zte/msm7x27-common/media/AudioFilter.csv:system/etc/AudioFilter.csv \
    device/zte/msm7x27-common/media/AutoVolumeControl.txt:system/etc/AutoVolumeControl.txt \
    device/zte/msm7x27-common/media/media_profiles.xml:system/etc/media_profiles.xml \
    device/zte/msm7x27-common/media/audio_policy.conf:system/etc/audio_policy.conf \
    device/zte/msm7x27-common/media/media_codecs.xml:system/etc/media_codecs.xml \
    device/zte/msm7x27-common/prebuilt/gps.conf:system/etc/gps.conf

# Enable repeatable keys in CWM
PRODUCT_PROPERTY_OVERRIDES += \
    ro.cwm.enable_key_repeat=true
	
## SELinux - we're not ready for enforcing mode yet
PRODUCT_PROPERTY_OVERRIDES += \
    ro.boot.selinux=permissive

# Overlay
DEVICE_PACKAGE_OVERLAYS := device/zte/msm7x27-common/overlay

# Install/Uninstall google apps
$(call inherit-product, vendor/google/gapps_armv6_tiny.mk)

# Inherit some stuff
$(call inherit-product, device/qcom/msm7x27/msm7x27.mk)
$(call inherit-product, frameworks/native/build/phone-hdpi-512-dalvik-heap.mk)
$(call inherit-product, build/target/product/full.mk)

# AAPT
PRODUCT_AAPT_CONFIG := normal hdpi
PRODUCT_AAPT_PREF_CONFIG := hdpi
PRODUCT_LOCALES := en_US en_IN fr_FR it_IT es_ES et_EE de_DE nl_NL cs_CZ \
    pl_PL ja_JP zh_TW zh_CN zh_HK ru_RU ko_KR nb_NO es_US da_DK el_GR tr_TR \
    pt_PT pt_BR rm_CH sv_SE bg_BG ca_ES en_GB fi_FI hr_HR hu_HU in_ID iw_IL \
    lt_LT lv_LV ro_RO sk_SK sl_SI sr_RS uk_UA vi_VN tl_PH ar_EG fa_IR sw_TZ \
    ms_MY af_ZA zu_ZA en_XA ar_XB fr_CA mn_MN hy_AM az_AZ ka_GE
