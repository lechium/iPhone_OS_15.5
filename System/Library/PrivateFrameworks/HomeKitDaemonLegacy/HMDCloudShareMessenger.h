//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDHome, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDCloudShareMessengerDelegate, OS_dispatch_queue;

@interface HMDCloudShareMessenger : HMFObject <HMFLogging, HMFMessageReceiver>
{
    NSUUID *_messageTargetUUID;	// 8 = 0x8
    id <HMDCloudShareMessengerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMFMessageDispatcher *_messageDispatcher;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    CDUnknownBlockType _shareInvitationRetryHandler;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00000000002679cd
- (void).cxx_destruct;	// IMP=0x0000000000267138
@property(copy) CDUnknownBlockType shareInvitationRetryHandler; // @synthesize shareInvitationRetryHandler=_shareInvitationRetryHandler;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCloudShareMessengerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000267025
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (void)handleRequestInviteMessage:(id)arg1;	// IMP=0x0000000000266b87
- (void)handleInviteMessage:(id)arg1;	// IMP=0x0000000000266882
- (void)_sendShareInvitationData:(id)arg1 toDestination:(id)arg2 retryCount:(unsigned long long)arg3 activity:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000266529
- (void)requestShareInvitationDataFromUser:(id)arg1;	// IMP=0x0000000000266300
- (void)sendShareInvitationData:(id)arg1 toDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000026619d
- (void)sendShareInvitationData:(id)arg1 toUser:(id)arg2 minimumHomeKitVersion:(id)arg3 requiredSupportedFeatures:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000265e96
- (void)unconfigure;	// IMP=0x0000000000265d96
- (void)configure;	// IMP=0x0000000000265b7e
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 home:(id)arg3 messageDispatcher:(id)arg4;	// IMP=0x0000000000265a24
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 home:(id)arg3;	// IMP=0x000000000026596c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

