//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCCoreDuetListener, VCDaemonXPCEventHandler, VCTriggerEventQueue, WFBiomeListener, WFTriggerBootManager, WFTriggerNotificationScheduler, WFWorkflowRunCoordinator;
@protocol OS_dispatch_queue, WFDatabaseProvider;

@interface WFTriggerRegistrar : NSObject
{
    WFWorkflowRunCoordinator *_runCoordinator;	// 8 = 0x8
    VCCoreDuetListener *_coreDuetListener;	// 16 = 0x10
    WFBiomeListener *_biomeListener;	// 24 = 0x18
    WFTriggerNotificationScheduler *_scheduler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    id <WFDatabaseProvider> _databaseProvider;	// 48 = 0x30
    VCDaemonXPCEventHandler *_eventHandler;	// 56 = 0x38
    VCTriggerEventQueue *_eventQueue;	// 64 = 0x40
    WFTriggerBootManager *_triggerBootManager;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000609fa
@property(readonly, nonatomic) WFTriggerBootManager *triggerBootManager; // @synthesize triggerBootManager=_triggerBootManager;
@property(readonly, nonatomic) VCTriggerEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) id <WFDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) WFTriggerNotificationScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) WFBiomeListener *biomeListener; // @synthesize biomeListener=_biomeListener;
@property(readonly, nonatomic) VCCoreDuetListener *coreDuetListener; // @synthesize coreDuetListener=_coreDuetListener;
@property(readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator; // @synthesize runCoordinator=_runCoordinator;
- (id)unableToLoadDatabaseErrorWithUnderlyingError:(id)arg1;	// IMP=0x0000000000060976
- (long long)triggerBackingForConfiguredTrigger:(id)arg1;	// IMP=0x0000000000060927
- (void)getConfiguredTriggerDescriptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000060804
- (void)deleteTriggerWithIdentifier:(id)arg1 allowedDeletionClasses:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000606ee
- (void)deleteTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000606d7
- (void)fireTriggerWithIdentifier:(id)arg1 force:(_Bool)arg2 eventInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000605b7
- (void)queue_unregisterConfiguredTriggerWithIdentifier:(id)arg1 triggerBacking:(long long)arg2;	// IMP=0x00000000000603f1
- (void)queue_unregisterConfiguredTrigger:(id)arg1;	// IMP=0x00000000000601fa
- (void)unregisterTriggerWithIdentifier:(id)arg1 triggerBacking:(long long)arg2;	// IMP=0x0000000000060143
- (void)unregisterAllTriggers;	// IMP=0x00000000000600d2
- (void)queue_registerConfiguredTrigger:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005ff9a
- (void)registerTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005febe
- (void)registerAllTriggersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005fe0d
- (void)removeStalePendingNotifications;	// IMP=0x000000000005fdd0
- (void)timeChangeDidOccur;	// IMP=0x000000000005fdbc
- (void)timezoneChangeDidOccur;	// IMP=0x000000000005fda8
- (void)deviceDidUnlockForFirstTime;	// IMP=0x000000000005fd4e
- (void)dealloc;	// IMP=0x000000000005fc64
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 runCoordinator:(id)arg3;	// IMP=0x000000000005f970

@end

