//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDStorefrontFaces : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_faces;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000bf9233
- (unsigned long long)hash;	// IMP=0x0000000000bf9216
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bf917c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bf8fbc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bf8e5d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bf8e4e
- (id)jsonRepresentation;	// IMP=0x0000000000bf8d3c
- (id)dictionaryRepresentation;	// IMP=0x0000000000bf89ab
- (id)description;	// IMP=0x0000000000bf88fc

@end

