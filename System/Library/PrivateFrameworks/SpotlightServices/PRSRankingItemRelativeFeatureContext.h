//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface PRSRankingItemRelativeFeatureContext : NSObject
{
    unsigned short _relRankFeature;	// 8 = 0x8
    unsigned short _absRankFeature;	// 10 = 0xa
    NSPredicate *_predicate;	// 16 = 0x10
    CDUnknownBlockType _comparator;	// 24 = 0x18
}

+ (void)_associatedPRSL2FeatureFromRelativeFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short *)arg2 relRankFeatureOut:(unsigned short *)arg3;	// IMP=0x00000000000644ad
+ (id)_predicateForRelativeFeature:(unsigned long long)arg1 currentTime:(double)arg2;	// IMP=0x000000000006402a
+ (CDUnknownBlockType)_resultComparatorForRelativeFeature:(unsigned long long)arg1;	// IMP=0x0000000000063172
+ (id)_relativeContextsForFeatures:(id)arg1 currentTime:(double)arg2;	// IMP=0x0000000000062f85
+ (id)relativeContextsForResultSetWithCurrentTime:(double)arg1;	// IMP=0x0000000000062f65
+ (id)relativeContextsForBundle:(id)arg1 currentTime:(double)arg2;	// IMP=0x0000000000062dfb
- (void).cxx_destruct;	// IMP=0x000000000006465a
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) unsigned short absRankFeature; // @synthesize absRankFeature=_absRankFeature;
@property(nonatomic) unsigned short relRankFeature; // @synthesize relRankFeature=_relRankFeature;
- (id)initWithFeature:(unsigned long long)arg1 currentTime:(double)arg2;	// IMP=0x00000000000644db

@end
