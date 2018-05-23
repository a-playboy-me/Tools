//
//  UIImage+SubImage.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, ScalingMode) {
    ScalingModeFill = 0,
    ScalingModeAspectFit,
    ScalingModeAspectFill,
    ScalingModeAspectExtendsFit,
    ScalingModeAspectExtendsFill
};

typedef NS_ENUM(NSUInteger, DiscardImageType) {
    DiscardImageUnknown = 0,
    DiscardImageTopSide = 1,
    DiscardImageRightSide = 2,
    DiscardImageBottomSide = 3,
    DiscardImageLeftSide = 4,
};

NS_ASSUME_NONNULL_BEGIN
@interface UIImage (SubImage)

- (UIImage *)croppedToCircleImage;

#pragma mark - Subimage 图片与子视图相关
/**
 截取当前image对象rect区域内的图像
 */
+ (UIImage *)subImageInRect:(UIImage *)image rect:(CGRect)rect;

/**
 压缩图片至指定尺寸，会变形，但是转换后的图片尺寸一定是targetSize的尺寸
 */
+ (UIImage *)scaleImageNotKeepingRatio:(UIImage *)image targetSize:(CGSize)targetSize;
+ (UIImage *)scaleImageNotKeepingRatio2:(UIImage *)image targetSize2:(CGSize)targetSize;

- (UIImage *)scaledImageToSize:(CGSize)newSize scalingMode:(ScalingMode)scalingMode interpolationQuality:(CGInterpolationQuality)quality scale:(CGFloat)scale;

/**
 压缩图片至指定像素点
 */
+ (UIImage *)scaleImageAtPixel:(UIImage *)image pixel:(CGFloat)pixel;

/**
 在指定的size里面生成一个平铺的图片
 */
+ (UIImage *)tiledImage:(UIImage *)image targetSize:(CGSize)targetSize;

/**
 UIView转化为UIImage
 */
+ (UIImage *)imageWithView:(UIView *)view;

/**
 将两个图片生成一张图片
 */
+ (UIImage*)mergeImage:(UIImage *)image otherImage:(UIImage *)otherImage;

/**
 不变形拉伸，但是转换后的图片尺寸不一定是targetSize的尺寸，因为image的实际尺寸w/h比例
 和targetSize的w/h比例不一定相等。存在 >、 =、 < 三种情况。所以最后的结果也存在三种情况，
 
 1. 结果image的width和height和初始预期设置的targetSize的大小一样；
 2. 结果image的width是targetSize的width大小，但是height却小于targetSize的height；
 3. 结果image的width小于targetSize的height，但height确实相等的
 */
+ (UIImage*)scaleImageKeepingRatio:(UIImage*)image targetSize:(CGSize)targetSize;
@end
NS_ASSUME_NONNULL_END
