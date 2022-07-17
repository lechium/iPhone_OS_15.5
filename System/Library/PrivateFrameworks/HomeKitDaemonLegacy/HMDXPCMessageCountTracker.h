//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMFUnfairLock, NSDate, NSMutableDictionary, NSString;

@interface HMDXPCMessageCountTracker : NSObject <HMFLogging>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    NSMutableDictionary *_acceptedRequests;	// 16 = 0x10
    NSMutableDictionary *_erroredRequests;	// 24 = 0x18
    NSMutableDictionary *_sentNotifications;	// 32 = 0x20
    NSMutableDictionary *_filteredNotifications;	// 40 = 0x28
    NSDate *_lastResetDate;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00000000004ca2e3
+ (id)xpcCounterTracker;	// IMP=0x00000000004ca2b3
- (void).cxx_destruct;	// IMP=0x00000000004c9e8c
@property(retain, nonatomic) NSDate *lastResetDate; // @synthesize lastResetDate=_lastResetDate;
- (id)dumpState;	// IMP=0x00000000004c9c11
- (void)submitCounters;	// IMP=0x00000000004c96dd
- (id)sampleCountersAndReset:(_Bool)arg1;	// IMP=0x00000000004c9585
- (void)_incrementCounterOfType:(long long)arg1 identifier:(id)arg2;	// IMP=0x00000000004c949a
- (void)incrementCounterOfType:(long long)arg1 identifier:(id)arg2;	// IMP=0x00000000004c9481
- (id)countersOfType:(long long)arg1;	// IMP=0x00000000004c9355
- (id)_countersOfType:(long long)arg1;	// IMP=0x00000000004c9330
- (void)_resetCounters;	// IMP=0x00000000004c92ae
- (id)__init;	// IMP=0x00000000004c9185
- (id)init;	// IMP=0x00000000004c9177

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
