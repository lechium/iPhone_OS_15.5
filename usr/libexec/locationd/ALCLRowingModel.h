//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLRowingModel : PBCodable
{
    float _strokeAmp;	// 8 = 0x8
    float _strokeFrequency;	// 12 = 0xc
    float _strokePower;	// 16 = 0x10
    struct {
        unsigned int strokeAmp:1;
        unsigned int strokeFrequency:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) float strokeFrequency; // @synthesize strokeFrequency=_strokeFrequency;
@property(nonatomic) float strokeAmp; // @synthesize strokeAmp=_strokeAmp;
@property(nonatomic) float strokePower; // @synthesize strokePower=_strokePower;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000039ad14
- (unsigned long long)hash;	// IMP=0x001000000039aa24
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000039a984
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000039a8ee
- (void)copyTo:(id)arg1;	// IMP=0x001000000039a896
- (void)writeTo:(id)arg1;	// IMP=0x001000000039a80f
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000039a802
- (id)dictionaryRepresentation;	// IMP=0x001000000039a49b
- (id)description;	// IMP=0x001000000039a424
@property(nonatomic) _Bool hasStrokeFrequency;
@property(nonatomic) _Bool hasStrokeAmp;

@end
