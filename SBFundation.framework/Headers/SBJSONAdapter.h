//
//  SBJSONAdapter.h
//  SBFundation
//
//  Created by lihao on 16/9/20.
//  Copyright © 2016年 egg swift. All rights reserved.
//  提供一些json解析以及转换的通用方法
// 

#import <Foundation/Foundation.h>

#pragma mark - Deserializing methods

@interface NSData (SBJSONAdapter)

- (id)sb_objectFromJSONData;
- (id)sb_objectFromJSONDataWithParseOptions:(NSJSONReadingOptions)opt error:(NSError **)error;
@end



@interface NSString (SBJSONAdapter)
- (id)sb_objectFromJSONString;
- (id)sb_objectFromJSONStringWithParseOptions:(NSJSONReadingOptions)opt error:(NSError **)error;
@end



#pragma mark - Serializing methods

@interface NSObject (SBJSONAdapter)

- (NSString *)sb_JSONString;
- (NSString *)sb_JSONStringFilteringSlashEscape;//过滤掉“\/”这种转义
- (NSData *)sb_JSONData;

@end
