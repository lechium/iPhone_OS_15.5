//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray;

@interface SIRINLUINTERNALSNLP_INTERMEDIATELinearizedTensor : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _numericalizedFeatures;	// 8 = 0x8
    CDStruct_9f2792e4 _shapes;	// 32 = 0x20
    NSMutableArray *_features;	// 56 = 0x38
}

+ (Class)featureType;	// IMP=0x0000000000077c71
- (void).cxx_destruct;	// IMP=0x0000000000078b07
@property(retain, nonatomic) NSMutableArray *features; // @synthesize features=_features;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000788c9
- (unsigned long long)hash;	// IMP=0x000000000007886f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000787a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000785ba
- (void)copyTo:(id)arg1;	// IMP=0x0000000000078404
- (void)writeTo:(id)arg1;	// IMP=0x0000000000078277
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007826a
- (id)dictionaryRepresentation;	// IMP=0x0000000000077d31
- (id)description;	// IMP=0x0000000000077c82
- (id)featureAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000077c54
- (unsigned long long)featuresCount;	// IMP=0x0000000000077c37
- (void)addFeature:(id)arg1;	// IMP=0x0000000000077bcd
- (void)clearFeatures;	// IMP=0x0000000000077bb0
- (void)setNumericalizedFeatures:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000077b99
- (unsigned int)numericalizedFeatureAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000077acc
- (void)addNumericalizedFeature:(unsigned int)arg1;	// IMP=0x0000000000077ab9
- (void)clearNumericalizedFeatures;	// IMP=0x0000000000077aa8
@property(readonly, nonatomic) unsigned int *numericalizedFeatures;
@property(readonly, nonatomic) unsigned long long numericalizedFeaturesCount;
- (void)setShapes:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000077a6e
- (unsigned int)shapeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000779a1
- (void)addShape:(unsigned int)arg1;	// IMP=0x000000000007798e
- (void)clearShapes;	// IMP=0x000000000007797d
@property(readonly, nonatomic) unsigned int *shapes;
@property(readonly, nonatomic) unsigned long long shapesCount;
- (void)dealloc;	// IMP=0x000000000007790b

@end

