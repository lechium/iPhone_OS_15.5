//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface POMMESSchemaPOMMESPegasusQueryMetadata
{
    _Bool _hasLatitude;	// 8 = 0x8
    _Bool _hasLongitude;	// 9 = 0x9
    _Bool _hasCountryCode;	// 10 = 0xa
    _Bool _hasStorefront;	// 11 = 0xb
    _Bool _hasSiriLocale;	// 12 = 0xc
    struct {
        unsigned int hasLatitude:1;
        unsigned int hasLongitude:1;
        unsigned int hasCountryCode:1;
        unsigned int hasStorefront:1;
        unsigned int hasSiriLocale:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool hasSiriLocale; // @synthesize hasSiriLocale=_hasSiriLocale;
@property(nonatomic) _Bool hasStorefront; // @synthesize hasStorefront=_hasStorefront;
@property(nonatomic) _Bool hasCountryCode; // @synthesize hasCountryCode=_hasCountryCode;
@property(nonatomic) _Bool hasLongitude; // @synthesize hasLongitude=_hasLongitude;
@property(nonatomic) _Bool hasLatitude; // @synthesize hasLatitude=_hasLatitude;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002b898c
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002b88ce
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002b8615
- (unsigned long long)hash;	// IMP=0x00000000002b8579
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b83db
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b8308
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b7ebe
- (void)deleteHasSiriLocale;	// IMP=0x00000000002b7e94
@property(nonatomic) _Bool hasHasSiriLocale;
- (void)deleteHasStorefront;	// IMP=0x00000000002b7e1f
@property(nonatomic) _Bool hasHasStorefront;
- (void)deleteHasCountryCode;	// IMP=0x00000000002b7daa
@property(nonatomic) _Bool hasHasCountryCode;
- (void)deleteHasLongitude;	// IMP=0x00000000002b7d35
@property(nonatomic) _Bool hasHasLongitude;
- (void)deleteHasLatitude;	// IMP=0x00000000002b7cc2
@property(nonatomic) _Bool hasHasLatitude;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000358fd6

@end

