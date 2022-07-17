//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPFeedbackIntField : PBCodable <NSCopying>
{
    int _edited;	// 8 = 0x8
    int _original;	// 12 = 0xc
    CDStruct_ccf110de _flags;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e03812
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e03ad9
- (unsigned long long)hash;	// IMP=0x0000000000e03a77
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e0398e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e03911
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e0389f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e0382e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e0381f
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e037b2
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e037a5
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e03665
- (id)jsonRepresentation;	// IMP=0x0000000000e0365b
- (id)dictionaryRepresentation;	// IMP=0x0000000000e0354b
- (id)description;	// IMP=0x0000000000e0349c
@property(nonatomic) _Bool hasEdited;
@property(nonatomic) int edited;
@property(nonatomic) _Bool hasOriginal;
@property(nonatomic) int original;

@end
