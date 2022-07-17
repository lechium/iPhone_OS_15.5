//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDCollectionSuggestionParameters, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsHomeParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDCollectionSuggestionParameters *_collectionSuggestionParameters;	// 16 = 0x10
    _Bool _shouldPopulateExploreGuidesEntry;	// 24 = 0x18
    struct {
        unsigned int has_shouldPopulateExploreGuidesEntry:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000053ee5c
- (unsigned long long)hash;	// IMP=0x000000000053ee09
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000053ed38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000053ec8a
- (void)writeTo:(id)arg1;	// IMP=0x000000000053ec0a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000053ebfb
- (id)jsonRepresentation;	// IMP=0x000000000053e7b9
- (id)dictionaryRepresentation;	// IMP=0x000000000053e552
- (id)description;	// IMP=0x000000000053e4a3

@end
