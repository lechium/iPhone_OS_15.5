//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOPDAmenities : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_amenityV2s;	// 24 = 0x18
    NSMutableArray *_amenitys;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_amenityV2s:1;
        unsigned int read_amenitys:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000a762bb
+ (Class)amenityV2Type;	// IMP=0x0000000000a75285
+ (Class)amenityType;	// IMP=0x0000000000a75020
+ (id)amentiesForPlaceData:(id)arg1;	// IMP=0x00000000009fb246
+ (id)enumBasedAmenityValuesForPlaceData:(id)arg1;	// IMP=0x00000000009fb1d4
+ (id)stringBasedAmenityValuesForPlaceData:(id)arg1;	// IMP=0x00000000009fb162
- (void).cxx_destruct;	// IMP=0x0000000000a77829
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000a775db
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000a77285
- (unsigned long long)hash;	// IMP=0x0000000000a77229
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a77138
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a76d15
- (void)copyTo:(id)arg1;	// IMP=0x0000000000a76b4b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a7679b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a7678c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000a75e61
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000a75e4f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000a759ec
- (id)jsonRepresentation;	// IMP=0x0000000000a758da
- (id)dictionaryRepresentation;	// IMP=0x0000000000a75345
- (id)description;	// IMP=0x0000000000a75296
- (id)amenityV2AtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a75254
- (unsigned long long)amenityV2sCount;	// IMP=0x0000000000a75228
- (void)addAmenityV2:(id)arg1;	// IMP=0x0000000000a75174
- (void)clearAmenityV2s;	// IMP=0x0000000000a7514c
@property(retain, nonatomic) NSMutableArray *amenityV2s;
- (id)amenityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a74fef
- (unsigned long long)amenitysCount;	// IMP=0x0000000000a74fc3
- (void)addAmenity:(id)arg1;	// IMP=0x0000000000a74f0f
- (void)clearAmenitys;	// IMP=0x0000000000a74ee7
@property(retain, nonatomic) NSMutableArray *amenitys;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a7451b
- (id)init;	// IMP=0x0000000000a744bf

@end
