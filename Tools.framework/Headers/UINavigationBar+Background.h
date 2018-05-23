//
//  UINavigationBar+Background.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (Background)
@property (nonatomic, strong) UIColor *alphaBackgroundColor;
- (void)setAlphaBackgroundColor:(UIColor *)alphaBackgroundColor animated:(BOOL)animated;
@end
