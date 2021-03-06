//
//  SBDate.h
//  SBFundation
//
//  Created by lihao on 16/9/20.
//  Copyright © 2016年 egg swift. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXTERN const NSTimeInterval SBDateMinuteTimeInterval;
FOUNDATION_EXTERN const NSTimeInterval SBDateHourTimeInterval;
FOUNDATION_EXTERN const NSTimeInterval SBDateDayTimeInterval;
FOUNDATION_EXTERN const NSTimeInterval SBDateWeekTimeInterval;
FOUNDATION_EXTERN const NSTimeInterval SBDateYearTimeInterval;
FOUNDATION_EXTERN const NSCalendarUnit SBDateComponents;

NS_ASSUME_NONNULL_BEGIN



@interface NSDate (SBDate_Decomposing) /** Decomposing dates */

@property (readonly) NSInteger nearestHour; //nearestHour
@property (readonly) NSInteger hour; //hour
@property (readonly) NSInteger minute; //minute
@property (readonly) NSInteger seconds; //seconds
@property (readonly) NSInteger day; //day
@property (readonly) NSInteger month; //month
@property (readonly) NSInteger week; //weekOfMonth
@property (readonly) NSInteger weekday; //weekday [1 - Sunday] [2 - Monday] [3 - Tuerday] [4 - Wednesday] [5 - Thursday] [6 - Friday] [7 - Saturday]
@property (readonly) NSInteger nthWeekday; //e.g. 2nd Tuesday of the month == 2
@property (readonly) NSInteger year; //year

@end



@interface NSDate (SBDate_TimeTravel) /** Relative dates from the current date */

+ (NSDate *)dateTomorrow;
+ (NSDate *)dateYesterday;
+ (NSDate *)dateWithDaysFromNow:(NSInteger)days;
+ (NSDate *)dateWithDaysBeforeNow:(NSInteger)days;
+ (NSDate *)dateWithHoursFromNow:(NSInteger)dHours;
+ (NSDate *)dateWithHoursBeforeNow:(NSInteger)dHours;
+ (NSDate *)dateWithMinutesFromNow:(NSInteger)dMinutes;
+ (NSDate *)dateWithMinutesBeforeNow:(NSInteger)dMinutes;
+ (NSDate *)dateWithSecondsFromNow:(NSInteger)dSeconds;
+ (NSDate *)dateWithSecondsBeforeNow:(NSInteger)dSeconds;

- (NSDate *)dateByAddingDays:(NSInteger)dDays;
- (NSDate *)dateBySubtractingDays:(NSInteger)dDays;
- (NSDate *)dateByAddingHours:(NSInteger)dHours;
- (NSDate *)dateBySubtractingHours:(NSInteger)dHours;
- (NSDate *)dateByAddingMinutes:(NSInteger)dMinutes;
- (NSDate *)dateBySubtractingMinutes:(NSInteger)dMinutes;
- (NSDate *)dateAtStartOfDay;

- (NSInteger)minutesAfterDate:(NSDate *)aDate;
- (NSInteger)minutesBeforeDate:(NSDate *)aDate;
- (NSInteger)hoursAfterDate:(NSDate *)aDate;
- (NSInteger)hoursBeforeDate:(NSDate *)aDate;
- (NSInteger)daysAfterDate:(NSDate *)aDate;
- (NSInteger)daysBeforeDate:(NSDate *)aDate;
- (NSInteger)distanceInDaysToDate:(NSDate *)anotherDate;

@end


@interface NSDate (SBDate_Compare)

/**
 判断某个时间和指定的时间是否为同一天
 
 @param aDate 某个时间
 
 @return BOOL
 */
- (BOOL)isEqualToDateIgnoringTime:(NSDate *)aDate;

/**
 和 -(BOOL)isEqualToDateIgnoringTime:(NSDate *)aDate; 一样
 
 @param aDate 某个时间
 
 @return BOOL
 */
- (BOOL)isSameDayAsDate:(NSDate *)aDate;

/**
 是否为今天
 
 @return BOOL
 */
- (BOOL)isToday;

/**
 是否为明天
 
 @return BOOL
 */
- (BOOL)isTomorrow;

/**
 是否为昨天
 
 @return BOOL
 */
- (BOOL)isYesterday;

/**
 是否为后天
 
 @return BOOL
 */
- (BOOL)isDayAfterTomorrow;

/**
 是否和指定时间同在一周
 
 @param aDate 指定时间
 
 @return BOOL
 */
- (BOOL)isSameWeekAsDate:(NSDate *)aDate;

/**
 是否在本周
 
 @return BOOL
 */
- (BOOL)isThisWeek;

/**
 是否在下周
 
 @return BOOL
 */
- (BOOL)isNextWeek;

/**
 是否为上周
 
 @return BOOL
 */
- (BOOL)isLastWeek;

/**
 是否同月
 
 @return BOOL
 */
- (BOOL)isSameMonthAsDate:(NSDate *)aDate;

/**
 是否为本月
 
 @return BOOL
 */
- (BOOL)isThisMonth;

/**
 是否为同年
 
 @return BOOL
 */
- (BOOL)isSameYearAsDate:(NSDate *)aDate;

