//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoBounds : PBCodable <NSCopying>
{
    double _height;	// 8 = 0x8
    double _width;	// 16 = 0x10
    double _x0;	// 24 = 0x18
    double _y0;	// 32 = 0x20
}

+ (id)boundsWithCGRect:(struct CGRect)arg1;	// IMP=0x00000000001c07bd
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double y0; // @synthesize y0=_y0;
@property(nonatomic) double x0; // @synthesize x0=_x0;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c06e3
- (unsigned long long)hash;	// IMP=0x00000000001c02fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c0237
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c01af
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c0165
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c00c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c00bc
- (id)dictionaryRepresentation;	// IMP=0x00000000001bfc93
- (id)description;	// IMP=0x00000000001bfbe4
- (struct CGRect)rectValue;	// IMP=0x00000000001c082e

@end
