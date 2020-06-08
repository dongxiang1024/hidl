#include <android/hardware/attempt/1.0/IAttempt.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <stdio.h>

using ::android::hardware::attempt::V1_0::IAttempt;
using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;


int main()
{
    printf("Entry attempt_client\n");
    android::sp<IAttempt> client = IAttempt::getService();
    if (client == nullptr) {
        printf("Failed to get service\n");        
        return -1;
    }
    printf("Get service scuessfully!\n");

    client->hello_world("test_20200608", [&](hidl_string result) {
        printf("%s\n", result.c_str());    
    });
    return 0;

}
