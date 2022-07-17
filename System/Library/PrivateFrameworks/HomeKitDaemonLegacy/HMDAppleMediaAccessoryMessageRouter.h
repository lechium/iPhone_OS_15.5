//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDMessageRouter-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMFMessageDispatcher, NSString, NSUUID;
@protocol HMDAppleMediaAccessoryMessageRouterDataSource;

@interface HMDAppleMediaAccessoryMessageRouter : HMFObject <HMFLogging, HMDMessageRouter>
{
    id <HMDAppleMediaAccessoryMessageRouterDataSource> _dataSource;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    HMFMessageDispatcher *_messageDispatcher;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x000000000065150b
- (void).cxx_destruct;	// IMP=0x00000000006514cb
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDAppleMediaAccessoryMessageRouterDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x0000000000651422
- (id)dataSourceDeviceForMessage:(id)arg1;	// IMP=0x00000000006512e2
- (void)relayMessage:(id)arg1 device:(id)arg2 allowRemoteRelayFromPrimary:(_Bool)arg3;	// IMP=0x0000000000650eab
- (void)routeMessage:(id)arg1 allowRemoteRelayFromPrimary:(_Bool)arg2 localHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000650c65
- (void)routeMessage:(id)arg1 localHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000650c4e
- (id)initWithIdentifier:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000650b85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
