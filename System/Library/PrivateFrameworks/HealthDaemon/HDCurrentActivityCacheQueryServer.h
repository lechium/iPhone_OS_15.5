//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDActivityCacheManagerObserver-Protocol.h>

@class HDActivityCacheManager, HKActivityCache, NSCalendar, NSDateComponents, NSString;

@interface HDCurrentActivityCacheQueryServer <HDActivityCacheManagerObserver>
{
    NSDateComponents *_statisticsIntervalComponents;	// 8 = 0x8
    NSCalendar *_calendar;	// 16 = 0x10
    HKActivityCache *_lastActivityCache;	// 24 = 0x18
    HDActivityCacheManager *_activityCacheManager;	// 32 = 0x20
}

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id *)arg5;	// IMP=0x00000000005cd803
+ (Class)queryClass;	// IMP=0x00000000005cd7f2
- (void).cxx_destruct;	// IMP=0x00000000005cd9bf
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;	// IMP=0x0000000000013116
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;	// IMP=0x0000000000012ac2
- (void)_queue_stop;	// IMP=0x0000000000016140
- (void)_queue_start;	// IMP=0x0000000000012aca
- (_Bool)shouldObserveActivityCache;	// IMP=0x00000000005cd7ea
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000005cd69f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

