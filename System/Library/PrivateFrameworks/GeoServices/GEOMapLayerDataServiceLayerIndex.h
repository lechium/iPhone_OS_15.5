//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServiceLayerIndex : PBCodable <NSCopying>
{
    NSData *_index;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000108e15c
- (unsigned long long)hash;	// IMP=0x000000000108e13f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000108e0a5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000108e02d
- (void)writeTo:(id)arg1;	// IMP=0x000000000108e009
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000108dffa
- (id)jsonRepresentation;	// IMP=0x000000000108dfeb
- (id)dictionaryRepresentation;	// IMP=0x000000000108df0d
- (id)description;	// IMP=0x000000000108de5e

@end
