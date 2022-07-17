//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoPoint : PBCodable <NSCopying>
{
    double _x;	// 8 = 0x8
    double _y;	// 16 = 0x10
}

+ (id)pointWithPoint:(struct CGPoint)arg1;	// IMP=0x00000000002225b6
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000222546
- (unsigned long long)hash;	// IMP=0x0000000000222349
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002222b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022224b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000222223
- (void)writeTo:(id)arg1;	// IMP=0x00000000002221bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002221ae
- (id)dictionaryRepresentation;	// IMP=0x0000000000221ed5
- (id)description;	// IMP=0x0000000000221e26
- (struct CGPoint)pointValue;	// IMP=0x0000000000222615

@end
