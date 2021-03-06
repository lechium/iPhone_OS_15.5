//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/CXProviderHostProtocol-Protocol.h>
#import <CallKit/CXProviderVendorProtocol-Protocol.h>

@class NSString, NSURL;
@protocol CXCallSourceDelegate, CXProviderVendorProtocol, OS_dispatch_queue;

@interface CXCallSource : NSObject <CXProviderHostProtocol, CXProviderVendorProtocol>
{
    _Bool _connected;	// 8 = 0x8
    id <CXCallSourceDelegate> _delegate;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000026b48
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <CXCallSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)handleAudioSessionActivationStateChangedTo:(_Bool)arg1;	// IMP=0x000000000002698e
- (oneway void)handleActionTimeout:(id)arg1;	// IMP=0x00000000000267dc
- (oneway void)commitTransaction:(id)arg1;	// IMP=0x000000000002662a
- (void)actionCompleted:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000262c5
- (oneway void)actionCompleted:(id)arg1;	// IMP=0x00000000000262a6
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025fa4
- (void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000025b65
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;	// IMP=0x0000000000025b46
- (void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000002588c
- (oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;	// IMP=0x000000000002586d
- (void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000025598
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;	// IMP=0x0000000000025579
- (void)reportAudioFinishedForCallWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002522a
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;	// IMP=0x000000000002520b
- (void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024e91
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;	// IMP=0x0000000000024e72
- (void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024af8
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;	// IMP=0x0000000000024ad9
- (void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000002475f
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;	// IMP=0x0000000000024740
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000024318
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;	// IMP=0x00000000000242ec
- (void)reportCallWithUUID:(id)arg1 updated:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023e5e
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;	// IMP=0x0000000000023e3f
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000239c0
- (oneway void)registerWithConfiguration:(id)arg1;	// IMP=0x000000000002388c
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023876
@property(readonly, nonatomic, getter=isPermittedToUseBluetoothAccessories) _Bool permittedToUseBluetoothAccessories;
@property(readonly, nonatomic, getter=isPermittedToUsePrivateAPI) _Bool permittedToUsePrivateAPI;
@property(readonly, nonatomic, getter=isPermittedToUsePublicAPI) _Bool permittedToUsePublicAPI;
@property(readonly, nonatomic) CDStruct_6ad76789 auditToken;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, copy, nonatomic) NSURL *bundleURL;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) id <CXProviderVendorProtocol> vendorProtocolDelegate;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000023608

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

