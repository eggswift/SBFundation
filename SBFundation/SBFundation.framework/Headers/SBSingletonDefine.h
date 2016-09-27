//
//  SBSingletonDefine.h
//  SBFundation
//
//  Created by lihao on 16/9/20.
//  Copyright © 2016年 egg swift. All rights reserved.
//
//  通过以下方法设置单例类，仅支持ARC
//  __SB_STATIC_INSTANCE_INTERFACE(Instance);
//  __SB_STATIC_INSTANCE_IMPLEMENTATION(Instance);
//  [someClass sharedInstance]
//
//  所有单例通过一个缓存池进行数据管理，可以通过remove方法删除单例对象
//  [someClass removeInstance];
//

#ifndef SBSingletonDefine_h
#define SBSingletonDefine_h

#if __has_feature(objc_arc)
static NSMutableDictionary *_sb_static_instance_hash_table = nil;
#define __SB_STATIC_INSTANCE_INTERFACE(name) + (instancetype)shared##name; + (void)remove##name;
#define __SB_STATIC_INSTANCE_IMPLEMENTATION(name) + (id)allocWithZone:(struct _NSZone *)zone { if (!_sb_static_instance_hash_table) { _sb_static_instance_hash_table = [[NSMutableDictionary alloc]initWithCapacity:0];} id instance = [_sb_static_instance_hash_table objectForKey:NSStringFromClass(self)]; if (!instance) {instance = [super allocWithZone:zone];if (instance) { [_sb_static_instance_hash_table setObject:instance forKey:NSStringFromClass(self)];}} return instance; } + (instancetype)shared##name { if (!_sb_static_instance_hash_table) { _sb_static_instance_hash_table = [_sb_static_instance_hash_table objectForKey:NSStringFromClass(self)]; } id instance = [_sb_static_instance_hash_table objectForKey:NSStringFromClass(self)]; if (!instance) {instance = [[self alloc] init]; if (instance) {@synchronized (_sb_static_instance_hash_table) {[_sb_static_instance_hash_table setObject:instance forKey:NSStringFromClass(self)];}}} return instance; } + (void)remove##name { if (!_sb_static_instance_hash_table) {return;} if ([_sb_static_instance_hash_table objectForKey:NSStringFromClass(self)]) {@synchronized (_sb_static_instance_hash_table) {[_sb_static_instance_hash_table removeObjectForKey:NSStringFromClass(self)];}}} - (id)copyWithZone:(NSZone *)zone { return self; }
#endif /* __has_feature(objc_arc) */

//#if __has_feature(objc_arc)
//
//#define __SB_STATIC_INSTANCE_INTERFACE(name) \
//+ (instancetype)shared##name;\
//+ (void)remove##name;
//
//#define __SB_STATIC_INSTANCE_IMPLEMENTATION(name) \
//\
//+ (id)allocWithZone:(struct _NSZone *)zone {\
//    if (!_sb_static_instance_hash_table) { _sb_static_instance_hash_table = [[NSMutableDictionary alloc]initWithCapacity:0];}\
//    id instance = [_sb_static_instance_hash_table objectForKey:NSStringFromClass(self)];\
//    if (!instance) {instance = [super allocWithZone:zone];if (instance) { [_sb_static_instance_hash_table setObject:instance forKey:NSStringFromClass(self)];}}\
//    return instance;\
//} \
//\
//+ (instancetype)shared##name { \
//    if (!_sb_static_instance_hash_table) { _sb_static_instance_hash_table = [_sb_static_instance_hash_table objectForKey:NSStringFromClass(self)]; }\
//    id instance = [_sb_static_instance_hash_table objectForKey:NSStringFromClass(self)];\
//    if (!instance) {instance = [[self alloc] init]; if (instance) {@synchronized (_sb_static_instance_hash_table) {[_sb_static_instance_hash_table setObject:instance forKey:NSStringFromClass(self)];}}}\
//    return instance;\
//} \
//\
//+ (void)remove##name { \
//    if (!_sb_static_instance_hash_table) {return;}\
//    if ([_sb_static_instance_hash_table objectForKey:NSStringFromClass(self)]) {@synchronized (_sb_static_instance_hash_table) {[_sb_static_instance_hash_table removeObjectForKey:NSStringFromClass(self)];}}\
//} \
//\
//- (id)copyWithZone:(NSZone *)zone { return self; }
//
//#endif /* __has_feature(objc_arc) */

#endif /* SBSingletonDefine_h */
