//
//  NSString+Convert.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSString (Convert)

/**
 将普通的字符串转换成十六进制字符串，这个方法是先将普通字符串中的对应ASCII码
 转换成十六进制字符串
 
 例如：数字0当做字符串处理是"0"，0 的ASCII码是48，那么转换后字符串“0”的
 十六进制字符串是"30"
 
 @return 十六进制字符串
 */
- (NSString *)hex;

/**
 将十六进制的字符串转换成NSData数据
 双数个数的字符串则正常转换成NSData类型
 转换前后对比：
 前 -> 后
 12345678   ->  <12345678>
 
 单数个数的字符串，落单的高位将会补0，如下所示：
 1234567    ->  <01234567>
 
 @return data
 */
- (NSData * _Nullable)hexData;

/**
 例如:
 123456789 -> <12345678 09>
 12345678  -> <12345678>
 */
- (NSData *)bytes;

/**
 十进制的数字转换成十六进制
 */
- (NSString *)hexWithNumber:(long long int) num;

/**
 NSData 转成 十六进制字符串hexString
 
 @param data data
 @return value
 */
- (NSString *)hexWithData:(NSData *)data;

@end
NS_ASSUME_NONNULL_END
