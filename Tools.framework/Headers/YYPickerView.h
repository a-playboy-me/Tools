//
//  YYPickerView.h
//  Tools
//
//  Created by Felix on 2018/5/22.
//  Copyright © 2018年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, YYPickerViewStyle) {
    YYPickerViewStyle3D = 1,
    YYPickerViewStyleFlat,
};

@class YYPickerView;

@protocol YYPickerViewDataSource <NSObject>
@required
- (NSUInteger)numberOfItemsInPickerView:(YYPickerView *)pickerView;
@optional
- (NSString *)pickerView:(YYPickerView *)pickerView titleForItem:(NSInteger)item;
- (UIImage *)pickerView:(YYPickerView *)pickerView imageForItem:(NSInteger)item;
@end

@protocol YYPickerViewDelegate <UIScrollViewDelegate>
@optional
- (void)pickerView:(YYPickerView *)pickerView didSelectItem:(NSInteger)item;
- (CGSize)pickerView:(YYPickerView *)pickerView marginForItem:(NSInteger)item;
- (void)pickerView:(YYPickerView *)pickerView configureLabel:(UILabel * const)label forItem:(NSInteger)item;
@end

@interface YYPickerView : UIView
@property (nonatomic, weak) id<YYPickerViewDataSource> dataSource;
@property (nonatomic, weak) id<YYPickerViewDelegate> delegate;
@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong) UIFont *highlightedFont;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *highlightedTextColor;
@property (nonatomic, assign) CGFloat interitemSpacing;
@property (nonatomic, assign) CGFloat fisheyeFactor; // 0...1; slight value recommended such as 0.0001
@property (nonatomic, assign, getter=isMaskDisabled) BOOL maskDisabled;
@property (nonatomic, assign) YYPickerViewStyle pickerViewStyle;
@property (nonatomic, assign, readonly) NSUInteger selectedItem;
@property (nonatomic, assign, readonly) CGPoint contentOffset;

- (void)reloadData;
- (void)scrollToItem:(NSUInteger)item animated:(BOOL)animated;
- (void)selectItem:(NSUInteger)item animated:(BOOL)animated;
@end
