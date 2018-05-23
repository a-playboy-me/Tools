//
//  UIImage+Color.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UIImage (Color)

#pragma mark - Color 图片与颜色相关
/**
 根据颜色生成1 pixel纯色的图片
 
 @param color 需要变成的颜色
 @return image 一个全新的图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

/**
 根据颜色生成指定大小纯色的图片
 
 @param color 需要变成的颜色
 @return image 一个全新的图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

/**
 改变图片颜色
 */
- (UIImage *)renderWithColor:(UIColor *)color;

/**
 获取图片上某一个像素点的颜色
 
 @param point 像素点在图片上的位置
 @return color 颜色值
 */
- ( UIColor * _Nullable )colorOnPixel:(CGPoint)point;

/**
 获取图片的灰度图
 
 @return image
 */
- ( UIImage * _Nullable )grayImage;

+ (UIImage *) grayScale:(UIImage *)anImage type:(char)type;

@end
NS_ASSUME_NONNULL_END
