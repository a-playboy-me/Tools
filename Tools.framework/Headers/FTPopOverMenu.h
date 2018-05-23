//
//  FTPopOverMenu.h
//  FTPopOverMenu
//
//  Created by Felix on 16/4/5.
//  Copyright © 2016年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  FTPopOverMenuDoneBlock
 *
 *  @param selectedIndex SlectedIndex
 */
typedef void (^FTPopOverMenuDoneBlock)(NSInteger selectedIndex);
/**
 *  FTPopOverMenuDismissBlock
 */
typedef void (^FTPopOverMenuDismissBlock)(void);

/**
 *  -----------------------FTPopOverMenuConfiguration-----------------------
 */
@interface FTPopOverMenuConfiguration : NSObject

@property (nonatomic, assign) CGFloat           menuTextMargin; // Default is 6.
@property (nonatomic, assign) CGFloat           menuIconMargin; // Default is 6.
@property (nonatomic, assign) CGFloat           menuRowHeight;
@property (nonatomic, assign) CGFloat           menuWidth;
@property (nonatomic, strong) UIColor           *textColor;
@property (nonatomic, strong) UIColor           *iconColor;
@property (nonatomic, strong) UIColor           *tintColor;
@property (nonatomic, strong) UIColor           *borderColor;
@property (nonatomic, assign) CGFloat           borderWidth;
@property (nonatomic, strong) UIFont            *textFont;
@property (nonatomic, assign) NSTextAlignment   textAlignment;
@property (nonatomic, assign) BOOL              ignoreImageOriginalColor; // Default is 'NO', if sets to 'YES', images color will be set to iconColor.
@property (nonatomic, assign) BOOL              allowRoundedArrow; // Default is 'NO', if sets to 'YES', the arrow will be drawn with round corner.
@property (nonatomic, assign) NSTimeInterval    animationDuration;
/**
 *  defaultConfiguration
 *
 *  @return current configuration
 */
+ (FTPopOverMenuConfiguration *)defaultConfiguration;

@end

/**
 *  -----------------------FTPopOverMenuCell-----------------------
 */
@interface FTPopOverMenuCell : UITableViewCell

@end
/**
 *  -----------------------FTPopOverMenuView-----------------------
 */
@interface FTPopOverMenuView : UIControl

@end

/**
 *  -----------------------FTPopOverMenu-----------------------
 */
@interface FTPopOverMenu : NSObject <NSCopying>

/**
 show method with sender without images
 
 @param sender sender
 @param menuTitles menuTitles
 @param doneBlock doneBlock
 @param dismissBlock dismissBlock
 */
+ (void)showForSender:(UIView *)sender
       withMenuTitles:(NSArray<NSString*> *)menuTitles
            doneBlock:(FTPopOverMenuDoneBlock)doneBlock
         dismissBlock:(FTPopOverMenuDismissBlock)dismissBlock;

/**
 show method with sender and image resouce Array
 
 @param sender sender
 @param menuTitles menuTitles
 @param imageNames imageNames
 @param doneBlock doneBlock
 @param dismissBlock dismissBlock
 */
+ (void)showForSender:(UIView *)sender
       withMenuTitles:(NSArray<NSString*> *)menuTitles
           imageNames:(NSArray *)imageNames
            doneBlock:(FTPopOverMenuDoneBlock)doneBlock
         dismissBlock:(FTPopOverMenuDismissBlock)dismissBlock;

/**
 show method for barbuttonitems with event without images
 
 @param event event
 @param menuTitles menuTitles
 @param doneBlock doneBlock
 @param dismissBlock dismissBlock
 */
+ (void)showFromEvent:(UIEvent *)event
       withMenuTitles:(NSArray<NSString*> *)menuTitles
            doneBlock:(FTPopOverMenuDoneBlock)doneBlock
         dismissBlock:(FTPopOverMenuDismissBlock)dismissBlock;

/**
 show method for barbuttonitems with event and imageNames
 
 @param event event
 @param menuTitles menuTitles
 @param imageNames imageNames
 @param doneBlock doneBlock
 @param dismissBlock dismissBlock
 */
+ (void)showFromEvent:(UIEvent *)event
       withMenuTitles:(NSArray<NSString*> *)menuTitles
           imageNames:(NSArray *)imageNames
            doneBlock:(FTPopOverMenuDoneBlock)doneBlock
         dismissBlock:(FTPopOverMenuDismissBlock)dismissBlock;

/**
 show method with SenderFrame without images
 
 @param senderFrame senderFrame
 @param menuTitles menuTitles
 @param doneBlock doneBlock
 @param dismissBlock dismissBlock
 */
+ (void)showFromSenderFrame:(CGRect )senderFrame
             withMenuTitles:(NSArray<NSString*> *)menuTitles
                  doneBlock:(FTPopOverMenuDoneBlock)doneBlock
               dismissBlock:(FTPopOverMenuDismissBlock)dismissBlock;

/**
 show method with SenderFrame and image resouce Array
 
 @param senderFrame senderFrame
 @param menuTitles menuTitles
 @param imageNames imageNames
 @param doneBlock doneBlock
 @param dismissBlock dismissBlock
 */
+ (void)showFromSenderFrame:(CGRect )senderFrame
             withMenuTitles:(NSArray<NSString*> *)menuTitles
                 imageNames:(NSArray *)imageNames
                  doneBlock:(FTPopOverMenuDoneBlock)doneBlock
               dismissBlock:(FTPopOverMenuDismissBlock)dismissBlock;

/**
 *  dismiss method
 */
+ (void)dismiss;

@end

