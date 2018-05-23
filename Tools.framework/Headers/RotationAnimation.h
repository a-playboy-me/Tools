//
//  RotationAnimation.h
//  Tools
//
//  Created by Felix on 2017/11/27.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import "TabBarItemAnimation.h"

typedef NS_ENUM(NSUInteger, RotationDirection){
    RotationDirectionLeft,
    RotationDirectionRight
};

@interface RotationAnimation : TabBarItemAnimation
@property (nonatomic, assign) RotationDirection direction;
@end


@interface LeftRotationAnimation : RotationAnimation

@end


@interface RightRotationAnimation : RotationAnimation

@end
