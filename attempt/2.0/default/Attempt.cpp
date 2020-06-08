// FIXME: your file license if you have one

#include "Attempt.h"

namespace android {
namespace hardware {
namespace attempt {
namespace V2_0 {
namespace implementation {

// Methods from ::android::hardware::attempt::V2_0::IAttempt follow.
Return<int32_t> Attempt::hello_world(int32_t values) {
    // TODO implement
    return int32_t {};
}

IAttempt IAttempt* getInstance(void) {
    return new Attempt();
}

// Methods from ::android::hidl::base::V1_0::IBase follow.

//IAttempt* HIDL_FETCH_IAttempt(const char* /* name */) {
    //return new Attempt();
//}
//
}  // namespace implementation
}  // namespace V2_0
}  // namespace attempt
}  // namespace hardware
}  // namespace android
