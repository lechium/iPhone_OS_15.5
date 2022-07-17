//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SOS/SOSClientProtocol-Protocol.h>
#import <SOS/SOSInternalClientProtocol-Protocol.h>

@class NSMapTable, NSString, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface SOSManager : NSObject <SOSInternalClientProtocol, SOSClientProtocol>
{
    _Bool _sendingLocationUpdate;	// 8 = 0x8
    long long _sosInitiationState;	// 16 = 0x10
    long long _sosInteractiveState;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_initialStateSemaphore;	// 32 = 0x20
    int _connectionRequestNotificationToken;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
    NSMapTable *_observerToQueue;	// 56 = 0x38
    NSString *_mostRecentSOSActivationReason;	// 64 = 0x40
}

+ (long long)TPInCallUILaunchReasonForSOSTriggerMechanism:(long long)arg1;	// IMP=0x00000000000139fe
+ (void)_beginSOSCallWithCompletion:(CDUnknownBlockType)arg1 triggerMechanism:(long long)arg2;	// IMP=0x0000000000013859
+ (void)_triggerSOSWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013844
+ (id)sharedInstance;	// IMP=0x000000000001218b
+ (void)notifySOSTriggerMechanismChanged;	// IMP=0x0000000000011d51
+ (_Bool)deviceSupportsSOS;	// IMP=0x0000000000011cbe
+ (_Bool)shouldTriggerSOS;	// IMP=0x0000000000011c13
+ (_Bool)_isRunningInSOSTool;	// IMP=0x0000000000011b97
+ (void)triggerSOSWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011a61
+ (void)triggerSOSWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000119e2
+ (void)triggerSOSWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000119cb
+ (void)triggerSOS;	// IMP=0x0000000000011953
- (void).cxx_destruct;	// IMP=0x0000000000013a46
@property(copy, nonatomic) NSString *mostRecentSOSActivationReason; // @synthesize mostRecentSOSActivationReason=_mostRecentSOSActivationReason;
@property(readonly, nonatomic) NSMapTable *observerToQueue; // @synthesize observerToQueue=_observerToQueue;
@property(nonatomic) int connectionRequestNotificationToken; // @synthesize connectionRequestNotificationToken=_connectionRequestNotificationToken;
- (void)_resetStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013738
- (void)_waitForInitialState;	// IMP=0x0000000000013706
- (void)didDismissClientSOSBeforeSOSCall:(long long)arg1;	// IMP=0x00000000000134c9
- (void)dismissClientSOSWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000133a7
- (void)updateClientCurrentSOSInteractiveState:(long long)arg1;	// IMP=0x00000000000132b0
- (void)updateClientCurrentSOSInitiationState:(long long)arg1;	// IMP=0x0000000000012ff8
- (void)setSendingLocationUpdate:(_Bool)arg1;	// IMP=0x0000000000012f85
- (void)didDismissSOSBeforeSOSCall:(long long)arg1;	// IMP=0x0000000000012eaf
- (void)dismissSOSWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012df5
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000012d05
- (void)addObserver:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000012bbe
@property(nonatomic) long long currentSOSInteractiveState;
@property(nonatomic) long long currentSOSInitiationState;
- (_Bool)isSendingLocationUpdate;	// IMP=0x0000000000012a48
- (void)mostRecentLocationSentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001298e
- (void)stopSendingLocationUpdate;	// IMP=0x00000000000128ea
- (void)startSendingLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012830
- (void)willStartSendingLocationUpdate;	// IMP=0x000000000001278c
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)remoteSOSEngineProxy;	// IMP=0x00000000000122a6
@property(nonatomic, getter=isAllowedToMessageSOSContacts) _Bool allowedToMessageSOSContacts;
@property(nonatomic, getter=isAutomaticCallCountdownEnabled) _Bool automaticCallCountdownEnabled;
- (void)setLongPressTriggersEmergencySOS:(_Bool)arg1;	// IMP=0x0000000000012229
- (_Bool)longPressTriggersEmergencySOS;	// IMP=0x0000000000012210
- (void)dealloc;	// IMP=0x0000000000012152
- (id)init;	// IMP=0x0000000000011d77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
