//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsHomeResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_mapsHomeSections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000053fca3
- (unsigned long long)hash;	// IMP=0x000000000053fc86
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000053fbec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000053fa2c
- (void)writeTo:(id)arg1;	// IMP=0x000000000053f8cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000053f8be
- (id)jsonRepresentation;	// IMP=0x000000000053f3a1
- (id)dictionaryRepresentation;	// IMP=0x000000000053effe
- (id)description;	// IMP=0x000000000053ef4f

@end

