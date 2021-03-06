//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTargetLayout : PBCodable <NSCopying>
{
    int _layoutInfo;	// 8 = 0x8
    int _layoutStyle;	// 12 = 0xc
    int _uiTarget;	// 16 = 0x10
    struct {
        unsigned int has_layoutInfo:1;
        unsigned int has_layoutStyle:1;
        unsigned int has_uiTarget:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001541b5e
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001541eba
- (unsigned long long)hash;	// IMP=0x0000000001541e3b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001541d2d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001541c97
- (void)copyTo:(id)arg1;	// IMP=0x0000000001541c0a
- (void)writeTo:(id)arg1;	// IMP=0x0000000001541b7a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001541b6b
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001541afe
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001541aec
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000153dde7
- (id)jsonRepresentation;	// IMP=0x000000000153ddd8
- (id)dictionaryRepresentation;	// IMP=0x000000000153b9ee
- (id)description;	// IMP=0x000000000153b93f
- (int)StringAsLayoutStyle:(id)arg1;	// IMP=0x000000000153b850
- (id)layoutStyleAsString:(int)arg1;	// IMP=0x000000000153b7b7
@property(nonatomic) _Bool hasLayoutStyle;
@property(nonatomic) int layoutStyle;
- (int)StringAsLayoutInfo:(id)arg1;	// IMP=0x000000000153b6a0
- (id)layoutInfoAsString:(int)arg1;	// IMP=0x000000000153b623
@property(nonatomic) _Bool hasLayoutInfo;
@property(nonatomic) int layoutInfo;
- (int)StringAsUiTarget:(id)arg1;	// IMP=0x00000000015380f4
- (id)uiTargetAsString:(int)arg1;	// IMP=0x0000000001535f57
@property(nonatomic) _Bool hasUiTarget;
@property(nonatomic) int uiTarget;

@end

