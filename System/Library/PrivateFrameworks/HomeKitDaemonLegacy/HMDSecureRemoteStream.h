//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFObject-Protocol.h>

@class HMDAWDRemoteSessionMetric, HMDDevice, HMDSecureRemoteStreamInternal, HMDUser, HMFPairingIdentity, NSArray, NSDate, NSNumber, NSObject, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDSecureRemoteStream : HMFMessageTransport <HMFLogging, HMFObject>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _open;	// 24 = 0x18
    _Bool _idle;	// 25 = 0x19
    _Bool _supportsSharedIdentities;	// 26 = 0x1a
    long long _qualityOfService;	// 32 = 0x20
    NSNumber *_maximumRemoteStreams;	// 40 = 0x28
    NSDate *_lastActivity;	// 48 = 0x30
    HMDDevice *_peerDevice;	// 56 = 0x38
    long long _role;	// 64 = 0x40
    NSUUID *_sessionID;	// 72 = 0x48
    HMDUser *_peer;	// 80 = 0x50
    HMFPairingIdentity *_peerIdentity;	// 88 = 0x58
    HMDSecureRemoteStreamInternal *_remoteSession;	// 96 = 0x60
    HMDDevice *_currentDevice;	// 104 = 0x68
    HMDAWDRemoteSessionMetric *_metric;	// 112 = 0x70
}

+ (id)logCategory;	// IMP=0x0000000000a706a9
- (void).cxx_destruct;	// IMP=0x0000000000a6c592
@property(retain, nonatomic) HMDAWDRemoteSessionMetric *metric; // @synthesize metric=_metric;
@property(nonatomic) _Bool supportsSharedIdentities; // @synthesize supportsSharedIdentities=_supportsSharedIdentities;
@property(readonly, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(retain, nonatomic) HMDSecureRemoteStreamInternal *remoteSession; // @synthesize remoteSession=_remoteSession;
@property(retain, nonatomic) HMFPairingIdentity *peerIdentity; // @synthesize peerIdentity=_peerIdentity;
@property(retain, nonatomic) HMDUser *peer; // @synthesize peer=_peer;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) long long role; // @synthesize role=_role;
- (id)logIdentifier;	// IMP=0x0000000000a6c45b
- (void)__handleDeviceRemovedFromAccount:(id)arg1;	// IMP=0x0000000000a6c3c9
- (void)__handleAccountRemovedFromRegistry:(id)arg1;	// IMP=0x0000000000a6c337
- (void)__handleRemovedIdentity:(id)arg1;	// IMP=0x0000000000a6c2a5
- (void)handleSecureMessage:(id)arg1 fromDevice:(id)arg2 fromTransport:(id)arg3;	// IMP=0x0000000000a6c1b2
- (void)handleCompletedMessage:(id)arg1 options:(id)arg2 responsePayload:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000a6c069
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a6bf9e
- (void)stop;	// IMP=0x0000000000a6bf4c
- (void)_closeWithError:(id)arg1;	// IMP=0x0000000000a6bdf4
- (void)closedWithError:(id)arg1;	// IMP=0x0000000000a6bd62
- (void)_configureWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a6b64f
- (void)startAndInvokeOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a6b591
@property(readonly, copy) NSDate *lastActivity; // @synthesize lastActivity=_lastActivity;
- (void)setIdle:(_Bool)arg1;	// IMP=0x0000000000a6b28c
@property(readonly, getter=isIdle) _Bool idle; // @synthesize idle=_idle;
@property(readonly, getter=isAuthenticated) _Bool authenticated;
- (void)setOpen:(_Bool)arg1;	// IMP=0x0000000000a6b0aa
@property(readonly, getter=isOpen) _Bool open; // @synthesize open=_open;
- (void)setMaximumRemoteStreams:(id)arg1;	// IMP=0x0000000000a6aee6
@property(readonly, copy) NSNumber *maximumRemoteStreams; // @synthesize maximumRemoteStreams=_maximumRemoteStreams;
@property long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(retain) HMDDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)dealloc;	// IMP=0x0000000000a6a7e6
- (id)initWithCurrentDevice:(id)arg1 peerDevice:(id)arg2 clientMode:(_Bool)arg3 sessionID:(id)arg4;	// IMP=0x0000000000a6a4d4

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly) Class superclass;

@end

