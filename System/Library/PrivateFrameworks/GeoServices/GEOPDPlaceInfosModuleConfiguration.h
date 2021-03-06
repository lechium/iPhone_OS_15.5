//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDFactoidInfoItem, GEOPDLocationInfoItem, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceInfosModuleConfiguration : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDFactoidInfoItem *_factoidInfoItem;	// 24 = 0x18
    GEOPDLocationInfoItem *_locationInfoItem;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_factoidInfoItem:1;
        unsigned int read_locationInfoItem:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000bba5e5
- (unsigned long long)hash;	// IMP=0x0000000000bba58e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bba4ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bba2f2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bba14c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bba13d
- (id)jsonRepresentation;	// IMP=0x0000000000bba02b
- (id)dictionaryRepresentation;	// IMP=0x0000000000bb9da9
- (id)description;	// IMP=0x0000000000bb9cfa
- (id)initWithData:(id)arg1;	// IMP=0x0000000000bb9489
- (id)init;	// IMP=0x0000000000bb942d

@end

