//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthToolbox/HKChartPoint-Protocol.h>

@class NSDate, NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsChartPoint : NSObject <HKChartPoint>
{
    NSDate *_xValue;	// 8 = 0x8
    NSNumber *_yValue;	// 16 = 0x10
    id <HKGraphSeriesBlockCoordinateInfo> _experimentInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000057b7
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> experimentInfo; // @synthesize experimentInfo=_experimentInfo;
@property(readonly, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(readonly, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
- (id)userInfo;	// IMP=0x000000000000578b
- (id)maxYValue;	// IMP=0x000000000000577d
- (id)minYValue;	// IMP=0x000000000000576f
- (id)allYValues;	// IMP=0x000000000000570b
- (id)yValueForKey:(id)arg1;	// IMP=0x00000000000056fd
- (id)maxXValueAsGenericType;	// IMP=0x00000000000056ef
- (id)minXValueAsGenericType;	// IMP=0x00000000000056e1
- (id)xValueAsGenericType;	// IMP=0x00000000000056d3
- (id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000000561c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

