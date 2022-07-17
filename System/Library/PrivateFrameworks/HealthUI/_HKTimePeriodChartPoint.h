//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSDate, NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKTimePeriodChartPoint : NSObject <HKChartPoint>
{
    NSDate *_xValue;	// 8 = 0x8
    NSNumber *_yValue;	// 16 = 0x10
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000160141
@property(retain, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(retain, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
@property(readonly, copy) NSString *description;
- (id)allYValues;	// IMP=0x000000000015fff4
- (id)maxYValue;	// IMP=0x000000000015ffe6
- (id)minYValue;	// IMP=0x000000000015ffd8
- (id)yValueForKey:(id)arg1;	// IMP=0x000000000015ffca
- (id)maxXValueAsGenericType;	// IMP=0x000000000015ffb8
- (id)minXValueAsGenericType;	// IMP=0x000000000015ffa6
- (id)xValueAsGenericType;	// IMP=0x000000000015ff98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
