//
//  Tools.h
//  Tools
//
//  Created by Felix on 2017/12/11.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YYIndexPath : NSObject

@property (nonatomic, assign) NSInteger column;
@property (nonatomic, assign) NSInteger row;
@property (nonatomic, assign) NSInteger item;

- (instancetype)initWithColumn:(NSInteger)column row:(NSInteger)row;
// default item = -1
+ (instancetype)indexPathWithCol:(NSInteger)col row:(NSInteger)row;
+ (instancetype)indexPathWithCol:(NSInteger)col row:(NSInteger)row item:(NSInteger)item;
@end

@interface YYBackgroundCellView : UIView

@end

#pragma mark - data source protocol
@class YYDropDownMenu;

@protocol YYDropDownMenuDataSource <NSObject>

@required

/**
 *  返回 menu 第column列有多少行
 */
- (NSInteger)menu:(YYDropDownMenu *)menu numberOfRowsInColumn:(NSInteger)column;

/**
 *  返回 menu 第column列 每行title
 */
- (NSString *)menu:(YYDropDownMenu *)menu titleForRowAtIndexPath:(YYIndexPath *)indexPath;

@optional
/**
 *  返回 menu 有多少列 ，默认1列
 */
- (NSInteger)numberOfColumnsInMenu:(YYDropDownMenu *)menu;

// 新增 返回 menu 第column列 每行image
- (NSString *)menu:(YYDropDownMenu *)menu imageNameForRowAtIndexPath:(YYIndexPath *)indexPath;

// 新增 detailText ,right text
- (NSString *)menu:(YYDropDownMenu *)menu detailTextForRowAtIndexPath:(YYIndexPath *)indexPath;

// 新增 accessoryView
- (UIView *)menu:(YYDropDownMenu *)menu accessoryViewForRowAtIndexPath:(YYIndexPath *)indexPath;

/**
 *  新增
 *  当有column列 row 行 返回有多少个item ，如果>0，说明有二级列表 ，=0 没有二级列表
 *  如果都没有可以不实现该协议
 */
- (NSInteger)menu:(YYDropDownMenu *)menu numberOfItemsInRow:(NSInteger)row column:(NSInteger)column;

/**
 *  新增
 *  当有column列 row 行 item项 title
 *  如果都没有可以不实现该协议
 */
- (NSString *)menu:(YYDropDownMenu *)menu titleForItemsInRowAtIndexPath:(YYIndexPath *)indexPath;

// 新增 当有column列 row 行 item项 image
- (NSString *)menu:(YYDropDownMenu *)menu imageNameForItemsInRowAtIndexPath:(YYIndexPath *)indexPath;

// 新增
- (NSString *)menu:(YYDropDownMenu *)menu detailTextForItemsInRowAtIndexPath:(YYIndexPath *)indexPath;

// 新增 accessoryView
- (UIView *)menu:(YYDropDownMenu *)menu accessoryViewForItemsInRowAtAtIndexPath:(YYIndexPath *)indexPath;

@end

#pragma mark - delegate
@protocol YYDropDownMenuDelegate <NSObject>
@optional

/**
 *  点击代理，点击了第column 第row 或者item项，如果 item >=0
 */
- (void)menu:(YYDropDownMenu *)menu didSelectRowAtIndexPath:(YYIndexPath *)indexPath;

/** 新增
 *  return nil if you don't want to user select specified indexpath
 *  optional
 */
- (NSIndexPath *)menu:(YYDropDownMenu *)menu willSelectRowAtIndexPath:(YYIndexPath *)indexPath;

@end

#pragma mark - interface

typedef NS_ENUM(NSInteger, YYIndicatorAlignType) {
    YYIndicatorAlignTypeRight = 0,     //指示图标居右
    YYIndicatorAlignTypeCloseToTitle,  //指示图标挨着文字，有一个默认间距设置为3
};

@interface YYDropDownMenu : UIView <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, weak) id <YYDropDownMenuDataSource>  dataSource;
@property (nonatomic, weak) id <YYDropDownMenuDelegate>    delegate;

@property (nonatomic, assign) UITableViewCellStyle  cellStyle;              // default value1
@property (nonatomic, strong) UIColor               *indicatorColor;        // 三角指示器颜色
@property (nonatomic, strong) UIColor               *textColor;             // 文字title颜色
@property (nonatomic, strong) UIColor               *textSelectedColor;     // 文字title选中颜色
@property (nonatomic, strong) UIColor               *detailTextColor;       // detailText文字颜色
@property (nonatomic, strong) UIFont                *detailTextFont;        // font
@property (nonatomic, strong) UIColor               *separatorColor;        // 分割线颜色
@property (nonatomic, assign) NSInteger             fontSize;               // 字体大小
@property (nonatomic, assign) CGFloat               separatorHeighPercent;  // 分割线高度占比，默认 50%，值范围为 0-1 (在设置dataSource之前调用才会生效)

// add by xiyang
@property (nonatomic, copy) void(^finishedBlock)(YYIndexPath *indexPath);  //回收回调

// 当有二级列表item时，点击row 是否调用点击代理方法
@property (nonatomic, assign) BOOL isClickHaveItemValid;

@property (nonatomic, getter=isRemainMenuTitle) BOOL    remainMenuTitle;        // 切换条件时是否更改menu title
@property (nonatomic, strong) NSMutableArray            *currentSelectRowArray; // 恢复默认选项用
@property (nonatomic, strong) NSArray<NSString *>       *indicatorImageNames;   // 自定义指示器图片(在设置dataSource之前调用才会生效)
@property (nonatomic, strong) NSArray<NSNumber *>       *indicatorAnimates;     // 指示器图片是否可以transform(在设置dataSource之前调用才会生效)
@property (nonatomic, assign) YYIndicatorAlignType     indicatorAlignType;
@property (nonatomic, assign) BOOL                      showBottomImage;        // table底部的图是否展示 default YES
/**
 *  the width of menu will be set to screen width defaultly
 *
 *  @param origin the origin of this view's frame
 *  @param height menu's height
 *
 *  @return menu
 */
- (instancetype)initWithOrigin:(CGPoint)origin andHeight:(CGFloat)height;

- (instancetype)initWithOrigin:(CGPoint)origin width:(CGFloat)width andHeight:(CGFloat)height;

// 获取title
- (NSString *)titleForRowAtIndexPath:(YYIndexPath *)indexPath;

// 重新加载数据
- (void)reloadData;

// 收回菜单
- (void)hideMenu;

// 创建menu 第一次显示 不会调用点击代理，这个手动调用
- (void)selectDefalutIndexPath;

// 默认trigger delegate
- (void)selectIndexPath:(YYIndexPath *)indexPath;

// 调用代理
- (void)selectIndexPath:(YYIndexPath *)indexPath triggerDelegate:(BOOL)trigger;

@end

