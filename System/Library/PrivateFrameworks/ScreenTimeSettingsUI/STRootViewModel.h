//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, STUIUser;

__attribute__((visibility("hidden")))
@interface STRootViewModel : NSObject
{
    _Bool _canStopScreenTimeWithoutPasscode;	// 8 = 0x8
    _Bool _isCloudSyncEnabled;	// 9 = 0x9
    _Bool _isCommunicationSafetyReceivingRestricted;	// 10 = 0xa
    _Bool _isCommunicationSafetySendingRestricted;	// 11 = 0xb
    _Bool _isCommunicationSafetyNotificationEnabled;	// 12 = 0xc
    NSSet *_installedBundleIDs;	// 16 = 0x10
    NSDictionary *_installedBundleIDsByCategoryIdentifier;	// 24 = 0x18
    STUIUser *_me;	// 32 = 0x20
    NSArray *_children;	// 40 = 0x28
    NSArray *_devices;	// 48 = 0x30
}

+ (id)keyPathsForValuesAffectingHasWatchOSDevicesOnly;	// IMP=0x000000000007c78a
+ (id)keyPathsForValuesAffectingHasWatchOSDevices;	// IMP=0x000000000007c6f5
+ (id)keyPathsForValuesAffectingCanToggleWebsiteData;	// IMP=0x000000000007c5b5
+ (id)keyPathsForValuesAffectingForceParentalControls;	// IMP=0x000000000007c523
+ (id)keyPathsForValuesAffectingCanViewAskForTimeRequests;	// IMP=0x000000000007c498
+ (id)keyPathsForValuesAffectingCanSetUpFamily;	// IMP=0x000000000007c3f6
+ (id)keyPathsForValuesAffectingCanToggleCloudSyncData;	// IMP=0x000000000007c346
+ (id)keyPathsForValuesAffectingCanSignIn;	// IMP=0x000000000007c2a1
+ (id)keyPathsForValuesAffectingIsRemotelyManagedUserWithPasscode;	// IMP=0x000000000007c1c0
+ (id)keyPathsForValuesAffectingWebUsageEnabled;	// IMP=0x000000000007c15c
+ (id)keyPathsForValuesAffectingIsSharingUsageData;	// IMP=0x000000000007c089
+ (id)keyPathsForValuesAffectingCanStopSharingScreenTime;	// IMP=0x000000000007bfdc
+ (id)keyPathsForValuesAffectingCanStopScreenTime;	// IMP=0x000000000007beec
+ (id)keyPathsForValuesAffectingCanStartScreenTime;	// IMP=0x000000000007be45
+ (id)keyPathsForValuesAffectingScreenTimeEnabled;	// IMP=0x000000000007bde1
- (void).cxx_destruct;	// IMP=0x000000000007c8f6
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) _Bool isCommunicationSafetyNotificationEnabled; // @synthesize isCommunicationSafetyNotificationEnabled=_isCommunicationSafetyNotificationEnabled;
@property(readonly, nonatomic) _Bool isCommunicationSafetySendingRestricted; // @synthesize isCommunicationSafetySendingRestricted=_isCommunicationSafetySendingRestricted;
@property(readonly, nonatomic) _Bool isCommunicationSafetyReceivingRestricted; // @synthesize isCommunicationSafetyReceivingRestricted=_isCommunicationSafetyReceivingRestricted;
@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(copy, nonatomic) STUIUser *me; // @synthesize me=_me;
@property(copy, nonatomic) NSDictionary *installedBundleIDsByCategoryIdentifier; // @synthesize installedBundleIDsByCategoryIdentifier=_installedBundleIDsByCategoryIdentifier;
@property(copy, nonatomic) NSSet *installedBundleIDs; // @synthesize installedBundleIDs=_installedBundleIDs;
@property(nonatomic) _Bool isCloudSyncEnabled; // @synthesize isCloudSyncEnabled=_isCloudSyncEnabled;
@property(nonatomic) _Bool canStopScreenTimeWithoutPasscode; // @synthesize canStopScreenTimeWithoutPasscode=_canStopScreenTimeWithoutPasscode;
@property(readonly) _Bool hasWatchOSDevicesOnly;
@property(readonly) _Bool hasWatchOSDevices;
@property(readonly, nonatomic) _Bool shouldShowCompatibilityAlerts;
@property(readonly, nonatomic) _Bool canToggleWebsiteData;
@property(readonly, nonatomic) _Bool forceParentalControls;
@property(readonly, nonatomic) _Bool canViewAskForTimeRequests;
@property(readonly, nonatomic) _Bool canSetUpFamily;
@property(readonly, nonatomic) _Bool canToggleCloudSyncData;
@property(readonly, nonatomic) _Bool canSignIn;
@property(readonly, nonatomic) _Bool isRemotelyManagedUserWithPasscode;
@property(readonly, nonatomic, getter=isWebUsageEnabled) _Bool webUsageEnabled;
@property(readonly, nonatomic) _Bool isSharingUsageData;
@property(readonly, nonatomic) _Bool canStopSharingScreenTime;
@property(readonly, nonatomic) _Bool canStopScreenTime;
@property(readonly, nonatomic) _Bool canStartScreenTime;
@property(readonly, nonatomic, getter=isScreenTimeEnabled) _Bool screenTimeEnabled;
- (id)init;	// IMP=0x000000000007bd48

@end

