//
//  UIView+Extension.h
//  Tools
//
//  Created by Felix on 2016/11/16.
//  Copyright © 2016年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UIView (Extension)
/*------------------------------------------------------------------
 *                      Absolute coordinate                        *
 ------------------------------------------------------------------*/

@property(nonatomic, assign) CGFloat x; /// left
@property(nonatomic, assign) CGFloat y; /// top
@property(nonatomic, assign) CGFloat width;
@property(nonatomic, assign) CGFloat height;

@property(nonatomic, assign) CGFloat top;
@property(nonatomic, assign) CGFloat bottom;
@property(nonatomic, assign) CGFloat left;
@property(nonatomic, assign) CGFloat right;

@property(nonatomic, assign) CGFloat centerX; /// center to the left
@property(nonatomic, assign) CGFloat centerY; /// center to the top
@property(nonatomic, assign) CGSize  size;
@property(nonatomic, assign) CGPoint origin;  /// Top left coordinates

/*------------------------------------------------------------------
 *                      Relative coordinate                        *
 ------------------------------------------------------------------*/

@property(nonatomic, assign, readonly) CGFloat middleX;
@property(nonatomic, assign, readonly) CGFloat middleY;
@property(nonatomic, assign, readonly) CGPoint middlePoint;


/**
 加载xib视图

 @param nibName 视图的名字
 @param nibBundle nib所在的bundle
 @return 返回视图
 */
+ (nullable id)viewWithNibName:(NSString *)nibName bundle:(NSBundle *)nibBundle;

@end
NS_ASSUME_NONNULL_END
