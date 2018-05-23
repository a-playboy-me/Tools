//
//  TabBarItem.h
//  Tools
//
//  Created by Felix on 2017/11/27.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface TabBarItemView : NSObject

@property (nonatomic, strong) UIImageView   *icon;
@property (nonatomic, strong) UILabel       *label;

- (instancetype)init __attribute__((unavailable("Use '+ (instancetype)itemWithIcon:(UIImageView *)icon label:(UILabel *)label;' method instead.")));

- (instancetype)initWithIcon:(UIImageView *)icon label:(UILabel *)label;

@end
