//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, _DKKnowledgeStorage;

@interface _DKPredictionQuery
{
    _Bool _useHistoricalHistogram;	// 8 = 0x8
    _Bool _isTopNPrediction;	// 9 = 0x9
    int _slotDuration;	// 12 = 0xc
    int _minimumDaysOfHistory;	// 16 = 0x10
    int _totalSlotsInDay;	// 20 = 0x14
    unsigned long long _type;	// 24 = 0x18
    unsigned long long _partitionType;	// 32 = 0x20
    NSDate *_asOfDate;	// 40 = 0x28
    _DKKnowledgeStorage *_storage;	// 48 = 0x30
    CDUnknownBlockType _predictionHandler;	// 56 = 0x38
    long long _topN;	// 64 = 0x40
    double _minLikelihood;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bc1c5
+ (id)topNPredictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withTopN:(long long)arg3 withMinLikelihood:(double)arg4;	// IMP=0x00000000000b7a68
+ (id)predictionQueryForStreams:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;	// IMP=0x00000000000b78d2
+ (id)predictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;	// IMP=0x00000000000b77f0
- (void).cxx_destruct;	// IMP=0x00000000000bc76d
@property(copy) CDUnknownBlockType predictionHandler; // @synthesize predictionHandler=_predictionHandler;
@property(retain, nonatomic) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSDate *asOfDate; // @synthesize asOfDate=_asOfDate;
@property(nonatomic) _Bool useHistoricalHistogram; // @synthesize useHistoricalHistogram=_useHistoricalHistogram;
@property(nonatomic) unsigned long long partitionType; // @synthesize partitionType=_partitionType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) int minimumDaysOfHistory; // @synthesize minimumDaysOfHistory=_minimumDaysOfHistory;
@property(nonatomic) int slotDuration; // @synthesize slotDuration=_slotDuration;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bc55d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bc3e5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bc1cd
- (id)handleResults:(id)arg1 error:(id)arg2;	// IMP=0x00000000000bc17b
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bb7b6

@end
