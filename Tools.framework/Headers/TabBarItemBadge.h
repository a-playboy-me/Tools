//
//  TabBarItemBadge.h
//  Tools
//
//  Created by Felix on 2017/9/29.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TabBarItemBadge : UILabel

@property (nonatomic, strong) NSLayoutConstraint *topConstraint;
@property (nonatomic, strong) NSLayoutConstraint *centerXConstraint;

+ (TabBarItemBadge *)badge;
- (void)addBadgeOnView:(UIView *)onView;

@end
