//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllGuidesLocationsViewParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDViewportInfo *_viewportInfo;	// 16 = 0x10
    unsigned int _numClientizedResults;	// 24 = 0x18
    struct {
        unsigned int has_numClientizedResults:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000004bf372
- (unsigned long long)hash;	// IMP=0x00000000004bf320
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004bf25f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004bf1b1
- (void)writeTo:(id)arg1;	// IMP=0x00000000004bf132
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004bf123
- (id)jsonRepresentation;	// IMP=0x00000000004bece4
- (id)dictionaryRepresentation;	// IMP=0x00000000004bea7e
- (id)description;	// IMP=0x00000000004be9cf

@end
