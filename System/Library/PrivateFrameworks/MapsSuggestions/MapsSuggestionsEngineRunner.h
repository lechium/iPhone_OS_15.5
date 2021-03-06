//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsCircuit-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsSink-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsTriggerObserver-Protocol.h>

@class MapsSuggestionsEngine, MapsSuggestionsEngineBuilder, MapsSuggestionsObservers, NSArray, NSDate, NSMutableArray, NSMutableSet, NSString;
@protocol MapsSuggestionsTimer;

@interface MapsSuggestionsEngineRunner : NSObject <MapsSuggestionsTriggerObserver, MapsSuggestionsSink, MapsSuggestionsCircuit>
{
    struct Queue _queue;	// 8 = 0x8
    MapsSuggestionsEngine *_engine;	// 24 = 0x18
    struct _Config {
        NSString *name;
        MapsSuggestionsEngineBuilder *engineBuilder;
        MapsSuggestionsObservers *observers;
        double minRunTime;
        double maxRunTime;
        double minSleepTime;
        double maxSleepTime;
        double leewayRunTime;
        double leewaySleepTime;
        NSMutableArray *triggers;
        NSMutableArray *conditions;
        NSMutableSet *filters;
        unsigned long long maxEntries;
        _Bool nilledWhenAsleep;
    } _config;	// 32 = 0x20
    struct _State {
        NSDate *minSilenceDate;
        NSDate *earliestRunDate;
        NSString *firedTriggerName;
        NSString *failedConditionName;
        id <MapsSuggestionsTimer> stopRunTimer;
        id <MapsSuggestionsTimer> wakeUpTimer;
        NSArray *entries;
    } _state;	// 144 = 0x90
    id <MapsSuggestionsTimer> _wakeUpTimer;	// 200 = 0xc8
}

- (id).cxx_construct;	// IMP=0x00000000000eded5
- (void).cxx_destruct;	// IMP=0x00000000000ede27
@property(readonly, nonatomic) id <MapsSuggestionsTimer> wakeUpTimer; // @synthesize wakeUpTimer=_wakeUpTimer;
- (id)objectForJSON;	// IMP=0x00000000000ed50b
- (id)nameForJSON;	// IMP=0x00000000000ed3bc
- (void)invalidateForMapsSuggestionsManager:(id)arg1;	// IMP=0x00000000000ed28c
- (void)triggerFired:(id)arg1;	// IMP=0x00000000000ec85f
@property(readonly, nonatomic) NSString *uniqueName;
- (void)runASAP;	// IMP=0x00000000000ec3da
- (void)scheduleNextRun;	// IMP=0x00000000000ec10c
- (void)removeConditions:(id)arg1;	// IMP=0x00000000000ea0f6
- (void)removeCondition:(id)arg1;	// IMP=0x00000000000e9f8f
- (void)addPostFilter:(id)arg1;	// IMP=0x00000000000e9d62
- (void)addConditions:(id)arg1;	// IMP=0x00000000000e9a7d
- (void)addCondition:(id)arg1;	// IMP=0x00000000000e9916
- (void)removeTriggers:(id)arg1;	// IMP=0x00000000000e95d8
- (void)removeTrigger:(id)arg1;	// IMP=0x00000000000e951b
- (void)addTriggers:(id)arg1;	// IMP=0x00000000000e91fb
- (void)addTrigger:(id)arg1;	// IMP=0x00000000000e9094
- (void)registerObserver:(id)arg1;	// IMP=0x00000000000e8285
@property(readonly, nonatomic) __weak MapsSuggestionsEngine *engine;
- (id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 maxEntries:(unsigned long long)arg7;	// IMP=0x00000000000e8196
- (id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 runTimeLeeway:(double)arg7 sleepTimeLeeway:(double)arg8 maxEntries:(unsigned long long)arg9 nilledWhenAsleep:(_Bool)arg10;	// IMP=0x00000000000e80a9
- (id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 runTimeLeeway:(double)arg7 sleepTimeLeeway:(double)arg8 maxEntries:(unsigned long long)arg9 nilledWhenAsleep:(_Bool)arg10 wakeUpTimerClass:(Class)arg11;	// IMP=0x00000000000e7fb3
- (id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 runTimeLeeway:(double)arg7 sleepTimeLeeway:(double)arg8 maxEntries:(unsigned long long)arg9 nilledWhenAsleep:(_Bool)arg10 wakeUpTimerClass:(Class)arg11 stopRunTimerClass:(Class)arg12;	// IMP=0x00000000000e71b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

