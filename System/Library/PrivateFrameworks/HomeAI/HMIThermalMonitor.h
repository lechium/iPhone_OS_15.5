//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMIThermalMonitor : HMFObject
{
    struct __IOHIDEventSystemClient *_client;	// 8 = 0x8
    int _thermalLevelNotificationToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    unsigned long long _thermalLevel;	// 40 = 0x28
    NSMutableDictionary *_services;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000000013e90
- (void).cxx_destruct;	// IMP=0x000000000001462d
@property(readonly) NSMutableDictionary *services; // @synthesize services=_services;
@property(readonly) unsigned long long thermalLevel; // @synthesize thermalLevel=_thermalLevel;
- (void)dealloc;	// IMP=0x00000000000145b1
- (void)_updateThermalLevel;	// IMP=0x0000000000014550
- (_Bool)readMaxValue:(double *)arg1;	// IMP=0x00000000000144cd
- (_Bool)readValueFromSensor:(int)arg1 value:(double *)arg2;	// IMP=0x00000000000141bc
- (id)init;	// IMP=0x0000000000013ee5

@end

