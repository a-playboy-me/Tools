//
//  UIAlertView+Error.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UIAlertView (Error)
+ (instancetype)alertViewWithError:(NSError *)error;
@end
NS_ASSUME_NONNULL_END
