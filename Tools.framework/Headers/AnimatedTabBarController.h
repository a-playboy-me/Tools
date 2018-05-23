//
//  AnimatedTabBarController.h
//  Tools
//
//  Created by Felix on 2017/11/27.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AnimatedTabBarController : UITabBarController
@property (nonatomic, strong) IBInspectable UIColor *tabBarTintColor; // default white
@property (nonatomic, strong) IBInspectable UIColor *maskViewTintColor; // default cyan
@end
