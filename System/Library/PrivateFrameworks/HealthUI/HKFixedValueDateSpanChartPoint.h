//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class HKQuantity, HKUnit, NSDate, NSString;

@interface HKFixedValueDateSpanChartPoint : NSObject <HKChartPoint>
{
    NSDate *_xStart;	// 8 = 0x8
    NSDate *_xEnd;	// 16 = 0x10
    HKQuantity *_averageValue;	// 24 = 0x18
    NSString *_localizableTrendDescription;	// 32 = 0x20
    long long _attributeIndex;	// 40 = 0x28
    HKUnit *_preferredUnit;	// 48 = 0x30
    CDUnknownBlockType _fixedValueScalingBlock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000099483
@property(readonly, copy, nonatomic) CDUnknownBlockType fixedValueScalingBlock; // @synthesize fixedValueScalingBlock=_fixedValueScalingBlock;
@property(retain, nonatomic) HKUnit *preferredUnit; // @synthesize preferredUnit=_preferredUnit;
@property(readonly, nonatomic) long long attributeIndex; // @synthesize attributeIndex=_attributeIndex;
@property(readonly, nonatomic) NSString *localizableTrendDescription; // @synthesize localizableTrendDescription=_localizableTrendDescription;
@property(readonly, nonatomic) HKQuantity *averageValue; // @synthesize averageValue=_averageValue;
@property(readonly, nonatomic) NSDate *xEnd; // @synthesize xEnd=_xEnd;
@property(readonly, nonatomic) NSDate *xStart; // @synthesize xStart=_xStart;
- (id)userInfo;	// IMP=0x000000000009941a
- (id)maxYValue;	// IMP=0x0000000000099408
- (id)minYValue;	// IMP=0x00000000000993f6
- (id)allYValues;	// IMP=0x000000000009936b
- (id)yValueForKey:(id)arg1;	// IMP=0x0000000000099359
- (id)yValue;	// IMP=0x00000000000991c9
- (id)maxXValueAsGenericType;	// IMP=0x00000000000991b7
- (id)minXValueAsGenericType;	// IMP=0x00000000000991a5
- (id)xValueAsGenericType;	// IMP=0x000000000009912a
- (id)_buildSinglePointData;	// IMP=0x0000000000098ff7
- (id)initWithTrendSpan:(id)arg1 attributeIndex:(long long)arg2 localizableTrendDescription:(id)arg3 fixedValueScalingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000098e7f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
