/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t munch_in_info = {
    .hwc_value = "INDIA",

    .brand = "POCO",
    .device = "munch",
    .marketname = "POCO F4",
    .model = "22021211RI",
    .build_fingerprint = "POCO/munch_in/munch:12/RKQ1.211001.001/V13.0.5.0.SLMMIXM:user/release-keys",

};

static const variant_info_t munch_global_info = {
    .hwc_value = "GLOBAL",

    .brand = "POCO",
    .device = "munch",
    .marketname = "POCO F4",
    .model = "22021211RG",
    .build_fingerprint = "POCO/munch_global/munch:12/RKQ1.211001.001/V13.0.5.0.SLMMIXM:user/release-keys",

};

static const variant_info_t munch_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "munch",
    .marketname = "Redmi K40S",
    .model = "22021211RC",
    .build_fingerprint = "Redmi/munch/munch:12/RKQ1.211001.001/V13.0.5.0.SLMMIXM:user/release-keys",

};

static const std::vector<variant_info_t> variants = {
    munch_in_info,
    munch_global_info,
    munch_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}