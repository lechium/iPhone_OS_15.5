//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, NSMutableArray;

@interface AWDProactiveModelFittingEvaluation : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    AWDProactiveModelFittingEvalMetrics *_evaluationMetrics;	// 16 = 0x10
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;	// 24 = 0x18
    AWDProactiveModelFittingModelInfo *_modelInfo;	// 32 = 0x20
    NSMutableArray *_precisionAtKs;	// 40 = 0x28
    struct {
        unsigned int timestamp:1;
    } _has;	// 48 = 0x30
}

+ (Class)precisionAtKType;	// IMP=0x0000000000004e0c
- (void).cxx_destruct;	// IMP=0x0000000000004a51
@property(retain, nonatomic) NSMutableArray *precisionAtKs; // @synthesize precisionAtKs=_precisionAtKs;
@property(retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics; // @synthesize evaluationMetrics=_evaluationMetrics;
@property(retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000478f
- (unsigned long long)hash;	// IMP=0x00000000000046da
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004576
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000431b
- (void)copyTo:(id)arg1;	// IMP=0x00000000000041d0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000004024
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000004017
- (id)dictionaryRepresentation;	// IMP=0x0000000000003ca8
- (id)description;	// IMP=0x0000000000003bf9
- (id)precisionAtKAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000003bdc
- (unsigned long long)precisionAtKsCount;	// IMP=0x0000000000003bbf
- (void)addPrecisionAtK:(id)arg1;	// IMP=0x0000000000003b55
- (void)clearPrecisionAtKs;	// IMP=0x0000000000003b38
@property(readonly, nonatomic) _Bool hasEvaluationMetrics;
@property(readonly, nonatomic) _Bool hasMinibatchStats;
@property(readonly, nonatomic) _Bool hasModelInfo;
@property(nonatomic) _Bool hasTimestamp;
- (float)precisionAtK:(unsigned long long)arg1;	// IMP=0x0000000000024fa3

@end
