//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPerformer : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_itunesId;	// 24 = 0x18
    NSString *_itunesUrl;	// 32 = 0x20
    GEOLocalizedString *_name;	// 40 = 0x28
    NSString *_performerId;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_itunesId:1;
        unsigned int read_itunesUrl:1;
        unsigned int read_name:1;
        unsigned int read_performerId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000b9059d
- (unsigned long long)hash;	// IMP=0x0000000000b9050f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b903c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b901b3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b8ffa9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b8ff9a
- (id)jsonRepresentation;	// IMP=0x0000000000b8fc19
- (id)dictionaryRepresentation;	// IMP=0x0000000000b8f89a
- (id)description;	// IMP=0x0000000000b8f7eb
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b8ecfd
- (id)init;	// IMP=0x0000000000b8eca1

@end

