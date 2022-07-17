//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface RRSchemaRREntityPoolResolveEnded
{
    NSArray *_queryResults;	// 8 = 0x8
    int _outcome;	// 16 = 0x10
    struct {
        unsigned int outcome:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000002d16ea
@property(nonatomic) int outcome; // @synthesize outcome=_outcome;
@property(copy, nonatomic) NSArray *queryResults; // @synthesize queryResults=_queryResults;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002d13de
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002d1320
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002d0f8d
- (unsigned long long)hash;	// IMP=0x00000000002d0f3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d0d69
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d0c02
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d0bf5
- (void)deleteOutcome;	// IMP=0x00000000002d0bcb
@property(nonatomic) _Bool hasOutcome;
- (id)queryResultsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002d0b69
- (unsigned long long)queryResultsCount;	// IMP=0x00000000002d0b4c
- (void)addQueryResults:(id)arg1;	// IMP=0x00000000002d0ad2
- (void)deleteQueryResults;	// IMP=0x00000000002d0ac0
- (void)clearQueryResults;	// IMP=0x00000000002d0aa3
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000035aaf6
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035aabe

@end
