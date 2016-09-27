//
//  SBSafety.h
//  SBFundation
//
//  Created by lihao on 16/9/20.
//  Copyright © 2016年 egg swift. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark - NSArray

/**
 校验是否为数组，允许数组为空
 */
FOUNDATION_EXTERN BOOL __isEmptyableNSArray(_Nullable id array);

/**
 校验是否为数组且非空
 */
FOUNDATION_EXTERN BOOL __isNonemptyNSArray(_Nullable id array);

/**
 返回安全的数组对象
 */
FOUNDATION_EXTERN  NSArray* _Nonnull __availableNSArray(_Nullable id array);

/**
 返回安全的对象 实现方法等同于 safety_objectAtIndex:
 */
FOUNDATION_EXTERN _Nullable id __availableNSArrayObject(_Nullable id array, NSUInteger idx);

@interface NSArray (SBSafety)

/**
 返回安全的对象，若想处理非Array调用该方法导致Crash,可以使用 __availableNSArrayObject()
 */
- (_Nullable id)safety_objectAtIndex:(NSInteger)index;

/**
 返回安全的NSString
 */
- (NSString * _Nullable)safety_stringAtIndex:(NSUInteger)index;

/**
 返回安全的NSNumber
 */
- (NSNumber * _Nullable)safety_numberAtIndex:(NSUInteger)index;

/**
 返回安全的NSDecimalNumber
 */
- (NSDecimalNumber * _Nullable)safety_decimalNumberAtIndex:(NSUInteger)index;

/**
 返回安全的NSArray
 */
- (NSArray * _Nullable)safety_arrayAtIndex:(NSUInteger)index;

/**
 返回安全的NSDictionary
 */
- (NSDictionary * _Nullable)safety_dictionaryAtIndex:(NSUInteger)index;

/**
 返回安全的NSInteger
 */
- (NSInteger)safety_integerAtIndex:(NSUInteger)index;

/**
 返回安全的NSUInteger
 */
- (NSUInteger)safety_unsignedIntegerAtIndex:(NSUInteger)index;

/**
 返回安全的BOOL
 */
- (BOOL)safety_boolAtIndex:(NSUInteger)index;

/**
 返回安全的int16_t
 */
- (int16_t)safety_int16AtIndex:(NSUInteger)index;

/**
 返回安全的int32_t
 */
- (int32_t)safety_int32AtIndex:(NSUInteger)index;

/**
 返回安全的int64_t
 */
- (int64_t)safety_int64AtIndex:(NSUInteger)index;

/**
 返回安全的char
 */
- (char)safety_charAtIndex:(NSUInteger)index;

/**
 返回安全的short
 */
- (short)safety_shortAtIndex:(NSUInteger)index;

/**
 返回安全的float
 */
- (float)safety_floatAtIndex:(NSUInteger)index;

/**
 返回安全的Double
 */
- (double)safety_doubleAtIndex:(NSUInteger)index;

/**
 返回安全的CGFloat
 */
- (CGFloat)safety_CGFloatAtIndex:(NSUInteger)index;

/**
 返回安全的CGPoint
 */
- (CGPoint)safety_pointAtIndex:(NSUInteger)index;

/**
 返回安全的CGSize
 */
- (CGSize)safety_sizeAtIndex:(NSUInteger)index;

/**
 返回安全的CGRect
 */
- (CGRect)safety_rectAtIndex:(NSUInteger)index;

/**
 返回安全的NSDate对象
 */
- (NSDate * _Nullable)safety_dateAtIndex:(NSUInteger)index dateFormat:(NSString * _Nonnull)dateFormat;

/**
 返回数组中第一个元素 如果数组为空 则返回nil
 */
- (_Nullable id)safety_firstObject;

/**
 返回数组中最后一个元素 如果数组为空 则返回nil
 */
- (_Nullable id)safety_lastObject;

/**
 随机取出一个元素 如果数组为空, return nil
 */
- (_Nullable id)safety_randomObject;

/**
 返回安全子字符串 若location不合法，直接返回空数组 若length不合法呢，返回合法的部分数组
 */
- (NSArray * _Nullable)safety_subarrayWithRange:(NSRange)range;

/**
 截取数据至index
 */
- (NSArray * _Nonnull)safety_subarrayToIndex:(NSInteger)idx;

/**
 截取数据从index
 */
- (NSArray * _Nonnull)safety_subarrayFromIndex:(NSInteger)idx;

