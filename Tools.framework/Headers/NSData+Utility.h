//
//  NSData+Utility.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (Utility)

/**
 反转字节序列。
 begin: 0001 0000 -> end: 0000 1000
 
 @param data 原始数据
 @return 反转字节序列后的数据
 */
+ (NSData *)reverseWithData:(NSData *)data;

/**
 将8位的数值转换成NSData，编码的方式：低位在前，高位在后。
 
 @param value 一个8位的整数类型 1byte
 @return 转换后NSData数据
 */
+ (NSData *)byteWithInt8:(int8_t)value;

/**
 将16位的数值转换成NSData，编码的方式：低位在前，高位在后。
 
 @param value 一个16位的整数类型 2bytes
 @return 转换后NSData数据
 */
+ (NSData *)bytesWithInt16:(int16_t)value;

/**
 将32位的数值转换成NSData，编码的方式：低位在前，高位在后。
 
 @param value 一个32位的整数类型 4bytes
 @return 转换后NSData数据
 */
+ (NSData *)bytesWithInt32:(int32_t)value;

/**
 将64位的数值转换成NSData，编码的方式：低位在前，高位在后。
 
 @param value 一个64位的整数类型 8bytes
 @return 转换后NSData数据
 */
+ (NSData *)bytesWithInt64:(int64_t)value;

/**
 将64位的数值转换成NSData，编码的方式：低位在前，高位在后。
 
 @param value 一个64位的整数类型 8bytes
 @param length value的长度
 @return 转换后NSData数据
 */
+ (NSData *)bytesWithValue:(int64_t)value length:(NSUInteger)length;

/**
 将64位的数值转换成NSData，编码的方式：低位在前，高位在后。
 
 @param value 一个64位的整数类型 8bytes
 @param length value的长度
 @param reverse 是否高低位反转
 @return 转换后NSData数据
 */
+ (NSData *)bytesWithValue:(int64_t)value length:(NSUInteger)length reverse:(BOOL)reverse;

/**
 将字节数据转换成int16_t数值，编码的方式：低位在前，高位在后。
 
 @param data 1byte字节长度的字节数据
 @return uint8_t数值
 */
+ (int8_t)int8WithByte:(NSData *)data;

/**
 将字节数据转换成int16_t数值，编码的方式：低位在前，高位在后。
 
 @param data 2bytes字节长度的数据
 @return uint16_t数值
 */
+ (int16_t)int16WithBytes:(NSData *)data;

/**
 将字节数据转换成int32_t数值，编码的方式：低位在前，高位在后。
 
 @param data 4bytes字节长度的数据
 @return uint32_t数值
 */
+ (int32_t)int32WithBytes:(NSData *)data;

/**
 将字节数据转换成uint64_t数值，编码的方式：低位在前，高位在后。
 
 @param data 8bytes字节长度的数据
 @return uint64_t数值
 */
+ (int64_t)int64WithBytes:(NSData *)data;

/**
 将字节数据转换成uint64_t数值，编码的方式：低位在前，高位在后。
 
 @param data 字节数据
 @return uint64_t数值
 */
+ (uint64_t)valueWithBytes:(NSData *)data;

/**
 将字节数据转换成uint64_t数值，编码的方式：低位在前，高位在后。
 
 @param data 字节数据
 @param reverse 是否高低位反转
 @return uint64_t数值
 */
+ (uint64_t)valueWithBytes:(NSData *)data reverse:(BOOL)reverse;

/**
 将一般字符串转换成NSData
 
 @param string 字符串
 @param length 字符串的长度
 @return data
 */
+ (NSData *)dataWithNormal:(NSString *)string length:(NSUInteger)length;

/**
 将十六进制的字符串转换成NSData
 
 @param hexString 十六进制字符串
 @return data
 */
+ (NSData *)dataWithHex:(NSString *)hexString;

/**
 将NSData类型的数据转换成十六进制的字符串
 
 @param data data
 @return 十六进制字符串
 */
+ (NSString *)hexWithData:(NSData *)data;

/**
 将十六进制的字符串转换成ASCII码
 
 @param hexString 十六进制字符串
 @return 十六进制字符串
 */
+ (NSString *)asciiWithHex:(NSString *)hexString;

/**
 将ASCII码字符串转换成十六进制字符串
 
 @param asciiString ASCII字符串
 @return 十六进制字符串
 */
+ (NSString *)hexWithASCII:(NSString *)asciiString;

/**
 回车换行
 
 @return data
 */
+ (NSData *)CRLFData;   // 0x0D0A

/**
 回车
 
 @return data
 */
+ (NSData *)CRData;     // 0x0D

/**
 换行
 
 @return data
 */
+ (NSData *)LFData;     // 0x0A

/**
 空字符
 
 @return data
 */
+ (NSData *)ZeroData;   // 0x00


@end
