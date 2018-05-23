//
//  UIColor+Gradient.h
//  Tools
//
//  Created by Felix on 2016/12/30.
//  Copyright © 2016年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UIColor (Gradient)

/**
 获取两个颜色的渐变色，从sourceColor渐变到targetColor，颜色分成(stepCount-1)份，从下标stepIndex开始。

 @param sourceColor 开始颜色
 @param targetColor 目标颜色
 @param stepCount 渐变颜色的份数
 @param stepIndex 颜色份数的下标，第0份是原色，第stepCount份是将渐变到的目标颜色，中间是渐变过程的颜色。
 @return color
 */
+ (UIColor *)gradientColorWithSourceColor:(UIColor *)sourceColor targetColor:(UIColor *)targetColor stepCount:(NSUInteger)stepCount stepIndex:(NSUInteger)stepIndex;
@end
NS_ASSUME_NONNULL_END
