//
//  CLLocationManager.h
//  Tools
//
//  Created by Felix on 2018/2/6.
//  Copyright © 2018年 Felix. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@class YYLocationManager;

@protocol YYLocationManagerDelegate <NSObject>
- (void)manager:(YYLocationManager *)manager didUpdateLocation:(CLLocation *)location;
- (void)manager:(YYLocationManager *)manager didFailureWithError:(NSError *)error;
- (void)managerClosedLocationServices:(YYLocationManager *)manager;
@end


@interface YYLocationManager : NSObject
@property (nonatomic, weak  ) id<YYLocationManagerDelegate> delegate;
@property (nonatomic, assign, readonly) CLAuthorizationStatus authorizationStatus;

- (void)start;

@end
