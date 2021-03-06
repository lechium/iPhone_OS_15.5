//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTripLink : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSData *_linkGeometry;	// 16 = 0x10
    unsigned long long _linkId;	// 24 = 0x18
    struct {
        unsigned int has_linkId:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c24744
- (unsigned long long)hash;	// IMP=0x0000000000c246fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c24635
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c2458e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c2450e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c244ff
- (id)jsonRepresentation;	// IMP=0x0000000000c243ed
- (id)dictionaryRepresentation;	// IMP=0x0000000000c24191
- (id)description;	// IMP=0x0000000000c240e2

@end

