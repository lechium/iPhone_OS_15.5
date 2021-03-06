//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKQuantityType, HKUnit, NSArray, NSDateInterval, NSMutableArray, NSMutableDictionary, NSNumber, _HKDateIntervalCollection;

@interface HDValueHistogramCollectionCalculator : NSObject
{
    HKQuantityType *_quantityType;	// 8 = 0x8
    NSArray *_quantityRanges;	// 16 = 0x10
    _HKDateIntervalCollection *_intervalCollection;	// 24 = 0x18
    HKUnit *_canonicalUnit;	// 32 = 0x20
    NSArray *_valueRangesInCanonicalUnit;	// 40 = 0x28
    NSMutableArray *_currentIntervalCountsByValueRange;	// 48 = 0x30
    NSDateInterval *_currentInterval;	// 56 = 0x38
    NSNumber *_currentIntervalIndex;	// 64 = 0x40
    NSMutableDictionary *_finalizedHistogramsByDateIntervalIndex;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002f4f0c
@property(readonly, copy, nonatomic) _HKDateIntervalCollection *intervalCollection; // @synthesize intervalCollection=_intervalCollection;
@property(readonly, copy, nonatomic) NSArray *quantityRanges; // @synthesize quantityRanges=_quantityRanges;
@property(readonly, copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
- (id)result;	// IMP=0x00000000002f4de2
- (void)addSampleValue:(double)arg1 startTime:(double)arg2;	// IMP=0x00000000002f484a
- (id)initWithQuantityType:(id)arg1 quantityRanges:(id)arg2 intervalCollection:(id)arg3;	// IMP=0x00000000002f4554

@end

