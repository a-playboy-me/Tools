//
//  YYExpandableTableView.h
//  Tools
//
//  Created by Felix on 2018/1/12.
//  Copyright © 2018年 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>

@class YYExpandableTableView;

typedef enum {
    UIExpansionStyleCollapsed = 0,  // 折叠
    UIExpansionStyleExpanded        // 展开
} UIExpansionStyle;

@protocol UIExpandingTableViewCell <NSObject>

@property (nonatomic, assign, getter = isLoading) BOOL loading;

@property (nonatomic, readonly) UIExpansionStyle expansionStyle;
- (void)setExpansionStyle:(UIExpansionStyle)style animated:(BOOL)animated;

@end



@protocol YYExpandableTableViewDatasource <UITableViewDataSource>

@required
- (BOOL)tableView:(YYExpandableTableView *)tableView canExpandSection:(NSInteger)section;
- (BOOL)tableView:(YYExpandableTableView *)tableView needsToDownloadDataForExpandableSection:(NSInteger)section;
- (UITableViewCell<UIExpandingTableViewCell> *)tableView:(YYExpandableTableView *)tableView expandingCellForSection:(NSInteger)section;

@end



@protocol YYExpandableTableViewDelegate <UITableViewDelegate>

@required
- (void)tableView:(YYExpandableTableView *)tableView downloadDataForExpandableSection:(NSInteger)section;

@optional
- (void)tableView:(YYExpandableTableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPathWhileAnimatingSection:(NSIndexPath *)indexPath;

- (void)tableView:(YYExpandableTableView *)tableView willExpandSection:(NSUInteger)section animated:(BOOL)animated;
- (void)tableView:(YYExpandableTableView *)tableView didExpandSection:(NSUInteger)section animated:(BOOL)animated;

- (void)tableView:(YYExpandableTableView *)tableView willCollapseSection:(NSUInteger)section animated:(BOOL)animated;
- (void)tableView:(YYExpandableTableView *)tableView didCollapseSection:(NSUInteger)section animated:(BOOL)animated;

@end



@interface YYExpandableTableView : UITableView <UITableViewDelegate, UITableViewDataSource> {
@private
    id<UITableViewDelegate, YYExpandableTableViewDelegate> __weak _myDelegate;
    id<UITableViewDataSource, YYExpandableTableViewDatasource> __weak _myDataSource;
    
    NSMutableDictionary *_expandableSectionsDictionary;     // will store BOOLs for each section that is expandable
    NSMutableDictionary *_showingSectionsDictionary;        // will store BOOLs for the sections state (nil: not expanded, 1: expanded)
    NSMutableDictionary *_downloadingSectionsDictionary;    // will store BOOLs for the sections state (nil: not downloading, YES: downloading)
    NSMutableDictionary *_animatingSectionsDictionary;
    
    NSInteger _maximumRowCountToStillUseAnimationWhileExpanding;
    
    BOOL _onlyDisplayHeaderAndFooterViewIfTableViewIsNotEmpty;
    UIView *_storedTableHeaderView;
    UIView *_storedTableFooterView;
}

@property (nonatomic, weak) id<YYExpandableTableViewDelegate> delegate;

// discussion
// you wont receive any callbacks for row 0 in an expandable section anymore
@property (nonatomic, weak) id<YYExpandableTableViewDatasource> dataSource;

// discussion
// never use tableView.delegate/ tableView.dataSource as a getter. setDataSource will set _myDataSource, etc. so use these getters instead
@property (nonatomic, readonly, weak) id<YYExpandableTableViewDelegate> myDelegate;
@property (nonatomic, readonly, weak) id<YYExpandableTableViewDatasource> myDataSource;

@property (nonatomic, assign) NSInteger maximumRowCountToStillUseAnimationWhileExpanding;

@property (nonatomic, assign) BOOL onlyDisplayHeaderAndFooterViewIfTableViewIsNotEmpty;

@property (nonatomic, assign) UITableViewRowAnimation reloadAnimation;

// call tableView:needsToDownloadDataForExpandableSection: to make sure we can expand the section, otherwise through exception
- (void)expandSection:(NSInteger)section animated:(BOOL)animated;
- (void)collapseSection:(NSInteger)section animated:(BOOL)animated;
- (void)cancelDownloadInSection:(NSInteger)section;
- (void)reloadDataAndResetExpansionStates:(BOOL)resetFlag;

- (BOOL)canExpandSection:(NSUInteger)section;
- (BOOL)isSectionExpanded:(NSInteger)section;

@end
