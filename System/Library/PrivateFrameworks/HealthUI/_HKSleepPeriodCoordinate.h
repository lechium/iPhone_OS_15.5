//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSArray, NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKSleepPeriodCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    _Bool _highlighted;	// 8 = 0x8
    NSArray *_asleepYValues;	// 16 = 0x10
    NSArray *_inBedYValues;	// 24 = 0x18
    NSArray *_yValues;	// 32 = 0x20
    NSNumber *_upperGoalYValue;	// 40 = 0x28
    NSNumber *_lowerGoalYValue;	// 48 = 0x30
    double _xValue;	// 56 = 0x38
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000238968
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) double xValue; // @synthesize xValue=_xValue;
@property(readonly, nonatomic) NSNumber *lowerGoalYValue; // @synthesize lowerGoalYValue=_lowerGoalYValue;
@property(readonly, nonatomic) NSNumber *upperGoalYValue; // @synthesize upperGoalYValue=_upperGoalYValue;
@property(readonly, nonatomic) NSArray *yValues; // @synthesize yValues=_yValues;
@property(readonly, nonatomic) NSArray *inBedYValues; // @synthesize inBedYValues=_inBedYValues;
@property(readonly, nonatomic) NSArray *asleepYValues; // @synthesize asleepYValues=_asleepYValues;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;	// IMP=0x0000000000238242
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)initWithXValue:(double)arg1 asleepYValues:(id)arg2 inBedYValues:(id)arg3 yValues:(id)arg4 upperGoalYValue:(id)arg5 lowerGoalYValue:(id)arg6 highlighted:(_Bool)arg7 userInfo:(id)arg8;	// IMP=0x00000000002380e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

