//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBasemapRegionMetadata : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_buildUnitAreaId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a882a6
- (unsigned long long)hash;	// IMP=0x0000000000a88289
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a881ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a88164
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a88109
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a880fa
- (id)jsonRepresentation;	// IMP=0x0000000000a87dd8
- (id)dictionaryRepresentation;	// IMP=0x0000000000a87c38
- (id)description;	// IMP=0x0000000000a87b89

@end

