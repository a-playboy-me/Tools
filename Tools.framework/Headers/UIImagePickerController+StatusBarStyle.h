//
//  UIImagePickerController+StatusBarStyle.h
//  Tools
//
//  Created by Felix on 2017/12/26.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

// UIImagePickerController改变statusBar颜色的问题
@interface UIImagePickerController (StatusBarStyle)

@end

/**
 使用UIImagePickerController获取图库照片后，发现statusBar的颜色改变了原有的颜色，需要重新设置，以便配合整体界面设计。尝试了一些网络上的解决方案，具体方式如下：
 
 (方法4和5亲测有效，推荐使用)
 
 方式1：
 UIImagePickerController继承UINavigationController，在调用UIImagePickerController的地方，加上如下代码：
 
 - (void)navigationController:(UINavigationController *)navigationController willShowViewController:(UIViewController *)viewController animated:(BOOL)animated
 {
 // bug fixes: UIIMagePickerController使用中改变StatusBar颜色的问题
 if ([navigationController isKindOfClass:[UIImagePickerController class]] && ((UIImagePickerController *)navigationController).sourceType == UIImagePickerControllerSourceTypePhotoLibrary) {
 [[UIApplication sharedApplication] setStatusBarHidden:NO];
 [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleLightContent animated:NO];
 }
 }

 该方式亲测无效,根据苹果提供的API提示 [[UIApplication sharedApplication] setStatusBarStyle:(UIStatusBarStyleLightContent)];方法只支持iOS2 - 9
 
 设置状态栏
 
 方式2：
 需要在Info.plist配置文件中，增加一下两个键值对（注：这个我本人建议还是加在代码中比较好，如果代码中有相应的处理，相应的controller将不受影响）。
 
 <key>View controller-based status bar appearance</key>
 <true/>
 <key>Status bar is initially hidden</key>
 <false/>
 <key>Status bar style</key>
 <string>UIStatusBarStyleLightContent<string/>

 该方式亲测有效，但是也会给别的界面带来问题，使用xujinshen。
 
 方式3：
 需要在Info.plist配置文件中，增加键：
 
 <key>View controller-based status bar appearance</key>
 <true/>
 <key>Status bar is initially hidden</key>
 <false/>

 然后，在对应的UIViewController子类中实现以下方法：
 
 - (UIStatusBarStyle)preferredStatusBarStyle
 {
 return UIStatusBarStyleLightContent;
 
 该方式在对应的UIViewController子类是有效的，但是在UIImagePickerController类中没办法直接设置。
 
 方式4：
 声明一个类继承UIImagePickerController
 
 #import <UIKit/UIKit.h>
 
 @interface ImagePickerController : UIImagePickerController
 
 @end

 在其.m文件实现以下方法：
 
 - (UIStatusBarStyle)preferredStatusBarStyle
 {
 return UIStatusBarStyleLightContent;
 }

 方式5：
 实现UIImagePickerController的延展，并实现preferredStatusBarStyle方法
 
 
 #import "UIImagePickerController+util.h"
 
 @implementation UIImagePickerController (util)
 
 // 状态栏设置
 - (UIStatusBarStyle)preferredStatusBarStyle {
 
 return UIStatusBarStyleLightContent;
 }
 
 @end
 */
