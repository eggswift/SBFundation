//
//  NSNumber+SBFundation.h
//  SBFundation
//
//  Created by lihao on 2016/9/28.
//  Copyright © 2016年 egg swift. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNumber (SBFundation)

/**
 转罗马数字

 @return NSString
 */
- (NSString *)romanDescription;

/**
 四舍五入
 
 @param digit 限制最大位数
 
 @return NSNumber
 */
- (NSNumber *)roundNumberWithDigit:(NSUInteger)digit;

/**
 取上整

 @param digit 限制最大位数

 @return NSNumber
 */
- (NSNumber *)ceilNumberWithDigit:(NSUInteger)digit;

/**
 取下整
 
 @param digit 限制最大位数
 
 @return NSNumber
 */
- (NSNumber *)floorNumberWithDigit:(NSUInteger)digit;

@end
