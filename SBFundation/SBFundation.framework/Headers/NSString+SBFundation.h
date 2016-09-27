//
//  NSString+OKCategory
//  SBFundation
//
//  Created by lihao on 16/9/20.
//  Copyright © 2016年 egg swift. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (SBFundation)

/**
 是否为空字符串 length = 0
 */
- (BOOL)sb_isEmpty;

/**
 是否为全空格或回车情况，这时sb_isEmpty可能为YES
 */
- (BOOL)sb_isEmptyAfterTrim;

/**
 是否以英文字母开头
 */
- (BOOL)sb_isStartsWithACapitalLetter;

/**
 计算字符个数
 */
- (NSUInteger)sb_countNumberOfWords;

/**
  获取字符串(或汉字)首字母
*/
- (NSString *)sb_firstCharacter;

/**
  反转字符串
*/
- (NSString *)sb_reverseString;

/**
 是否只包含字母
*/
- (BOOL)sb_containsOnlyLetters;

/**
 是否只包含数字
*/
- (BOOL)sb_containsOnlyNumbers;

/**
 是否只包含字母和数字
*/
- (BOOL)sb_containsOnlyNumbersAndLetters;

/**
 计算字符串需要占屏幕大小
 */
- (CGSize)sb_sizeWithFont:(UIFont *)font;

/**
 计算字符串需要占屏幕大小
 */
- (CGSize)sb_sizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size;

/**
 计算字符串需要占屏幕大小
 */
- (CGSize)sb_sizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode;

@end




#pragma mark - NSString+SBFundation_Trims

@interface NSString (SBFundation_Trims)

/**
   去除字符串空格
 */
- (NSString *)sb_trimmingWhitespace;

/**
   去除字符串空格与空行
 */
- (NSString *)sb_trimmingWhitespaceAndNewlines;

/**
   清除html标签
 
   @return 清除后的结果
 */
- (NSString *)sb_stringByStrippingHTML;

/**
   清除js脚本
 
   @return 清楚js后的结果
*/
- (NSString *)sb_stringByRemovingScriptsAndStrippingHTML;

@end




#pragma mark - NSString+SBFundation_Base64

@interface NSString (OKCategory_Base64)

/**
 
*/
- (NSString *)sb_URLEncode;

/**
 
*/
- (NSString *)sb_URLEncodeUsingEncoding:(NSStringEncoding)encoding;

/**
 
*/
- (NSString *)sb_URLDecode;

/**
 
*/
- (NSString *)sb_URLDecodeUsingEncoding:(NSStringEncoding)encoding;

// 以下函数需要导入SBFoundation中的"NSData+SBFundation.h" 如果当前工程中找不到"NSData+SBFundation.h"则不能正常使用以下函数
#if __has_include("NSData+SBFundation.h") || \
    __has_include(<SBFundation/NSData+SBFundation.h>)
/**
 
 */
+ (NSString *)sb_stringWithBase64EncodedString:(NSString *)string;

/**
 
*/
- (NSString *)sb_base64EncodedStringWithWrapWidth:(NSUInteger)wrapWidth;

/**
 
*/
- (NSString *)sb_base64EncodedString;

/**
 
*/
- (NSString *)sb_base64DecodedString;

/**
 
*/
- (NSData *)sb_base64DecodedData;

/**
 
 */
- (NSString *)sb_MD5;

#endif /* #if __has_include("NSData+SBFundation.h") */

@end




#pragma mark - NSString+SBFundation_SBValidations

@interface NSString (SBValidations)

/**
  判断是否为中文字符串
*/
- (BOOL)sb_isValidChinese;

/**
  是否是有效的Email地址
*/
- (BOOL)sb_isValidEmail;

/**
  是否是有效的IP地址
*/
- (BOOL)sb_isValidIPAddress;

/**
  是否是有效的URL地址
*/
- (BOOL)sb_isValidURL;

/**
  是否是有效的小灵通号码
*/
- (BOOL)sb_isValidPHSNumber;
/**
  是否是有效的移动手机号
*/
- (BOOL)sb_isValidMobileNumber;
/**
  是否是有效的联通手机号
*/
- (BOOL)sb_isValidUnicomNumber;
/**
  是否是有效的电信手机号
*/
- (BOOL)sb_isValidTelecomNumber;
/**
  是否是有效的手机号码
*/
- (BOOL)sb_isValidPhoneNumber;
/**
  是否是有效的固话号码
*/
- (BOOL)sb_isValidTelphoneNumber;

/**
  是否是有效的车牌号
*/
- (BOOL)sb_isValidCarNumber;

/**
  简单方式验证身份证
*/
- (BOOL)sb_isValidIDCardNumberBySimple;
/**
  严格验证身份证号 会根据每位的数进行运算
*/
- (BOOL)sb_isValidIDCardNumber;

/**
  是否是有效的MAC地址
*/
- (BOOL)sb_isValidMacAddress;

/**
 是否是有效的邮编
*/
- (BOOL)sb_isValidPostalcode;

/**
  是否是有效的工商税号
*/
- (BOOL)sb_isValidTaxNumber;

/**
  是否是有效的密码[验证是否是6-32位]
*/
- (BOOL)sb_isValidPassword;

@end



#pragma mark - NSString+SBFundation_Language

@interface NSString (SBFundation_Language)

/**
 *  @brief  判断URL中是否包含中文
 *
 *  @return 是否包含中文
 */
- (BOOL)sb_isContainChinese;

- (NSString*)sb_pinyinWithPhoneticSymbol;
- (NSString*)sb_pinyin;
- (NSArray*)sb_pinyinArray;
- (NSString*)sb_pinyinWithoutBlank;
- (NSArray*)sb_pinyinInitialsArray;
- (NSString*)sb_pinyinInitialsString;

@end




#pragma mark - NSString+SBFundation_MIME

@interface NSString (SBFundation_MIME)

/**
 *  根据文件url 返回对应的MIMEType
 *
 *  @return MIMEType
 */
- (NSString *)sb_MIMEType;

/**
 *  根据文件url后缀 返回对应的MIMEType
 *
 *  @return MIMEType
 */
+ (NSString *)sb_MIMETypeForExtension:(NSString *)extension;

/**
 *  常见MIME集合
 *
 *  @return 常见MIME集合
 */
+ (NSDictionary *)sb_MIMEDict;

@end

NS_ASSUME_NONNULL_END
