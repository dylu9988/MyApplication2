#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_administrator_myapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
jstring
Java_com_example_administrator_myapplication_MainActivity_stringFromLUDEYAO(JNIEnv *env, jobject /* this */)
{
    std::string hello = "Ludeyao";
    return env->NewStringUTF(hello.c_str());
}