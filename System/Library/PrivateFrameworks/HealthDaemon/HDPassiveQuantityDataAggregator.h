//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator
{
    HKQuantityType *_quantityType;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000010a0d5
@property(readonly, copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000109f19
- (Class)sensorDatumClass;	// IMP=0x0000000000109f08
- (id)objectType;	// IMP=0x0000000000109ef3
- (id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2;	// IMP=0x0000000000109dd5

@end
