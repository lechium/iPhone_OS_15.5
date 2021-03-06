//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBUnknownFields;

@interface GEOLatLngE7 : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _latE7;	// 16 = 0x10
    int _lngE7;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010e5883
+ (int)toE7Coordinate:(double)arg1;	// IMP=0x0000000000d0375d
+ (double)fromE7Coordinate:(int)arg1;	// IMP=0x0000000000d0374b
- (void).cxx_destruct;	// IMP=0x00000000010e5d4c
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000010e5d06
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010e5c93
- (unsigned long long)hash;	// IMP=0x00000000010e5c4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010e5b9a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010e5b23
- (void)copyTo:(id)arg1;	// IMP=0x00000000010e5ac6
- (void)writeTo:(id)arg1;	// IMP=0x00000000010e5a4c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010e5a3d
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010e5589
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010e557c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010e543c
- (id)jsonRepresentation;	// IMP=0x00000000010e532a
- (id)dictionaryRepresentation;	// IMP=0x00000000010e511e
- (id)description;	// IMP=0x00000000010e506f
@property(nonatomic) int lngE7;
@property(nonatomic) int latE7;
@property(readonly, nonatomic) GEOLatLng *latLng;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000d03675
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;	// IMP=0x0000000000d035c5
- (id)initWithE7Latitude:(int)arg1 longitude:(int)arg2;	// IMP=0x0000000000d0353e
- (id)initWithLatLng:(id)arg1;	// IMP=0x0000000000d034c4

@end

