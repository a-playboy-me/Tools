//
//  ConstantsHeader.h
//  Tools
//
//  Created by Felix on 2018/5/23.
//  Copyright © 2018年 Felix. All rights reserved.
//

#ifndef ConstantsHeader_h
#define ConstantsHeader_h

/**
 *  UIScreen width.
 */
#define SCREEN_WIDTH            [UIScreen mainScreen].bounds.size.width

/**
 *  UIScreen height.
 */
#define SCREEN_HEIGHT           [UIScreen mainScreen].bounds.size.height

/**
 *  Status bar width.
 */
#define STATUS_BAR_WIDTH        [[UIApplication sharedApplication] statusBarFrame].size.width

/**
 *  Status bar height.
 */
#define STATUS_BAR_HEIGHT       [[UIApplication sharedApplication] statusBarFrame].size.height

/**
 *  Navigation bar width.
 */
#define NAVIGATION_BAR_WIDTH    self.navigationController.navigationBar.frame.size.width

/**
 *  Navigation bar height.
 */
#define NAVIGATION_BAR_HEIGHT   self.navigationController.navigationBar.frame.size.height

/**
 *  Tabbar height.
 */
#define TAB_BAR_HEIGHT         (iPhoneX ? 83.0f : 49.0f)

/**
 *  Status bar & navigation bar height.
 */
#define STATUS_BAR_AND_NAVI_BAR_HEIGHT   (STATUS_BAR_HEIGHT + NAVIGATION_BAR_HEIGHT)

/**
 *  iPhone4 or iPhone4s
 */
#define iPhone4_4s              ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

/**
 *  iPhone5 or iPhone5s
 */
#define iPhone5_5s_se           ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

/**
 *  iPhone6 or iPhone6s
 */
#define iPhone6_6s_7_8          ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1134), [[UIScreen mainScreen] currentMode].size) : NO)

/**
 *  iPhone6Plus or iPhone6sPlus
 */
#define iPhone6_6s_7_8_Plus     ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1080, 1920), [[UIScreen mainScreen] currentMode].size) : NO)

/**
 *  iPhoneX
 */
#define iPhoneX                 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#endif /* ConstantsHeader_h */
