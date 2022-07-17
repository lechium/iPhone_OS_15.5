//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface ASRSchemaASRTokenTier1
{
    NSString *_text;	// 8 = 0x8
    NSString *_phoneSequence;	// 16 = 0x10
    NSString *_ipaPhoneSequence;	// 24 = 0x18
    _Bool _hasText;	// 32 = 0x20
    _Bool _hasPhoneSequence;	// 33 = 0x21
    _Bool _hasIpaPhoneSequence;	// 34 = 0x22
}

- (void).cxx_destruct;	// IMP=0x0000000000041341
@property(nonatomic) _Bool hasIpaPhoneSequence; // @synthesize hasIpaPhoneSequence=_hasIpaPhoneSequence;
@property(nonatomic) _Bool hasPhoneSequence; // @synthesize hasPhoneSequence=_hasPhoneSequence;
@property(nonatomic) _Bool hasText; // @synthesize hasText=_hasText;
@property(copy, nonatomic) NSString *ipaPhoneSequence; // @synthesize ipaPhoneSequence=_ipaPhoneSequence;
@property(copy, nonatomic) NSString *phoneSequence; // @synthesize phoneSequence=_phoneSequence;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000410cd
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000004100f
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000040e05
- (unsigned long long)hash;	// IMP=0x0000000000040d98
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000409a9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000408ba
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000408ad
- (void)deleteIpaPhoneSequence;	// IMP=0x0000000000040899
- (void)deletePhoneSequence;	// IMP=0x0000000000040870
- (void)deleteText;	// IMP=0x0000000000040847
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000331500
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003314c8

@end
