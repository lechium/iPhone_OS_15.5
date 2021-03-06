//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDBulletinBoardNotificationServiceGroup, HMDHome, HMDService, HMFMessageDispatcher, NSObject, NSPredicate, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    _Bool _enabled;	// 16 = 0x10
    NSPredicate *_condition;	// 24 = 0x18
    HMDBulletinBoardNotificationServiceGroup *_notificationServiceGroup;	// 32 = 0x20
    NSUUID *_messageTargetUUID;	// 40 = 0x28
    HMDService *_service;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMFMessageDispatcher *_msgDispatcher;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000025e93d
+ (id)logCategory;	// IMP=0x000000000025e90d
+ (_Bool)supportsBulletinNotificationGroup:(id)arg1;	// IMP=0x000000000025e83f
- (void).cxx_destruct;	// IMP=0x000000000025da67
@property(retain) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSPredicate *condition; // @synthesize condition=_condition;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000025d89b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025d5b1
- (id)attributeDescriptions;	// IMP=0x000000000025d458
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;	// IMP=0x000000000025d240
- (void)_updateAccessoryBulletinNotificationManagerWithEnabled:(_Bool)arg1 condition:(id)arg2 forMessage:(id)arg3;	// IMP=0x000000000025cb72
- (void)registerForCharacteristicNotifications;	// IMP=0x000000000025caab
- (id)dumpState;	// IMP=0x000000000025c940
- (void)_updateLocalSettingsWithEnabled:(_Bool)arg1 condition:(id)arg2 forMessage:(id)arg3;	// IMP=0x000000000025c6c5
- (void)_handleBulletinBoardNotificationCommitRequest:(id)arg1;	// IMP=0x000000000025c44b
- (void)configureBulletinNotification;	// IMP=0x000000000025c40e
@property(readonly) HMDHome *home;
@property(retain, nonatomic) HMDBulletinBoardNotificationServiceGroup *notificationServiceGroup; // @synthesize notificationServiceGroup=_notificationServiceGroup;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)registerNotificationHandlers;	// IMP=0x000000000025bf0f
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000025ba92
- (void)dealloc;	// IMP=0x000000000025ba24
- (id)initWithService:(id)arg1 enabled:(_Bool)arg2 condition:(id)arg3;	// IMP=0x000000000025b8c8
- (id)initWithService:(id)arg1;	// IMP=0x000000000025b74b
- (id)init;	// IMP=0x000000000025b6d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

