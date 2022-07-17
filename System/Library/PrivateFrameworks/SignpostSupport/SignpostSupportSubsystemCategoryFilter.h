//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostPredicateProducer-Protocol.h>

@class NSMutableDictionary, NSPredicate;

@interface SignpostSupportSubsystemCategoryFilter : NSObject <SignpostPredicateProducer>
{
    NSMutableDictionary *_subsystemsDict;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006c38
@property(readonly, nonatomic) NSMutableDictionary *subsystemsDict; // @synthesize subsystemsDict=_subsystemsDict;
- (id)debugDescription;	// IMP=0x0000000000006837
- (void)addEntry:(id)arg1;	// IMP=0x0000000000006592
- (void)addSubsystem:(id)arg1 category:(id)arg2;	// IMP=0x0000000000006500
- (id)_initWithEntries:(id)arg1;	// IMP=0x000000000000633e
- (_Bool)matchesSubsystem:(id)arg1 category:(id)arg2;	// IMP=0x0000000000006248
- (id)liveStreamingPredicate;	// IMP=0x0000000000006231
@property(readonly, nonatomic) NSPredicate *predicateEquivalent;
- (id)_predicateEquivalentWithIsSimplified:(_Bool)arg1;	// IMP=0x0000000000005fd6
- (id)_subpredicatesForSubsystemsWithIsSimplified:(_Bool)arg1;	// IMP=0x0000000000005ab6
@property(readonly, nonatomic) unsigned long long _compoundPredicateType;
- (void)_fixupToSupportFramerateCalculation;	// IMP=0x0000000000005a58
- (void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2;	// IMP=0x0000000000005a52
@property(readonly, nonatomic) _Bool _wantsNotSubsystem;
- (_Bool)passesSubsystem:(id)arg1 category:(id)arg2;	// IMP=0x0000000000005a42

@end
