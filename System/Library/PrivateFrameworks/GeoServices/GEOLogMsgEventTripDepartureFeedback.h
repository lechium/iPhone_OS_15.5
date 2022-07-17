//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventTripDepartureFeedback : PBCodable <NSCopying>
{
    double _distanceFromOrigin;	// 8 = 0x8
    double _timeFromOrigin;	// 16 = 0x10
    int _transportMode;	// 24 = 0x18
    struct {
        unsigned int has_distanceFromOrigin:1;
        unsigned int has_timeFromOrigin:1;
        unsigned int has_transportMode:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000013efdfb
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000013f0355
- (unsigned long long)hash;	// IMP=0x00000000013f00f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013effde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013eff40
- (void)copyTo:(id)arg1;	// IMP=0x00000000013efeab
- (void)writeTo:(id)arg1;	// IMP=0x00000000013efe17
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000013efe08
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000013efd9b
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000013efd89
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000013efaa7
- (id)jsonRepresentation;	// IMP=0x00000000013efa98
- (id)dictionaryRepresentation;	// IMP=0x00000000013ef87c
- (id)description;	// IMP=0x00000000013ef7cd
@property(nonatomic) _Bool hasTimeFromOrigin;
@property(nonatomic) double timeFromOrigin;
@property(nonatomic) _Bool hasDistanceFromOrigin;
@property(nonatomic) double distanceFromOrigin;
- (int)StringAsTransportMode:(id)arg1;	// IMP=0x00000000013ef628
- (id)transportModeAsString:(int)arg1;	// IMP=0x00000000013ef58f
@property(nonatomic) _Bool hasTransportMode;
@property(nonatomic) int transportMode;

@end
