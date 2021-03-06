//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCoreTelephonyClient, MISSING_TYPE, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;
@protocol CSDEmergencyCallbackCapabilities, CSDTelephonyCallCapabilitiesDelegate, OS_dispatch_queue;

@interface CSDTelephonyCallCapabilities : NSObject
{
    _Bool _capabilitiesValid;	// 8 = 0x8
    _Bool _emergencyCallbackModeEnabled;	// 9 = 0x9
    NSArray *_secondaryThumperAccounts;	// 16 = 0x10
    id <CSDTelephonyCallCapabilitiesDelegate> _delegate;	// 24 = 0x18
    NSDictionary *_senderIdentityCapabilitiesStateByUUID;	// 32 = 0x20
    NSString *_localThumperDeviceID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSSet *_subscriptions;	// 56 = 0x38
    NSMutableDictionary *_lastSavedAccountIDByCapability;	// 64 = 0x40
    CSDCoreTelephonyClient *_coreTelephonyClient;	// 72 = 0x48
    id <CSDEmergencyCallbackCapabilities> _emergencyCallbackCapabilities;	// 80 = 0x50
    NSArray *_localThumperAccounts;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000017cd7e
@property(nonatomic, getter=isEmergencyCallbackModeEnabled) _Bool emergencyCallbackModeEnabled; // @synthesize emergencyCallbackModeEnabled=_emergencyCallbackModeEnabled;
@property(copy, nonatomic) NSArray *localThumperAccounts; // @synthesize localThumperAccounts=_localThumperAccounts;
@property(readonly, nonatomic) id <CSDEmergencyCallbackCapabilities> emergencyCallbackCapabilities; // @synthesize emergencyCallbackCapabilities=_emergencyCallbackCapabilities;
@property(readonly, nonatomic) CSDCoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(readonly, nonatomic) NSMutableDictionary *lastSavedAccountIDByCapability; // @synthesize lastSavedAccountIDByCapability=_lastSavedAccountIDByCapability;
@property(copy, nonatomic) NSSet *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(nonatomic, getter=areCapabilitiesValid) _Bool capabilitiesValid; // @synthesize capabilitiesValid=_capabilitiesValid;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *localThumperDeviceID; // @synthesize localThumperDeviceID=_localThumperDeviceID;
@property(copy, nonatomic) NSDictionary *senderIdentityCapabilitiesStateByUUID; // @synthesize senderIdentityCapabilitiesStateByUUID=_senderIdentityCapabilitiesStateByUUID;
@property(nonatomic) __weak id <CSDTelephonyCallCapabilitiesDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldUpdateSubscriptions;	// IMP=0x001000000017cb4a
- (void)emergencyCallbackModeDidChangeForAllSubscriptionsForClient:(id)arg1;	// IMP=0x001000000017cac9
- (void)client:(id)arg1 subscription:(id)arg2 capabilitiesDidChange:(id)arg3;	// IMP=0x001000000017c95f
- (void)client:(id)arg1 capabilitiesDidChange:(id)arg2;	// IMP=0x001000000017c8c4
- (void)client:(id)arg1 subscription:(id)arg2 callCapabilitiesDidChange:(id)arg3;	// IMP=0x001000000017c783
- (void)subscriptionsDidChangeForClient:(id)arg1;	// IMP=0x001000000017c668
- (void)_updateThumperAccountState;	// IMP=0x001000000017bc9c
- (MISSING_TYPE *)_updateEmergencyCallbackModeEnabledState;	// IMP=0x001000000017bb7e
- (void)_updateSystemCapabilitiesStateForSubscription:(id)arg1 capabilitiesState:(id)arg2;	// IMP=0x001000000017b996
- (id)_senderIdentityCapabilitiesStateForSubscription:(id)arg1;	// IMP=0x001000000017b73e
- (void)_updateCallCapabilitiesForSubscription:(id)arg1 capabilitiesState:(id)arg2;	// IMP=0x001000000017b5e6
- (void)_updateSubscriptions;	// IMP=0x001000000017ab97
- (void)_updateState;	// IMP=0x001000000017ab37
- (id)_subscriptionWithUUID:(id)arg1;	// IMP=0x001000000017a93c
- (void)setCapabilityInfo:(id)arg1 forSubscription:(id)arg2 senderIdentityCapabilitiesState:(id)arg3;	// IMP=0x001000000017a33e
- (void)setCallCapabilities:(id)arg1 forSenderIdentityCapabilitiesState:(id)arg2;	// IMP=0x001000000017a12c
- (id)telephonySubscriptionLabelIdentifierForSenderIdentityUUID:(id)arg1;	// IMP=0x001000000017a0dc
- (id)secondaryThumperAccountForRegisteredDeviceID:(id)arg1;	// IMP=0x0010000000179f37
- (id)secondaryThumperAccountForAccountID:(id)arg1;	// IMP=0x0010000000179d55
- (void)endEmergencyCallbackMode;	// IMP=0x0010000000179ce1
- (void)invalidateAndRefreshThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;	// IMP=0x0010000000179b72
- (void)invalidateAndRefreshVoLTECallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;	// IMP=0x0010000000179a03
- (void)invalidateAndRefreshWiFiCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;	// IMP=0x0010000000179894
- (void)setThumperCallingAllowed:(_Bool)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;	// IMP=0x00100000001796ec
- (void)setThumperCallingAssociatedAccountID:(id)arg1;	// IMP=0x00100000001794e3
@property(copy, nonatomic) NSString *associatedThumperAccountID;
- (void)setThumperCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0010000000179147
- (void)setWiFiCallingRoamingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0010000000178ece
- (void)setWiFiCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0010000000178d56
- (void)setVoLTECallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0010000000178bde
- (id)primaryThumperAccountUsingDevices:(id)arg1 outgoingCallerIDURI:(id)arg2 requireMatchingCallerIDURI:(_Bool)arg3 requireAvailableDeviceSlots:(_Bool)arg4;	// IMP=0x0010000000178290
@property(readonly, nonatomic, getter=isEmergencyCallbackPossible) _Bool emergencyCallbackPossible;
@property(copy, nonatomic) NSArray *secondaryThumperAccounts; // @synthesize secondaryThumperAccounts=_secondaryThumperAccounts;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithQueue:(id)arg1 coreTelephonyClient:(id)arg2 emergencyCallbackCapabilities:(id)arg3;	// IMP=0x0010000000177bdf
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000177b31

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

