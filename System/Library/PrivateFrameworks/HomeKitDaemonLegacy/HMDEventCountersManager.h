//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDEventCounterContext-Protocol.h>

@class NSDate, NSMutableDictionary, NSObject;
@protocol HMDEventCountersStoring, OS_dispatch_queue;

@interface HMDEventCountersManager : HMFObject <HMDEventCounterContext>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSMutableDictionary *_counterGroups;	// 24 = 0x18
    NSDate *_lastSaveTime;	// 32 = 0x20
    id <HMDEventCountersStoring> _counterStorage;	// 40 = 0x28
    double _saveInterval;	// 48 = 0x30
}

+ (id)sharedEventCountersManager;	// IMP=0x000000000093f4b4
- (void).cxx_destruct;	// IMP=0x000000000093f2be
@property(nonatomic) double saveInterval; // @synthesize saveInterval=_saveInterval;
@property(readonly) id <HMDEventCountersStoring> counterStorage; // @synthesize counterStorage=_counterStorage;
@property(retain, nonatomic) NSDate *lastSaveTime; // @synthesize lastSaveTime=_lastSaveTime;
@property(retain, nonatomic) NSMutableDictionary *counterGroups; // @synthesize counterGroups=_counterGroups;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)unarchivedEventCounters;	// IMP=0x000000000093f077
- (void)_save;	// IMP=0x000000000093ef76
- (void)counterChanged;	// IMP=0x000000000093ee8f
- (void)forceSave;	// IMP=0x000000000093ee42
- (id)_fetchAllEventCounters;	// IMP=0x000000000093ed6c
- (void)resetAllEventCounters;	// IMP=0x000000000093eb8c
- (void)resetEventCountersForRequestGroup:(id)arg1;	// IMP=0x000000000093eb4f
- (void)resetEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x000000000093ead7
- (id)fetchAllEventCounters;	// IMP=0x000000000093ea42
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)arg1;	// IMP=0x000000000093e9fe
- (id)fetchEventCountersForRequestGroup:(id)arg1;	// IMP=0x000000000093e9ae
- (unsigned long long)fetchEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x000000000093e931
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x000000000093e8b9
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 withValue:(unsigned long long)arg3;	// IMP=0x000000000093e83c
- (void)addObserver:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3;	// IMP=0x000000000093e7ae
- (void)_removeCounterGroupForSpecifier:(id)arg1;	// IMP=0x000000000093e755
- (void)removeCounterGroupsBasedOnPredicate:(CDUnknownBlockType)arg1;	// IMP=0x000000000093e57a
- (void)removeCounterGroupForSpecifier:(id)arg1;	// IMP=0x000000000093e50c
- (void)removeCounterGroupForName:(id)arg1;	// IMP=0x000000000093e4b9
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000093e4a7
- (id)counterGroupForSpecifier:(id)arg1;	// IMP=0x000000000093e3d6
- (id)counterGroupForName:(id)arg1;	// IMP=0x000000000093e370
- (id)initWithEventCountersStorage:(id)arg1 saveInterval:(double)arg2;	// IMP=0x000000000093e1da
- (id)init;	// IMP=0x000000000093e0f1

@end
