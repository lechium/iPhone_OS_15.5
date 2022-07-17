//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface FLOWSchemaFLOWLanguageConfidenceMatrix
{
    NSArray *_languageConfidenceArrays;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000154627
@property(copy, nonatomic) NSArray *languageConfidenceArrays; // @synthesize languageConfidenceArrays=_languageConfidenceArrays;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000154399
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001542db
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000153fc4
- (unsigned long long)hash;	// IMP=0x0000000000153fa7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000153e25
- (void)writeTo:(id)arg1;	// IMP=0x0000000000153cf5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000153b18
- (id)languageConfidenceArraysAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000153afb
- (unsigned long long)languageConfidenceArraysCount;	// IMP=0x0000000000153ade
- (void)addLanguageConfidenceArrays:(id)arg1;	// IMP=0x0000000000153a64
- (void)deleteLanguageConfidenceArrays;	// IMP=0x0000000000153a52
- (void)clearLanguageConfidenceArrays;	// IMP=0x0000000000153a35
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000343a36
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003439fe

@end
