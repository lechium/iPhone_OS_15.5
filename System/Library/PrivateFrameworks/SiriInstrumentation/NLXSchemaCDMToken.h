//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

@interface NLXSchemaCDMToken
{
    NSString *_value;	// 8 = 0x8
    unsigned int _begin;	// 16 = 0x10
    unsigned int _end;	// 20 = 0x14
    _Bool _isSignificant;	// 24 = 0x18
    _Bool _isWhitespace;	// 25 = 0x19
    unsigned int _tokenIndex;	// 28 = 0x1c
    unsigned int _nonWhitespaceTokenIndex;	// 32 = 0x20
    NSString *_cleanValue;	// 40 = 0x28
    NSArray *_normalizedValues;	// 48 = 0x30
    struct {
        unsigned int begin:1;
        unsigned int end:1;
        unsigned int isSignificant:1;
        unsigned int isWhitespace:1;
        unsigned int tokenIndex:1;
        unsigned int nonWhitespaceTokenIndex:1;
    } _has;	// 56 = 0x38
    _Bool _hasValue;	// 60 = 0x3c
    _Bool _hasCleanValue;	// 61 = 0x3d
}

- (void).cxx_destruct;	// IMP=0x00000000000931b1
@property(nonatomic) _Bool hasCleanValue; // @synthesize hasCleanValue=_hasCleanValue;
@property(nonatomic) _Bool hasValue; // @synthesize hasValue=_hasValue;
@property(copy, nonatomic) NSArray *normalizedValues; // @synthesize normalizedValues=_normalizedValues;
@property(copy, nonatomic) NSString *cleanValue; // @synthesize cleanValue=_cleanValue;
@property(nonatomic) unsigned int nonWhitespaceTokenIndex; // @synthesize nonWhitespaceTokenIndex=_nonWhitespaceTokenIndex;
@property(nonatomic) unsigned int tokenIndex; // @synthesize tokenIndex=_tokenIndex;
@property(nonatomic) _Bool isWhitespace; // @synthesize isWhitespace=_isWhitespace;
@property(nonatomic) _Bool isSignificant; // @synthesize isSignificant=_isSignificant;
@property(nonatomic) unsigned int end; // @synthesize end=_end;
@property(nonatomic) unsigned int begin; // @synthesize begin=_begin;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000092ac0
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000092a02
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000925ae
- (unsigned long long)hash;	// IMP=0x0000000000092485
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000091f0e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000091c94
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009170c
- (id)normalizedValuesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000916ef
- (unsigned long long)normalizedValuesCount;	// IMP=0x00000000000916d2
- (void)addNormalizedValues:(id)arg1;	// IMP=0x0000000000091658
- (void)deleteNormalizedValues;	// IMP=0x0000000000091646
- (void)clearNormalizedValues;	// IMP=0x0000000000091629
- (void)deleteCleanValue;	// IMP=0x0000000000091615
- (void)deleteNonWhitespaceTokenIndex;	// IMP=0x00000000000915d6
@property(nonatomic) _Bool hasNonWhitespaceTokenIndex;
- (void)deleteTokenIndex;	// IMP=0x0000000000091561
@property(nonatomic) _Bool hasTokenIndex;
- (void)deleteIsWhitespace;	// IMP=0x00000000000914ec
@property(nonatomic) _Bool hasIsWhitespace;
- (void)deleteIsSignificant;	// IMP=0x0000000000091477
@property(nonatomic) _Bool hasIsSignificant;
- (void)deleteEnd;	// IMP=0x0000000000091402
@property(nonatomic) _Bool hasEnd;
- (void)deleteBegin;	// IMP=0x000000000009138f
@property(nonatomic) _Bool hasBegin;
- (void)deleteValue;	// IMP=0x0000000000091336
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000337094
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033705c

@end
