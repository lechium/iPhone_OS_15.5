//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLabelGeometryFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b69822
- (unsigned long long)hash;	// IMP=0x0000000000b6981a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b697d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b6977a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b6975d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b6974e
- (id)jsonRepresentation;	// IMP=0x0000000000b6963c
- (id)dictionaryRepresentation;	// IMP=0x0000000000b694d1
- (id)description;	// IMP=0x0000000000b69422

@end

