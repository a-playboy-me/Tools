//
//  NSString+Hash.h
//  Tools
//
//  Created by Felix on 2017/11/10.
//  Copyright © 2017年 Felix. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Hash)

@property (readonly) NSString *MD5;
@property (readonly) NSString *SHA1;
@property (readonly) NSString *SHA256;
@property (readonly) NSString *SHA512;

- (NSString *)hashHmacSHA1WithKey:(NSString *)key;
- (NSString *)hashHmacSHA256WithKey:(NSString *)key;
- (NSString *)hashHmacSHA512WithKey:(NSString *)key;

@end
