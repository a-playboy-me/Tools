//
//  NSString+UUID.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSString (UUID)
#pragma mark - UUID

/**
 英文名称是：Universally Unique Identifier,翻译过来就是通用唯一标识符。
 是一个32位的十六进制序列
 
 @return UUID
 */
+ (NSString *)uuidString;
@end
NS_ASSUME_NONNULL_END
