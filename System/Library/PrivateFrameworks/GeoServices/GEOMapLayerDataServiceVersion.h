//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying>
{
    unsigned int _dataVersion;	// 8 = 0x8
    unsigned int _formatVersion;	// 12 = 0xc
    unsigned int _patchVersion;	// 16 = 0x10
    struct {
        unsigned int has_dataVersion:1;
        unsigned int has_formatVersion:1;
        unsigned int has_patchVersion:1;
    } _flags;	// 20 = 0x14
}

- (unsigned long long)hash;	// IMP=0x000000000108fb19
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000108fa46
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000108f9b0
- (void)writeTo:(id)arg1;	// IMP=0x000000000108f920
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000108f911
- (id)jsonRepresentation;	// IMP=0x000000000108f902
- (id)dictionaryRepresentation;	// IMP=0x000000000108f764
- (id)description;	// IMP=0x000000000108f6b5

@end
