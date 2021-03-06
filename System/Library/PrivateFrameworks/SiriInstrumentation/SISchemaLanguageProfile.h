//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaLanguageProfile
{
    _Bool _hasL;	// 8 = 0x8
    NSData *_l;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001af379
@property(nonatomic) _Bool hasL; // @synthesize hasL=_hasL;
@property(copy, nonatomic) NSData *l; // @synthesize l=_l;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001af23c
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001af17e
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001aeff7
- (unsigned long long)hash;	// IMP=0x00000000001aefda
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001aee58
- (void)writeTo:(id)arg1;	// IMP=0x00000000001aedeb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001aec55
- (void)deleteL;	// IMP=0x00000000001aec41
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000348ee5

@end

