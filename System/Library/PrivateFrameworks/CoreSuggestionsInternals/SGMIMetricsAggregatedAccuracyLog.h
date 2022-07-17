//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@interface SGMIMetricsAggregatedAccuracyLog : PBCodable <NSCopying>
{
    unsigned int _ignorablePredictedAsIgnorable;	// 8 = 0x8
    unsigned int _ignorablePredictedAsNeutral;	// 12 = 0xc
    unsigned int _ignorablePredictedAsSalient;	// 16 = 0x10
    unsigned int _neutralPredictedAsIgnorable;	// 20 = 0x14
    unsigned int _neutralPredictedAsNeutral;	// 24 = 0x18
    unsigned int _neutralPredictedAsSalient;	// 28 = 0x1c
    unsigned int _salientPredictedAsIgnorable;	// 32 = 0x20
    unsigned int _salientPredictedAsNeutral;	// 36 = 0x24
    unsigned int _salientPredictedAsSalient;	// 40 = 0x28
    struct {
        unsigned int ignorablePredictedAsIgnorable:1;
        unsigned int ignorablePredictedAsNeutral:1;
        unsigned int ignorablePredictedAsSalient:1;
        unsigned int neutralPredictedAsIgnorable:1;
        unsigned int neutralPredictedAsNeutral:1;
        unsigned int neutralPredictedAsSalient:1;
        unsigned int salientPredictedAsIgnorable:1;
        unsigned int salientPredictedAsNeutral:1;
        unsigned int salientPredictedAsSalient:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) unsigned int ignorablePredictedAsIgnorable; // @synthesize ignorablePredictedAsIgnorable=_ignorablePredictedAsIgnorable;
@property(nonatomic) unsigned int ignorablePredictedAsNeutral; // @synthesize ignorablePredictedAsNeutral=_ignorablePredictedAsNeutral;
@property(nonatomic) unsigned int ignorablePredictedAsSalient; // @synthesize ignorablePredictedAsSalient=_ignorablePredictedAsSalient;
@property(nonatomic) unsigned int neutralPredictedAsIgnorable; // @synthesize neutralPredictedAsIgnorable=_neutralPredictedAsIgnorable;
@property(nonatomic) unsigned int neutralPredictedAsNeutral; // @synthesize neutralPredictedAsNeutral=_neutralPredictedAsNeutral;
@property(nonatomic) unsigned int neutralPredictedAsSalient; // @synthesize neutralPredictedAsSalient=_neutralPredictedAsSalient;
@property(nonatomic) unsigned int salientPredictedAsIgnorable; // @synthesize salientPredictedAsIgnorable=_salientPredictedAsIgnorable;
@property(nonatomic) unsigned int salientPredictedAsNeutral; // @synthesize salientPredictedAsNeutral=_salientPredictedAsNeutral;
@property(nonatomic) unsigned int salientPredictedAsSalient; // @synthesize salientPredictedAsSalient=_salientPredictedAsSalient;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005c7ed
- (unsigned long long)hash;	// IMP=0x000000000005c6da
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005c507
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005c3d2
- (void)copyTo:(id)arg1;	// IMP=0x000000000005c2c0
- (void)writeTo:(id)arg1;	// IMP=0x000000000005c16c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005c15f
- (id)dictionaryRepresentation;	// IMP=0x000000000005be02
- (id)description;	// IMP=0x000000000005bd53
@property(nonatomic) _Bool hasIgnorablePredictedAsIgnorable;
@property(nonatomic) _Bool hasIgnorablePredictedAsNeutral;
@property(nonatomic) _Bool hasIgnorablePredictedAsSalient;
@property(nonatomic) _Bool hasNeutralPredictedAsIgnorable;
@property(nonatomic) _Bool hasNeutralPredictedAsNeutral;
@property(nonatomic) _Bool hasNeutralPredictedAsSalient;
@property(nonatomic) _Bool hasSalientPredictedAsIgnorable;
@property(nonatomic) _Bool hasSalientPredictedAsNeutral;
@property(nonatomic) _Bool hasSalientPredictedAsSalient;

@end
