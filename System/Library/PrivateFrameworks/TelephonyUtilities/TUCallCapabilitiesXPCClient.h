//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallCapabilitiesXPCClient-Protocol.h>
#import <TelephonyUtilities/TUCallCapabilitiesXPCServerActions-Protocol.h>

@class NSMapTable, NSString, NSXPCConnection, TUCallCapabilitiesState;
@protocol OS_dispatch_queue;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions>
{
    int _token;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
    NSMapTable *_delegateToQueue;	// 32 = 0x20
    TUCallCapabilitiesState *_state;	// 40 = 0x28
}

+ (id)callCapabilitiesServerXPCInterface;	// IMP=0x000000000004a400
+ (id)callCapabilitiesClientXPCInterface;	// IMP=0x000000000004a394
+ (void)setSynchronousServer:(id)arg1;	// IMP=0x0000000000047bcc
+ (id)synchronousServer;	// IMP=0x0000000000047bb3
+ (void)setAsynchronousServer:(id)arg1;	// IMP=0x0000000000047b9f
+ (id)asynchronousServer;	// IMP=0x0000000000047b86
- (void).cxx_destruct;	// IMP=0x000000000004a4ab
@property(retain, nonatomic) TUCallCapabilitiesState *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(readonly, nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_updateState:(id)arg1;	// IMP=0x000000000004a110
- (void)_retrieveState;	// IMP=0x0000000000049ebc
- (oneway void)capabilityStateUpdated:(id)arg1;	// IMP=0x0000000000049d90
- (void)invalidate;	// IMP=0x0000000000049cc6
- (oneway void)cancelPinRequestFromPrimaryDevice;	// IMP=0x0000000000049c14
- (oneway void)requestPinFromPrimaryDevice;	// IMP=0x0000000000049b62
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;	// IMP=0x00000000000498c2
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;	// IMP=0x0000000000049622
- (oneway void)endEmergencyCallbackMode;	// IMP=0x0000000000049570
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0000000000049464
- (oneway void)setThumperCallingAllowed:(_Bool)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;	// IMP=0x0000000000049326
- (oneway void)setThumperCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x000000000004921a
- (oneway void)setVoLTECallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x000000000004910e
- (oneway void)setWiFiCallingRoamingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0000000000049002
- (oneway void)setWiFiCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0000000000048ef6
- (oneway void)setRelayCallingEnabled:(_Bool)arg1 forDeviceWithID:(id)arg2;	// IMP=0x0000000000048dea
- (oneway void)setRelayCallingEnabled:(_Bool)arg1;	// IMP=0x0000000000048d1c
- (void)performDelegateCallbackBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000048a36
- (void)removeDelegate:(id)arg1;	// IMP=0x0000000000048933
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000048802
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000485cd
- (id)asynchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000484f6
- (id)asynchronousServer;	// IMP=0x0000000000048444
- (void)handleServerDisconnect;	// IMP=0x0000000000047eeb
- (void)dealloc;	// IMP=0x0000000000047ea1
- (id)init;	// IMP=0x0000000000047be0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
