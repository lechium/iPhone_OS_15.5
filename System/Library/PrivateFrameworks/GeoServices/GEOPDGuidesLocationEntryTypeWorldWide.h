//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDCaptionedPhoto, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuidesLocationEntryTypeWorldWide : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_guideLocationImages;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    GEOPDCaptionedPhoto *_photo;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_guideLocationImages:1;
        unsigned int read_name:1;
        unsigned int read_photo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000b60582
- (unsigned long long)hash;	// IMP=0x0000000000b6050b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b603f5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b600ed
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b5fe22
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b5fe13
- (id)jsonRepresentation;	// IMP=0x0000000000b5fd01
- (id)dictionaryRepresentation;	// IMP=0x0000000000b5f891
- (id)description;	// IMP=0x0000000000b5f7e2
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b5ea69
- (id)init;	// IMP=0x0000000000b5ea0d

@end
