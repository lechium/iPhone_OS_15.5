//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface SISchemaCasinoRelationship
{
    NSString *_viewIDFrom;	// 8 = 0x8
    NSString *_viewIDTo;	// 16 = 0x10
    int _casinoFromType;	// 24 = 0x18
    struct {
        unsigned int casinoFromType:1;
    } _has;	// 28 = 0x1c
    _Bool _hasViewIDFrom;	// 32 = 0x20
    _Bool _hasViewIDTo;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x00000000000c4a56
@property(nonatomic) _Bool hasViewIDTo; // @synthesize hasViewIDTo=_hasViewIDTo;
@property(nonatomic) _Bool hasViewIDFrom; // @synthesize hasViewIDFrom=_hasViewIDFrom;
@property(nonatomic) int casinoFromType; // @synthesize casinoFromType=_casinoFromType;
@property(copy, nonatomic) NSString *viewIDTo; // @synthesize viewIDTo=_viewIDTo;
@property(copy, nonatomic) NSString *viewIDFrom; // @synthesize viewIDFrom=_viewIDFrom;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000c480a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000c474c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000c4551
- (unsigned long long)hash;	// IMP=0x00000000000c44dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c41df
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c410b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c3eaf
- (void)deleteCasinoFromType;	// IMP=0x00000000000c3e85
@property(nonatomic) _Bool hasCasinoFromType;
- (void)deleteViewIDTo;	// IMP=0x00000000000c3e2c
- (void)deleteViewIDFrom;	// IMP=0x00000000000c3e03
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033b4eb

@end

