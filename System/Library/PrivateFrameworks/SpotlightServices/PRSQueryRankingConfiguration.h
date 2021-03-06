//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSOrderedSet;

@interface PRSQueryRankingConfiguration : NSObject
{
    _Bool _allowAnonymousDataCollection;	// 8 = 0x8
    NSOrderedSet *_requiredAttributes;	// 16 = 0x10
    NSArray *_rankingQueries;	// 24 = 0x18
    unsigned long long _strongRankingQueryCount;	// 32 = 0x20
    unsigned long long _dominantRankingQueryCount;	// 40 = 0x28
    unsigned long long _dominatedRankingQueryCount;	// 48 = 0x30
    unsigned long long _shortcutBit;	// 56 = 0x38
    unsigned long long _highMatchBit;	// 64 = 0x40
    unsigned long long _lowMatchBit;	// 72 = 0x48
    unsigned long long _highRecencyBit;	// 80 = 0x50
    unsigned long long _lowRecencyBit;	// 88 = 0x58
    unsigned long long _rankingBitCount;	// 96 = 0x60
    double _minL2Score;	// 104 = 0x68
    double _maxAge;	// 112 = 0x70
    double _minCount;	// 120 = 0x78
    MISSING_TYPE *_fuzzyMatchMask;	// 128 = 0x80
    MISSING_TYPE *_fuzzyMatchCheck;	// 144 = 0x90
}

+ (void)updateMailVIP:(id)arg1 phoneFavorites:(id)arg2 meEmailAddresses:(id)arg3;	// IMP=0x0000000000015782
- (void).cxx_destruct;	// IMP=0x0000000000015b25
@property(nonatomic) double minCount; // @synthesize minCount=_minCount;
@property(nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
@property(nonatomic) double minL2Score; // @synthesize minL2Score=_minL2Score;
@property(nonatomic) MISSING_TYPE *fuzzyMatchCheck; // @synthesize fuzzyMatchCheck=_fuzzyMatchCheck;
@property(nonatomic) MISSING_TYPE *fuzzyMatchMask; // @synthesize fuzzyMatchMask=_fuzzyMatchMask;
@property(nonatomic) _Bool allowAnonymousDataCollection; // @synthesize allowAnonymousDataCollection=_allowAnonymousDataCollection;
@property(nonatomic) unsigned long long rankingBitCount; // @synthesize rankingBitCount=_rankingBitCount;
@property(nonatomic) unsigned long long lowRecencyBit; // @synthesize lowRecencyBit=_lowRecencyBit;
@property(nonatomic) unsigned long long highRecencyBit; // @synthesize highRecencyBit=_highRecencyBit;
@property(nonatomic) unsigned long long lowMatchBit; // @synthesize lowMatchBit=_lowMatchBit;
@property(nonatomic) unsigned long long highMatchBit; // @synthesize highMatchBit=_highMatchBit;
@property(nonatomic) unsigned long long shortcutBit; // @synthesize shortcutBit=_shortcutBit;
@property(nonatomic) unsigned long long dominatedRankingQueryCount; // @synthesize dominatedRankingQueryCount=_dominatedRankingQueryCount;
@property(nonatomic) unsigned long long dominantRankingQueryCount; // @synthesize dominantRankingQueryCount=_dominantRankingQueryCount;
@property(nonatomic) unsigned long long strongRankingQueryCount; // @synthesize strongRankingQueryCount=_strongRankingQueryCount;
@property(retain, nonatomic) NSArray *rankingQueries; // @synthesize rankingQueries=_rankingQueries;
@property(retain, nonatomic) NSOrderedSet *requiredAttributes; // @synthesize requiredAttributes=_requiredAttributes;

@end

