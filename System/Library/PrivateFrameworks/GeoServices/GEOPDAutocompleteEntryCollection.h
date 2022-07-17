//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDMapsIdentifier, PBUnknownFields;

@interface GEOPDAutocompleteEntryCollection : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDMapsIdentifier *_collectionId;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000063afa8
- (void).cxx_destruct;	// IMP=0x000000000063b31b
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000063b2b5
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000063b21a
- (unsigned long long)hash;	// IMP=0x000000000063b1df
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000063b11c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000063b091
- (void)copyTo:(id)arg1;	// IMP=0x000000000063b03c
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000063b01f
- (void)writeTo:(id)arg1;	// IMP=0x000000000063afc4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000063afb5
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000063af48
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000063af36
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000063ae1f
- (id)jsonRepresentation;	// IMP=0x000000000063ad0d
- (id)dictionaryRepresentation;	// IMP=0x000000000063ab05
- (id)description;	// IMP=0x000000000063aa56
@property(retain, nonatomic) GEOPDMapsIdentifier *collectionId;
@property(readonly, nonatomic) _Bool hasCollectionId;

@end
