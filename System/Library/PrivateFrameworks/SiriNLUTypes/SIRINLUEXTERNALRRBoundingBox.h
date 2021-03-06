//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@interface SIRINLUEXTERNALRRBoundingBox : PBCodable <NSCopying>
{
    double _height;	// 8 = 0x8
    double _width;	// 16 = 0x10
    double _xCoordinate;	// 24 = 0x18
    double _yCoordinate;	// 32 = 0x20
    struct {
        unsigned int height:1;
        unsigned int width:1;
        unsigned int xCoordinate:1;
        unsigned int yCoordinate:1;
    } _has;	// 40 = 0x28
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double yCoordinate; // @synthesize yCoordinate=_yCoordinate;
@property(nonatomic) double xCoordinate; // @synthesize xCoordinate=_xCoordinate;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001bf99
- (unsigned long long)hash;	// IMP=0x000000000001bb65
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ba4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b990
- (void)copyTo:(id)arg1;	// IMP=0x000000000001b8f4
- (void)writeTo:(id)arg1;	// IMP=0x000000000001b83d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001b830
- (id)dictionaryRepresentation;	// IMP=0x000000000001b39b
- (id)description;	// IMP=0x000000000001b2ec
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) _Bool hasWidth;
@property(nonatomic) _Bool hasYCoordinate;
@property(nonatomic) _Bool hasXCoordinate;

@end

