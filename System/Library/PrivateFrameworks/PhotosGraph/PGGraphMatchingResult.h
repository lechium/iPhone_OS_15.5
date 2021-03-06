//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/NSCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary, PGGraphNode;
@protocol PGGraphRelatableEvent;

@interface PGGraphMatchingResult : NSObject <NSCopying>
{
    PGGraphNode<PGGraphRelatableEvent> *_event;	// 8 = 0x8
    NSDictionary *_keywords;	// 16 = 0x10
    double _score;	// 24 = 0x18
    NSMutableDictionary *_context;	// 32 = 0x20
}

+ (id)matchingDescriptionWithEventNode:(id)arg1;	// IMP=0x00000000005a369a
- (void).cxx_destruct;	// IMP=0x00000000005a35d2
@property(readonly, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
@property(nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) PGGraphNode<PGGraphRelatableEvent> *event; // @synthesize event=_event;
- (id)debugDescription;	// IMP=0x00000000005a32bf
- (id)description;	// IMP=0x00000000005a3203
- (unsigned long long)hash;	// IMP=0x00000000005a31ed
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005a31d2
- (_Bool)isEqualToResult:(id)arg1;	// IMP=0x00000000005a3130
- (void)enumerateContextItems:(CDUnknownBlockType)arg1;	// IMP=0x00000000005a309c
- (id)sortedCriteria;	// IMP=0x00000000005a2ff0
@property(readonly, nonatomic) NSDictionary *keywords; // @synthesize keywords=_keywords;
- (id)_highestScoredContextItemWithPreferredRelatedType:(unsigned long long)arg1;	// IMP=0x00000000005a2efc
- (id)_contextItemsSortedByScoreAscending:(_Bool)arg1;	// IMP=0x00000000005a2e0f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005a2d73
- (id)localEndDate;	// IMP=0x00000000005a2d1e
- (id)localStartDate;	// IMP=0x00000000005a2cc9
- (void)setContextItem:(id)arg1 forRelatedType:(unsigned long long)arg2;	// IMP=0x00000000005a2c47
- (id)contextItemForRelatedType:(unsigned long long)arg1;	// IMP=0x00000000005a2be0
- (void)clearKeywordsForRelatedType:(unsigned long long)arg1;	// IMP=0x00000000005a2b4c
- (void)addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2;	// IMP=0x00000000005a29fe
- (id)keywordsForRelatedType:(unsigned long long)arg1;	// IMP=0x00000000005a2997
- (id)initWithEvent:(id)arg1;	// IMP=0x00000000005a2902

@end

