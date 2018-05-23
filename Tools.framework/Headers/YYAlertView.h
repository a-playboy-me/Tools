//
//  YYAlertView.h
//  Tools
//
//  Created by Felix on 2018/5/22.
//  Copyright © 2018年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^AlertViewCancelBlockType)(void);
typedef void (^AlertViewConfirmBlockType)(void);

@interface YYAlertView : UIView

- (instancetype)init NS_UNAVAILABLE;

/**
 初始化提示框

 @param frame frame
 @param title title
 @param message message
 @param cancelTitle cancelTitle
 @param confirmTitle confirmTitle
 @param cancelBlock cancelBlock
 @param confirmBlock confirmBlock
 @return return value
 */
- (instancetype)initWithFrame:(CGRect)frame
                        title:(NSString *)title
                      message:(NSString *)message
                  cancelTitle:(NSString *)cancelTitle
                 confirmTitle:(NSString *)confirmTitle
                  cancelBlock:(AlertViewCancelBlockType)cancelBlock
                 confirmBlock:(AlertViewConfirmBlockType)confirmBlock;

/**
 *  显示提示框
 */
- (void)show;

/**
 *  隐藏提示框
 */
- (void)hide;

/**
 *  设置标题的文本颜色
 */
- (void)setTitleColor:(UIColor *)color;

/**
 *  设置提示信息的文本颜色
 */
- (void)setMessageColor:(UIColor *)color;

/**
 *  设置取消按钮文本颜色
 */
- (void)setCancelTitleColor:(UIColor *)color forState:(UIControlState)state;

/**
 * 设置确定按钮文本颜色
 */
- (void)setConfirmTitleColor:(UIColor *)color forState:(UIControlState)state;

@end
