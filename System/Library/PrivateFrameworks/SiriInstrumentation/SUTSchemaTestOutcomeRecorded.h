//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SUTSchemaTestOutcomeRecorded
{
    int _testOutcome;	// 8 = 0x8
    struct {
        unsigned int testOutcome:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) int testOutcome; // @synthesize testOutcome=_testOutcome;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002fff32
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002ffe74
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002ffd0e
- (unsigned long long)hash;	// IMP=0x00000000002ffce3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ffc3e
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ffc13
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ffc06
- (void)deleteTestOutcome;	// IMP=0x00000000002ffbdc
@property(nonatomic) _Bool hasTestOutcome;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035e0e7

@end
