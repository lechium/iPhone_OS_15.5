//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONavCameraState;

@interface GEOLogMsgStateNavigation : PBCodable <NSCopying>
{
    double _distanceToDestination;	// 8 = 0x8
    GEONavCameraState *_navCameraState;	// 16 = 0x10
    int _lineType;	// 24 = 0x18
    int _navState;	// 28 = 0x1c
    struct {
        unsigned int has_distanceToDestination:1;
        unsigned int has_lineType:1;
        unsigned int has_navState:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000014e0370
- (void).cxx_destruct;	// IMP=0x00000000014e0c19
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014e0b51
- (unsigned long long)hash;	// IMP=0x00000000014e09c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014e088f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014e07c3
- (void)copyTo:(id)arg1;	// IMP=0x00000000014e0712
- (void)writeTo:(id)arg1;	// IMP=0x00000000014e0663
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014e0654
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014dfea7
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014dfe95
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014df667
- (id)jsonRepresentation;	// IMP=0x00000000014df658
- (id)dictionaryRepresentation;	// IMP=0x00000000014df1d6
- (id)description;	// IMP=0x00000000014df127
@property(retain, nonatomic) GEONavCameraState *navCameraState;
@property(readonly, nonatomic) _Bool hasNavCameraState;
@property(nonatomic) _Bool hasDistanceToDestination;
@property(nonatomic) double distanceToDestination;
- (int)StringAsNavState:(id)arg1;	// IMP=0x00000000014def58
- (id)navStateAsString:(int)arg1;	// IMP=0x00000000014deea6
@property(nonatomic) _Bool hasNavState;
@property(nonatomic) int navState;
- (int)StringAsLineType:(id)arg1;	// IMP=0x00000000014dea70
- (id)lineTypeAsString:(int)arg1;	// IMP=0x00000000014de894
@property(nonatomic) _Bool hasLineType;
@property(nonatomic) int lineType;

@end

