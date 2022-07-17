//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface APPBClickLocation : PBCodable
{
    int _h;	// 8 = 0x8
    int _w;	// 12 = 0xc
    int _x;	// 16 = 0x10
    int _y;	// 20 = 0x14
    struct {
        unsigned int h:1;
        unsigned int w:1;
        unsigned int x:1;
        unsigned int y:1;
    } _has;	// 24 = 0x18
}

+ (id)options;	// IMP=0x0020000000038174
@property(nonatomic) int h; // @synthesize h=_h;
@property(nonatomic) int w; // @synthesize w=_w;
@property(nonatomic) int y; // @synthesize y=_y;
@property(nonatomic) int x; // @synthesize x=_x;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000038c5d
- (unsigned long long)hash;	// IMP=0x0010000000038bde
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000038ae7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000038a38
- (void)copyTo:(id)arg1;	// IMP=0x00100000000389ac
- (void)writeTo:(id)arg1;	// IMP=0x00100000000388fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000388f0
- (id)dictionaryRepresentation;	// IMP=0x0010000000038397
- (id)description;	// IMP=0x00100000000382e8
@property(nonatomic) _Bool hasH;
@property(nonatomic) _Bool hasW;
@property(nonatomic) _Bool hasY;
@property(nonatomic) _Bool hasX;

@end
