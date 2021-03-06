//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKObservableFeatureAvailabilityRequirement-Protocol.h>

@class NSString;

@interface HKFeatureAvailabilityRequirementCountryIsSupportedOnActiveRemoteDevice <HKObservableFeatureAvailabilityRequirement>
{
    _Bool _isSupportedIfCountryListMissing;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003e763
+ (id)requirementIdentifier;	// IMP=0x000000000003e23c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003e7e9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003e76b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003e6a2
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x000000000003e630
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x000000000003e3ce
- (id)isSatisfiedWithOnboardingEligibility:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003e312
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithFeatureIdentifier:(id)arg1 isSupportedIfCountryListMissing:(_Bool)arg2;	// IMP=0x000000000003e264
- (id)initWithFeatureIdentifier:(id)arg1;	// IMP=0x000000000003e250

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

