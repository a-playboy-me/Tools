//
//  UIAlertView+Block.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UIAlertView (Block)<UIAlertViewDelegate>

/**
 用户点击Cancel按钮的时候不会回调cancelBlock
 
 @param title title
 @param message message
 @param cancelButtonTitle cancelButtonTitle
 @param titles titles
 @param completionBlock completionBlock
 @param cacelBlock cacelBlock
 @return return value
 */
+ (instancetype)alertViewWithTitle:(NSString *)title
                           message:(NSString *)message
                 cancelButtonTitle:(NSString *)cancelButtonTitle
                 otherButtonTitles:(NSArray <NSString *>  * _Nullable)titles
                   completionBlock:(void (^)(UIAlertView *alertView, NSInteger selectedButtonIndex))completionBlock
                       cancelBlock:(void (^)(void))cacelBlock;

/**
 用户点击Cancel按钮的时候不会回调cancelBlock
 
 @param title title description
 @param message message description
 @param cancelButtonTitle cancelButtonTitle
 @param titles titles
 @param completionBlock completionBlock
 @param cancelBlock cancelBlock
 @return return value
 */
- (instancetype)initWithTitle:(NSString *)title
                      meaasge:(NSString *)message
            cancelButtonTitle:(NSString *)cancelButtonTitle
            otherButtonTitles:(NSArray <NSString *> * _Nullable)titles
              completionBlock:(void (^)(UIAlertView *alertView, NSInteger selectedButtonIndex))completionBlock
                  cancelBlock:(void (^)(void))cancelBlock;

@end
NS_ASSUME_NONNULL_END
