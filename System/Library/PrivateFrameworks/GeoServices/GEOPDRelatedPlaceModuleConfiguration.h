//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRelatedPlaceModuleConfiguration : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_sectionTitles;	// 16 = 0x10
    int _numberOfRows;	// 24 = 0x18
    int _relatedPlaceComponentId;	// 28 = 0x1c
    struct {
        unsigned int has_numberOfRows:1;
        unsigned int has_relatedPlaceComponentId:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000bd7798
- (unsigned long long)hash;	// IMP=0x0000000000bd7721
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bd7632
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bd7433
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bd728a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bd727b
- (id)jsonRepresentation;	// IMP=0x0000000000bd7169
- (id)dictionaryRepresentation;	// IMP=0x0000000000bd6ce9
- (id)description;	// IMP=0x0000000000bd6c3a

@end

