//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOPhotoInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
    int _size;	// 24 = 0x18
    struct {
        unsigned int has_size:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000ed0137
- (void).cxx_destruct;	// IMP=0x0000000000ed051b
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000ed04d5
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000ed044b
- (unsigned long long)hash;	// IMP=0x0000000000ed03e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ed02ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ed0247
- (void)copyTo:(id)arg1;	// IMP=0x0000000000ed01d2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ed0153
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ed0144
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000ed00d7
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000ed00ca
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000ecfdde
- (id)jsonRepresentation;	// IMP=0x0000000000ecfccc
- (id)dictionaryRepresentation;	// IMP=0x0000000000ecfa0c
- (id)description;	// IMP=0x0000000000ecf95d
@property(retain, nonatomic) NSString *url;
@property(readonly, nonatomic) _Bool hasUrl;
- (int)StringAsSize:(id)arg1;	// IMP=0x0000000000ecf7ac
- (id)sizeAsString:(int)arg1;	// IMP=0x0000000000ecf6e1
@property(nonatomic) _Bool hasSize;
@property(nonatomic) int size;
- (id)initWithPlaceDataPhotoContent:(id)arg1;	// IMP=0x00000000009f3dbe

@end
