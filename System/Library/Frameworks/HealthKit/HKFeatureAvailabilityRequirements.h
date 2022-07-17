//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HKFeatureAvailabilityRequirements : NSObject
{
}

+ (id)countryIsSupportedOnWatchForFeatureWithIdentifier:(id)arg1 isSupportedIfCountryListMissing:(_Bool)arg2;	// IMP=0x00000000000b40c7
+ (id)wristDetectionIsEnabledForActiveWatch;	// IMP=0x00000000000b40ae
+ (id)seedIsNotExpiredForFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b4061
+ (id)profileIsNotFamilySetupPairingProfile;	// IMP=0x00000000000b4048
+ (id)onboardingRecordIsPresentForFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b3ffb
+ (id)onboardingRecordIsNotPresentForMutuallyExclusiveFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b3fae
+ (id)onboardingRecordIsNotPresentForFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b3f61
+ (id)onboardedAtLeastDaysAgo:(long long)arg1 featureIdentifier:(id)arg2;	// IMP=0x00000000000b3f05
+ (id)notInStoreDemoMode;	// IMP=0x00000000000b3eec
+ (id)notAgeGatedForUserDefaultsKey:(id)arg1;	// IMP=0x00000000000b3e9f
+ (id)mutuallyExclusiveFeatureIsOffWithIdentifier:(id)arg1 isOnIfSettingIsAbsent:(_Bool)arg2;	// IMP=0x00000000000b3e43
+ (id)heartRateIsEnabledInPrivacy;	// IMP=0x00000000000b3e2a
+ (id)healthAppIsNotHidden;	// IMP=0x00000000000b3e11
+ (id)featureIsOnWithIdentifier:(id)arg1 isOnIfSettingIsAbsent:(_Bool)arg2;	// IMP=0x00000000000b3db5
+ (id)featureIsNotRemotelyDisabledWithIdentifier:(id)arg1;	// IMP=0x00000000000b3d68
+ (id)featureFlagIsEnabled:(_Bool)arg1;	// IMP=0x00000000000b3d34
+ (id)countryIsSupportedOnLocalDeviceForFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b3ce7
+ (id)countryIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)arg1 isSupportedIfCountryListMissing:(_Bool)arg2;	// IMP=0x00000000000b3c8b
+ (id)capabilityIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b3c3e
+ (id)activeRemoteDeviceIsPresentForFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b3bf1

@end
