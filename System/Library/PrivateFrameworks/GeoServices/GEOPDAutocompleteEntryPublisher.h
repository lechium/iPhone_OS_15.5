//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDMapsIdentifier, PBUnknownFields;

@interface GEOPDAutocompleteEntryPublisher : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDMapsIdentifier *_publisherId;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000063fe48
- (void).cxx_destruct;	// IMP=0x00000000006401bb
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000640155
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006400ba
- (unsigned long long)hash;	// IMP=0x000000000064007f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000063ffbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000063ff31
- (void)copyTo:(id)arg1;	// IMP=0x000000000063fedc
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000063febf
- (void)writeTo:(id)arg1;	// IMP=0x000000000063fe64
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000063fe55
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000063fde8
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000063fdd6
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000063fcbf
- (id)jsonRepresentation;	// IMP=0x000000000063fbad
- (id)dictionaryRepresentation;	// IMP=0x000000000063f9a5
- (id)description;	// IMP=0x000000000063f8f6
@property(retain, nonatomic) GEOPDMapsIdentifier *publisherId;
@property(readonly, nonatomic) _Bool hasPublisherId;

@end

