//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHeartbeatSequencePoint : NSObject <HKChartPoint>
{
    NSNumber *_xValue;	// 8 = 0x8
    NSNumber *_yValue;	// 16 = 0x10
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000193fe5
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(readonly, nonatomic) NSNumber *xValue; // @synthesize xValue=_xValue;
- (id)maxYValue;	// IMP=0x0000000000193fb9
- (id)minYValue;	// IMP=0x0000000000193fab
- (id)allYValues;	// IMP=0x0000000000193f47
- (id)yValueForKey:(id)arg1;	// IMP=0x0000000000193f39
- (id)maxXValueAsGenericType;	// IMP=0x0000000000193f2b
- (id)minXValueAsGenericType;	// IMP=0x0000000000193f1d
- (id)xValueAsGenericType;	// IMP=0x0000000000193f0f
- (id)initWithTimeInterval:(double)arg1 beatsPerMinute:(double)arg2;	// IMP=0x0000000000193e5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

