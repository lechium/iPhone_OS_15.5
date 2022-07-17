//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTAlarmObserver-Protocol.h>
#import <MobileTimer/MTAlarmServer-Protocol.h>

@class MTAlarmStorage, MTXPCConnectionListenerProvider, NSString;
@protocol NAScheduler;

@interface MTAlarmServer : NSObject <MTAlarmServer, MTAlarmObserver, MTAgentDiagnosticDelegate>
{
    _Bool _systemReady;	// 8 = 0x8
    MTAlarmStorage *_storage;	// 16 = 0x10
    MTXPCConnectionListenerProvider *_connectionListenerProvider;	// 24 = 0x18
    id <NAScheduler> _serializer;	// 32 = 0x20
}

+ (_Bool)_notifyClientsForTriggerType:(unsigned long long)arg1;	// IMP=0x0000000000090130
- (void).cxx_destruct;	// IMP=0x00000000000908af
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(readonly, nonatomic, getter=isSystemReady) _Bool systemReady; // @synthesize systemReady=_systemReady;
@property(readonly, nonatomic) MTXPCConnectionListenerProvider *connectionListenerProvider; // @synthesize connectionListenerProvider=_connectionListenerProvider;
@property(readonly, nonatomic) MTAlarmStorage *storage; // @synthesize storage=_storage;
- (id)gatherDiagnostics;	// IMP=0x0000000000090727
- (void)printDiagnostics;	// IMP=0x0000000000090556
- (void)resetSleepAlarmSnoozeStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000903b5
- (void)updateSleepAlarmsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000090214
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;	// IMP=0x000000000009013d
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;	// IMP=0x0000000000090041
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;	// IMP=0x000000000008ff6a
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;	// IMP=0x000000000008fe93
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;	// IMP=0x000000000008fda7
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;	// IMP=0x000000000008fcbb
- (void)source:(id)arg1 didAddAlarms:(id)arg2;	// IMP=0x000000000008fbcf
- (void)nextSleepAlarmWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008fb3b
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008f927
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008f713
- (void)removeAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008f5b2
- (void)updateAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008f451
- (void)addAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008f2f0
- (void)getAlarmsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008f20b
- (void)checkIn;	// IMP=0x000000000008f205
- (_Bool)_isSystemReady;	// IMP=0x000000000008f0c6
- (id)_systemNotReadyError;	// IMP=0x000000000008f04e
- (void)handleSystemReady;	// IMP=0x000000000008eee1
- (void)stopListening;	// IMP=0x000000000008ee3d
- (void)startListening;	// IMP=0x000000000008ed99
- (id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2;	// IMP=0x000000000008ec31
- (id)initWithStorage:(id)arg1;	// IMP=0x000000000008eb12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
