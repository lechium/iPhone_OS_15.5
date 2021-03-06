//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDateInterval;

@interface REDateRelevanceProvider
{
    NSDateInterval *_interval;	// 8 = 0x8
    NSDate *_initialRelevanceDate;	// 16 = 0x10
    NSDate *_irrelevantDate;	// 24 = 0x18
    double _recentDuration;	// 32 = 0x20
}

+ (id)_simulationDateFormatter;	// IMP=0x0000000000005110
+ (id)relevanceSimulatorID;	// IMP=0x0000000000005103
- (void).cxx_destruct;	// IMP=0x0000000000005b1e
@property(readonly, nonatomic) double recentDuration; // @synthesize recentDuration=_recentDuration;
@property(readonly, nonatomic) NSDate *irrelevantDate; // @synthesize irrelevantDate=_irrelevantDate;
@property(readonly, nonatomic) NSDate *initialRelevanceDate; // @synthesize initialRelevanceDate=_initialRelevanceDate;
@property(readonly, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
- (id)description;	// IMP=0x0000000000005a44
- (unsigned long long)_hash;	// IMP=0x0000000000005990
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005852
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000057cc
- (id)dictionaryEncoding;	// IMP=0x00000000000054a0
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000005180
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2 firstBecomesRelevantDate:(id)arg3 recentDuration:(double)arg4;	// IMP=0x0000000000004e44
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2;	// IMP=0x0000000000004d42
- (id)initWithEventInterval:(id)arg1;	// IMP=0x0000000000004cd1
- (id)initWithEventDate:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000004c49
- (id)initWithEventDate:(id)arg1;	// IMP=0x0000000000004bc8

@end

