//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, TIAnalyticsMetricsContext;
@protocol TIUserModelDataStoring;

@interface TIUserModelValues : NSObject
{
    NSString *_inputMode;	// 8 = 0x8
    id <TIUserModelDataStoring> _userModelStore;	// 16 = 0x10
    TIAnalyticsMetricsContext *_context;	// 24 = 0x18
    NSDictionary *_durableCounters;	// 32 = 0x20
    NSMutableDictionary *_transientCounters;	// 40 = 0x28
    NSDictionary *_settingsDictionary;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000005f516
@property(readonly, nonatomic) NSDictionary *settingsDictionary; // @synthesize settingsDictionary=_settingsDictionary;
@property(readonly, nonatomic) NSDictionary *durableCounters; // @synthesize durableCounters=_durableCounters;
@property(readonly, nonatomic) id <TIUserModelDataStoring> userModelDataStore; // @synthesize userModelDataStore=_userModelStore;
@property(readonly, nonatomic) TIAnalyticsMetricsContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
- (id)settingValueFromName:(id)arg1;	// IMP=0x000000000005f49b
- (id)aggregatedCountFromTransientCounterWithName:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3;	// IMP=0x000000000005f3f7
- (id)countsFromTransientCounterWithName:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3;	// IMP=0x000000000005f353
- (void)addEntry:(id)arg1 toCounter:(id)arg2 forDaysPrior:(int)arg3;	// IMP=0x000000000005f22d
- (void)addToTransientCounterFromDatabaseEntry:(id)arg1 withWeeklyMetricKeys:(id)arg2 fromLoadedDate:(id)arg3;	// IMP=0x000000000005f0e5
- (int)indexFromCandidateLength:(int)arg1 forCounter:(id)arg2;	// IMP=0x000000000005f0b7
- (void)addDouble:(double)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3;	// IMP=0x000000000005f045
- (void)addInteger:(int)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3;	// IMP=0x000000000005efd3
- (id)getTransientCounterForKey:(id)arg1;	// IMP=0x000000000005ef42
- (void)loadTransientCounter:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3;	// IMP=0x000000000005e7ea
- (void)persistForDate:(id)arg1;	// IMP=0x000000000005e6a6
- (void)extendCountersForWeeklyMetricKeys:(id)arg1;	// IMP=0x000000000005e52a
- (id)initWithInputMode:(id)arg1 context:(id)arg2 userModelDataStore:(id)arg3 durableCounters:(id)arg4 settingsDictionary:(id)arg5;	// IMP=0x000000000005e3fc

@end

