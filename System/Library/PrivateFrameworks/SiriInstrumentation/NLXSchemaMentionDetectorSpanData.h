//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NLXSchemaMentionDetectorSpanData
{
    double _score;	// 8 = 0x8
    CDStruct_4b1634df _has;	// 16 = 0x10
}

@property(nonatomic) double score; // @synthesize score=_score;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000242e18
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000242d5a
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000242c2d
- (unsigned long long)hash;	// IMP=0x0000000000242b1a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000242a66
- (void)writeTo:(id)arg1;	// IMP=0x0000000000242a39
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000242a2c
- (void)deleteScore;	// IMP=0x0000000000242a01
@property(nonatomic) _Bool hasScore;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000351569

@end
