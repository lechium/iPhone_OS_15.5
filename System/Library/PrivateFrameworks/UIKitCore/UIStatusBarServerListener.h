//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_mach, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface UIStatusBarServerListener : NSObject
{
    NSMutableArray *_clientPorts;	// 8 = 0x8
    NSMutableArray *_publishers;	// 16 = 0x10
    NSObject<OS_dispatch_workloop> *_workloop;	// 24 = 0x18
    NSObject<OS_dispatch_mach> *_channel;	// 32 = 0x20
    CDStruct_e9def42b _statusBarData;	// 40 = 0x28
    CDStruct_e9def42b _composedStatusBarData;	// 3920 = 0xf50
    CDStruct_0caf55ee _overrides;	// 7800 = 0x1e78
    struct __CFDictionary *_doubleHeightStatusStrings;	// 11736 = 0x2dd8
    struct __CFDictionary *_glowAnimationStates;	// 11744 = 0x2de0
    NSMutableDictionary *_glowAnimationEndTimes;	// 11752 = 0x2de8
    _Bool _composedStatusBarDataValid;	// 11760 = 0x2df0
}

+ (id)sharedInstance;	// IMP=0x0000000000e55cee
- (void).cxx_destruct;	// IMP=0x0000000000e57499
- (void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2;	// IMP=0x0000000000e57454
- (void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2;	// IMP=0x0000000000e5740f
- (_Bool)_permanentizeStatusBarOverrideData;	// IMP=0x0000000000e5735d
- (void)_postStatusBarOverrideData:(CDStruct_0caf55ee *)arg1;	// IMP=0x0000000000e5730a
- (void)_postDoubleHeightStatus:(char *)arg1 forStyle:(long long)arg2;	// IMP=0x0000000000e57168
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;	// IMP=0x0000000000e57154
- (void)_postGlowAnimationState:(_Bool)arg1 forStyle:(long long)arg2;	// IMP=0x0000000000e56ff1
- (_Bool)_glowAnimationStateForStyle:(long long)arg1;	// IMP=0x0000000000e56f8a
- (double)_glowAnimationEndTimeForStyle:(long long)arg1;	// IMP=0x0000000000e56efa
- (void)_removeAnimationEndTimesForOverrides:(unsigned long long)arg1;	// IMP=0x0000000000e56e38
- (void)_removeStyleOverrides:(unsigned long long)arg1 forPublisher:(id)arg2;	// IMP=0x0000000000e56dea
- (void)_setAnimationEndTimesForOverrides:(unsigned long long)arg1;	// IMP=0x0000000000e56c6f
- (void)_addStyleOverrides:(unsigned long long)arg1 forPublisher:(id)arg2;	// IMP=0x0000000000e56c21
- (void)_broadcastStyleOverrides;	// IMP=0x0000000000e56a96
- (unsigned long long)_styleOverrides;	// IMP=0x0000000000e56962
- (void)_postStatusBarData:(CDStruct_e9def42b *)arg1 actions:(int)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000e56917
- (void)_broadcastStatusBarDataWithActions:(int)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000e56682
- (CDStruct_0caf55ee *)_statusBarOverrideData;	// IMP=0x0000000000e56675
- (CDStruct_e9def42b *)_statusBarData;	// IMP=0x0000000000e56384
- (void)_removePublisher:(struct __CFMachPort *)arg1;	// IMP=0x0000000000e561ca
- (id)_publisherForPort:(unsigned int)arg1;	// IMP=0x0000000000e55ef4
- (void)_removeClient:(struct __CFMachPort *)arg1;	// IMP=0x0000000000e55ea2
- (void)_addClient:(unsigned int)arg1;	// IMP=0x0000000000e55d54
- (void)async:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e55d43
- (id)init;	// IMP=0x0000000000e559bd

@end

