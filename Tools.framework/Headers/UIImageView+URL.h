//
//  UIImageView+URL.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

#define UIActivityIndicatorViewStyleNone ((UIActivityIndicatorViewStyle)-1)

NS_ASSUME_NONNULL_BEGIN
@interface UIImageView (URL)
@property(nonatomic, assign) UIActivityIndicatorViewStyle activityIndicatorViewStyle;

/**
 为ImageView设置图片，会进行缓存
 
 @param url 图片的URL
 */
- (void)setImageWithContentsOfURL:(NSURL *)url;

- (void)setImageWithContentsOfURL:(NSURL *)url
                            scale:(CGFloat)scale
                       completion:(nullable void (^)(void))completion
                          failure:(nullable void (^)(NSError *error))failure;

- (void)setImageWithContentsOfURL:(NSURL *)url
                            scale:(CGFloat)scale
                      ignoreCache:(BOOL)ignoreCache
                       completion:(nullable void (^)(void))completion
                          failure:(nullable void (^)(NSError *error))failure;

- (void)cancelAllURLRequests;
@end
NS_ASSUME_NONNULL_END
