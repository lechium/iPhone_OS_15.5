//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface CalPreferences : NSObject
{
    NSString *_domain;	// 8 = 0x8
    NSMutableSet *_registeredNotificationsToReflect;	// 16 = 0x10
}

+ (_Bool)_setInteger:(long long)arg1 inTestStoreDomain:(id)arg2 key:(id)arg3;	// IMP=0x0000000000050491
+ (_Bool)_setBOOL:(_Bool)arg1 inTestStoreDomain:(id)arg2 key:(id)arg3;	// IMP=0x00000000000503f0
+ (_Bool)_setValue:(id)arg1 inTestStoreDomain:(id)arg2 key:(id)arg3;	// IMP=0x0000000000050340
+ (_Bool)_getInteger:(long long *)arg1 fromTestStoreDomain:(id)arg2 key:(id)arg3;	// IMP=0x00000000000502ba
+ (_Bool)_getBOOL:(_Bool *)arg1 fromTestStoreDomain:(id)arg2 key:(id)arg3;	// IMP=0x0000000000050234
+ (_Bool)_getValue:(id *)arg1 fromTestStoreDomain:(id)arg2 key:(id)arg3;	// IMP=0x0000000000050191
+ (void)setTestMode:(_Bool)arg1;	// IMP=0x0000000000050125
+ (_Bool)testMode;	// IMP=0x0000000000050119
- (void).cxx_destruct;	// IMP=0x00000000000507d5
- (void)_preferenceChangedInternally:(id)arg1;	// IMP=0x000000000000988c
- (void)_preferenceChangedExternally:(id)arg1;	// IMP=0x000000000000a32d
- (void)_synchronizePreferences;	// IMP=0x000000000000993a
- (void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3;	// IMP=0x00000000000097b2
- (id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2;	// IMP=0x0000000000002f45
- (void)setIntegerPreference:(id)arg1 value:(long long)arg2 notificationName:(id)arg3;	// IMP=0x00000000000506ff
- (long long)getIntegerPreference:(id)arg1 defaultValue:(long long)arg2;	// IMP=0x0000000000050649
- (void)setBooleanPreference:(id)arg1 value:(_Bool)arg2 notificationName:(id)arg3;	// IMP=0x000000000000b72a
- (_Bool)getBooleanPreference:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x0000000000002b48
- (void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1;	// IMP=0x00000000000505d2
- (void)registerReflectionForPreferenceWithNotificationName:(id)arg1;	// IMP=0x0000000000007b4f
- (void)dealloc;	// IMP=0x0000000000050546
- (id)initWithDomain:(id)arg1;	// IMP=0x0000000000002aac
- (id)init;	// IMP=0x0000000000050532

@end
