//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface ASRSchemaASRPhrase
{
    NSArray *_interpretations;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002e9fd
@property(copy, nonatomic) NSArray *interpretations; // @synthesize interpretations=_interpretations;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002e76f
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000002e6b1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000002e39a
- (unsigned long long)hash;	// IMP=0x000000000002e37d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e1fb
- (void)writeTo:(id)arg1;	// IMP=0x000000000002e0cb
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002deee
- (id)interpretationsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002ded1
- (unsigned long long)interpretationsCount;	// IMP=0x000000000002deb4
- (void)addInterpretations:(id)arg1;	// IMP=0x000000000002de3a
- (void)deleteInterpretations;	// IMP=0x000000000002de28
- (void)clearInterpretations;	// IMP=0x000000000002de0b
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033036d
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000330335

@end
