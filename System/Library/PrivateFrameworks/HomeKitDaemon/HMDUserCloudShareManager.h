//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDUserCloudShareControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDHomeManager, HMDUserCloudShareController, HMFMessageDispatcher, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDUserCloudShareManager : NSObject <HMFMessageReceiver, HMDUserCloudShareControllerDelegate>
{
    NSUUID *_identifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientQueue;	// 16 = 0x10
    HMDHomeManager *_homeManager;	// 24 = 0x18
    HMFMessageDispatcher *_messageDispatcher;	// 32 = 0x20
    HMDUserCloudShareController *_userCloudShareController;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x000000000003dc5a
- (void).cxx_destruct;	// IMP=0x000000000003c615
@property(readonly, nonatomic) HMDUserCloudShareController *userCloudShareController; // @synthesize userCloudShareController=_userCloudShareController;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x000000000003c54b
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleXPCConnectionInvalidated:(id)arg1;	// IMP=0x000000000003c488
- (void)_handleDeregisterRequest:(id)arg1;	// IMP=0x000000000003c340
- (void)handleRemoteUserClientCloudShareRepairRequest:(id)arg1;	// IMP=0x000000000003c28f
- (void)handleRemoteUserClientCloudShareRequest:(id)arg1;	// IMP=0x000000000003c1de
- (void)_handleRegisterRequest:(id)arg1;	// IMP=0x000000000003bc89
- (void)_handleLocalHomeDataRemovedNotification:(id *)arg1;	// IMP=0x000000000003bc18
- (void)_handleUserSettingsUpdatedNotification:(id)arg1;	// IMP=0x000000000003bba7
- (void)_handleEnableMultiUserChangedNotification:(id)arg1;	// IMP=0x000000000003bb36
- (void)_postMultiUserStatusChangedNotification;	// IMP=0x000000000003bb22
- (void)_handleAccessoryAdded:(id)arg1;	// IMP=0x000000000003ba71
- (void)handleUsersChangedNotification:(id)arg1;	// IMP=0x000000000003ba00
- (void)handleHomeChangedNotification:(id)arg1;	// IMP=0x000000000003b98f
- (id)currentDateForUserCloudShareController:(id)arg1;	// IMP=0x000000000003b976
- (id)userCloudShareController:(id)arg1 timerWithInterval:(double)arg2;	// IMP=0x000000000003b939
- (void)userCloudShareController:(id)arg1 wakeClientForRepairWithContainerID:(id)arg2;	// IMP=0x000000000003b7ff
- (void)userCloudShareController:(id)arg1 wakeClientWithContainerID:(id)arg2;	// IMP=0x000000000003b6c5
- (void)userCloudShareController:(id)arg1 sendRepairInfo:(id)arg2 toConnection:(id)arg3 home:(id)arg4 containerID:(id)arg5;	// IMP=0x000000000003b4a8
- (void)userCloudShareController:(id)arg1 sendShareRequestMessageWithConnection:(id)arg2 fromUser:(id)arg3 toUser:(id)arg4 home:(id)arg5 shareURL:(id)arg6 shareToken:(id)arg7 containerID:(id)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x000000000003b034
- (void)registerForMessages;	// IMP=0x000000000003ae94
- (void)configureWithMessageDispatcher:(id)arg1;	// IMP=0x000000000003ade3
- (id)initWithHomeManager:(id)arg1 dependency:(id)arg2;	// IMP=0x000000000003aca5
- (id)initWithHomeManager:(id)arg1;	// IMP=0x000000000003ac41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
