//
//  UITableView+YYAnimationKit.h
//  Tools
//
//  Created by Felix on 17/9/9.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableViewAnimationKitConfig.h"

@interface UITableView (YYAnimationKit)

/**
 show the tableView animation 
 
 @param animationType type of animation to show TableView
 */
- (void)yy_showTableViewAnimationWithType:(YYTableViewAnimationType )animationType;


@end
