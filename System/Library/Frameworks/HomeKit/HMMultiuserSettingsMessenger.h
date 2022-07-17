//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>

@class HMFMessageDispatcher, NSArray, NSString, NSUUID;

@interface HMMultiuserSettingsMessenger : NSObject <HMFLogging, HMFObject>
{
    HMFMessageDispatcher *_messageDispatcher;	// 8 = 0x8
    NSUUID *_messageTargetUUID;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000001c9346
+ (id)shortDescription;	// IMP=0x00000000001c9334
- (void).cxx_destruct;	// IMP=0x00000000001c90d3
@property(readonly, copy) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;	// IMP=0x00000000001c9051
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)sendFetchMultiuserSettingsRequest:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c8d1e
- (id)initWithMessageDispatcher:(id)arg1 messageTargetUUID:(id)arg2;	// IMP=0x00000000001c8c5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
