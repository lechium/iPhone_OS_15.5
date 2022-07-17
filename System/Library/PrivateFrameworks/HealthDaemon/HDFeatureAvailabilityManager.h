//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDFeatureAvailabilityExtension-Protocol.h>
#import <HealthDaemon/HDFeatureSettingsManagerObserver-Protocol.h>
#import <HealthDaemon/HDOnboardingCompletionManagerObserver-Protocol.h>
#import <HealthDaemon/HDPairedDeviceCapabilityProvidingDelegate-Protocol.h>
#import <HealthDaemon/HDRegionAvailabilityProvidingDelegate-Protocol.h>
#import <HealthDaemon/HDRemoteFeatureAvailabilityProvidingDelegate-Protocol.h>

@class HDFeatureAvailabilityOnboardingEligibilityDeterminer, HDProfile, HKFeatureAvailabilityRequirementSet, HKObserverSet, NSString, NSUUID;
@protocol HDPairedDeviceCapabilityProviding, HDPairedFeatureAttributesProviding, HDRegionAvailabilityProviding, HDRemoteFeatureAvailabilityProviding, OS_dispatch_queue, OS_os_log;

@interface HDFeatureAvailabilityManager : NSObject <HDFeatureSettingsManagerObserver, HDOnboardingCompletionManagerObserver, HDPairedDeviceCapabilityProvidingDelegate, HDRegionAvailabilityProvidingDelegate, HDRemoteFeatureAvailabilityProvidingDelegate, HDFeatureAvailabilityExtension>
{
    HDProfile *_profile;	// 8 = 0x8
    NSObject<OS_os_log> *_loggingCategory;	// 16 = 0x10
    NSString *_featureIdentifier;	// 24 = 0x18
    long long _currentOnboardingVersion;	// 32 = 0x20
    NSUUID *_pairedDeviceCapability;	// 40 = 0x28
    id <HDPairedDeviceCapabilityProviding> _pairedDeviceCapabilityProvider;	// 48 = 0x30
    id <HDPairedFeatureAttributesProviding> _pairedFeatureAttributesProvider;	// 56 = 0x38
    id <HDRegionAvailabilityProviding> _regionAvailabilityProvider;	// 64 = 0x40
    id <HDRemoteFeatureAvailabilityProviding> _remoteAvailabilityProvider;	// 72 = 0x48
    HDFeatureAvailabilityOnboardingEligibilityDeterminer *_onboardingEligibilityDeterminer;	// 80 = 0x50
    HKFeatureAvailabilityRequirementSet *_requirements;	// 88 = 0x58
    HKObserverSet *_observers;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_queue;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000206a56
@property(nonatomic) long long currentOnboardingVersion; // @synthesize currentOnboardingVersion=_currentOnboardingVersion;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (void)remoteFeatureAvailabilityProviderDidUpdate:(id)arg1;	// IMP=0x00000000002068f4
- (void)regionAvailabilityProvidingDidUpdate:(id)arg1;	// IMP=0x0000000000206770
- (void)pairedDeviceCapabilitiesDidUpdate:(id)arg1;	// IMP=0x0000000000206622
- (void)featureSettingsManager:(id)arg1 didUpdateSettingsForFeatureIdentifier:(id)arg2;	// IMP=0x000000000020649e
- (void)onboardingCompletionManager:(id)arg1 didUpdateOnboardingCompletionsForFeatureIdentifier:(id)arg2;	// IMP=0x0000000000206350
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000000002062e8
- (void)registerObserver:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000205f12
- (void)resetOnboardingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000020585c
- (void)removeFeatureSettingValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000205506
- (void)setFeatureSettingString:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000020518b
- (void)setFeatureSettingNumber:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000204e10
- (void)setFeatureSettingData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000204a95
- (void)saveOnboardingCompletion:(id)arg1 settings:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000020432e
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 countryCodeProvenance:(long long)arg2 date:(id)arg3 settings:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002041e0
- (id)regionAvailabilityWithError:(id *)arg1;	// IMP=0x00000000002041ca
- (id)featureAvailabilityRequirementsWithError:(id *)arg1;	// IMP=0x00000000002041bc
- (id)pairedFeatureAttributesWithError:(id *)arg1;	// IMP=0x00000000002041a6
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)arg1;	// IMP=0x0000000000204162
- (id)onboardedCountryCodeSupportedStateWithError:(id *)arg1;	// IMP=0x0000000000204095
- (id)onboardingEligibilityForCountryCode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000203fd4
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000203de6
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)arg1;	// IMP=0x00000000002036b2
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000203628
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)arg1;	// IMP=0x0000000000203540
- (id)highestOnboardingVersionCompletedWithError:(id *)arg1;	// IMP=0x0000000000203253
- (void)getFeatureOnboardingRecordWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002031c9
- (id)featureOnboardingRecordWithError:(id *)arg1;	// IMP=0x0000000000202835
- (void)dealloc;	// IMP=0x000000000020275d
@property(readonly, copy) NSString *description;
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 availabilityRequirements:(id)arg3 currentOnboardingVersion:(long long)arg4 pairedDeviceCapability:(id)arg5 pairedDeviceCapabilityProvider:(id)arg6 pairedFeatureAttributesProvider:(id)arg7 regionAvailabilityProvider:(id)arg8 remoteAvailabilityProvider:(id)arg9 onboardingEligibilityDeterminer:(id)arg10 loggingCategory:(id)arg11;	// IMP=0x0000000000202473
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 availabilityRequirements:(id)arg3 currentOnboardingVersion:(long long)arg4 pairedDeviceCapability:(id)arg5 pairedDeviceCapabilityProvider:(id)arg6 pairedFeatureAttributesProvider:(id)arg7 regionAvailabilityProvider:(id)arg8 remoteAvailabilityProvider:(id)arg9 loggingCategory:(id)arg10;	// IMP=0x00000000002022ea
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 pairedDeviceCapability:(id)arg4 regionAvailabilityProvider:(id)arg5 loggingCategory:(id)arg6 pairedDeviceCapabilityProvider:(id)arg7 remoteAvailabilityProvider:(id)arg8 availabilityRequirements:(id)arg9;	// IMP=0x00000000002020e7
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 pairedDeviceCapability:(id)arg4 regionAvailabilityProvider:(id)arg5 loggingCategory:(id)arg6 pairedDeviceCapabilityProvider:(id)arg7 remoteAvailabilityProvider:(id)arg8;	// IMP=0x00000000002020b2
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 pairedDeviceCapability:(id)arg4 regionAvailabilityProvider:(id)arg5 loggingCategory:(id)arg6 pairedDeviceCapabilityProvider:(id)arg7;	// IMP=0x0000000000201fb1
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 pairedDeviceCapability:(id)arg4 regionAvailabilityProvider:(id)arg5 loggingCategory:(id)arg6 remoteAvailabilityProvider:(id)arg7 availabilityRequirements:(id)arg8;	// IMP=0x0000000000201e87
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 pairedDeviceCapability:(id)arg4 regionAvailabilityProvider:(id)arg5 loggingCategory:(id)arg6 remoteAvailabilityProvider:(id)arg7;	// IMP=0x0000000000201d86
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 regionAvailabilityProvider:(id)arg4 loggingCategory:(id)arg5;	// IMP=0x0000000000201d5f
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 loggingCategory:(id)arg4;	// IMP=0x0000000000201c95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
