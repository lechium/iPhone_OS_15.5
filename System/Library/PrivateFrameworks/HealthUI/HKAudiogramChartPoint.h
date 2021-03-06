//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>
#import <HealthUI/HKGraphSeriesBlockCoordinateInfo-Protocol.h>

@class NSNumber, NSString;

@interface HKAudiogramChartPoint : NSObject <HKGraphSeriesBlockCoordinateInfo, HKChartPoint>
{
    _Bool _isLeftEar;	// 8 = 0x8
    _Bool _isAverage;	// 9 = 0x9
    NSNumber *_xValue;	// 16 = 0x10
    NSNumber *_yValue;	// 24 = 0x18
}

+ (id)quantityFromAxisValue:(double)arg1;	// IMP=0x000000000009a4a8
+ (double)frequencyFromAxisValue:(double)arg1;	// IMP=0x000000000009a495
+ (double)axisValueFromFrequency:(double)arg1;	// IMP=0x000000000009a47a
- (void).cxx_destruct;	// IMP=0x000000000009a70c
@property(nonatomic) _Bool isAverage; // @synthesize isAverage=_isAverage;
@property(nonatomic) _Bool isLeftEar; // @synthesize isLeftEar=_isLeftEar;
@property(readonly, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(readonly, nonatomic) NSNumber *xValue; // @synthesize xValue=_xValue;
- (id)userInfo;	// IMP=0x000000000009a624
- (id)maxYValue;	// IMP=0x000000000009a612
- (id)minYValue;	// IMP=0x000000000009a600
- (id)allYValues;	// IMP=0x000000000009a575
- (id)yValueForKey:(id)arg1;	// IMP=0x000000000009a563
- (id)maxXValueAsGenericType;	// IMP=0x000000000009a551
- (id)minXValueAsGenericType;	// IMP=0x000000000009a53f
- (id)xValueAsGenericType;	// IMP=0x000000000009a52d
- (id)initWithXValue:(double)arg1 sensitivity:(double)arg2 isLeftEar:(_Bool)arg3 isAverage:(_Bool)arg4;	// IMP=0x000000000009a3ad
- (id)initWithFrequency:(double)arg1 sensitivity:(double)arg2 isLeftEar:(_Bool)arg3 isAverage:(_Bool)arg4;	// IMP=0x000000000009a2d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

