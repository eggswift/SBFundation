//
//  SBFileManager.h
//  SBFundation
//
//  Created by lihao on 16/9/20.
//  Copyright © 2016年 egg swift. All rights reserved.
//

#import <Foundation/Foundation.h>
@class UIImage;
@class UIImageView;

@interface SBFileManager : NSObject

/**
 获取当前路径下文件属性
 */
+ (id)attributeOfItemAtPath:(NSString *)path forKey:(NSString *)key;
/**
 获取当前路径下文件属性
 
 @param key  参数
 @param error 错误
 */
+ (id)attributeOfItemAtPath:(NSString *)path forKey:(NSString *)key error:(NSError **)error;

/**
 获取当前路径下文件属性
 */
+ (NSDictionary *)attributesOfItemAtPath:(NSString *)path;
/**
 获取当前路径下文件属性
 
 @param path  路径
 @param error 错误
 */
+ (NSDictionary *)attributesOfItemAtPath:(NSString *)path error:(NSError **)error;


/**
 复制当前路径下文件到指定路径
 */
+ (BOOL)copyItemAtPath:(NSString *)path toPath:(NSString *)toPath;
/**
 复制当前路径下文件到指定路径
 
 @param path  路径
 @param error 错误
 */
+ (BOOL)copyItemAtPath:(NSString *)path toPath:(NSString *)toPath error:(NSError **)error;

/**
 复制当前路径下文件到指定路径
 
 @param overwrite  是否覆盖
 */
+ (BOOL)copyItemAtPath:(NSString *)path toPath:(NSString *)toPath overwrite:(BOOL)overwrite;
/**
 复制当前路径下文件到指定路径
 
 @param path  路径
 @param overwrite  是否覆盖
 @param error 错误
 */
+ (BOOL)copyItemAtPath:(NSString *)path toPath:(NSString *)toPath overwrite:(BOOL)overwrite error:(NSError **)error;

+ (BOOL)createDirectoriesForFileAtPath:(NSString *)path;
+ (BOOL)createDirectoriesForFileAtPath:(NSString *)path error:(NSError **)error;

+ (BOOL)createDirectoriesForPath:(NSString *)path;
+ (BOOL)createDirectoriesForPath:(NSString *)path error:(NSError **)error;

+ (BOOL)createFileAtPath:(NSString *)path;
+ (BOOL)createFileAtPath:(NSString *)path error:(NSError **)error;

+ (BOOL)createFileAtPath:(NSString *)path overwrite:(BOOL)overwrite;
+ (BOOL)createFileAtPath:(NSString *)path overwrite:(BOOL)overwrite error:(NSError **)error;

+ (BOOL)createFileAtPath:(NSString *)path withContent:(NSObject *)content;
+ (BOOL)createFileAtPath:(NSString *)path withContent:(NSObject *)content error:(NSError **)error;

+ (BOOL)createFileAtPath:(NSString *)path withContent:(NSObject *)content overwrite:(BOOL)overwrite;
+ (BOOL)createFileAtPath:(NSString *)path withContent:(NSObject *)content overwrite:(BOOL)overwrite error:(NSError **)error;

+ (NSDate *)creationDateOfItemAtPath:(NSString *)path;
+ (NSDate *)creationDateOfItemAtPath:(NSString *)path error:(NSError **)error;

+ (NSDate *)modificationDateOfItemAtPath:(NSString *)path;
+ (NSDate *)modificationDateOfItemAtPath:(NSString *)path error:(NSError **)error;

/**
 清空Caches目录
 */
+ (BOOL)emptyCachesDirectory;

/**
 清空Temporary目录
 */
+ (BOOL)emptyTemporaryDirectory;

/**
 当前路径是否存在
 */
+ (BOOL)existsItemAtPath:(NSString *)path;

/**
 当前路径是否为一个文件夹
 */
+ (BOOL)isDirectoryItemAtPath:(NSString *)path;
/**
 当前路径是否为一个文件夹
 
 @param path  路径
 @param error 错误
 */
+ (BOOL)isDirectoryItemAtPath:(NSString *)path error:(NSError **)error;

/**
 当前路径下是否为空
 */
+ (BOOL)isEmptyItemAtPath:(NSString *)path;
/**
 当前路径下是否为空
 
 @param path  路径
 @param error 错误
 */
+ (BOOL)isEmptyItemAtPath:(NSString *)path error:(NSError **)error;

/**
 当前路径是否为一个文件
 */
+ (BOOL)isFileItemAtPath:(NSString *)path;
/**
 当前路径是否为一个文件
 
 @param path  路径
 @param error 错误
 */
+ (BOOL)isFileItemAtPath:(NSString *)path error:(NSError **)error;

/**
 当前路径是否可执行
 */
+ (BOOL)isExecutableItemAtPath:(NSString *)path;

/**
 当前路径是否可读
 */
+ (BOOL)isReadableItemAtPath:(NSString *)path;
/**
 当前路径是否可写
 */
+ (BOOL)isWritableItemAtPath:(NSString *)path;

