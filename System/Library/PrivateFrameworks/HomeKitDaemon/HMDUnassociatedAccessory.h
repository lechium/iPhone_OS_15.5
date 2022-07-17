//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLocking-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMDAccessoryAdvertisement, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDUnassociatedAccessory : HMFObject <HMFLogging, HMFMessageReceiver, HMFLocking, NSSecureCoding>
{
    NSUUID *_uuid;	// 8 = 0x8
    id <HMFLocking> _lock;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    HMAccessoryCategory *_category;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    long long _associationOptions;	// 48 = 0x30
    HMDAccessoryAdvertisement *_accessoryAdvertisement;	// 56 = 0x38
    HMFMessageDispatcher *_messageDispatcher;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000078ad46
+ (id)logCategory;	// IMP=0x000000000078ad16
+ (id)shortDescription;	// IMP=0x000000000078ad04
+ (id)otherAccessoryCategory;	// IMP=0x000000000078ac08
- (void).cxx_destruct;	// IMP=0x000000000078a8d2
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) HMDAccessoryAdvertisement *accessoryAdvertisement; // @synthesize accessoryAdvertisement=_accessoryAdvertisement;
@property(readonly) long long associationOptions; // @synthesize associationOptions=_associationOptions;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, setter=setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000078a659
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000078a4ec
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)messageDestination;	// IMP=0x000000000078a471
- (id)logIdentifier;	// IMP=0x000000000078a45f
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000078a3cf
- (void)unlock;	// IMP=0x000000000078a3b2
- (void)lock;	// IMP=0x000000000078a395
- (void)associateWithAccessoryAdvertisement:(id)arg1;	// IMP=0x000000000078a19e
- (void)identifyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000078a07b
- (void)_handleIdentify:(id)arg1;	// IMP=0x0000000000789ef9
@property(readonly, getter=isReachable) _Bool reachable;
- (void)updateCategoryWithCategoryIdentifier:(id)arg1;	// IMP=0x0000000000789db3
@property(retain) HMAccessoryCategory *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_registerForMessages;	// IMP=0x00000000007895b1
- (id)dumpDescription;	// IMP=0x000000000078947d
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1 additionalDescription:(id)arg2;	// IMP=0x0000000000789210
- (id)shortDescription;	// IMP=0x0000000000789175
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007890a1
@property(readonly) unsigned long long transportTypes;
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x0000000000788f47
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;	// IMP=0x0000000000788d85
- (id)init;	// IMP=0x0000000000788cdd

// Remaining properties
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end
