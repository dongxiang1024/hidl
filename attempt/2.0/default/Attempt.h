// FIXME: your file license if you have one

#pragma once

#include <android/hardware/attempt/2.0/IAttempt.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace android {
namespace hardware {
namespace attempt {
namespace V2_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct Attempt : public IAttempt {
    // Methods from ::android::hardware::attempt::V2_0::IAttempt follow.
    Return<int32_t> hello_world(int32_t values) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    static IAttempt* getInstance(void);
};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" IAttempt* HIDL_FETCH_IAttempt(const char* name);

}  // namespace implementation
}  // namespace V2_0
}  // namespace attempt
}  // namespace hardware
}  // namespace android
