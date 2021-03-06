//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSCountedSet, NSSet, NSString;

@interface FCTopicalNode : NSObject <NSCopying>
{
    double _score;	// 8 = 0x8
    _Bool _scored;	// 16 = 0x10
    NSSet *_identifiers;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSSet *_displayedElements;	// 40 = 0x28
    NSCountedSet *_topicCollections;	// 48 = 0x30
    FCTopicalNode *_parent;	// 56 = 0x38
    NSSet *_children;	// 64 = 0x40
    double _scoreMultiplier;	// 72 = 0x48
    double _relatedness;	// 80 = 0x50
    double _specificity;	// 88 = 0x58
    double _parentRawScore;	// 96 = 0x60
    double _relatednessThreshold;	// 104 = 0x68
    double _relatednessKWeight;	// 112 = 0x70
    double _topicScoreWeight;	// 120 = 0x78
    double _highestScoringRelativeScoreMultiplier;	// 128 = 0x80
    NSString *_storedNodeIdentifier;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000033e1f
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000033446
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000329ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000329a2

@end

