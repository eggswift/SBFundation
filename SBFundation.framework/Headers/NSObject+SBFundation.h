//
//  NSObject+SBFundation.h
//  SBFundation
//
//  Created by lihao on 2016/9/28.
//  Copyright © 2016年 egg swift. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXTERN BOOL SBOjectMethodSwizzle(Class klass, SEL origSEL, SEL overrideSEL);
FOUNDATION_EXTERN void SBOjectMethodAppend(Class toClass, Class fromClass, SEL selector);
FOUNDATION_EXTERN void SBOjectMethodReplace(Class toClass, Class fromClass, SEL selector);

@interface NSObject (SBFundation)

@end
