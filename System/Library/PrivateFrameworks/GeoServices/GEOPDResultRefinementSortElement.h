//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDResultRefinementMetadata, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementSortElement : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_displayNameInBar;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    GEOPDResultRefinementMetadata *_metadata;	// 40 = 0x28
    GEOStyleAttributes *_styleAttributes;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_displayNameInBar:1;
        unsigned int read_displayName:1;
        unsigned int read_metadata:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000d43abe
- (unsigned long long)hash;	// IMP=0x0000000000d43a30
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d438ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d436d4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d434c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d434b9
- (id)jsonRepresentation;	// IMP=0x0000000000d433a7
- (id)dictionaryRepresentation;	// IMP=0x0000000000d42f49
- (id)description;	// IMP=0x0000000000d42e9a
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d4238d
- (id)init;	// IMP=0x0000000000d42331

@end

