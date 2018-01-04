//
// Created by Administrator on 2018/1/4.
//
#include <jni.h>
//env 二级指针 job :JNI
jstring Java_com_jaja_home_jni_JNI_hello(JNIEnv* env,jobject job){

    char* c ="Hello";
    jstring s= (**env).NewStringUTF(env,c);
    return s;

}