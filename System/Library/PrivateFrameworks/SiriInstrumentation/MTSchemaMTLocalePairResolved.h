//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTSchemaMTLocalePair, NSData;

@interface MTSchemaMTLocalePairResolved
{
    MTSchemaMTLocalePair *_localePair;	// 8 = 0x8
    _Bool _hasLocalePair;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000023750f
@property(nonatomic) _Bool hasLocalePair; // @synthesize hasLocalePair=_hasLocalePair;
@property(retain, nonatomic) MTSchemaMTLocalePair *localePair; // @synthesize localePair=_localePair;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002373dd
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000023731f
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000023719a
- (unsigned long long)hash;	// IMP=0x000000000023717d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000236ffb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000236f74
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000236f67
- (void)deleteLocalePair;	// IMP=0x0000000000236f53
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000351014
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000350fdc

@end

