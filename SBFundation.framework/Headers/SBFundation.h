//  SBFundation
//  SBFundation是一个快速搭建iOS App的基础框架，能够提供系统api中间层封装。显著提高开发者开发效率，提高应用的安全性、稳定性、可扩展性等。
//  支持环境:
//      1、ARC
//      2、Objective-C
//      3、Xcode 7 or later
//      4、iOS 8.0 or later
//  依赖的第三方:
//      1、iOS-System-Services https://github.com/Shmoopi/iOS-System-Services
//  如何安装:
//      Github下载地址: https://github.com/eggswift/SBFundation
//      Github说明文档地址: https://github.com/eggswift/SBFundation/blob/master/README.md
//      CocoaPods
//          ```ruby
//             pod 'SBFundation'
//          ```
//      Carthage:
//          ```ruby
//             #SBFundation
//             git "https://github.com/eggswift/SBFundation.git"
//          ```
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT double SBFundationVersionNumber;
FOUNDATION_EXPORT const unsigned char SBFundationVersionString[];

#ifndef _SBFUNDATION_
#define _SBFUNDATION_

#import <UIKit/UIKit.h>

#if __has_include(<SBFundation/SBFundation1.h>)
#import <SBFundation/SBDate.h>
#import <SBFundation/NSData+SBFundation.h>
#import <SBFundation/NSString+SBFundation.h>
#import <SBFundation/NSNumber+SBFundation.h>
#import <SBFundation/NSObject+SBFundation.h>
#import <SBFundation/SBFileManager.h>
#import <SBFundation/SBSafety.h>
#import <SBFundation/SBSingletonDefine.h>
#import <SBFundation/SBJSONAdapter.h>
#import <SBFundation/SBSystemServices.h>
#else
#import "SBFundation/SBDate.h"
#import "SBFundation/NSData+SBFundation.h"
#import "SBFundation/NSString+SBFundation.h"
#import "SBFundation/NSNumber+SBFundation.h"
#import "SBFundation/NSObject+SBFundation.h"
#import "SBFundation/SBFileManager.h"
#import "SBFundation/SBSafety.h"
#import "SBFundation/SBSingletonDefine.h"
#import "SBFundation/SBJSONAdapter.h"
#import "SBFundation/SBSystemServices.h"
#endif

#endif /* _SBFUNDATION_ */
