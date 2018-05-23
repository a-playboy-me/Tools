//
//  NSString+Regex.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSString (Regex)

#pragma mark - 正则表达式，邮箱号、电话格式相关

/**
 判断邮箱格式是否正确
 
 @return YES or NO，返回YES代表邮箱格式正确，否则不正确
 */
- (BOOL)isValidEmailString;

/**
 判断手机号码是否符合格式
 
 移动号段: 134/135/136/137/138/139/147/150/151/152/157/158/159/178/182/183/184/187/188
 联通号段: 130/131/132/155/156/185/186/145/176/175
 电信号段: 133/153/180/181/189/177/173/149
 虚拟运营商: 170[1700/1701/1702(电信)、1703/1705/1706(移动)、1704/1707/1708/1709(联通)]、171（联通）
 卫星通信: 1349
 
 @return YES or NO，返回YES代表号码格式正确，否则不正确
 */
- (BOOL)isValidMobileString;


/**
 判断车牌号格式是否正确
 
 @return YES or NO
 */
- (BOOL)isValidCarNumberString;


/**
 判断一个字符串是否是一个正确的http请求格式
 
 @return YES or NO
 */
- (BOOL)isValidHttpURLString;


/**
 判断一个字符串是否是一个正确的MAC地址请求格式
 
 @return YES or NO
 */
- (BOOL)isValidMACAddressString;

@end
NS_ASSUME_NONNULL_END
