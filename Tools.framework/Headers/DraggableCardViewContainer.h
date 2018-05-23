//
//  DraggableCardViewContainer.h
//  Tools
//
//  Created by Felix on 2017/11/29.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DraggableCardView.h"

@class DraggableCardViewContainer;

typedef NS_OPTIONS(NSInteger, DraggableDirection) {
    DraggableDirectionDefault     = 0,       // 0
    DraggableDirectionLeft        = 1 << 0,  // 1
    DraggableDirectionRight       = 1 << 1,  // 2
    DraggableDirectionUp          = 1 << 2,  // 4
    DraggableDirectionDown        = 1 << 3   // 8
};

@protocol DraggableCardViewContainerDataSource <NSObject>
- (NSInteger)numberOfDraggableCardViewContainerOnIndex:(NSInteger)index;
- (DraggableCardView *)nextDraggableCardViewWithIndex:(NSInteger)index;
@end

@protocol DraggableCardViewContainerDelegate <NSObject>

- (void)cardViewContainer:(DraggableCardViewContainer *)container didFinishDraggingWithIndex:(NSInteger)index draggableCardView:(DraggableCardView *)draggableCardView direction:(DraggableDirection)direction;

@optional
- (void)cardViewContainerDidCompleteAll:(DraggableCardViewContainer *)container;

- (void)cardViewContainer:(DraggableCardViewContainer *)container didSelectWithIndex:(NSInteger)index draggableCardView:(DraggableCardView *)draggableCardView;

- (void)cardViewContainer:(DraggableCardViewContainer *)container updatePositionWithDraggableView:(DraggableCardView *)draggableView direction:(DraggableDirection)direction widthRatio:(CGFloat)widthRatio heightRatio:(CGFloat)heightRatio;

- (void)cardViewContainer:(DraggableCardViewContainer *)container currentIndex:(NSInteger)index;

@end

@interface DraggableCardViewContainer : UIView
@property (nonatomic, weak  ) id<DraggableCardViewContainerDataSource>  dataSource;
@property (nonatomic, weak  ) id<DraggableCardViewContainerDelegate>    delegate;
@property (nonatomic, assign) DraggableDirection direction;
@property (nonatomic, assign) BOOL animated;

- (void)reloadCardViewContainer;
- (void)playWithAnimation;
- (void)movePositionWithDirection:(DraggableDirection)direction automatic:(BOOL)automatic;
- (void)movePositionWithDirection:(DraggableDirection)direction automatic:(BOOL)automatic undoHandle:(void (^)(void))undoHandle;
- (DraggableCardView *)currentCardView;

@end
