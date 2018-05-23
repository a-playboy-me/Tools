//
//  TransitionAnimation.h
//  Tools
//
//  Created by Felix on 2017/11/27.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import "TabBarItemAnimation.h"

@interface TransitionAnimation : TabBarItemAnimation
@property (nonatomic, assign) UIViewAnimationOptions transitionOption;
@end

@interface FlipLeftTransitionAnimation : TransitionAnimation

@end

@interface FlipRightTransitionAnimation : TransitionAnimation

@end

@interface FlipTopTransitionAnimation : TransitionAnimation

@end

@interface FlipBottomTransitionAnimation : TransitionAnimation

@end

