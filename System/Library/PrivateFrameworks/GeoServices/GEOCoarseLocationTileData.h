//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOCoarseLocationTileData : PBCodable <NSCopying>
{
    NSMutableArray *_territorys;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002c80d7
- (unsigned long long)hash;	// IMP=0x00000000002c80ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c8020
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002c7e83
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c7d53
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c7b44
- (id)jsonRepresentation;	// IMP=0x00000000002c7b35
- (id)dictionaryRepresentation;	// IMP=0x00000000002c78c6
- (id)description;	// IMP=0x00000000002c7817

@end
