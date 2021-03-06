//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPStateMachine.h>

#import <SleepDaemon/HDSPEnvironmentStateMachineDelegate-Protocol.h>
#import <SleepDaemon/HDSPEnvironmentStateMachineEventHandler-Protocol.h>
#import <SleepDaemon/HDSPEnvironmentStateMachineInfoProvider-Protocol.h>

@class HDSPEnvironmentDemoState, HDSPEnvironmentMigrationState, HDSPEnvironmentNotReadyState, HDSPEnvironmentReadyState, NSString;
@protocol HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, NAScheduler;

@interface HDSPEnvironmentStateMachine : HKSPStateMachine <HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, HDSPEnvironmentStateMachineEventHandler>
{
    HDSPEnvironmentNotReadyState *_notReadyState;	// 8 = 0x8
    HDSPEnvironmentMigrationState *_migrationState;	// 16 = 0x10
    HDSPEnvironmentReadyState *_readyState;	// 24 = 0x18
    HDSPEnvironmentDemoState *_demoState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000375ec
@property(readonly, nonatomic) HDSPEnvironmentDemoState *demoState; // @synthesize demoState=_demoState;
@property(readonly, nonatomic) HDSPEnvironmentReadyState *readyState; // @synthesize readyState=_readyState;
@property(readonly, nonatomic) HDSPEnvironmentMigrationState *migrationState; // @synthesize migrationState=_migrationState;
@property(readonly, nonatomic) HDSPEnvironmentNotReadyState *notReadyState; // @synthesize notReadyState=_notReadyState;
- (_Bool)needsDataMigration;	// IMP=0x0000000000037564
- (_Bool)isSystemReady;	// IMP=0x0000000000037520
- (void)environmentDidBecomeReady;	// IMP=0x00000000000374f2
- (void)environmentShouldMigrateData;	// IMP=0x00000000000374c4
- (void)dataMigrationDidComplete;	// IMP=0x0000000000037487
- (void)systemDidBecomeReady;	// IMP=0x000000000003744a
- (unsigned long long)loggingCategory;	// IMP=0x000000000003743f
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;	// IMP=0x000000000003730f

// Remaining properties
@property(readonly, nonatomic) id <NAScheduler> callbackScheduler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) __weak id <HDSPEnvironmentStateMachineDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <HDSPEnvironmentStateMachineInfoProvider> infoProvider; // @dynamic infoProvider;
@property(readonly) Class superclass;

@end

