//
//  ToastView.h
//  Tools
//
//  Created by Felix on 7/8/16.
//  Copyright © 2016 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, ToastViewStyle) {
    ToastViewStyleBlurDark = 1,     //default
    ToastViewStyleBlurLight = 2,
    ToastViewStyleBlack = 3,
    ToastViewStyleWhite = 4,
    ToastViewStyleShine = 5,
};

@interface ToastView : UIView

#pragma mark - property
/** 需要显示的文本信息 */
@property (nonatomic, copy) NSString *text;

/** ToastView停留显示的时间值，default is 2 second */
@property (nonatomic, assign) NSTimeInterval duration;

/** ToastView显示的样式，
 *  ToastViewStyleBlurDark(Default)、
 *  ToastViewStyleBlurLight、
 *  ToastViewStyleBlack、
 *  ToastViewStyleWhite、
 *  ToastViewStyleShine、 
 *
 */
@property (nonatomic, assign) ToastViewStyle style;

/** 展示ToastView动画的出发位置，是指视图的center点，默认值是
 *  CGPointMake([UIScreen mainScreen].bounds.size.width * 0.5, [UIScreen mainScreen].bounds.size.height)
 *
 */
@property (nonatomic, assign) CGPoint departure;

/** 展示ToastView动画的结束位置，是指视图的center点，默认值是
 *  CGPointMake([UIScreen mainScreen].bounds.size.width * 0.5, [UIScreen mainScreen].bounds.size.height * 0.8)
 */
@property (nonatomic, assign) CGPoint destination;

#pragma mark - Class methods
/**
 *  当类调用此方法时，ToastView将会被显示在界面上，且视图默认在2秒后被销毁
 *
 *  @param text 显示的提示信息
 */
+ (void)showToastViewAutoDismissWithText:(NSString *)text;

/**
 *  当类调用此方法时，ToastView将会被显示在界面上，duration时间后被销毁
 *
 *  @param text     显示的提示信息
 *  @param duration 传入的时间参数
 */
+ (void)showToastViewWithText:(NSString *)text inDuration:(NSTimeInterval)duration;


#pragma mark - instance methods
/**
 *  初始化方法
 *
 *  @return 返回一个实例
 */
- (instancetype)init;

/**
 *  初始化方法
 *
 *  @param text 传入的参数
 *
 *  @return 返回一个实例
 */
- (instancetype)initWithText:(NSString *)text;

/**
 *  初始化方法
 *
 *  @param text  传入的文本参数
 *  @param style 传入的显示样式参数
 *
 *  @return 返回一个实例
 */
- (instancetype)initWithText:(NSString *)text style:(ToastViewStyle)style;


/**
 *  当对象调用此方法时，ToastView将会被显示在界面上不会被销毁，直到自己手动调用dismiss方法返回销毁
 */
- (void)show;

/**
 *  当对象调用此方法时，ToastView将会被显示在界面上且在时间duration后会自动被销毁
 *
 *  @param duration 传入的时间参数
 */
- (void)showToastViewAutoDismissWithDuration:(NSTimeInterval)duration;

/**
 *  当对象调用这个方法时对象会被销毁
 */
- (void)dismiss;

@end
