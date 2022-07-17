//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDMediaAccessoryAdvertisement, HMDMediaProfile, NSDictionary, NSString;

@interface HMDMediaAccessory <HMFLogging>
{
    HMDMediaAccessoryAdvertisement *_advertisement;	// 32 = 0x20
    HMDMediaProfile *_mediaProfile;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004b9656
- (void).cxx_destruct;	// IMP=0x00000000004b9266
@property(readonly) HMDMediaProfile *mediaProfile; // @synthesize mediaProfile=_mediaProfile;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b91bc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b912e
- (id)dumpSimpleState;	// IMP=0x00000000004b9027
- (id)dumpState;	// IMP=0x00000000004b8f20
- (void)removeHostedAccessory:(id)arg1;	// IMP=0x00000000004b8f1a
- (void)addHostedAccessory:(id)arg1;	// IMP=0x00000000004b8f14
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000004b8aa5
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x00000000004b89e9
- (void)handleUpdatedPassword:(id)arg1;	// IMP=0x00000000004b89e3
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;	// IMP=0x00000000004b89dd
- (long long)reachableTransports;	// IMP=0x00000000004b8926
- (void)setRemotelyReachable:(_Bool)arg1;	// IMP=0x00000000004b87d5
- (void)notifyConnectivityChangedWithReachabilityState:(_Bool)arg1;	// IMP=0x00000000004b8759
- (void)handleUpdatedAdvertisement:(id)arg1;	// IMP=0x00000000004b866f
- (void)setAdvertisement:(id)arg1;	// IMP=0x00000000004b852f
@property(readonly, copy) HMDMediaAccessoryAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (void)handleRoomChanged:(id)arg1;	// IMP=0x00000000004b822f
- (void)handleRoomNameChanged:(id)arg1;	// IMP=0x00000000004b808e
- (id)transportReports;	// IMP=0x00000000004b8086
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;	// IMP=0x00000000004b7f77
- (id)name;	// IMP=0x00000000004b7ef0
- (_Bool)providesHashRouteID;	// IMP=0x00000000004b7ee8
- (void)removeAdvertisement:(id)arg1;	// IMP=0x00000000004b7d33
- (void)addAdvertisement:(id)arg1;	// IMP=0x00000000004b7bac
- (id)_createMediaProfile;	// IMP=0x00000000004b7b76
- (_Bool)_shouldFilterAccessoryProfile:(id)arg1;	// IMP=0x00000000004b7b2b
- (void)_registerForMessages;	// IMP=0x00000000004b7a57
- (unsigned long long)supportedTransports;	// IMP=0x00000000004b7a4c
- (id)init;	// IMP=0x00000000004b79df
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x00000000004b777f
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
