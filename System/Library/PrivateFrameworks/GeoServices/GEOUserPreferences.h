//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOUserPreferences : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _avoidHighways;	// 16 = 0x10
    _Bool _avoidTolls;	// 17 = 0x11
    struct {
        unsigned int has_avoidHighways:1;
        unsigned int has_avoidTolls:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000009845e5
- (void).cxx_destruct;	// IMP=0x00000000009849d1
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000098498b
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000984904
- (unsigned long long)hash;	// IMP=0x00000000009848a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000098479e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000984701
- (void)copyTo:(id)arg1;	// IMP=0x000000000098468f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000984601
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009845f2
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000984585
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000984573
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000984409
- (id)jsonRepresentation;	// IMP=0x00000000009842f7
- (id)dictionaryRepresentation;	// IMP=0x00000000009840be
- (id)description;	// IMP=0x000000000098400f
@property(nonatomic) _Bool hasAvoidHighways;
@property(nonatomic) _Bool avoidHighways;
@property(nonatomic) _Bool hasAvoidTolls;
@property(nonatomic) _Bool avoidTolls;

@end
