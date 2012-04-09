# Graphics
PRODUCT_PROPERTY_OVERRIDES += \
    ro.sf.lcd_density=240 \
    ro.sf.hwrotation=180 \
    qemu.sf.lcd_density=240 \
    ro.media.dec.jpeg.memcap=20000000 \
    ro.opengles.version=131072 \
    persist.sys.use_dithering=1

# WiFi
PRODUCT_PROPERTY_OVERRIDES += \
    wifi.interface=wlan0 \
    wifi.supplicant_scan_interval=60

# RIL
PRODUCT_PROPERTY_OVERRIDES += \
    rild.libpath=/system/lib/libril-qc-1.so \
    rild.libargs=-d /dev/smd0 \
    com.qc.hardware=true \
    ro.telephony.ril.v3=icccardstatus,datacall,signalstrength,facilitylock,singlepdp

# USB
PRODUCT_PROPERTY_OVERRIDES += \
    sys.usb.config=mass_storage,adb \
    persist.sys.usb.config=mass_storage,adb \
    persist.service.adb.enable=1

# System
PRODUCT_PROPERTY_OVERRIDES += \
    dalvik.vm.lockprof.threshold=500 \
    dalvik.vm.execution-mode=int:jit \
    dalvik.vm.dexopt-data-only=1 \
    ro.compcache.default=0 \
    dalvik.vm.dexopt-flags=v=n,o=v,m=y \
    dalvik.vm.checkjni=false \
    dalvik.vm.heapstartsize=5m \
    ro.kernel.android.checkjni=0 \
    dalvik.vm.checkjni=0 \
    dalvik.vm.heapgrowthlimit=48m \
    dalvik.vm.heapsize=128m

# Don't set /proc/sys/vm/dirty_ratio to 0 when USB mounting
PRODUCT_PROPERTY_OVERRIDES += \
    ro.vold.umsdirtyratio=20

# Misc.
PRODUCT_PROPERTY_OVERRIDES += \
    ro.com.android.dateformat=dd-MM-yyyy \
    ro.com.google.locationfeatures=0
