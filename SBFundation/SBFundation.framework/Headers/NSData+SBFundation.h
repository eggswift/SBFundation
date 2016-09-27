//
//  NSData+OKCategory
//  SBFundation
//
//  Created by lihao on 16/9/20.
//  Copyright © 2016年 egg swift. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (SBFundation)

/**
 *  @brief 将APNS NSData类型token 格式化成字符串
 *
 *  @return 整理过后的字符串token
 */
- (NSString *)sb_APNSToken;

/**
 *  @brief  NSData 转成UTF8 字符串
 *
 *  @return 转成UTF8 字符串
 */
- (nullable NSString *)sb_UTF8String;

/**
 *  @brief 转换成16进制字符串
 *
 *  @return 转换后的字符串
 */
- (NSString *)sb_hexadecimalString;

@end




#pragma mark - 加密 解密

@interface NSData (SBFundation_Encrypt)

#pragma mark MD2 MD4 MD5加密

- (NSString *)sb_MD2Encryption; // MD2加密
- (NSString *)sb_MD4Encryption; // MD4加密
- (NSString *)sb_MD5Encryption; // MD5加密

- (NSData *)sb_MD2DataEncryption; // MD2加密
- (NSData *)sb_MD4DataEncryption; // MD4加密
- (NSData *)sb_MD5DataEncryption; // MD5加密

#pragma mark SHA1 SHA224 SHA256 SHA384 SHA512加密

- (NSString *)sb_SHA1Encryption;   // SHA1加密
- (NSString *)sb_SHA224Encryption; // SHA224加密
- (NSString *)sb_SHA256Encryption; // SHA256加密
- (NSString *)sb_SHA384Encryption; // SHA384加密
- (NSString *)sb_SHA512Encryption; // SHA512加密

- (NSData *)sb_SHA1DataEncryption;   // SHA1加密
- (NSData *)sb_SHA224DataEncryption; // SHA224加密
- (NSData *)sb_SHA256DataEncryption; // SHA256加密
- (NSData *)sb_SHA384DataEncryption; // SHA384加密
- (NSData *)sb_SHA512DataEncryption; // SHA512加密

/**
 *  @brief 利用AES加密数据
 *
 *  @param key key
 *  @param iv  iv
 *
 *  @return 加密后数据
 */
- (nullable NSData *)sb_encryptedWithAESUsingKey:(NSString *)key andIV:(NSData *)iv;

/**
 *  @brief 利用AES解密数据
 *
 *  @param key key
 *  @param iv  iv
 *
 *  @return 解密后数据
 */
- (nullable NSData *)sb_decryptedWithAESUsingKey:(NSString *)key andIV:(NSData *)iv;

/**
 *  @brief 利用3DES加密数据
 *
 *  @param key key
 *  @param iv  iv
 *
 *  @return 加密后数据
 */
- (nullable NSData *)sb_encryptedWith3DESUsingKey:(NSString *)key andIV:(NSData *)iv;

/**
 *  @brief 利用3DES解密数据
 *
 *  @param key key
 *  @param iv  iv
 *
 *  @return 解密后数据
 */
- (nullable NSData *)sb_decryptedWith3DESUsingKey:(NSString *)key andIV:(NSData *)iv;

@end




#pragma mark - BASE64编码

@interface NSData (SBFundation_Base64)

/**
 NSData转NSString BASE64编码
 */
- (NSString *)sb_base64EncodedString;

/**
 BASE64反编码
 */
+ (nullable NSString *)sb_Base64DecodedString:(NSString *)base64String;

/**
 BASE64编码
 */
- (NSData *)sb_base64Encoded;
- (nullable NSData *)sb_Base64Decoded;

/**
 字符串base64后转data
 
 @param  string 传入字符串
 
 @return 传入字符串 base64后的data
 */
+ (nullable NSData *)sb_dataWithBase64EncodedString:(NSString *)string;

/**
 NSData转string
 
 @param  wrapWidth 换行长度
 
 @return base64后的字符串
 */
- (nullable NSString *)sb_base64EncodedStringWithWrapWidth:(NSUInteger)wrapWidth;

@end

NS_ASSUME_NONNULL_END
