//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTSchemaMTError, NSData;

@interface MTSchemaMTBatchRequestFailed
{
    unsigned int _numParagraphFailures;	// 8 = 0x8
    MTSchemaMTError *_error;	// 16 = 0x10
    struct {
        unsigned int numParagraphFailures:1;
    } _has;	// 24 = 0x18
    _Bool _hasError;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000002297b1
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(retain, nonatomic) MTSchemaMTError *error; // @synthesize error=_error;
@property(nonatomic) unsigned int numParagraphFailures; // @synthesize numParagraphFailures=_numParagraphFailures;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000229606
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000229548
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000229360
- (unsigned long long)hash;	// IMP=0x0000000000229314
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022914e
- (void)writeTo:(id)arg1;	// IMP=0x00000000002290a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000228e45
- (void)deleteError;	// IMP=0x0000000000228e31
- (void)deleteNumParagraphFailures;	// IMP=0x0000000000228df2
@property(nonatomic) _Bool hasNumParagraphFailures;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000034fe4f
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034fe17

@end
