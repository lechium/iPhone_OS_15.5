//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOActionComponentMapEntry : PBCodable <NSCopying>
{
    CDStruct_95bda58d _placeDataComponents;	// 8 = 0x8
    int _actionComponent;	// 32 = 0x20
    struct {
        unsigned int has_actionComponent:1;
    } _flags;	// 36 = 0x24
}

- (unsigned long long)hash;	// IMP=0x0000000000fc0d11
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fc0c65
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fc0be3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000fc0b63
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000fc0b54
- (id)jsonRepresentation;	// IMP=0x0000000000fc0760
- (id)dictionaryRepresentation;	// IMP=0x0000000000fc0613
- (id)description;	// IMP=0x0000000000fc0564
- (void)dealloc;	// IMP=0x0000000000fc0524

@end
