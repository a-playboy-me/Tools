//
//  DraggableCardViewController.h
//  Tools
//
//  Created by Felix on 2017/11/29.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DraggableCardViewController : UIViewController
@property (nonatomic, strong) NSMutableArray<NSDictionary *> *datas;
@property (nonatomic, assign) CGRect containerFrame;
@end
