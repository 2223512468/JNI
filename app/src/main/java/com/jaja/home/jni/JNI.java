package com.jaja.home.jni;

/**
 * Created by ${Terry} on 2018/1/3.
 */
public class JNI {


    static {
        System.loadLibrary("app");
    }

    public native String hello();
}
