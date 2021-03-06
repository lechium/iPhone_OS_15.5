//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOPDResultRefinementMetadataSort : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_customSortFunctionIdentifier;	// 16 = 0x10
    unsigned int _selectionFromQuerySequenceNumber;	// 24 = 0x18
    int _sortType;	// 28 = 0x1c
    _Bool _selectionFromQuery;	// 32 = 0x20
    struct {
        unsigned int has_selectionFromQuerySequenceNumber:1;
        unsigned int has_sortType:1;
        unsigned int has_selectionFromQuery:1;
    } _flags;	// 36 = 0x24
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d2f16a
- (void).cxx_destruct;	// IMP=0x0000000000d2f6fa
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000d2f6b4
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d2f5ea
- (unsigned long long)hash;	// IMP=0x0000000000d2f545
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2f3e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2f303
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d2f24e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d2f186
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d2f177
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d2f10a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d2f0f8
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d2edca
- (id)jsonRepresentation;	// IMP=0x0000000000d2ecb8
- (id)dictionaryRepresentation;	// IMP=0x0000000000d2e95c
- (id)description;	// IMP=0x0000000000d2e8ad
@property(nonatomic) _Bool hasSelectionFromQuery;
@property(nonatomic) _Bool selectionFromQuery;
@property(nonatomic) _Bool hasSelectionFromQuerySequenceNumber;
@property(nonatomic) unsigned int selectionFromQuerySequenceNumber;
@property(retain, nonatomic) NSString *customSortFunctionIdentifier;
@property(readonly, nonatomic) _Bool hasCustomSortFunctionIdentifier;
- (int)StringAsSortType:(id)arg1;	// IMP=0x0000000000d2e710
- (id)sortTypeAsString:(int)arg1;	// IMP=0x0000000000d2e693
@property(nonatomic) _Bool hasSortType;
@property(nonatomic) int sortType;

@end

