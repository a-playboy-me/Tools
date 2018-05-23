//
//  UIViewController+YYBubbleTransition.h
//  Tools
//
//  Created by Felix on 2017/4/1.
//  Copyright © 2017年 Felix. All rights reserved.
//  GitHub ：https://github.com/Felix/YYBubbleTransition

#import <UIKit/UIKit.h>

@class YYBubbleTransition;

@interface UIViewController (YYBubbleTransition)<UINavigationControllerDelegate,UIViewControllerTransitioningDelegate>

@property (nonatomic, retain) YYBubbleTransition *yy_pushTranstion;

@property (nonatomic, retain) YYBubbleTransition *yy_popTranstion;

@property (nonatomic, retain) YYBubbleTransition *yy_presentTranstion;

@property (nonatomic, retain) YYBubbleTransition *yy_dismissTranstion;

@end
