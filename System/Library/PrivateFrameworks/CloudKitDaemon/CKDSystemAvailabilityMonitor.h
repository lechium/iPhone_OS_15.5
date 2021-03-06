//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject
{
    NSMutableSet *_watcherWrappers;	// 8 = 0x8
    unsigned long long _availabilityState;	// 16 = 0x10
    unsigned long long _simulatedAvailablityState;	// 24 = 0x18
}

+ (id)sharedMonitor;	// IMP=0x00000000000e3c62
+ (void)initialize;	// IMP=0x00000000000e3c21
- (void).cxx_destruct;	// IMP=0x00000000000e4b1d
@property unsigned long long simulatedAvailablityState; // @synthesize simulatedAvailablityState=_simulatedAvailablityState;
@property unsigned long long availabilityState; // @synthesize availabilityState=_availabilityState;
@property(retain, nonatomic) NSMutableSet *watcherWrappers; // @synthesize watcherWrappers=_watcherWrappers;
- (void)simulateFirstUnlockForUnitTests;	// IMP=0x00000000000e4ac4
- (void)simulateBuddyCompletedForUnitTests;	// IMP=0x00000000000e4aae
- (void)resetToUnavailableForUnitTests;	// IMP=0x00000000000e4a9d
- (_Bool)registerWatcher:(id)arg1;	// IMP=0x00000000000e48cd
- (void)_systemMayNowBeReady;	// IMP=0x00000000000e4524
- (void)_clearVanishedWatchers;	// IMP=0x00000000000e42e8
- (void)_logAvailabilityDescription;	// IMP=0x00000000000e40f8
- (unsigned long long)currentAvailabilityState;	// IMP=0x00000000000e404c
- (void)assertAvailability:(unsigned long long)arg1;	// IMP=0x00000000000e3fa9
- (void)dealloc;	// IMP=0x00000000000e3f6b
- (void)removeNotifications;	// IMP=0x00000000000e3f40
- (id)_init;	// IMP=0x00000000000e3c73

@end

