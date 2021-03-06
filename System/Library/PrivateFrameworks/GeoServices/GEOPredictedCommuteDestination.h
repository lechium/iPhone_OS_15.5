//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPredictedCommuteDestination : PBCodable <NSCopying>
{
    double _confidenceScore;	// 8 = 0x8
    int _destinationType;	// 16 = 0x10
    _Bool _chosen;	// 20 = 0x14
    struct {
        unsigned int has_confidenceScore:1;
        unsigned int has_destinationType:1;
        unsigned int has_chosen:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001532455
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000015328c7
- (unsigned long long)hash;	// IMP=0x0000000001532753
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000153262f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001532595
- (void)copyTo:(id)arg1;	// IMP=0x0000000001532504
- (void)writeTo:(id)arg1;	// IMP=0x0000000001532471
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001532462
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000015323f5
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000015323e3
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000153212f
- (id)jsonRepresentation;	// IMP=0x0000000001532120
- (id)dictionaryRepresentation;	// IMP=0x0000000001531f26
- (id)description;	// IMP=0x0000000001531e77
@property(nonatomic) _Bool hasChosen;
@property(nonatomic) _Bool chosen;
@property(nonatomic) _Bool hasConfidenceScore;
@property(nonatomic) double confidenceScore;
- (int)StringAsDestinationType:(id)arg1;	// IMP=0x0000000001531cf8
- (id)destinationTypeAsString:(int)arg1;	// IMP=0x0000000001531c6c
@property(nonatomic) _Bool hasDestinationType;
@property(nonatomic) int destinationType;

@end

