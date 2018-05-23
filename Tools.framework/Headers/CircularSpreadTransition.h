//
//  CircularSpreadTransition.h
//  Tools
//
//  Created by Felix on 2017/9/14.
//  Copyright © 2017年 Felix. All rights reserved.
//

// 使用本特效只需要在被推出的ViewController设置transitioningDelegate代理和设置modalPresentationStyle为UIModalPresentationCustom
// 在代理方法中返回所创建的特效对象

//    self.transitioningDelegate = self;
//    self.modalPresentationStyle = UIModalPresentationCustom;
//    - (nullable id <UIViewControllerAnimatedTransitioning>)animationControllerForPresentedController:(UIViewController *)presented
//                                                                                presentingController:(UIViewController *)presenting
//                                                                                    sourceController:(UIViewController *)source {
//        [self.transition setPresention:YES];
//        return self.transition;
//    }
//
//    - (nullable id <UIViewControllerAnimatedTransitioning>)animationControllerForDismissedController:(UIViewController *)dismissed {
//        [self.transition setPresention:NO];
//        return self.transition;
//    }

#import "BaseAnimatedTransition.h"

@interface CircularSpreadTransition : BaseAnimatedTransition <CAAnimationDelegate>

@end
