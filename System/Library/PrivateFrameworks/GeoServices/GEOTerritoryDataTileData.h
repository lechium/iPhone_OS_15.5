//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTerritoryDataTileData : PBCodable <NSCopying>
{
    NSMutableArray *_territorys;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c9ad9d
- (unsigned long long)hash;	// IMP=0x0000000000c9ad80
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c9ace6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c9ab49
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c9aa19
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c9a80a
- (id)jsonRepresentation;	// IMP=0x0000000000c9a7fb
- (id)dictionaryRepresentation;	// IMP=0x0000000000c9a58c
- (id)description;	// IMP=0x0000000000c9a4dd

@end
