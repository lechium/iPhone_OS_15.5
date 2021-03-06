//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthMobilityDaemon/HDFeatureAvailabilityExtension-Protocol.h>
#import <HealthMobilityDaemon/HDMobilityRegionSupportedDeterminer-Protocol.h>

@class HDFeatureAvailabilityManager, HDProfile, NSString;
@protocol HDRegionAvailabilityProviding;

@interface HDMobilityWalkingSteadinessFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension, HDMobilityRegionSupportedDeterminer>
{
    HDProfile *_profile;	// 8 = 0x8
    long long _currentOnboardingVersion;	// 16 = 0x10
    id <HDRegionAvailabilityProviding> _supportedRegionProvider;	// 24 = 0x18
    HDFeatureAvailabilityManager *_manager;	// 32 = 0x20
    long long __unitTest_currentOnboardingVersionOverride;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000095f4
@property(nonatomic) long long _unitTest_currentOnboardingVersionOverride; // @synthesize _unitTest_currentOnboardingVersionOverride=__unitTest_currentOnboardingVersionOverride;
- (_Bool)_localRegionCheckWithCountryCode:(id)arg1;	// IMP=0x00000000000094e7
- (id)_onboardingCompletionsForHighestVersionWithError:(id *)arg1;	// IMP=0x00000000000093a9
- (_Bool)_determineIsSupportedWithOnboardingCompletions:(id)arg1 regionCheckBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008fcb
- (id)_onboardedCountryCodeSupportedStateWithError:(id *)arg1;	// IMP=0x0000000000008d73
- (long long)_currentOnboardingVersion;	// IMP=0x0000000000008d3b
- (_Bool)isRegionCodeSupportedOnLocalDevice:(id)arg1;	// IMP=0x0000000000008d29
- (id)isOnboardingCompletionWithRegionSupportedOnLocalDevicePresentWithError:(id *)arg1;	// IMP=0x0000000000008b2a
- (void)resetOnboardingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008b14
- (void)removeFeatureSettingValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008a79
- (void)setFeatureSettingNumber:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000089de
- (void)setFeatureSettingString:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008943
- (void)setFeatureSettingData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000088a8
- (void)saveOnboardingCompletion:(id)arg1 settings:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000855a
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 countryCodeProvenance:(long long)arg2 date:(id)arg3 settings:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000083e7
- (id)regionAvailabilityWithError:(id *)arg1;	// IMP=0x00000000000083d1
- (id)featureAvailabilityRequirementsWithError:(id *)arg1;	// IMP=0x00000000000082b2
- (id)pairedFeatureAttributesWithError:(id *)arg1;	// IMP=0x000000000000829c
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)arg1;	// IMP=0x0000000000008286
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)arg1;	// IMP=0x0000000000008270
- (id)onboardedCountryCodeSupportedStateWithError:(id *)arg1;	// IMP=0x000000000000825e
- (id)onboardingEligibilityForCountryCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000813f
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000810a
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008080
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)arg1;	// IMP=0x0000000000007e81
- (id)highestOnboardingVersionCompletedWithError:(id *)arg1;	// IMP=0x0000000000007e6b
- (void)getFeatureOnboardingRecordWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007de1
- (id)featureOnboardingRecordWithError:(id *)arg1;	// IMP=0x0000000000007d34
@property(readonly, copy, nonatomic) NSString *featureIdentifier;
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000000007d08
- (void)registerObserver:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000007cf2
- (id)canCompleteOnboardingWhileBypassingDeviceForDemoDataPurposesWithCountryCode:(id)arg1;	// IMP=0x0000000000007c7e
- (id)initWithProfile:(id)arg1 regionAvailabilityProvider:(id)arg2;	// IMP=0x0000000000007b6d

@end

