//
//  SBSystemServices.h
//  SBFundation
//
//  Created by lihao on 2016/9/24.
//  Copyright © 2016年 egg swift. All rights reserved.
//  SystemServices version 1.1.1
//  

#if __has_include(<SystemServices/SystemServices.h>)
#import <SystemServices/SystemServices.h>
#else
#import "SystemServices.h"
#endif

@interface SystemServices (SBApplicationInformation)

/**
 应用build版本 build
 */
@property (nonatomic, readonly) NSString *applicationBundleVersion;

/**
 应用info.plist中的Bundle version
 */
@property (nonatomic, readonly) NSString *applicationBundleInfoDictionaryVersion;

/**
 应用标识
 */
@property (nonatomic, readonly) NSString *applicationIdentifier;

@end
