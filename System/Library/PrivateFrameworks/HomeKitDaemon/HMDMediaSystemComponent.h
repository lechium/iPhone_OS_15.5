//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessory, HMDMediaProfile, HMMediaSystemRole, NSObject, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDMediaSystemComponent : HMFObject <NSSecureCoding, HMFDumpState, HMFLogging>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    HMMediaSystemRole *_role;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    HMDAccessory *_accessory;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_propertyQueue;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006ea779
+ (id)logCategory;	// IMP=0x00000000006ea749
+ (id)componentsWithLeftComponent:(id)arg1 leftAccessory:(id)arg2 rightComponent:(id)arg3 rightAccessory:(id)arg4;	// IMP=0x00000000006ea434
+ (_Bool)decodeComponents:(id)arg1 leftUUID:(id *)arg2 leftAccessory:(id *)arg3 rightUUID:(id *)arg4 rightAccessory:(id *)arg5;	// IMP=0x00000000006ea139
+ (id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;	// IMP=0x00000000006e9e17
+ (id)accessoryForMediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;	// IMP=0x00000000006e9c9c
- (void).cxx_destruct;	// IMP=0x00000000006e9b15
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006e99f1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006e98f3
- (void)setRole:(id)arg1;	// IMP=0x00000000006e9828
@property(readonly, nonatomic) HMMediaSystemRole *role; // @synthesize role=_role;
@property(readonly, nonatomic) __weak HMDMediaProfile *mediaProfile;
- (id)serialize;	// IMP=0x00000000006e942b
- (id)dumpState;	// IMP=0x00000000006e9423
- (void)dealloc;	// IMP=0x00000000006e933e
- (id)logIdentifier;	// IMP=0x00000000006e92ee
- (id)attributeDescriptions;	// IMP=0x00000000006e912f
- (id)privateDescription;	// IMP=0x00000000006e911d
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 role:(id)arg3;	// IMP=0x00000000006e901c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

