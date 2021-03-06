//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGGraphMomentNode;

@interface PGMeaningfulEventMatchingCriteria
{
    _Bool _interestingForMeaningInference;	// 8 = 0x8
    PGGraphMomentNode *_momentNode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002f1193
@property(nonatomic) _Bool interestingForMeaningInference; // @synthesize interestingForMeaningInference=_interestingForMeaningInference;
@property(readonly, nonatomic) PGGraphMomentNode *momentNode; // @synthesize momentNode=_momentNode;
- (id)debugDescription;	// IMP=0x00000000002f10c4
- (double)_calculateMatchingScoreForPartOfDayWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 requiresStrictMatching:(_Bool)arg3;	// IMP=0x00000000002f0f77
- (void)_calculateMatchingScoreForLocationsWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x00000000002f0d17
- (void)_calculateMatchingScoreForPOIROIWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x00000000002f04d1
- (void)_calculateMatchingScoreForScenesWithRequiredCriteria:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x00000000002efeb4
- (double)matchingScoreWithCriteria:(id)arg1 failed:(_Bool *)arg2 isReliable:(_Bool *)arg3;	// IMP=0x00000000002ed680
- (id)matchingResultWithCriteria:(id)arg1;	// IMP=0x00000000002ed417
- (id)initWithMoment:(id)arg1;	// IMP=0x00000000002ecbb2

@end

