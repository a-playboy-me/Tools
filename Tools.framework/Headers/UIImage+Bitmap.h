//
//  UIImage+Bitmap.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UIImage (Bitmap)

#pragma mark - bitmap 图片与位图相关
/**
 根据一个BMP图片，获取正规BMP图片头部数据
 
 @param image BMP image
 @return data
 */
+ (nullable NSData *)bitmapHeaderDataOfImage:(UIImage *)image;

/**
 根据一个BMP图片，获取BMP图片不包括头部文件部分的32bit数据
 
 @param image BMP image 图片的尺寸是不是已经想要的尺寸，不是的话转换成想要的尺寸图片
 @return data
 */
+ (nullable NSData *)bitmapDataWithoutHeaderWithImage:(UIImage *)image;

/**
 获取BMP图片的32bit完整数据
 
 @param image BMP image
 @return data
 */
+ (NSData *)bitmapDataWithHeaderWithImage:(UIImage *)image;

/**
 把32位的RGBA的BMP位图转换成RGB24位的BMP位图
 这个过程花费的时间比较长，建议在子线程中运行
 
 @return data
 */
+ (NSData *)bitmapData24WithBitmapData32:(NSData *)bitmapData32;

/**
 根据一个图片，返回一个完整RGBA32bit的BMP图片数据，当然就包括头部数据
 
 @param image 图片
 @return 返回BMP
 */
UIKIT_EXTERN  NSData * __nullable UIImageBMPRepresentation(UIImage * __nonnull image);                               // return image as BMP. May return nil if image has no CGImageRef or invalid bitmap format
@end
NS_ASSUME_NONNULL_END
