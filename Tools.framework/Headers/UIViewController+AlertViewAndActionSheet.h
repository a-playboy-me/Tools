//
//  UIViewController+AlertViewAndActionSheet.h
//  Tools
//
//  Created by Felix on 2017/11/27.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef iOS8_Later
#define iOS8_Later ([UIDevice currentDevice].systemVersion.doubleValue >= 8.0)
#endif

#define NO_USE -1000
typedef void(^click)(NSInteger index);
typedef void(^configuration)(UITextField *field, NSInteger index);
typedef void(^clickHaveField)(NSArray<UITextField *> *fields, NSInteger index);

@interface UIViewController (AlertViewAndActionSheet)
#ifdef iOS8_Later

#else
<UIAlertViewDelegate, UIActionSheetDelegate>
#endif

/*!
 *  use alert
 *
 *  @param title    title
 *  @param message  message
 *  @param others   other button title
 *  @param animated animated
 *  @param click    button action
 */
- (void)AlertWithTitle:(NSString *)title
                 message:(NSString *)message
               andOthers:(NSArray<NSString *> *)others
                animated:(BOOL)animated
                  action:(click)click;

/*!
 *  use action sheet
 *
 *  @param title             title
 *  @param message           message just system verson max or equal 8.0.
 *  @param destructive       button title is red color
 *  @param destructiveAction destructive action
 *  @param others            other button
 *  @param animated          animated
 *  @param click             other button action
 */
- (void)ActionSheetWithTitle:(NSString *)title
                       message:(NSString *)message
                   destructive:(NSString *)destructive
             destructiveAction:(click )destructiveAction
                     andOthers:(NSArray <NSString *> *)others
                      animated:(BOOL )animated
                        action:(click )click;

/*!
 *  use alert include textField
 *
 *  @param title         title
 *  @param message       message
 *  @param buttons       buttons
 *  @param number        number of textField
 *  @param configuration configuration textField property
 *  @param animated      animated
 *  @param click         button action
 */
- (void)AlertWithTitle:(NSString *)title
                 message:(NSString *)message
                 buttons:(NSArray<NSString *> *)buttons
         textFieldNumber:(NSInteger )number
           configuration:(configuration )configuration
                animated:(BOOL )animated
                  action:(clickHaveField )click;

@end
