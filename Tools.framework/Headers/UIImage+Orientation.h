//
//  UIImage+Orientation.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UIImage (Orientation)

#pragma mark - rotation 图片与方向旋转相关
/**
 说明：
 这个是一个实例方法，此方法是将实例image的方向进行旋转成原始的的状态
 纠正图片的方向
 
 @return image 返回一个全新的图片
 */
- (UIImage *)fixOrientation;

/**
 说明：
 按给定的方向旋转图片
 
 @param orientation 将要旋转的方向
 @return 返回一个全新的图片image
 */
- (UIImage *)rotate:(UIImageOrientation)orientation;

/**
 说明：
 将实例进行在垂直方向上翻转（上下翻转）
 
 @return 返回一个全新的图片image
 */
- (UIImage *)flipVertical;

/**
 将图片在水平方向上进行翻转(左右翻转)
 
 @return 返回一个全新的图片image
 */
- (UIImage *)flipHorizontal;

/**
 说明：
 将图片旋转degrees角度
 
 @return 返回一个全新的图片image
 */
- (UIImage *)imageRotatedWithDegrees:(CGFloat)degrees;

/**
 说明：
 将图片旋转radians弧度
 
 @return 返回一个全新的图片image
 */
- (UIImage *)imageRotatedWithRadians:(CGFloat)radians;

@end
NS_ASSUME_NONNULL_END
