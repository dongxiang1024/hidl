// FIXME: your file license if you have one

#include "Attempt.h"
#include <log/log.h>
#include <stdio.h>

namespace android {
namespace hardware {
namespace attempt {
namespace V1_0 {
namespace implementation {

// Methods from ::android::hardware::attempt::V1_0::IAttempt follow.
Return<void> Attempt::hello_world(const hidl_string& name, hello_world_cb _hidl_cb) {
    // TODO implement
#if 1
    char buf[100];
    ::memset(buf, 0x00, 100);
    ::snprintf(buf, 100, "Hello World, %s", name.c_str());
    printf("service hello world\n");
    hidl_string result(buf);
    //ALOGE("attempt dx_test %s ", buf);
#endif
    _hidl_cb(result);

    return Void();
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

IAttempt* HIDL_FETCH_IAttempt(const char* /* name */) {
   /* while(1) {
        ALOGE("attempt service init successfully....");   
    } */   
    return new Attempt();
}
//
}  // namespace implementation
}  // namespace V1_0
}  // namespace attempt
}  // namespace hardware
}  // namespace android
