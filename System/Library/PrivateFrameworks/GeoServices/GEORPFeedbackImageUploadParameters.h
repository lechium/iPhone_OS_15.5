//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackImageUploadParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_images;	// 16 = 0x10
    _Bool _isEnrichment;	// 24 = 0x18
    struct {
        unsigned int has_isEnrichment:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000004531f5
+ (Class)imageType;	// IMP=0x0000000000452506
- (void).cxx_destruct;	// IMP=0x0000000000453fdc
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000453f96
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000453df6
- (unsigned long long)hash;	// IMP=0x0000000000453d91
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000453c89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000453a85
- (void)copyTo:(id)arg1;	// IMP=0x0000000000453994
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000045384f
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000004535ca
- (void)writeTo:(id)arg1;	// IMP=0x0000000000453445
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000453436
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000452e55
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000452e43
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000452b3c
- (id)jsonRepresentation;	// IMP=0x0000000000452a2a
- (id)dictionaryRepresentation;	// IMP=0x000000000045261b
- (id)description;	// IMP=0x000000000045256c
@property(nonatomic) _Bool hasIsEnrichment;
@property(nonatomic) _Bool isEnrichment;
- (id)imageAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004524e9
- (unsigned long long)imagesCount;	// IMP=0x00000000004524cc
- (void)addImage:(id)arg1;	// IMP=0x0000000000452462
- (void)clearImages;	// IMP=0x0000000000452445
@property(retain, nonatomic) NSMutableArray *images;

@end

