/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_kona.h>

static const variant_info_t std_info = {
    .sku_value = "lmi",

    .brand = "POCO"
    .device = "lmi";
    .model = "POCO F2 Pro";
    .build_description = "lmi-user 11 RKQ1.200826.002 V12.2.6.0.RJKMIXM release-keys";
    .build_fingerprint = "POCO/lmi_global/lmi:11/RKQ1.200826.002/V12.2.6.0.RJKMIXM:user/release-keys";
};

static const variant_info_t pro_info = {
    .sku_value = "lmipro",

    .brand = "Redmi"
    .device = "lmipro";
    .model = "Redmi K30 Pro Zoom Edition";
    .build_description = "lmipro-user 11 RKQ1.200826.002 V12.2.6.0.RJKMIXM release-keys";
    .build_fingerprint = "Redmi/lmipro/lmipro:11/RKQ1.200826.002/V12.2.6.0.RJKMIXM:user/release-keys";
};

static const variant_info_t variants[] = {
    std_info,
    pro_info,
};

void vendor_load_properties() {
    set_variant_props(variants);
}
