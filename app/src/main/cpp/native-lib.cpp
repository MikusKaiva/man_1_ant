#include <jni.h>
#include <string>
#include <stdlib.h>
#include <android/log.h>

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "NDKApp", __VA_ARGS__))

extern "C" JNIEXPORT void JNICALL
Java_com_lidins_a1_1antapp_MainActivity_onCreateNative(
        JNIEnv* env,
        jobject /* this */) {
    LOGI("Hello Android NDK!");
}
