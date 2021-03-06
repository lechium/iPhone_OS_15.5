//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PushKit/PKComplicationXPCClient-Protocol.h>
#import <PushKit/PKFileProviderXPCClient-Protocol.h>
#import <PushKit/PKUserNotificationsConnectionClient-Protocol.h>
#import <PushKit/PKVoIPXPCClient-Protocol.h>

@class NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, PKPushRegistryDelegate;

@interface PKPushRegistry : NSObject <PKVoIPXPCClient, PKComplicationXPCClient, PKFileProviderXPCClient, PKUserNotificationsConnectionClient>
{
    int _voipToken;	// 8 = 0x8
    int _complicationToken;	// 12 = 0xc
    int _fileProviderToken;	// 16 = 0x10
    int _outstandingVoIPPushes;	// 20 = 0x14
    NSSet *_desiredPushTypes;	// 24 = 0x18
    id <PKPushRegistryDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_ivarQueue;	// 48 = 0x30
    NSMutableDictionary *_pushTypeToToken;	// 56 = 0x38
    NSMutableDictionary *_pushTypeToConnection;	// 64 = 0x40
    double _lastReportedCallTime;	// 72 = 0x48
}

+ (void)_assertIfCallKitNotLinked;	// IMP=0x00000000000047a6
+ (id)_pushTypeToMachServiceName;	// IMP=0x00000000000030a7
- (void).cxx_destruct;	// IMP=0x0000000000005b53
@property(nonatomic) double lastReportedCallTime; // @synthesize lastReportedCallTime=_lastReportedCallTime;
@property(nonatomic) int outstandingVoIPPushes; // @synthesize outstandingVoIPPushes=_outstandingVoIPPushes;
@property(nonatomic) int fileProviderToken; // @synthesize fileProviderToken=_fileProviderToken;
@property(nonatomic) int complicationToken; // @synthesize complicationToken=_complicationToken;
@property(nonatomic) int voipToken; // @synthesize voipToken=_voipToken;
@property(retain, nonatomic) NSMutableDictionary *pushTypeToConnection; // @synthesize pushTypeToConnection=_pushTypeToConnection;
@property(retain, nonatomic) NSMutableDictionary *pushTypeToToken; // @synthesize pushTypeToToken=_pushTypeToToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // @synthesize ivarQueue=_ivarQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <PKPushRegistryDelegate> delegate; // @synthesize delegate=_delegate;
- (id)pushTokenForType:(id)arg1;	// IMP=0x0000000000005871
@property(copy) NSSet *desiredPushTypes; // @synthesize desiredPushTypes=_desiredPushTypes;
- (void)_renewConnectionForPushTypeIfRegistered:(id)arg1;	// IMP=0x00000000000052fa
- (id)_createConnectionForPushType:(id)arg1;	// IMP=0x0000000000005081
- (void)_unregisterForPushType:(id)arg1;	// IMP=0x0000000000004ddc
- (void)_registerForPushType:(id)arg1;	// IMP=0x0000000000004a43
- (void)_noteIncomingCallReported;	// IMP=0x00000000000049c0
- (void)_terminateAppIfThereAreUnhandledVoIPPushes;	// IMP=0x00000000000048d6
- (_Bool)_selfTaskHasEntitlement:(struct __CFString *)arg1;	// IMP=0x0000000000004859
- (void)remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000463b
- (void)remoteUserNotificationRegistrationSucceededWithDeviceToken:(id)arg1;	// IMP=0x0000000000004437
- (void)fileProviderRegistrationFailed;	// IMP=0x0000000000004383
- (void)fileProviderPayloadReceived:(id)arg1;	// IMP=0x00000000000041ae
- (void)fileProviderRegistrationSucceededWithDeviceToken:(id)arg1;	// IMP=0x0000000000003faa
- (void)complicationRegistrationFailed;	// IMP=0x0000000000003ef6
- (void)complicationPayloadReceived:(id)arg1;	// IMP=0x0000000000003d21
- (void)complicationRegistrationSucceededWithDeviceToken:(id)arg1;	// IMP=0x0000000000003b1d
- (void)voipRegistrationFailed;	// IMP=0x0000000000003a69
- (void)voipPayloadReceived:(id)arg1 mustPostCall:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003777
- (void)voipRegistrationSucceededWithDeviceToken:(id)arg1;	// IMP=0x0000000000003573
- (void)dealloc;	// IMP=0x000000000000352a
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000031f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

