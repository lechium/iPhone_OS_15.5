//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDUserCloudShareControllerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

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

+ (id)logCategory;	// IMP=0x0000000000039e0c
- (void).cxx_destruct;	// IMP=0x00000000000387c7
@property(readonly, nonatomic) HMDUserCloudShareController *userCloudShareController; // @synthesize userCloudShareController=_userCloudShareController;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x00000000000386fd
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleXPCConnectionInvalidated:(id)arg1;	// IMP=0x000000000003863a
- (void)_handleDeregisterRequest:(id)arg1;	// IMP=0x00000000000384f2
- (void)handleRemoteUserClientCloudShareRepairRequest:(id)arg1;	// IMP=0x0000000000038441
- (void)handleRemoteUserClientCloudShareRequest:(id)arg1;	// IMP=0x0000000000038390
- (void)_handleRegisterRequest:(id)arg1;	// IMP=0x0000000000037e3b
- (void)_handleLocalHomeDataRemovedNotification:(id *)arg1;	// IMP=0x0000000000037dca
- (void)_handleUserSettingsUpdatedNotification:(id)arg1;	// IMP=0x0000000000037d59
- (void)_handleEnableMultiUserChangedNotification:(id)arg1;	// IMP=0x0000000000037ce8
- (void)_postMultiUserStatusChangedNotification;	// IMP=0x0000000000037cd4
- (void)_handleAccessoryAdded:(id)arg1;	// IMP=0x0000000000037c23
- (void)handleUsersChangedNotification:(id)arg1;	// IMP=0x0000000000037bb2
- (void)handleHomeChangedNotification:(id)arg1;	// IMP=0x0000000000037b41
- (id)currentDateForUserCloudShareController:(id)arg1;	// IMP=0x0000000000037b28
- (id)userCloudShareController:(id)arg1 timerWithInterval:(double)arg2;	// IMP=0x0000000000037aeb
- (void)userCloudShareController:(id)arg1 wakeClientForRepairWithContainerID:(id)arg2;	// IMP=0x00000000000379b1
- (void)userCloudShareController:(id)arg1 wakeClientWithContainerID:(id)arg2;	// IMP=0x0000000000037877
- (void)userCloudShareController:(id)arg1 sendRepairInfo:(id)arg2 toConnection:(id)arg3 home:(id)arg4 containerID:(id)arg5;	// IMP=0x000000000003765a
- (void)userCloudShareController:(id)arg1 sendShareRequestMessageWithConnection:(id)arg2 fromUser:(id)arg3 toUser:(id)arg4 home:(id)arg5 shareURL:(id)arg6 shareToken:(id)arg7 containerID:(id)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000000371e6
- (void)registerForMessages;	// IMP=0x0000000000037046
- (void)configureWithMessageDispatcher:(id)arg1;	// IMP=0x0000000000036f95
- (id)initWithHomeManager:(id)arg1 dependency:(id)arg2;	// IMP=0x0000000000036e57
- (id)initWithHomeManager:(id)arg1;	// IMP=0x0000000000036df3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

