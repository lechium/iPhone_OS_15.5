//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTTimerSchedulerDelegate-Protocol.h>
#import <MobileTimer/MTTimerStorage-Protocol.h>

@class MTMetrics, MTObserverStore, MTTimer, MTTimerMigrator, MTTimerScheduler, NSArray, NSDate, NSMutableArray, NSString;
@protocol MTPersistence, NAScheduler;

@interface MTTimerStorage : NSObject <MTTimerSchedulerDelegate, MTAgentDiagnosticDelegate, MTTimerStorage>
{
    MTMetrics *_metrics;	// 8 = 0x8
    MTTimerScheduler *_scheduler;	// 16 = 0x10
    NSMutableArray *_orderedTimers;	// 24 = 0x18
    NSDate *_lastModifiedDate;	// 32 = 0x20
    CDUnknownBlockType _currentDateProvider;	// 40 = 0x28
    MTTimerMigrator *_migrator;	// 48 = 0x30
    id <NAScheduler> _serializer;	// 56 = 0x38
    MTObserverStore *_observers;	// 64 = 0x40
    id <MTPersistence> _persistence;	// 72 = 0x48
}

+ (id)_diagnosticDictionaryForTimer:(id)arg1;	// IMP=0x0000000000010ba3
- (void).cxx_destruct;	// IMP=0x00000000000111f1
@property(retain, nonatomic) id <MTPersistence> persistence; // @synthesize persistence=_persistence;
@property(retain, nonatomic) MTObserverStore *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) MTTimerMigrator *migrator; // @synthesize migrator=_migrator;
@property(readonly, copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSMutableArray *orderedTimers; // @synthesize orderedTimers=_orderedTimers;
@property(nonatomic) __weak MTTimerScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void)scheduler:(id)arg1 didFireTimer:(id)arg2;	// IMP=0x0000000000010f98
- (void)scheduler:(id)arg1 didChangeNextTimer:(id)arg2;	// IMP=0x0000000000010e27
- (id)_diagnosticTimerDictionary;	// IMP=0x00000000000109a1
- (id)gatherDiagnostics;	// IMP=0x00000000000108bf
- (void)printDiagnostics;	// IMP=0x0000000000010733
- (void)handleMigrationFinish;	// IMP=0x000000000001072d
- (void)handleF5Reset;	// IMP=0x0000000000010727
- (void)_queue_sortTimers;	// IMP=0x00000000000106f5
- (void)_queue_persistTimers;	// IMP=0x0000000000010578
- (_Bool)_queue_hasMatchingTimer:(id)arg1;	// IMP=0x000000000001050c
- (id)_queue_timerMatchingTimerIdentifier:(id)arg1;	// IMP=0x000000000001040e
- (void)_queue_notifyObserversForNextTimerChange:(id)arg1 source:(id)arg2;	// IMP=0x00000000000102e3
- (void)_queue_notifyObserversForTimerFire:(id)arg1 source:(id)arg2;	// IMP=0x0000000000010186
- (void)_queue_notifyObserversForTimerDismiss:(id)arg1 source:(id)arg2;	// IMP=0x0000000000010029
- (void)_queue_notifyObserversForTimerRemoval:(id)arg1 source:(id)arg2;	// IMP=0x000000000000feb5
- (void)_queue_notifyObserversForTimerUpdate:(id)arg1 source:(id)arg2;	// IMP=0x000000000000fd41
- (void)_queue_notifyObserversForTimerAdd:(id)arg1 source:(id)arg2;	// IMP=0x000000000000fbcd
- (void)_queue_notifyObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fbb7
- (id)_applyNecessaryChangesFromOldTimer:(id)arg1 currentTimer:(id)arg2;	// IMP=0x000000000000fac0
- (id)_queuePersistTimer:(id)arg1 replacingTimer:(id)arg2;	// IMP=0x000000000000f9ae
- (void)_queue_removeAllTimersForSource:(id)arg1;	// IMP=0x000000000000f8e5
- (void)_queue_repeatTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000000f5ba
- (void)_queue_dismissTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000000f221
- (void)_queue_removeTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000000ef1b
- (id)_queue_updateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000000e9a1
- (void)_queue_addTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000000e6e6
- (void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000000e4c8
- (void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000000e2aa
- (void)removeTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000000e068
- (void)updateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000000de1d
- (void)addTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000000db8e
- (void)getTimersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d7c1
- (void)_queue_setAllTimers:(id)arg1 source:(id)arg2 persist:(_Bool)arg3 notify:(_Bool)arg4;	// IMP=0x000000000000d682
- (void)_queue_setAllTimers:(id)arg1 source:(id)arg2;	// IMP=0x000000000000d664
- (void)setAllTimers:(id)arg1 source:(id)arg2;	// IMP=0x000000000000d48e
- (void)registerObserver:(id)arg1;	// IMP=0x000000000000d478
@property(readonly, nonatomic) MTTimer *nextTimer;
@property(readonly, nonatomic) NSArray *timers;
- (void)_createDefaultTimerIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cf31
- (void)_loadTimersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c70c
- (void)loadTimersSync;	// IMP=0x000000000000c664
- (void)loadTimers;	// IMP=0x000000000000c650
- (void)dealloc;	// IMP=0x000000000000c621
- (id)initWithPersistence:(id)arg1 migrator:(id)arg2 serializer:(id)arg3 callbackScheduler:(id)arg4 currentDateProvider:(CDUnknownBlockType)arg5;	// IMP=0x000000000000c460
- (id)initWithPersistence:(id)arg1;	// IMP=0x000000000000c377
- (id)init;	// IMP=0x000000000000c31d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
