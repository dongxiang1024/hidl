// FIXME: your file license if you have one

#pragma once

#include <android/hardware/attempt/1.0/IAttempt.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace android {
namespace hardware {
namespace attempt {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct Attempt : public IAttempt {
    // Methods from ::android::hardware::attempt::V1_0::IAttempt follow.
    Return<void> hello_world(const hidl_string& name, hello_world_cb _hidl_cb) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
 extern "C" IAttempt* HIDL_FETCH_IAttempt(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace attempt
}  // namespace hardware
}  // namespace android
