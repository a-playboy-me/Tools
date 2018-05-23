//
//  UIColor+Components.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

enum {
    enEqual,
    enNotEaual,
    enCannotConvert,
};
typedef NSInteger KCompareResult;

@interface UIColor (Components)

@property (nonatomic, assign, readonly) CGFloat redValue;
@property (nonatomic, assign, readonly) CGFloat greenValue;
@property (nonatomic, assign, readonly) CGFloat blueValue;
@property (nonatomic, assign, readonly) CGFloat alphaValue;
@property (nonatomic, assign, readonly) CGFloat hueValue;
@property (nonatomic, assign, readonly) CGFloat saturationValue;
@property (nonatomic, assign, readonly) CGFloat brightnessValue;

/**
 根据RGB三原色创建一个颜色

 @param red value between 0-255
 @param green value between 0-255
 @param blue value between 0-255
 @return color obj
 */
UIColor * RGBColor(NSInteger red, NSInteger green, NSInteger blue);

/**
 根据RGB三原色创建一个颜色
 
 @param red value between 0-255
 @param green value between 0-255
 @param blue value between 0-255
 @param alpha value between 0-255
 @return color obj
 */
UIColor * RGBAColor(NSInteger red, NSInteger green, NSInteger blue, NSInteger alpha);


/**
 生成一个随机颜色

 @return color
 */
+ (UIColor *)randomColorWithRGB;

/**
 说明：
 这个方法是求一个自己已知的颜色，求其三原色的颜色值。
 
 使用方法：
 CGFloat components[4];
 [UIColor RGBComponents:components forColor:[UIColor redColor]];
 NSLog(@"components %f %f %f %f", components[0], components[1], components[2], components[3]);
 
 @param components 颜色值数组，比如要求的”红色“的颜色值，将返回的数组components[3]的元素分别是[1.0, 0.0, 0.0]
 @param color 颜色对象
 */
+ (void)RGBComponents:(CGFloat [_Nullable 4])components forColor:(UIColor *)color;


+ (KCompareResult)isTheSameColor:(UIColor *)color
                        redValue:(CGFloat)rValue
                      greenValue:(CGFloat)gValue
                       blueValue:(CGFloat)bValue
                      alphaValue:(CGFloat)aValue;

@end
NS_ASSUME_NONNULL_END
