//
//  FrameAnimation.h
//  Tools
//
//  Created by Felix on 2017/11/27.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import "TabBarItemAnimation.h"

@interface FrameAnimation : TabBarItemAnimation

// 逆向动画
@property (nonatomic, assign) IBInspectable BOOL        deselectAnimate;
@property (nonatomic, copy  ) IBInspectable NSString    *imagesPath;

- (void)loadAnimationImagesWithNames:(NSArray<NSString *> *)imageNames;

@end
