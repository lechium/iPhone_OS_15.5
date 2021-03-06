//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKFeatureAvailabilityRequirement-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementSeedIsNotExpired <HKFeatureAvailabilityRequirement>
{
}

+ (id)requirementIdentifier;	// IMP=0x00000000001c1dcd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c1e89
- (id)isSatisfiedWithOnboardingEligibility:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c1e4d
@property(readonly, nonatomic) NSString *requirementDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