/**
 获取数组前count个元素，如果不够则全部取出
 */
- (NSArray * _Nonnull)safety_subarrayLeadingCount:(NSInteger)count;

/**
 获取数组后count个元素，如果不够则全部取出
 */
- (NSArray * _Nonnull)safety_subarrayTailingCount:(NSInteger)count;

/**
 比较两个数组包含的元素是否一样(不按照顺序)
 */
- (BOOL)safety_compareIgnoreObjectOrderWithArray:(NSArray * _Nullable)array;

/**
 获取与otherArray交集的元素
 */
- (NSArray * _Nonnull)safety_arrayForIntersectionWithOtherArray:(NSArray * _Nullable)otherArray;

/**
 获取与otherArray差集的元素
 */
- (NSArray * _Nonnull)safety_arrayForMinusWithOtherArray:(NSArray * _Nullable)otherArray;

@end


#pragma mark - NSMutableArray

@interface NSMutableArray (SBSafety)

/**
 添加CGPoint
 */
- (void)safety_addPoint:(CGPoint)point;

/**
 添加CGSize
 */
- (void)safety_addSize:(CGSize)size;

/**
 添加CGRect
 */
- (void)safety_addRect:(CGRect)rect;

/**
 对数组乱序
 */
- (void)safety_shuffle;

/**
 反转数组
 */
- (void)safety_reverse;

/**
 往数组头部插入一个元素
 */
- (void)safety_insertObject:(_Nullable id)anObject;

/**
 往数组头部插入一个数组
 */
- (void)safety_insertObjectsFromArray:(NSArray * _Nullable)anArray;

/**
 插入一个元素到数组尾部
 */
- (void)safety_appendObject:(_Nullable id)anObject;

/**
 插入一个数组到数组尾部
 */
- (void)safety_appendObjectsFromArray:(NSArray * _Nullable)anArray;

/**
 删除数组的第一个元素
 */
- (void)safety_pop;

/**
 删除数组的前N个元素
 */
- (void)safety_popWithCount:(NSInteger)count;

/**
 删除数组中头部元素至数组还剩下N个元素
 */
- (void)safety_popToCount:(NSInteger)count;

/**
 从数组尾部删除一个元素
 */
- (void)safety_trim;

/**
 从数组尾部删除N个元素
 */
- (void)safety_trimWithCount:(NSInteger)count;

/**
 删除数组中尾部元素至数组还剩下N个元素
 */
- (void)safety_trimToCount:(NSInteger)count;

/**
 插入数据到index
 */
- (void)safety_insertObject:(_Nullable id)anObject atIndex:(NSInteger)index;

/**
 添加数据
 */
- (void)safety_addObject:(_Nullable id)anObject;

/**
 删除指定数据
 */
- (void)safety_removeObject:(_Nullable id)anObject;

/**
 删除指定index数据
 */
- (void)safety_removeObjectAtIndex:(NSInteger)index;

@end


#pragma mark - NSDictionary

/**
 校验是否为字典
 */
FOUNDATION_EXTERN BOOL __isEmptyableNSDictionary(_Nullable id dictionary);

/**
 校验是否为字典且非空
 */
FOUNDATION_EXTERN BOOL __isNonemptyNSDictionary(_Nullable id dictionary);

/**
 返回安全的字典对象
 */
FOUNDATION_EXTERN NSDictionary * _Nonnull  __availableNSDictionary(_Nullable id dictionary);

/**
 返回安全的对象 Equal to '- safety_objectForKey:';
*/
FOUNDATION_EXTERN id _Nullable __availableNSDictionaryObject(_Nullable id dictionary, NSString * _Nonnull key);


@interface NSDictionary (SBSafety)

/**
 返回安全的对象,若想处理非Dictionary调用该方法导致Crash,可以使用availableNSDictionaryObject()
 */
- (_Nullable id)safety_objectForKey:(NSString * _Nonnull)akey;

- (BOOL)safety_containObjectForKey:(NSString * _Nonnull)key;

- (NSString * _Nullable)safety_stringForKey:(NSString * _Nonnull)key;

- (NSNumber * _Nullable)safety_numberForKey:(NSString * _Nonnull)key;

- (NSDecimalNumber * _Nullable)safety_decimalNumberForKey:(NSString * _Nonnull)key;

- (NSArray * _Nullable)safety_arrayForKey:(NSString * _Nonnull)key;

