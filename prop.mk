# Enable repeatable keys in CWM
PRODUCT_PROPERTY_OVERRIDES += \
    ro.cwm.enable_key_repeat=true

# RIL
PRODUCT_PROPERTY_OVERRIDES += \
    rild.libpath=/system/lib/libril-qc-1.so \
    rild.libargs=-d /dev/smd0 \
    ro.telephony.ril.v3=icccardstatus,datacall,signalstrength,facilitylock \
    ro.telephony.call_ring.multiple=false \
    ro.telephony.call_ring.delay=3000

# WiFi
PRODUCT_PROPERTY_OVERRIDES += \
    wifi.interface=wlan0 \
    wifi.supplicant_scan_interval=15

# Graphics
PRODUCT_PROPERTY_OVERRIDES += \
    debug.sf.hw=1 \
    com.qc.hardware=true \
    ro.max.fling_velocity=4000 \
    ro.sf.lcd_density=240 \
    ro.sf.hwrotation=180 \
    qemu.sf.lcd_density=240 \
    ro.opengles.version=131072 \
    debug.enabletr=false \
    debug.hwui.render_dirty_regions=false \
    debug.hwui.disable_vsync=true \
    debug.gr.numframebuffers=3 \
    debug.composition.type=dyn

# Camcorder
PRODUCT_PROPERTY_OVERRIDES += \
    debug.camcorder.disablemeta=1

# USB Mass Storage
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.usb.config=adb,mass_storage \
    persist.service.adb.enable=1

# Dont set /proc/sys/vm/dirty_ratio to 0 when USB mounting
PRODUCT_PROPERTY_OVERRIDES += \
    ro.vold.umsdirtyratio=20

# Dalvik
PRODUCT_PROPERTY_OVERRIDES += \
    dalvik.vm.dexopt-data-only=1 \
    dalvik.vm.execution-mode=int:jit \
    dalvik.vm.verify_bytecode=false \
    dalvik.vm.checkjni=0 \
    ro.kernel.android.checkjni=0

# zRam
PRODUCT_PROPERTY_OVERRIDES += \
    ro.zram.default=0
