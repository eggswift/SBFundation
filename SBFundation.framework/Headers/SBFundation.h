//
//  SBFundation.h
//  SBFundation
//
//  Created by lihao on 2016/9/21.
//  Copyright © 2016年 egg swift. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//
//  需要iOS8.0或更高版本
//  SBFundation依赖优秀的第三方类库iOS-System-Services (iOS System Services is a class to gather all available information about a device. http://www.shmoopi.net/ Github: https://github.com/Shmoopi/iOS-System-Services) 来安全的获取设备和app信息。
//  请到Github下载或使用Pod或使用Carthage等管理工具导入
//  CocoaPods:  pod 'SystemServices',   '~> 1.1.1'
//  Carthage:   # iOS-System-Services   git "https://github.com/Shmoopi/iOS-System-Services.git"
//

#import <UIKit/UIKit.h>

//! Project version number for SBFundation.
FOUNDATION_EXPORT double SBFundationVersionNumber;

//! Project version string for SBFundation.
FOUNDATION_EXPORT const unsigned char SBFundationVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SBFundation/PublicHeader.h>
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#ifndef _SBFUNDATION_
#define _SBFUNDATION_

#if __has_include(<SBFundation/SBFundation.h>)
#import <SBFundation/SBDate.h>
#import <SBFundation/NSData+SBFundation.h>
#import <SBFundation/NSString+SBFundation.h>
#import <SBFundation/SBFileManager.h>
#import <SBFundation/SBSafety.h>
#import <SBFundation/SBSingletonDefine.h>
#import <SBFundation/SBJSONAdapter.h>
#import <SBFundation/SBSystemServices.h>
#else
#import "SBFundation/SBDate.h"
#import "SBFundation/NSData+SBFundation.h"
#import "SBFundation/NSString+SBFundation.h"
#import "SBFundation/SBFileManager.h"
#import "SBFundation/SBSafety.h"
#import "SBFundation/SBSingletonDefine.h"
#import "SBFundation/SBJSONAdapter.h"
#import "SBFundation/SBSystemServices.h"
#endif

#endif /* _SBFUNDATION_ */
