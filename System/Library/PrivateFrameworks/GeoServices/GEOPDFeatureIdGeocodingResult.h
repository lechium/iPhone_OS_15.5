//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeatureIdGeocodingResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000052050a
- (unsigned long long)hash;	// IMP=0x0000000000520502
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005204bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000520462
- (void)writeTo:(id)arg1;	// IMP=0x0000000000520445
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000520436
- (id)jsonRepresentation;	// IMP=0x0000000000520178
- (id)dictionaryRepresentation;	// IMP=0x000000000052000d
- (id)description;	// IMP=0x000000000051ff5e

@end
