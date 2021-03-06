//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLXSchemaCDMTurnInput, NSData;

@interface NLXSchemaCDMRequestStarted
{
    NLXSchemaCDMTurnInput *_currentTurnInput;	// 8 = 0x8
    _Bool _hasCurrentTurnInput;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000080991
@property(nonatomic) _Bool hasCurrentTurnInput; // @synthesize hasCurrentTurnInput=_hasCurrentTurnInput;
@property(retain, nonatomic) NLXSchemaCDMTurnInput *currentTurnInput; // @synthesize currentTurnInput=_currentTurnInput;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000008085f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000807a1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000008061c
- (unsigned long long)hash;	// IMP=0x00000000000805ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008047d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000803f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000803e9
- (void)deleteCurrentTurnInput;	// IMP=0x00000000000803d5
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000335644
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033560c

@end

