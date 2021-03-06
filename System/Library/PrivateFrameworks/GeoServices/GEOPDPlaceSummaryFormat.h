//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapItemIdentifier, GEOPDMapsIdentifier;

@interface GEOPDPlaceSummaryFormat : PBCodable <NSCopying>
{
    GEOPDMapsIdentifier *_tapPlaceId;	// 8 = 0x8
    unsigned int _endIndex;	// 16 = 0x10
    int _formatType;	// 20 = 0x14
    unsigned int _startIndex;	// 24 = 0x18
    struct {
        unsigned int has_endIndex:1;
        unsigned int has_formatType:1;
        unsigned int has_startIndex:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d88646
- (void).cxx_destruct;	// IMP=0x0000000000d88e40
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d88d7c
- (unsigned long long)hash;	// IMP=0x0000000000d88cd8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d88ba6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d88ade
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d88a31
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000d88a14
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d88967
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d88958
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d881b2
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d881a0
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d87e2f
- (id)jsonRepresentation;	// IMP=0x0000000000d87e20
- (id)dictionaryRepresentation;	// IMP=0x0000000000d87b9c
- (id)description;	// IMP=0x0000000000d87aed
@property(retain, nonatomic) GEOPDMapsIdentifier *tapPlaceId;
@property(readonly, nonatomic) _Bool hasTapPlaceId;
@property(nonatomic) _Bool hasEndIndex;
@property(nonatomic) unsigned int endIndex;
@property(nonatomic) _Bool hasStartIndex;
@property(nonatomic) unsigned int startIndex;
- (int)StringAsFormatType:(id)arg1;	// IMP=0x0000000000d87934
- (id)formatTypeAsString:(int)arg1;	// IMP=0x0000000000d878a9
@property(nonatomic) _Bool hasFormatType;
@property(nonatomic) int formatType;
@property(readonly, nonatomic) GEOMapItemIdentifier *tappableEntryIdentifier;

@end

