//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDPlaceSummaryLayoutUnitFactoid : PBCodable <NSCopying>
{
    unsigned int _factoidIndex;	// 8 = 0x8
    struct {
        unsigned int has_factoidIndex:1;
    } _flags;	// 12 = 0xc
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000da3363
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000da3562
- (unsigned long long)hash;	// IMP=0x0000000000da351c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000da3461
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000da33ff
- (void)copyTo:(id)arg1;	// IMP=0x0000000000da33aa
- (void)writeTo:(id)arg1;	// IMP=0x0000000000da337f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000da3370
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000da3303
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000da32f1
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000da3214
- (id)jsonRepresentation;	// IMP=0x0000000000da3205
- (id)dictionaryRepresentation;	// IMP=0x0000000000da3137
- (id)description;	// IMP=0x0000000000da3088
@property(nonatomic) _Bool hasFactoidIndex;
@property(nonatomic) unsigned int factoidIndex;

@end

