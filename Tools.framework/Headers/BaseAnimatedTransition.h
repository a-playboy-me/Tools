//
//  BaseAnimatedTransition.h
//  Tools
//
//  Created by Felix on 2017/9/14.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface BaseAnimatedTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
@property (nonatomic, readwrite, assign, setter=setPresention:) BOOL isPresention;
@end
