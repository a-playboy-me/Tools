//
//  NSString+UTI.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSString (UTI)
#pragma mark - UTI(统一类型标识)
// 同一类型标识符(Uniform Type Identifier,UTI)代表IOS信息共享的中心组件。
// 可以把它看成下一代的MIME类型


/**
 判断文件名是否是图片格式
 
 @return YES or NO
 */
- (BOOL)isImageFile;


/**
 判断文件是否是视频文件格式
 
 @return YES or NO
 */
- (BOOL)isVideoFile;


/**
 根据文件名获取文件的MIME类型
 
 @return MIME类型
 */
- (NSString * _Nullable)fileMIMEType;


/**
 根据文件名获取文件的UTI类型
 
 @return UTI类型
 */
- (NSString * _Nullable)fileUTI;
@end
NS_ASSUME_NONNULL_END
