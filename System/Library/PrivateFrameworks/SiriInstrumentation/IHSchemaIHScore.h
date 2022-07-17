//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface IHSchemaIHScore
{
    float _score;	// 8 = 0x8
    float _upperBoundary;	// 12 = 0xc
    float _lowerBoundary;	// 16 = 0x10
    struct {
        unsigned int score:1;
        unsigned int upperBoundary:1;
        unsigned int lowerBoundary:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) float lowerBoundary; // @synthesize lowerBoundary=_lowerBoundary;
@property(nonatomic) float upperBoundary; // @synthesize upperBoundary=_upperBoundary;
@property(nonatomic) float score; // @synthesize score=_score;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001a4cb9
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001a4bfb
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001a4a0e
- (unsigned long long)hash;	// IMP=0x00000000001a46f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a459a
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a4504
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a44f7
- (void)deleteLowerBoundary;	// IMP=0x00000000001a44cc
@property(nonatomic) _Bool hasLowerBoundary;
- (void)deleteUpperBoundary;	// IMP=0x00000000001a4454
@property(nonatomic) _Bool hasUpperBoundary;
- (void)deleteScore;	// IMP=0x00000000001a43de
@property(nonatomic) _Bool hasScore;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003487db

@end
