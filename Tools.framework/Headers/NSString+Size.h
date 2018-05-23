//
//  NSString+Size.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSString (Size)

- (CGSize)sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize;

- (CGSize)sizeWithFontSize:(CGFloat)fontSize maxSize:(CGSize)maxSize;

- (CGFloat)heightWithFontSize:(CGFloat)fontSize maxWidth:(CGFloat)maxWidth;

/**
 *  计算文本的高度
 *
 *  @param font  字体
 *  @param width 固定的宽度
 *
 *  @return 高度
 */
- (CGFloat)heightWithLabelFont:(UIFont *)font withLabelWidth:(CGFloat)width;

/**
 *  计算文本的宽度
 *
 *  @param font 字体
 *
 *  @return 宽度
 */
- (CGFloat)widthWithLabelFont:(UIFont *)font;

@end
NS_ASSUME_NONNULL_END
