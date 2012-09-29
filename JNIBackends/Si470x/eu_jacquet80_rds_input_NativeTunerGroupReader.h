/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class eu_jacquet80_rds_input_NativeTunerGroupReader */

#ifndef _Included_eu_jacquet80_rds_input_NativeTunerGroupReader
#define _Included_eu_jacquet80_rds_input_NativeTunerGroupReader
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     eu_jacquet80_rds_input_NativeTunerGroupReader
 * Method:    setFrequency
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_eu_jacquet80_rds_input_NativeTunerGroupReader_setFrequency
  (JNIEnv *, jobject, jint);

/*
 * Class:     eu_jacquet80_rds_input_NativeTunerGroupReader
 * Method:    seek
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_eu_jacquet80_rds_input_NativeTunerGroupReader_seek
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     eu_jacquet80_rds_input_NativeTunerGroupReader
 * Method:    getDeviceName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_eu_jacquet80_rds_input_NativeTunerGroupReader_getDeviceName
  (JNIEnv *, jobject);

/*
 * Class:     eu_jacquet80_rds_input_NativeTunerGroupReader
 * Method:    readTuner
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_eu_jacquet80_rds_input_NativeTunerGroupReader_readTuner
  (JNIEnv *, jobject);

/*
 * Class:     eu_jacquet80_rds_input_NativeTunerGroupReader
 * Method:    open
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_eu_jacquet80_rds_input_NativeTunerGroupReader_open
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif