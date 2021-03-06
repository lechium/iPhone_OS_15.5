//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMPedometerProxy;

@interface CMPedometer : NSObject
{
    CMPedometerProxy *_pedometerProxy;	// 8 = 0x8
}

+ (long long)authorizationStatus;	// IMP=0x000000000014e135
+ (_Bool)isAllDayElevationAvailable;	// IMP=0x000000000014e116
+ (_Bool)isPedometerEventTrackingAvailable;	// IMP=0x000000000014e0f3
+ (_Bool)isCadenceAvailable;	// IMP=0x000000000014e0cd
+ (_Bool)isPaceAvailable;	// IMP=0x000000000014e08e
+ (_Bool)isFloorCountingAvailable;	// IMP=0x000000000014e070
+ (_Bool)isDistanceAvailable;	// IMP=0x000000000014e04a
+ (_Bool)isStepCountingAvailable;	// IMP=0x000000000014e00b
@property(readonly, nonatomic) CMPedometerProxy *pedometerProxy; // @synthesize pedometerProxy=_pedometerProxy;
- (void)queryRemoteStepCadenceToStrideLengthBinsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000014fbd5
- (void)queryStepCadenceToStrideLengthBinsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000014fb3a
- (void)queryRemoteRawSpeedToKValueBinsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000014fa9f
- (void)queryRawSpeedToKValueBinsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000014fa07
- (id)strideCalibrationDump;	// IMP=0x000000000014f9dc
- (_Bool)sendStrideCalibrationHistoryToFile:(id)arg1;	// IMP=0x000000000014ea93
- (void)stopPedometerEventUpdates;	// IMP=0x000000000014ea0e
- (void)startPedometerEventUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000014e910
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014e7b3
- (void)queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014e74c
- (void)queryPedometerDataSinceRecord:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014e70c
- (void)_startPedometerUpdatesSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014e5d5
- (id)_pedometerDataWithRecordID:(long long)arg1;	// IMP=0x000000000014e559
- (void)stopPedometerUpdates;	// IMP=0x000000000014e4d4
- (void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014e369
- (void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000014e14e
- (void)dealloc;	// IMP=0x000000000014df30
- (id)init;	// IMP=0x000000000014dee4

@end

