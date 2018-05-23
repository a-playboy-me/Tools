//
//  DraggableCardView.h
//  Tools
//
//  Created by Felix on 2017/11/29.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DraggableCardView : UIControl
@property (nonatomic, strong) UILabel       *label;
@property (nonatomic, strong) UIImageView   *imageView;
@property (nonatomic, strong) UIView        *selectedView;
@end
