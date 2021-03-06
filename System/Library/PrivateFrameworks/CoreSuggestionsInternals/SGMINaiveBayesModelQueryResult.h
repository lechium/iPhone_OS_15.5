//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SGMITokenCounts;

@interface SGMINaiveBayesModelQueryResult : NSObject
{
    SGMITokenCounts *_mailCount;	// 8 = 0x8
    SGMITokenCounts *_unigramTokenCounts;	// 16 = 0x10
    SGMITokenCounts *_bigramTokenCounts;	// 24 = 0x18
    NSArray *_unigramQueriedTokensCount;	// 32 = 0x20
    NSArray *_bigramQueriedTokensCount;	// 40 = 0x28
    double _oldestTokenAge;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000022d7fd
@property(readonly) double oldestTokenAge; // @synthesize oldestTokenAge=_oldestTokenAge;
@property(readonly) NSArray *bigramQueriedTokensCount; // @synthesize bigramQueriedTokensCount=_bigramQueriedTokensCount;
@property(readonly) NSArray *unigramQueriedTokensCount; // @synthesize unigramQueriedTokensCount=_unigramQueriedTokensCount;
@property(readonly) SGMITokenCounts *bigramTokenCounts; // @synthesize bigramTokenCounts=_bigramTokenCounts;
@property(readonly) SGMITokenCounts *unigramTokenCounts; // @synthesize unigramTokenCounts=_unigramTokenCounts;
@property(readonly) SGMITokenCounts *mailCount; // @synthesize mailCount=_mailCount;
- (id)inferProbability;	// IMP=0x000000000022cfb0
- (id)initWithMailCount:(id)arg1 unigramTokenCounts:(id)arg2 bigramTokenCounts:(id)arg3 unigramQueriedTokensCount:(id)arg4 bigramQueriedTokensCount:(id)arg5 oldestTokenAge:(double)arg6;	// IMP=0x000000000022ce99

@end