+ (NSArray *)listDirectoriesInDirectoryAtPath:(NSString *)path;
+ (NSArray *)listDirectoriesInDirectoryAtPath:(NSString *)path deep:(BOOL)deep;

+ (NSArray *)listFilesInDirectoryAtPath:(NSString *)path;
+ (NSArray *)listFilesInDirectoryAtPath:(NSString *)path deep:(BOOL)deep;

+ (NSArray *)listFilesInDirectoryAtPath:(NSString *)path withExtension:(NSString *)extension;
+ (NSArray *)listFilesInDirectoryAtPath:(NSString *)path withExtension:(NSString *)extension deep:(BOOL)deep;

+ (NSArray *)listFilesInDirectoryAtPath:(NSString *)path withPrefix:(NSString *)prefix;
+ (NSArray *)listFilesInDirectoryAtPath:(NSString *)path withPrefix:(NSString *)prefix deep:(BOOL)deep;

+ (NSArray *)listFilesInDirectoryAtPath:(NSString *)path withSuffix:(NSString *)suffix;
+ (NSArray *)listFilesInDirectoryAtPath:(NSString *)path withSuffix:(NSString *)suffix deep:(BOOL)deep;

+ (NSArray *)listItemsInDirectoryAtPath:(NSString *)path deep:(BOOL)deep;

+ (BOOL)moveItemAtPath:(NSString *)path toPath:(NSString *)toPath;
+ (BOOL)moveItemAtPath:(NSString *)path toPath:(NSString *)toPath error:(NSError **)error;

+ (BOOL)moveItemAtPath:(NSString *)path toPath:(NSString *)toPath overwrite:(BOOL)overwrite;
+ (BOOL)moveItemAtPath:(NSString *)path toPath:(NSString *)toPath overwrite:(BOOL)overwrite error:(NSError **)error;

+ (NSString *)pathForApplicationSupportDirectory;
+ (NSString *)pathForApplicationSupportDirectoryWithPath:(NSString *)path;

+ (NSString *)pathForCachesDirectory;
+ (NSString *)pathForCachesDirectoryWithPath:(NSString *)path;

+ (NSString *)pathForDocumentsDirectory;
+ (NSString *)pathForDocumentsDirectoryWithPath:(NSString *)path;

+ (NSString *)pathForLibraryDirectory;
+ (NSString *)pathForLibraryDirectoryWithPath:(NSString *)path;

+ (NSString *)pathForMainBundleDirectory;
+ (NSString *)pathForMainBundleDirectoryWithPath:(NSString *)path;

+ (NSString *)pathForPlistNamed:(NSString *)name;

+ (NSString *)pathForTemporaryDirectory;
+ (NSString *)pathForTemporaryDirectoryWithPath:(NSString *)path;

+ (NSString *)readFileAtPath:(NSString *)path;
+ (NSString *)readFileAtPath:(NSString *)path error:(NSError **)error;

+ (NSArray *)readFileAtPathAsArray:(NSString *)path;

+ (NSObject *)readFileAtPathAsCustomModel:(NSString *)path;

+ (NSData *)readFileAtPathAsData:(NSString *)path;
+ (NSData *)readFileAtPathAsData:(NSString *)path error:(NSError **)error;

+ (NSDictionary *)readFileAtPathAsDictionary:(NSString *)path;

+ (UIImage *)readFileAtPathAsImage:(NSString *)path;
+ (UIImage *)readFileAtPathAsImage:(NSString *)path error:(NSError **)error;

+ (UIImageView *)readFileAtPathAsImageView:(NSString *)path;
+ (UIImageView *)readFileAtPathAsImageView:(NSString *)path error:(NSError **)error;

+ (NSJSONSerialization *)readFileAtPathAsJSON:(NSString *)path;
+ (NSJSONSerialization *)readFileAtPathAsJSON:(NSString *)path error:(NSError **)error;

+ (NSMutableArray *)readFileAtPathAsMutableArray:(NSString *)path;

+ (NSMutableData *)readFileAtPathAsMutableData:(NSString *)path;
+ (NSMutableData *)readFileAtPathAsMutableData:(NSString *)path error:(NSError **)error;

+ (NSMutableDictionary *)readFileAtPathAsMutableDictionary:(NSString *)path;

+ (NSString *)readFileAtPathAsString:(NSString *)path;
+ (NSString *)readFileAtPathAsString:(NSString *)path error:(NSError **)error;

+ (BOOL)removeFilesInDirectoryAtPath:(NSString *)path;
+ (BOOL)removeFilesInDirectoryAtPath:(NSString *)path error:(NSError **)error;

+ (BOOL)removeFilesInDirectoryAtPath:(NSString *)path withExtension:(NSString *)extension;
+ (BOOL)removeFilesInDirectoryAtPath:(NSString *)path withExtension:(NSString *)extension error:(NSError **)error;

+ (BOOL)removeFilesInDirectoryAtPath:(NSString *)path withPrefix:(NSString *)prefix;
+ (BOOL)removeFilesInDirectoryAtPath:(NSString *)path withPrefix:(NSString *)prefix error:(NSError **)error;

