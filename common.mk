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

PRODUCT_AAPT_CONFIG := normal hdpi
PRODUCT_AAPT_PREF_CONFIG := hdpi

# GPS
PRODUCT_PACKAGES += \
        librpc 

# OMX
PRODUCT_PACKAGES += \
        libmm-omxcore \
        libOmxCore \
        libstagefrighthw

# Camera
PRODUCT_PACKAGES += \
        libcamera \
        camera.msm7x27

# Display   
PRODUCT_PACKAGES += \
        gralloc.msm7x27 \
        libQcomUI
#        hwcomposer.msm7x27 \

# Misc 
PRODUCT_PACKAGES += \
        dexpreopt \
        setup_fs \
        make_ext4fs

# Audio
PRODUCT_PACKAGES += \
        audio.primary.msm7x27 \
        audio.a2dp.default \
        libaudioutils

PRODUCT_TAGS += dalvik.gc.type-precise
DISABLE_DEXPREOPT := false

PRODUCT_COPY_FILES += \
	device/common/gps/gps.conf_EU_SUPL:system/etc/gps.conf

# for bugmailer
ifneq ($(TARGET_BUILD_VARIANT),user)
         PRODUCT_PACKAGES += send_bug
PRODUCT_COPY_FILES += \
        system/extras/bugmailer/bugmailer.sh:system/bin/bugmailer.sh \
        system/extras/bugmailer/send_bug:system/bin/send_bug
endif

PRODUCT_COPY_FILES += \
        device/zte/msm7x27-common/vold.fstab:system/etc/vold.fstab \
        device/zte/msm7x27-common/media/AudioFilter.csv:system/etc/AudioFilter.csv \
        device/zte/msm7x27-common/media/AutoVolumeControl.txt:system/etc/AutoVolumeControl.txt \
        device/zte/msm7x27-common/media/media_profiles.xml:system/etc/media_profiles.xml \
        device/zte/msm7x27-common/media/audio_policy.conf:system/etc/audio_policy.conf \
        device/zte/msm7x27-common/media/media_codecs.xml:system/etc/media_codecs.xml \
        device/zte/msm7x27-common/prebuilt/GooManager.apk:system/app/GooManager.apk \
        device/zte/msm7x27-common/prebuilt/start_usb0.sh:system/etc/start_usb0.sh 

# Bluetooth configuration files
PRODUCT_COPY_FILES += \
        system/bluetooth/data/main.le.conf:system/etc/bluetooth/main.conf

# These are the hardware-specific features
PRODUCT_COPY_FILES += \
         frameworks/native/data/etc/handheld_core_hardware.xml:system/etc/permissions/handheld_core_hardware.xml \
         frameworks/native/data/etc/android.hardware.location.gps.xml:system/etc/permissions/android.hardware.location.gps.xml \
         frameworks/native/data/etc/android.hardware.wifi.xml:system/etc/permissions/android.hardware.wifi.xml \
         frameworks/native/data/etc/android.hardware.sensor.proximity.xml:system/etc/permissions/android.hardware.sensor.proximity.xml \
         frameworks/native/data/etc/android.hardware.sensor.light.xml:system/etc/permissions/android.hardware.sensor.light.xml \
         frameworks/native/data/etc/android.software.sip.voip.xml:system/etc/permissions/android.software.sip.voip.xml \
         frameworks/native/data/etc/android.hardware.telephony.gsm.xml:system/etc/permissions/android.hardware.telephony.gsm.xml
