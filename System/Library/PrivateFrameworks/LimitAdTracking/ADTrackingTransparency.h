//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADTrackingTransparency : NSObject
{
}

- (id)appTrackingServiceProxy:(id)arg1;	// IMP=0x0000000000002b7d
- (id)appTrackingXPCConnection:(CDUnknownBlockType)arg1 withInvalidation:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002a73
@property(nonatomic) _Bool personalizedAds;
@property(readonly, nonatomic) long long latestVersionForPersonalizedAdsConsent;
@property(nonatomic) long long acknowledgedVersionForPersonalizedAds;
@property(readonly, nonatomic) _Bool personalizedAdsAvailableForAppStore;
- (void)personalizedAdsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001fde
@property(readonly, nonatomic) _Bool personalizedAdsAvailable;
@property(readonly, nonatomic) long long personalizedAdsSwitchDisabledReason;
@property(readonly, nonatomic) _Bool personalizedAdsSwitchEnabled;
- (_Bool)isPersonalizedAdsScreenTimeRestricted;	// IMP=0x0000000000001b14
@property(nonatomic) _Bool crossAppTrackingAllowed;
@property(readonly, nonatomic) long long crossAppTrackingAllowedSwitchDisabledReason;
- (long long)accountRestrictionReason;	// IMP=0x00000000000017d9
- (_Bool)shouldDisplayPAUI;	// IMP=0x00000000000014dc
- (long long)accountLevelSwitchDisabledReason;	// IMP=0x0000000000001106
- (_Bool)_isUserManagedRestricted;	// IMP=0x0000000000001035
- (_Bool)_isUserEDURestricted;	// IMP=0x0000000000000fea
@property(readonly, nonatomic) _Bool crossAppTrackingAllowedSwitchEnabled;
- (_Bool)_userAllowedToChangeSettings;	// IMP=0x0000000000000e00

@end