+ (BOOL)removeFilesInDirectoryAtPath:(NSString *)path withSuffix:(NSString *)suffix;
+ (BOOL)removeFilesInDirectoryAtPath:(NSString *)path withSuffix:(NSString *)suffix error:(NSError **)error;

+ (BOOL)removeItemsInDirectoryAtPath:(NSString *)path;
+ (BOOL)removeItemsInDirectoryAtPath:(NSString *)path error:(NSError **)error;

+ (BOOL)removeItemAtPath:(NSString *)path;
+ (BOOL)removeItemAtPath:(NSString *)path error:(NSError **)error;

+ (BOOL)renameItemAtPath:(NSString *)path withName:(NSString *)name;
+ (BOOL)renameItemAtPath:(NSString *)path withName:(NSString *)name error:(NSError **)error;

+ (NSString *)sizeFormatted:(NSNumber *)size;

+ (NSString *)sizeFormattedOfDirectoryAtPath:(NSString *)path;
+ (NSString *)sizeFormattedOfDirectoryAtPath:(NSString *)path error:(NSError **)error;

+ (NSString *)sizeFormattedOfFileAtPath:(NSString *)path;
+ (NSString *)sizeFormattedOfFileAtPath:(NSString *)path error:(NSError **)error;

+ (NSString *)sizeFormattedOfItemAtPath:(NSString *)path;
+ (NSString *)sizeFormattedOfItemAtPath:(NSString *)path error:(NSError **)error;

+ (NSNumber *)sizeOfDirectoryAtPath:(NSString *)path;
+ (NSNumber *)sizeOfDirectoryAtPath:(NSString *)path error:(NSError **)error;

+ (NSNumber *)sizeOfFileAtPath:(NSString *)path;
+ (NSNumber *)sizeOfFileAtPath:(NSString *)path error:(NSError **)error;

/**
 获取指定路径下文件的大小
 */
+ (NSNumber *)sizeOfItemAtPath:(NSString *)path;

/**
 获取指定路径下文件的大小
 
 @param path  路径
 @param error 错误
 */
+ (NSNumber *)sizeOfItemAtPath:(NSString *)path error:(NSError **)error;

+ (NSURL *)urlForItemAtPath:(NSString *)path;

/**
 写文件到指定路径
 */
+ (BOOL)writeFileAtPath:(NSString *)path content:(NSObject *)content;
/**
 写文件到指定路径
 
 @param path  路径
 @param error 错误
 */
+ (BOOL)writeFileAtPath:(NSString *)path content:(NSObject *)content error:(NSError **)error;

+ (NSDictionary *)metadataOfImageAtPath:(NSString *)path;
+ (NSDictionary *)exifDataOfImageAtPath:(NSString *)path;
+ (NSDictionary *)tiffDataOfImageAtPath:(NSString *)path;

+ (NSDictionary *)xattrOfItemAtPath:(NSString *)path;
+ (NSString *)xattrOfItemAtPath:(NSString *)path getValueForKey:(NSString *)key;
+ (BOOL)xattrOfItemAtPath:(NSString *)path hasValueForKey:(NSString *)key;
+ (BOOL)xattrOfItemAtPath:(NSString *)path removeValueForKey:(NSString *)key;
+ (BOOL)xattrOfItemAtPath:(NSString *)path setValue:(NSString *)value forKey:(NSString *)key;

@end

@interface NSFileManager (SBFileManager)

/**
 Root 目录：iPhone沙盒根目录
 */
+ (NSString *)fileAppRootPath;

/**
 Documents 目录：您应该将所有de应用程序数据文件写入到这个目录下。这个目录用于存储用户数据或其它应该定期备份的信息。
 */
+ (NSString *)fileDocumentPath;

/**
 Caches 目录：用于存放应用程序专用的支持文件，保存应用程序再次启动过程中需要的信息。
 */
+ (NSString *)fileCachePath;

/**
 Library 目录：这个目录下有两个子目录：Caches 和 Preferences
 + (NSString *)fileLibraryPath;
 */

/**
 Preferences 目录：包含应用程序的偏好设置文件。您不应该直接创建偏好设置文件，而是应该使用NSUserDefaults类来取得和设置应用程序的偏好.
 */
+ (NSString *)filePreferencePath;

/**
 tmp 目录：这个目录用于存放临时文件，保存应用程序再次启动过程中不需要的信息。
 */
+ (NSString *)fileTmpPath;


/**
 打印当前内存使用情况
 */
void logMemoryInfo();

/**
 获取当前任务所占用的内存（单位：Mb）
 */
+ (double)usedMemory;

/**
 获取当前设备内存可用大小(单位：Mb）
 */
+ (double)availableMemory;

/**
 获取当前设备硬盘可用大小(单位：Mb）
 */
+ (double)availableDiskSize;

/**
 获取当前设备硬盘大小(单位：Mb）
 */
+ (double)diskSize;

@end
