#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from sm8250-common
include device/xiaomi/sm8250-common/BoardConfigCommon.mk
include device/xiaomi/sm8250-common/board/BoardConfigAOnly.mk

DEVICE_PATH := device/xiaomi/lmi

BUILD_BROKEN_DUP_RULES := true

# Display
TARGET_SCREEN_DENSITY := 440

# Init
TARGET_INIT_VENDOR_LIB := //$(DEVICE_PATH):init_xiaomi_lmi
TARGET_RECOVERY_DEVICE_MODULES := init_xiaomi_lmi

# Kernel
TARGET_KERNEL_CONFIG := vendor/lmi_defconfig

# OTA assert
TARGET_OTA_ASSERT_DEVICE := lmi,lmipro

# Properties
TARGET_VENDOR_PROP += $(DEVICE_PATH)/vendor.prop

# Inherit from the proprietary version
include vendor/xiaomi/lmi/BoardConfigVendor.mk
