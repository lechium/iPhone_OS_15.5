//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOStructuredAddress, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocalizedSpokenStructuredAddress : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_language;	// 24 = 0x18
    GEOStructuredAddress *_spokenStructuredAddress;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_language:1;
        unsigned int read_spokenStructuredAddress:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000b709ee
- (unsigned long long)hash;	// IMP=0x0000000000b70997
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b708b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b706fb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b70555
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b70546
- (id)jsonRepresentation;	// IMP=0x0000000000b70434
- (id)dictionaryRepresentation;	// IMP=0x0000000000b70140
- (id)description;	// IMP=0x0000000000b70091
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b6f907
- (id)init;	// IMP=0x0000000000b6f8ab

@end

