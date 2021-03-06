//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKObservableFeatureAvailabilityRequirement-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementWristDetectionIsEnabledForActiveWatch : NSObject <HKObservableFeatureAvailabilityRequirement>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001badb8
+ (id)requirementIdentifier;	// IMP=0x00000000001baab3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001badc6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001badc0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bad2e
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x00000000001bac97
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x00000000001bab68
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001baad4
@property(readonly, nonatomic) NSString *requirementDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

