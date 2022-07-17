//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, _CDInteractionPolicy;

@interface _CDInteractionPolicies : NSObject
{
    unsigned long long _maxNumberOfInteractions;	// 8 = 0x8
    unsigned long long _maxNumberOfInteractionsDeletedInBatch;	// 16 = 0x10
    double _maxLifespanInSeconds;	// 24 = 0x18
    NSDictionary *_specialPoliciesForBundleIds;	// 32 = 0x20
    NSDictionary *_specialPoliciesForMechanisms;	// 40 = 0x28
    _CDInteractionPolicy *_defaultPolicy;	// 48 = 0x30
}

+ (id)limitArray:(id)arg1 toMaxCount:(unsigned long long)arg2;	// IMP=0x0000000000109bf1
+ (id)modifyDate:(id)arg1 usingPolicy:(id)arg2;	// IMP=0x0000000000109adf
+ (id)interactionPolicies;	// IMP=0x0000000000109894
- (void).cxx_destruct;	// IMP=0x000000000010bcad
- (void)readConfigurationPlist;	// IMP=0x000000000010b516
- (void)setupDefaultHardcodedPolicies;	// IMP=0x000000000010b1ea
- (id)description;	// IMP=0x000000000010ad3c
- (id)filterAndModifyInteractionsWithPolicies:(id)arg1 enforceDataLimits:(_Bool)arg2 enforcePrivacy:(_Bool)arg3;	// IMP=0x0000000000109c61
- (id)dateOfOldestAllowedInteractionForMechanism:(long long)arg1;	// IMP=0x0000000000109a56
- (id)dateOfOldestAllowedInteractionForWhitelistedFirstPartyBundleIds;	// IMP=0x0000000000109a35
@property(readonly) NSDate *dateOfOldestAllowedInteraction;
@property(readonly) unsigned long long maxNumberOfInteractionsDeleted;
@property(readonly) unsigned long long maxNumberOfInteractionsStored;
- (id)policyForMechanism:(long long)arg1;	// IMP=0x0000000000109985
- (id)whitelistedFirstPartyBundleIds;	// IMP=0x00000000001098f2
- (id)init;	// IMP=0x00000000001098a6

@end
