//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface APPBAssetInfo : PBCodable
{
    double _bitrate;	// 8 = 0x8
    int _contentType;	// 16 = 0x10
    int _height;	// 20 = 0x14
    float _length;	// 24 = 0x18
    NSString *_url;	// 32 = 0x20
    int _width;	// 40 = 0x28
    _Bool _autoloop;	// 44 = 0x2c
    struct {
        unsigned int bitrate:1;
        unsigned int contentType:1;
        unsigned int height:1;
        unsigned int length:1;
        unsigned int width:1;
        unsigned int autoloop:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000008e214
@property(nonatomic) _Bool autoloop; // @synthesize autoloop=_autoloop;
@property(nonatomic) double bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) float length; // @synthesize length=_length;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008e09e
- (unsigned long long)hash;	// IMP=0x001000000008dddc
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008dc2b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008db01
- (void)copyTo:(id)arg1;	// IMP=0x001000000008da04
- (void)writeTo:(id)arg1;	// IMP=0x001000000008d8f5
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008d8e8
- (id)dictionaryRepresentation;	// IMP=0x001000000008d191
- (id)description;	// IMP=0x001000000008d0e2
@property(nonatomic) _Bool hasAutoloop;
@property(nonatomic) _Bool hasBitrate;
@property(nonatomic) _Bool hasLength;
@property(readonly, nonatomic) _Bool hasUrl;
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) _Bool hasWidth;
- (int)StringAsContentType:(id)arg1;	// IMP=0x001000000008ceb7
- (id)contentTypeAsString:(int)arg1;	// IMP=0x001000000008ce47
@property(nonatomic) _Bool hasContentType;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;

@end

