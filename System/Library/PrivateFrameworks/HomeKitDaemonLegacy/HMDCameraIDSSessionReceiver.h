//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDCameraRemoteStreamReceiverDestinationProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/IDSSessionDelegate-Protocol.h>

@class HMDCameraIDSSessionInviterDeviceVerifier, IDSSession, NSObject, NSString;
@protocol HMDCameraIDSSessionReceiverDelegate, OS_dispatch_queue;

@interface HMDCameraIDSSessionReceiver <IDSSessionDelegate, HMDCameraRemoteStreamReceiverDestinationProtocol>
{
    id <HMDCameraIDSSessionReceiverDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
    HMDCameraIDSSessionInviterDeviceVerifier *_sessionInviterDeviceVerifier;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00000000007abd9f
- (void).cxx_destruct;	// IMP=0x00000000007abd1d
@property(readonly, nonatomic) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier; // @synthesize sessionInviterDeviceVerifier=_sessionInviterDeviceVerifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <HMDCameraIDSSessionReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000007abc6a
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x00000000007aba85
- (void)sessionStarted:(id)arg1;	// IMP=0x00000000007ab94a
- (void)_receivedIDSSession:(id)arg1;	// IMP=0x00000000007ab4c8
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;	// IMP=0x00000000007ab0d0
- (void)_callSessionEndedWithError:(id)arg1;	// IMP=0x00000000007aaf14
- (void)_callSessionSetup:(id)arg1;	// IMP=0x00000000007aad58
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x00000000007aad52
- (void)dealloc;	// IMP=0x00000000007aac6d
@property(readonly, copy) NSString *remoteDestination;
@property(readonly) IDSSession *session;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 sessionInviterDeviceVerifier:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;	// IMP=0x00000000007aaab7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
