//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKFeatureAvailabilityRequirement-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementHealthAppIsNotHidden : NSObject <HKFeatureAvailabilityRequirement>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c6248
+ (id)requirementIdentifier;	// IMP=0x00000000001c611d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c6256
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c6250
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c623d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c61b3
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c613e
@property(readonly, nonatomic) NSString *requirementDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
