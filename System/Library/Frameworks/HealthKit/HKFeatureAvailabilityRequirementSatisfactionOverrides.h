//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface HKFeatureAvailabilityRequirementSatisfactionOverrides : NSObject
{
    NSUserDefaults *_userDefaults;	// 8 = 0x8
    NSString *_featureIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001bb958
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)resetAllRequirementSatisfactionOverrides;	// IMP=0x00000000001bb73b
- (void)overrideSatisfactionOfRequirementWithIdentifier:(id)arg1 isSatisfied:(id)arg2;	// IMP=0x00000000001bb65d
- (id)overriddenRequirementIdentifiers;	// IMP=0x00000000001bb35c
- (id)overriddenSatisfactionOfRequirementWithIdentifier:(id)arg1;	// IMP=0x00000000001bb02b
- (id)initWithUserDefaults:(id)arg1 featureIdentifier:(id)arg2;	// IMP=0x00000000001baf80
- (id)initWithFeatureIdentifier:(id)arg1;	// IMP=0x00000000001baeff

@end
