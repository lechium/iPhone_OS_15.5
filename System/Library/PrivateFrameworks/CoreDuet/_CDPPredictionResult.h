//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface _CDPPredictionResult : NSObject
{
    NSMutableDictionary *_scoresForMembers;	// 8 = 0x8
    NSArray *_rankedMembers;	// 16 = 0x10
    double _weight;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000052d4b
@property double weight; // @synthesize weight=_weight;
@property(retain) NSMutableDictionary *scoresForMembers; // @synthesize scoresForMembers=_scoresForMembers;
- (id)rankedMembersPassingThreshold:(double)arg1;	// IMP=0x0000000000052bbf
- (id)rankedCandidates:(id)arg1;	// IMP=0x0000000000052bad
- (id)rankedMembers;	// IMP=0x0000000000052b34
- (id)rankedMembers:(id)arg1;	// IMP=0x0000000000052a04
- (id)initByMergingPredictionResults:(id)arg1;	// IMP=0x0000000000052230
- (id)initWithMembers:(id)arg1 andScores:(id)arg2;	// IMP=0x00000000000520f7
- (void)commonInit;	// IMP=0x000000000005209a

@end

