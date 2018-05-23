//
//  TabBarItemAnimation.h
//  Tools
//
//  Created by Felix on 2017/11/27.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class TabBarItemAnimation;
@protocol TabBarItemAnimationProtocol <NSObject>

/** 选中item时播放动画 */
- (void)selectedAnimation:(UIImageView *)icon label:(UILabel *)label;

/** 离开当前item，选择其他item时播放动画 */
- (void)deselectedAnimation:(UIImageView *)icon label:(UILabel *)label;

/** 选中状态，程序刚启动时一般默认先选择到第一个item，这时可以调用这个方法 */
- (void)selected:(UIImageView *)icon label:(UILabel *)label;

/** 没选中状态 */
- (void)deselected:(UIImageView *)icon label:(UILabel *)label;

@end

@interface TabBarItemAnimation : NSObject <TabBarItemAnimationProtocol>

/** 默认0.5s */
@property (nonatomic, assign) IBInspectable CGFloat duration;

/** 默认黑色 */
@property (nonatomic, strong) IBInspectable UIColor *textColor;

/** 默认红色 */
@property (nonatomic, strong) IBInspectable UIColor *selectedTextColor;

/** 默认黑色 */
@property (nonatomic, strong) IBInspectable UIColor *iconColor;

/** 默认红色 */
@property (nonatomic, strong) IBInspectable UIColor *selectedIconColor;

@end
