//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEORPPersonalizedMapsContext : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _addressType;	// 16 = 0x10
    int _placeType;	// 20 = 0x14
    CDStruct_2d9f5d20 _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000004783d7
- (void).cxx_destruct;	// IMP=0x00000000004787a6
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000478760
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004786d9
- (unsigned long long)hash;	// IMP=0x0000000000478677
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047858e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004784f1
- (void)copyTo:(id)arg1;	// IMP=0x000000000047847f
- (void)writeTo:(id)arg1;	// IMP=0x00000000004783f3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004783e4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000478377
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000478365
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000477fa6
- (id)jsonRepresentation;	// IMP=0x0000000000477e94
- (id)dictionaryRepresentation;	// IMP=0x0000000000477b52
- (id)description;	// IMP=0x0000000000477aa3
- (int)StringAsPlaceType:(id)arg1;	// IMP=0x00000000004779f4
- (id)placeTypeAsString:(int)arg1;	// IMP=0x0000000000477977
@property(nonatomic) _Bool hasPlaceType;
@property(nonatomic) int placeType;
- (int)StringAsAddressType:(id)arg1;	// IMP=0x000000000047779c
- (id)addressTypeAsString:(int)arg1;	// IMP=0x00000000004776d0
@property(nonatomic) _Bool hasAddressType;
@property(nonatomic) int addressType;

@end
