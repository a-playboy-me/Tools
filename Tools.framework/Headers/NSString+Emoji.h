//
//  NSString+Emoji.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Emoji)

/**
 检查是不是Emoji表情字符
 */
- (BOOL)isEmoji;

- (NSString *)emoji;
/**
 将十六进制的Emoji编码转换为Emoji字符
 
 @param stringCode emoji编码
 @return emoji字符
 */
+ (NSString *)emojiWithStringCode:(NSString *)stringCode;

/**
 将十六进制的编码转为Emoji字符
 
 @param intCode 编码
 @return emoji字符
 */
+ (NSString *)emojiWithIntCode:(int)intCode;

@end
