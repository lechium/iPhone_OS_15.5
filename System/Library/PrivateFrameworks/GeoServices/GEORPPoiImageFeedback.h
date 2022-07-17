//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPPoiImageFeedbackContext, GEORPPoiImageFeedbackCorrections, PBDataReader, PBUnknownFields;

@interface GEORPPoiImageFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEORPPoiImageFeedbackContext *_poiImageContext;	// 24 = 0x18
    GEORPPoiImageFeedbackCorrections *_poiImageCorrections;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_poiImageContext:1;
        unsigned int read_poiImageCorrections:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000004883d8
- (void).cxx_destruct;	// IMP=0x00000000004890a5
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000048900c
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000488e73
- (unsigned long long)hash;	// IMP=0x0000000000488e17
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000488d26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000488b64
- (void)copyTo:(id)arg1;	// IMP=0x0000000000488a96
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000488a65
- (void)writeTo:(id)arg1;	// IMP=0x0000000000488835
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000488826
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000487e52
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000487e40
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000487c7c
- (id)jsonRepresentation;	// IMP=0x0000000000487b6a
- (id)dictionaryRepresentation;	// IMP=0x00000000004878dd
- (id)description;	// IMP=0x000000000048782e
@property(retain, nonatomic) GEORPPoiImageFeedbackCorrections *poiImageCorrections;
@property(readonly, nonatomic) _Bool hasPoiImageCorrections;
@property(retain, nonatomic) GEORPPoiImageFeedbackContext *poiImageContext;
@property(readonly, nonatomic) _Bool hasPoiImageContext;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000486f00
- (id)init;	// IMP=0x0000000000486ea4

@end