- (NSDictionary * _Nullable)safety_dictionaryForKey:(NSString * _Nonnull)key;

- (NSInteger)safety_integerForKey:(NSString * _Nonnull)key;

- (NSUInteger)safety_unsignedIntegerForKey:(NSString * _Nonnull)key;

- (BOOL)safety_boolForKey:(NSString * _Nonnull)key;

- (int16_t)safety_int16ForKey:(NSString * _Nonnull)key;

- (int32_t)safety_int32ForKey:(NSString * _Nonnull)key;

- (int64_t)safety_int64ForKey:(NSString * _Nonnull)key;

- (char)safety_charForKey:(NSString * _Nonnull)key;

- (short)safety_shortForKey:(NSString * _Nonnull)key;

- (float)safety_floatForKey:(NSString * _Nonnull)key;

- (double)safety_doubleForKey:(NSString * _Nonnull)key;

- (long long)safety_longLongForKey:(NSString * _Nonnull)key;

- (unsigned long long)safety_unsignedLongLongForKey:(NSString * _Nonnull)key;

- (NSDate * _Nullable )safety_dateForKey:(NSString * _Nonnull)key dateFormat:(NSString * _Nonnull)dateFormat;

- (CGFloat)safety_CGFloatForKey:(NSString * _Nonnull)key;

- (CGPoint)safety_pointForKey:(NSString * _Nonnull)key;

- (CGSize)safety_sizeForKey:(NSString * _Nonnull)key;

- (CGRect)safety_rectForKey:(NSString * _Nonnull)key;

@end

@interface NSDictionary (SBXMLAdapter)

- (NSString * _Nonnull)XMLString;

@end

@interface NSDictionary (SBJSONAdapter)

- (NSString * _Nonnull)JSONString;

@end

@interface NSDictionary (SBURLAdapter)

- (NSDictionary * _Nonnull)dictionaryWithURLQuery:(NSString * _Nonnull)query;

- (NSString * _Nonnull)URLQueryString;

@end



#pragma mark - NSMutableDictionary

@interface NSMutableDictionary (SBSafety)

/**
 添加CGPoint
 */
- (void)safety_setPoint:(CGPoint)point forKey:(NSString * _Nullable)key;

/**
 添加CGSize
 */
- (void)safety_setSize:(CGSize)size forKey:(NSString * _Nullable)key;

/**
 添加CGRect
 */
- (void)safety_setRect:(CGRect)rect forKey:(NSString * _Nullable)key;

/**
 插入数据
 */
- (void)safety_setObject:(_Nullable id)anObject forKey:(NSString * _Nullable)aKey;

/**
 删除数据
 */
- (void)safety_removeObjectForKey:(id _Nullable)aKey;

@end



#pragma mark - NSNumber

/**
 校验是否为NSNumber
 */
FOUNDATION_EXTERN BOOL __isEmptyableNSNumber(_Nullable id number);

/**
 校验是否为NSNumber且为指定value
 */
FOUNDATION_EXTERN BOOL __isNonemptyNSNumber(_Nullable id number, NSInteger value);

/**
 返回安全的NSNumber对象
 */
FOUNDATION_EXTERN NSNumber * _Nonnull __availableNSNumber(_Nullable id number);



#pragma mark - NSString

/**
 校验是否为字符串
 */
FOUNDATION_EXTERN BOOL __isEmptyableNSString(_Nullable id string);

/**
 校验是否为字符串且非空
 */
FOUNDATION_EXTERN BOOL __isNonemptyNSString(_Nullable id string);

/**
 返回安全的字符串对象
 */
FOUNDATION_EXTERN NSString * _Nonnull __availableNSString(_Nullable id string);

@interface NSString (SBSafety)

/**
 获取子字符串
 */
- (NSString * _Nonnull)safety_substringToIndex:(NSUInteger)to;

/**
 获取子字符串
 */
- (NSString * _Nonnull)safety_substringFromIndex:(NSUInteger)from;

/**
 获取子字符串
 */
- (NSString * _Nonnull)safety_substringWithRange:(NSRange)range;

/**
 删除子字符串
 */
- (NSString * _Nonnull)safety_removeSubstring:(NSString * _Nullable)substring;

/**
 是否包含string <兼容iOS7以下>
 */
- (BOOL)safety_containsString:(NSString * _Nullable)string;

@end

