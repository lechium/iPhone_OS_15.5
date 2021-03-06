//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOActiveResourceFilters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOActiveResourceFilter *_filters;	// 16 = 0x10
    unsigned long long _filtersCount;	// 24 = 0x18
    unsigned long long _filtersSpace;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000800710
- (void).cxx_destruct;	// IMP=0x0000000000800d55
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000800d0f
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000800c34
- (unsigned long long)hash;	// IMP=0x0000000000800bf0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000800b2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000800a8e
- (void)copyTo:(id)arg1;	// IMP=0x00000000008009be
- (void)writeTo:(id)arg1;	// IMP=0x00000000008008fe
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008008ef
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000800469
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000080045c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000800204
- (id)jsonRepresentation;	// IMP=0x00000000008000f2
- (id)dictionaryRepresentation;	// IMP=0x00000000007ffe9e
- (id)description;	// IMP=0x00000000007ffdef
- (void)setFilters:(struct GEOActiveResourceFilter *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000007ffd8b
- (struct GEOActiveResourceFilter)filterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007ffca1
- (void)addFilter:(struct GEOActiveResourceFilter)arg1;	// IMP=0x00000000007ffc51
- (void)clearFilters;	// IMP=0x00000000007ffc0c
@property(readonly, nonatomic) struct GEOActiveResourceFilter *filters;
@property(readonly, nonatomic) unsigned long long filtersCount;
- (void)dealloc;	// IMP=0x00000000007ffa9e

@end

