//
//  AnimatedTabBarItem.h
//  Tools
//
//  Created by Felix on 2017/11/27.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TabBarItemView.h"
#import "TabBarItemAnimation.h"

@interface AnimatedTabBarItem : UITabBarItem

@property (nonatomic, strong) TabBarItemView *itemView;

/** This property is only for pure code mode. */
@property (nonatomic, strong) TabBarItemAnimation *animation;

/** If you use storyboard or nib, you can use this. */
//@property (nonatomic, weak) IBOutlet TabBarItemAnimation *animation;

/** item被选择时的动画 */
- (void)selectedAnimation;

/** 选择其它item时的动画 */
- (void)deselectedAnimation;

/** 设置被选择时的状态 */
- (void)selected;

/** 设置未被选择时的状态 */
- (void)deselected;

@end
