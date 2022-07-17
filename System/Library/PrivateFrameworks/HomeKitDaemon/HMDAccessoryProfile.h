//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessory, HMFMessageDispatcher, NSArray, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAccessoryProfile : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding>
{
    HMFMessageDispatcher *_msgDispatcher;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSUUID *_uniqueIdentifier;	// 24 = 0x18
    HMDAccessory *_accessory;	// 32 = 0x20
    NSArray *_services;	// 40 = 0x28
    NSString *_logIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000077610a
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0000000000776102
+ (id)logCategory;	// IMP=0x00000000007760d2
- (void).cxx_destruct;	// IMP=0x0000000000776007
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) NSArray *services; // @synthesize services=_services;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000775e8a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000775cc3
- (id)findServiceWithType:(id)arg1;	// IMP=0x0000000000775af0
- (id)runtimeState;	// IMP=0x0000000000775ae3
- (void)removeCloudData;	// IMP=0x0000000000775add
- (void)unconfigure;	// IMP=0x0000000000775ad7
- (void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2;	// IMP=0x0000000000775916
- (void)handleInitialState;	// IMP=0x0000000000775910
- (void)registerForMessages;	// IMP=0x000000000077590a
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, copy) NSString *description;
- (id)dumpState;	// IMP=0x000000000077580d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000775739
@property(readonly) unsigned long long hash;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4;	// IMP=0x00000000007754e7
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3;	// IMP=0x0000000000775410
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end
