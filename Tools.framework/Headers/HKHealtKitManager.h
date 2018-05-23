//
//  HKHealtKitManager.h
//  Tools
//
//  Created by Felix on 2016/10/28.
//  Copyright © 2016年 Felix. All rights reserved.
//

/**
 *  注意事项：
 *  
 *  1.在使用HKHealthKit框架之前，先在Project下的target->Capabilities->HealthKit开启开关
 *  2.必须先把框架的头文件导入进来#import <HealthKit/HealthKit.h>
 *  3.iOS 10以后，需要在info.plist文件中中添加权限声明键值对
 *    key:Privacy - Health Share Usage Description
 *    value: 随意填写，说明使用意图即可
 *
 *    key:Privacy - Health Update Usage Description
 *    value: 随意填写，说明使用意图即可
 */

#import <Foundation/Foundation.h>


extern NSString * const HKHealtKitManagerDomain;


@interface HKHealtKitManager : NSObject<NSCopying>

+ (instancetype)shareInstance;
+ (instancetype)defaultManager;


// Block写法二
/**
 *  使用Block回调的方式，获取每日的步行的数量
 *  需要注意的是在数据运用到UI线程时需要在主线程中更新。
 */
- (void)walkedSteps:(void (^)(double steps, NSError *error))completedHandler;

/**
 *  使用Block回调的方式，获取每日的步行距离
 *  需要注意的是在数据运用到UI线程时需要在主线程中更新。
 */
- (void)walkedDistance:(void (^)(double distance, NSError *error))completedHandler;

/**
 *  使用回调的方式，获取已爬楼层
 *  需要注意的是在数据运用到UI线程时需要在主线程中更新。
 */
- (void)climbedFloors:(void (^)(double floors, NSError *error))completedHandler;

@end