/**
 是否为本年
 
 @return BOOL
 */
- (BOOL)isThisYear;

/**
 是否为明年
 
 @return BOOL
 */
- (BOOL)isNextYear;

/**
 是否为去年
 
 @return BOOL
 */
- (BOOL)isLastYear;

/**
 是否早于某个时间
 
 @return BOOL
 */
- (BOOL)isEarlierThanDate:(NSDate *)aDate;

/**
 是否晚于某个时间
 
 @return BOOL
 */
- (BOOL)isLaterThanDate:(NSDate *)aDate;

/**
 是否为将来时间
 
 @return BOOL
 */
- (BOOL)isInFuture;

/**
 是否为过去时间
 
 @return BOOL
 */
- (BOOL)isInPast;

/**
 是否是闰年

 @return BOOL
 */
- (BOOL)isLeapYear;

/**
 是否在aDate和bDate之间
 
 @param aDate aDate
 @param bDate bDate
 
 @return BOOL
 */
- (BOOL)isBetween:(NSDate *)aDate and:(NSDate *)bDate;

/**
 指定天的第二天或以后某天，返回YES. e.g. Specifies the next day or the day after , returns YES
 
 @param aDate aDate
 
 @return BOOL
 */
- (BOOL)isLaterNewDayThanDate:(NSDate *)aDate;

/**
 是否为工作日
 
 @return BOOL
 */
- (BOOL)isTypicallyWorkday;

/**
 是否为周末
 
 @return BOOL
 */
- (BOOL)isTypicallyWeekend;

@end



/*
 SBDate为使用者提供几种时间描述格式字符串，你可以在`- (NSString *)descriptionByFormat:(NSString *)format` 和 `- (NSDate *)dateFromFormat:(NSString *)format` 等情况下使用它。
 */
FOUNDATION_EXTERN NSString * const SBDateFormatYear; //2000
FOUNDATION_EXTERN NSString * const SBDateFormatMounthDay; //01-01
FOUNDATION_EXTERN NSString * const SBDateFormatHourMinute; //00:00
FOUNDATION_EXTERN NSString * const SBDateFormatYearMonthDay; //2000-01-01
FOUNDATION_EXTERN NSString * const SBDateFormatYearMonthDayHourMinuteSecond; //2000-01-01 00:00:00
FOUNDATION_EXTERN NSString * const SBDateFormatYearMonthDayHourMinuteSecondMillisecond; //2000-01-01 00:00:00 000

@interface NSDate (SBDate_Description)

/**
 根据自定义dateformatter转义时间，dateformatter会自动缓存([formate : MSDateFormatter])提高效率。
 当前dateformatter默认为中国大陆时区，暂时还不支持其它地区。
 
 @param format 自定义dateformatter字符串，SBDateFormatYear或者SBDateFormatMounthDay etc.
 
 @return 转义后的时间字符串，可空。
 */
- (NSString *)descriptionByFormat:(NSString *)format;

/**
 自定义转义方法 刚刚 | 1分钟前 | 1小时前 | 1天前 | 2000-01-01 | 未知
 
 @return 转义后的时间字符串
 */
- (NSString *)descriptionByTimeIntervalSinceNow;

/**
 自定义转义方法 今天 | 昨天 | 2000-01-01
 
 @return 转义后的时间字符串
 */
- (NSString *)descriptionByDateIntervalSinceNow;

/**
 自定义转义方法 今天 | 明天 | 2000-01-01
 
 @return 转义后的时间字符串
 */
- (NSString *)descriptionByDateTravelSinceNow;

@end



@interface NSDateFormatter (SBDate_Initilize)

+ (instancetype)dateFormatter;
+ (instancetype)defaultDateFormatter;
+ (instancetype)dateFormatterWithFormat:(NSString *)dateFormat;
+ (instancetype)dateFormatterWithFormat:(NSString *)dateFormat timeZone:(NSTimeZone *)timeZone;
+ (instancetype)dateFormatterWithFormat:(NSString *)format
                               timeZone:(NSTimeZone *)timeZone
                                 locale:(NSLocale *)locale;
+ (instancetype)dateFormatterWithDateStyle:(NSDateFormatterStyle)style;
+ (instancetype)dateFormatterWithDateStyle:(NSDateFormatterStyle)style
                                  timeZone:(NSTimeZone *)timeZone;
+ (instancetype)dateFormatterWithTimeStyle:(NSDateFormatterStyle)style;
+ (instancetype)dateFormatterWithTimeStyle:(NSDateFormatterStyle)style
                                  timeZone:(NSTimeZone *)timeZone;

@end



@interface NSString (SBDate_Description)

/**
 根据自定义dateformatter转义时间字符串，dateformatter会自动缓存([formate : MSDateFormatter])提高效率。
 当前dateformatter默认为中国大陆时区，暂时还不支持其它地区。
 
 @param format 自定义dateformatter字符串，SBDateFormatYear或者SBDateFormatMounthDay etc.
 
 @return 转义后的NSDate对象，可空。
 */
- (NSDate *)dateFromFormat:(NSString *)format; //Date and auto cache dateformatter by [formate:MSDateFormatter]

@end

NS_ASSUME_NONNULL_END
