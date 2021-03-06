//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HearingUtilities/HCHeardControllerProtocol-Protocol.h>
#import <HearingUtilities/UNUserNotificationCenterDelegate-Protocol.h>

@class AXDispatchTimer, HCXPCMessage, NSArray, NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface AXHeardController : NSObject <HCHeardControllerProtocol, UNUserNotificationCenterDelegate>
{
    AXDispatchTimer *_transparencyHysteresisTimer;	// 8 = 0x8
    AXDispatchTimer *_shutdownTimer;	// 16 = 0x10
    _Bool _shouldShutdown;	// 24 = 0x18
    NSObject<OS_xpc_object> *_service;	// 32 = 0x20
    _Bool _finishedSetup;	// 40 = 0x28
    NSArray *_clients;	// 48 = 0x30
    NSDictionary *_handlers;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_personalAudioQueue;	// 64 = 0x40
    HCXPCMessage *_boostMessage;	// 72 = 0x48
}

+ (id)entitlementsForMessageID:(unsigned long long)arg1;	// IMP=0x000000000005b263
+ (id)sharedServer;	// IMP=0x000000000005b20e
- (void).cxx_destruct;	// IMP=0x000000000005f62b
@property(retain, nonatomic) HCXPCMessage *boostMessage; // @synthesize boostMessage=_boostMessage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *personalAudioQueue; // @synthesize personalAudioQueue=_personalAudioQueue;
- (void)registerFakeClient:(id)arg1;	// IMP=0x000000000005f54e
- (id)boostPriority:(id)arg1;	// IMP=0x000000000005f2e7
- (void)handleMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;	// IMP=0x000000000005f09c
- (void)addHandler:(id)arg1 andBlock:(CDUnknownBlockType)arg2 forMessageIdentifier:(unsigned long long)arg3;	// IMP=0x000000000005ef86
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ef55
- (unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)arg1;	// IMP=0x000000000005ed14
- (void)sendClientsMessageWithPayload:(id)arg1 excluding:(id)arg2;	// IMP=0x000000000005ea48
- (void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;	// IMP=0x000000000005e671
- (_Bool)sendMessage:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000005e4b6
- (void)handleNewConnection:(id)arg1;	// IMP=0x000000000005d777
@property(retain, nonatomic) NSDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSArray *clients; // @synthesize clients=_clients;
- (_Bool)connection:(id)arg1 hasEntitlementForMessage:(unsigned long long)arg2;	// IMP=0x000000000005d5b1
- (void)dealloc;	// IMP=0x000000000005d533
- (void)startServer;	// IMP=0x000000000005c4bd
- (void)updatePersonalAudioSettingsOnAccessories;	// IMP=0x000000000005c4b7
- (void)updateAnalytics;	// IMP=0x000000000005c4b1
- (void)shutdownIfPossible;	// IMP=0x000000000005bf52
- (void)continueSetup;	// IMP=0x000000000005be46
- (void)updateHearingControlCenterModule;	// IMP=0x000000000005b850
- (id)init;	// IMP=0x000000000005b41d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

