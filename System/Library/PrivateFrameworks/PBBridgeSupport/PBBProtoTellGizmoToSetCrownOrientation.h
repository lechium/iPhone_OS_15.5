//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@interface PBBProtoTellGizmoToSetCrownOrientation : PBCodable <NSCopying>
{
    _Bool _crownOrientationRight;	// 8 = 0x8
    struct {
        unsigned int crownOrientationRight:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool crownOrientationRight; // @synthesize crownOrientationRight=_crownOrientationRight;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002c8b1
- (unsigned long long)hash;	// IMP=0x000000000002c886
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002c7e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c782
- (void)copyTo:(id)arg1;	// IMP=0x000000000002c75e
- (void)writeTo:(id)arg1;	// IMP=0x000000000002c732
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002c725
- (id)dictionaryRepresentation;	// IMP=0x000000000002c4ab
- (id)description;	// IMP=0x000000000002c3fc
@property(nonatomic) _Bool hasCrownOrientationRight;

@end
