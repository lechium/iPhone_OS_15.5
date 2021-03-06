//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKFeatureAvailabilityRequirementEvaluationDataSource, NSNumber, NSString;

@protocol HKFeatureAvailabilityRequirement <NSObject, NSSecureCoding>
+ (NSString *)requirementIdentifier;
@property(readonly, nonatomic) NSString *requirementDescription;
- (NSNumber *)isSatisfiedWithDataSource:(HKFeatureAvailabilityRequirementEvaluationDataSource *)arg1 error:(id *)arg2;
@end

