//
//  NSString+Date.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSString (Date)

#pragma mark - date 与时间相关
/**
 获取当前日期时间字符串
 yyyy-MM-dd HH:mm:ss a
 */
+ (NSString *)date;

/**
 获取当前时间字符串
 HH:mm:ss
 */
+ (NSString *)time;

@end
NS_ASSUME_NONNULL_END
