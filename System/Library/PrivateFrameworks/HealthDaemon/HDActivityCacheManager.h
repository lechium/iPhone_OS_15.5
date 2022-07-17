//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDActivityCacheDataSource, HDProfile, HDSourceEntity, HKActivityCache, HKCategorySample, HKCategoryType, HKHeartRateSummary, HKQuantityType, NSCalendar, NSDate, NSDateInterval, NSHashTable, NSMutableDictionary, NSSet, NSString, NSTimeZone, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface HDActivityCacheManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDDatabaseProtectedDataObserver>
{
    HDProfile *_profile;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_observerQueue;	// 24 = 0x18
    long long _todayActivityCacheIndex;	// 32 = 0x20
    long long _yesterdayActivityCacheIndex;	// 40 = 0x28
    long long _tomorrowActivityCacheIndex;	// 48 = 0x30
    _Bool _cacheIndicesAreSet;	// 56 = 0x38
    NSTimeZone *_currentTimeZone;	// 64 = 0x40
    NSDateInterval *_todayDateInterval;	// 72 = 0x48
    NSDateInterval *_yesterdayDateInterval;	// 80 = 0x50
    _Bool _existingActivityCachesAreSet;	// 88 = 0x58
    HKActivityCache *_existingYesterdayActivityCache;	// 96 = 0x60
    HKActivityCache *_existingTodayActivityCache;	// 104 = 0x68
    HKHeartRateSummary *_todayHeartRateSummary;	// 112 = 0x70
    HKHeartRateSummary *_yesterdayHeartRateSummary;	// 120 = 0x78
    HDSourceEntity *_localDeviceSourceEntity;	// 128 = 0x80
    HDActivityCacheDataSource *_dataSource;	// 136 = 0x88
    HKQuantityType *_calorieGoalType;	// 144 = 0x90
    HKQuantityType *_moveMinuteGoalType;	// 152 = 0x98
    HKQuantityType *_exerciseGoalType;	// 160 = 0xa0
    HKQuantityType *_standGoalType;	// 168 = 0xa8
    NSSet *_allQuantityTypes;	// 176 = 0xb0
    NSMutableDictionary *_goalsByIndex;	// 184 = 0xb8
    HKCategoryType *_activityMoveModeChangeType;	// 192 = 0xc0
    HKCategorySample *_todayActivityMoveModeChangeSample;	// 200 = 0xc8
    HKCategorySample *_yesterdayActivityMoveModeChangeSample;	// 208 = 0xd0
    _Bool _activityMoveModeIsSet;	// 216 = 0xd8
    _HKDelayedOperation *_updateCachesOperation;	// 224 = 0xe0
    _HKDelayedOperation *_rebuildCachesOperation;	// 232 = 0xe8
    NSHashTable *_observers;	// 240 = 0xf0
    _Bool _hasSubscribedToSignificantTimeChangeNotifications;	// 248 = 0xf8
    long long _wheelchairUse;	// 256 = 0x100
    int _rebuildCacheNotificationToken;	// 264 = 0x108
    NSDate *_dateOverride;	// 272 = 0x110
    NSTimeZone *_timeZoneOverride;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x000000000030dca4
@property(retain, nonatomic) NSTimeZone *timeZoneOverride; // @synthesize timeZoneOverride=_timeZoneOverride;
@property(retain, nonatomic) NSDate *dateOverride; // @synthesize dateOverride=_dateOverride;
- (void)_userCharacteristicsDidChangeNotification:(id)arg1;	// IMP=0x000000000030dc09
- (void)removeActivityCacheObserver:(id)arg1;	// IMP=0x00000000000161c8
- (void)addActivityCacheObserver:(id)arg1;	// IMP=0x00000000000128a3
- (void)accessStatisticsBuilderWithCacheIndex:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013362
@property(readonly, nonatomic) HKActivityCache *yesterdayActivityCache;
@property(readonly, nonatomic) HKActivityCache *currentActivityCache;
@property(readonly) NSCalendar *calendar;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;	// IMP=0x0000000000024bfb
- (void)daemonReady:(id)arg1;	// IMP=0x000000000006d94e
- (void)_didReceiveSignificantTimeChangeNotification;	// IMP=0x000000000030d949
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;	// IMP=0x000000000030d79c
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;	// IMP=0x000000000030cad5
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000030ab16
- (void)dealloc;	// IMP=0x000000000030a907
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000030a1ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
