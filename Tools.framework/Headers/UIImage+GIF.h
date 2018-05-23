//
//  UIImage+GIF.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UIImage (GIF)

#pragma mark - GIF 图片与GIF动图相关
/**
 使用一个GIF动态图的data数据生成一个动的UIImage
 
 @param data GIF data
 @return image
 */
+ (UIImage *)imageWithGIFData:(NSData *)data;

/**
 使用一个GIF动态图的data数据生成一个动的UIImage
 
 @param url 传入GIF动图的地址
 @return image
 */
+ (UIImage *)imageWithURL:(NSURL *)url;

@end
NS_ASSUME_NONNULL_END
