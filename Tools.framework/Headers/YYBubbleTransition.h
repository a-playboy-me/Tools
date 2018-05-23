//
//  YYBubbleTransition.h
//  Tools
//
//  Created by Felix on 2017/4/11.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UIViewController+YYBubbleTransition.h"

typedef NS_ENUM(NSInteger,YYBubbleTransitionType) {
    YYBubbleTransitionTypeShow = 0,
    YYBubbleTransitionTypeHide,
};

@interface YYBubbleTransition : NSObject<UIViewControllerAnimatedTransitioning>

//转场方式：显示/隐藏
@property (nonatomic, assign) YYBubbleTransitionType transitionType;

//初始化方法
- (instancetype)initWithAnchorRect:(CGRect)anchorRect;
+ (instancetype)transitionWithAnchorRect:(CGRect)anchorRect;

@end
