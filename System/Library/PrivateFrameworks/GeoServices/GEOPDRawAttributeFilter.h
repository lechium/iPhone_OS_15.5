//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRawAttributeFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_keys;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000bd4880
- (unsigned long long)hash;	// IMP=0x0000000000bd4863
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bd47c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bd4609
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bd44aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bd449b
- (id)jsonRepresentation;	// IMP=0x0000000000bd4389
- (id)dictionaryRepresentation;	// IMP=0x0000000000bd41f7
- (id)description;	// IMP=0x0000000000bd4148

@end

