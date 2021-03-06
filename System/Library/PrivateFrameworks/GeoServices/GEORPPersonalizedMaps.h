//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPAddress;

@interface GEORPPersonalizedMaps : PBCodable <NSCopying>
{
    GEORPAddress *_address;	// 8 = 0x8
    int _addressType;	// 16 = 0x10
    int _placeType;	// 20 = 0x14
    CDStruct_2d9f5d20 _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e4bfab
- (void).cxx_destruct;	// IMP=0x0000000000e4c680
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e4c5d7
- (unsigned long long)hash;	// IMP=0x0000000000e4c54e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e4c42c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e4c37f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e4c2ed
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e4c25f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e4c250
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e4bbc5
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e4bbb3
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e4b753
- (id)jsonRepresentation;	// IMP=0x0000000000e4b744
- (id)dictionaryRepresentation;	// IMP=0x0000000000e4b484
- (id)description;	// IMP=0x0000000000e4b3d5
@property(retain, nonatomic) GEORPAddress *address;
@property(readonly, nonatomic) _Bool hasAddress;
- (int)StringAsPlaceType:(id)arg1;	// IMP=0x0000000000e4b2e8
- (id)placeTypeAsString:(int)arg1;	// IMP=0x0000000000e4b26b
@property(nonatomic) _Bool hasPlaceType;
@property(nonatomic) int placeType;
- (int)StringAsAddressType:(id)arg1;	// IMP=0x0000000000e4b090
- (id)addressTypeAsString:(int)arg1;	// IMP=0x0000000000e4afc4
@property(nonatomic) _Bool hasAddressType;
@property(nonatomic) int addressType;

@end

