//
//  UITabBarController+AddChildViewController.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITabBarController (AddChildViewController)
/**
 为UITabBarController添加子控制器，和设置子控制器的标题，常规状态下标题属性和选择状态下的属性
 常规状态下的图片和被选择的状态下的图片。

 @param childViewController 子控制器
 @param title 标题
 @param titleAttributesNormal 标题属性
 @param titleAttributesSelected 选中时的标题属性
 @param imageName 控制器图标
 @param selectedImageName 选中时的图标
 */
- (void)addChildViewController:(UIViewController *)childViewController
                         title:(NSString *)title titleAttributesNormal:(NSDictionary *)titleAttributesNormal
       titleAttributesSelected:(NSDictionary *)titleAttributesSelected
                     imageName:(NSString *)imageName
             selectedImageName:(NSString *)selectedImageName;

@end
NS_ASSUME_NONNULL_END
