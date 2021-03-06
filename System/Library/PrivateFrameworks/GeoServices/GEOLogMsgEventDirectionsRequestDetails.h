//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventDirectionsRequestDetails : PBCodable <NSCopying>
{
    int _destination;	// 8 = 0x8
    int _origin;	// 12 = 0xc
    int _purpose;	// 16 = 0x10
    _Bool _navStarted;	// 20 = 0x14
    struct {
        unsigned int has_destination:1;
        unsigned int has_origin:1;
        unsigned int has_purpose:1;
        unsigned int has_navStarted:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001392caf
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000013930ad
- (unsigned long long)hash;	// IMP=0x0000000001393013
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001392ed2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001392e23
- (void)copyTo:(id)arg1;	// IMP=0x0000000001392d7b
- (void)writeTo:(id)arg1;	// IMP=0x0000000001392ccb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001392cbc
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001392c4f
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001392c3d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001392693
- (id)jsonRepresentation;	// IMP=0x0000000001392684
- (id)dictionaryRepresentation;	// IMP=0x000000000139231e
- (id)description;	// IMP=0x000000000139226f
- (int)StringAsDestination:(id)arg1;	// IMP=0x00000000013921a4
- (id)destinationAsString:(int)arg1;	// IMP=0x0000000001392117
@property(nonatomic) _Bool hasDestination;
@property(nonatomic) int destination;
- (int)StringAsOrigin:(id)arg1;	// IMP=0x0000000001391fe8
- (id)originAsString:(int)arg1;	// IMP=0x0000000001391f5b
@property(nonatomic) _Bool hasOrigin;
@property(nonatomic) int origin;
- (int)StringAsPurpose:(id)arg1;	// IMP=0x0000000001391d58
- (id)purposeAsString:(int)arg1;	// IMP=0x0000000001391c80
@property(nonatomic) _Bool hasPurpose;
@property(nonatomic) int purpose;
@property(nonatomic) _Bool hasNavStarted;
@property(nonatomic) _Bool navStarted;

@end

