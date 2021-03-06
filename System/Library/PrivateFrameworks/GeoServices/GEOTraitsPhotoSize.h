//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOTraitsPhotoSize : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _height;	// 16 = 0x10
    unsigned int _width;	// 20 = 0x14
    CDStruct_a1cdbaa7 _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000fa044d
- (void).cxx_destruct;	// IMP=0x0000000000fa081a
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000fa07d4
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000fa074d
- (unsigned long long)hash;	// IMP=0x0000000000fa06ed
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fa0604
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fa0567
- (void)copyTo:(id)arg1;	// IMP=0x0000000000fa04f5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000fa0469
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000fa045a
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000fa03ed
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000fa03e0
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000fa02a0
- (id)jsonRepresentation;	// IMP=0x0000000000fa018e
- (id)dictionaryRepresentation;	// IMP=0x0000000000f9ff73
- (id)description;	// IMP=0x0000000000f9fec4
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) unsigned int height;
@property(nonatomic) _Bool hasWidth;
@property(nonatomic) unsigned int width;

@end

