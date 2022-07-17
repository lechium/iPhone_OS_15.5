//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKFeatureAvailabilityRequirement-Protocol.h>

@class NSDateComponents, NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementOnboardedBeforeTimeAgo <HKFeatureAvailabilityRequirement>
{
    NSDateComponents *_dateComponents;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ca297
+ (id)requirementIdentifier;	// IMP=0x00000000001c9fac
- (void).cxx_destruct;	// IMP=0x00000000001ca3b7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ca31c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ca29f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ca28c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ca20d
- (id)isSatisfiedWithOnboardingRecord:(id)arg1 dataSource:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001ca05b
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithFeatureIdentifier:(id)arg1 daysBeforeCurrentDate:(long long)arg2;	// IMP=0x00000000001c9f35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
