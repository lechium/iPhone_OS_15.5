//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLinRegObjectiveFeatures : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    float _featuresL2norm;	// 16 = 0x10
    float _featuresScaleFactor;	// 20 = 0x14
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;	// 24 = 0x18
    AWDProactiveModelFittingModelInfo *_modelInfo;	// 32 = 0x20
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatFeatures;	// 40 = 0x28
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedFeatures;	// 48 = 0x30
    struct {
        unsigned int timestamp:1;
        unsigned int featuresL2norm:1;
        unsigned int featuresScaleFactor:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000a310
@property(nonatomic) float featuresL2norm; // @synthesize featuresL2norm=_featuresL2norm;
@property(nonatomic) float featuresScaleFactor; // @synthesize featuresScaleFactor=_featuresScaleFactor;
@property(retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedFeatures; // @synthesize sparseQuantizedFeatures=_sparseQuantizedFeatures;
@property(retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property(retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures; // @synthesize sparseFloatFeatures=_sparseFloatFeatures;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000a0df
- (unsigned long long)hash;	// IMP=0x0000000000009e1d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009c5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009b0e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000009a02
- (void)writeTo:(id)arg1;	// IMP=0x00000000000098fa
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000098ed
- (id)dictionaryRepresentation;	// IMP=0x000000000000966b
- (id)description;	// IMP=0x00000000000095bc
@property(nonatomic) _Bool hasFeaturesL2norm;
@property(nonatomic) _Bool hasFeaturesScaleFactor;
@property(readonly, nonatomic) _Bool hasSparseQuantizedFeatures;
@property(readonly, nonatomic) _Bool hasMinibatchStats;
@property(readonly, nonatomic) _Bool hasSparseFloatFeatures;
@property(readonly, nonatomic) _Bool hasModelInfo;
@property(nonatomic) _Bool hasTimestamp;
- (unsigned long long)featuresLength;	// IMP=0x0000000000045cc0
- (float)featuresValueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000045c13
- (_Bool)hasObjectiveFeatures;	// IMP=0x0000000000045bda

@end
