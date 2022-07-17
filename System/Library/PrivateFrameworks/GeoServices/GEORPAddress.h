//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOPDAddressObject, NSString, PBDataReader;

@interface GEORPAddress : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOPDAddressObject *_addressObject;	// 16 = 0x10
    NSString *_addressString;	// 24 = 0x18
    GEOAddress *_geoAddress;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_addressObject:1;
        unsigned int read_addressString:1;
        unsigned int read_geoAddress:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e15d86
- (void).cxx_destruct;	// IMP=0x0000000000e166f2
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e16621
- (unsigned long long)hash;	// IMP=0x0000000000e165a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e16480
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e162b6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e161c8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e15fc6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e15fb7
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e15ad3
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e15ac1
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e15876
- (id)jsonRepresentation;	// IMP=0x0000000000e15867
- (id)dictionaryRepresentation;	// IMP=0x0000000000e1568c
- (id)description;	// IMP=0x0000000000e155dd
@property(retain, nonatomic) GEOPDAddressObject *addressObject;
@property(readonly, nonatomic) _Bool hasAddressObject;
@property(retain, nonatomic) NSString *addressString;
@property(readonly, nonatomic) _Bool hasAddressString;
@property(retain, nonatomic) GEOAddress *geoAddress;
@property(readonly, nonatomic) _Bool hasGeoAddress;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e14c38
- (id)init;	// IMP=0x0000000000e14bdc

@end
