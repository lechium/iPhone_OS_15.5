//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationStats : NSObject
{
    struct CLStrideCalibrationSessionMetrics fSessionMetrics;	// 8 = 0x8
    long long fHeightCM;	// 104 = 0x68
    struct CMFixedSizeQueue<double, 2UL> fLastAWDTimestamps;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x00200000003842a6
- (void).cxx_destruct;	// IMP=0x00100000003842a0
- (void)updateUserHeight:(long long)arg1;	// IMP=0x0010000000384296
- (void)storeLastAWDTimestamps;	// IMP=0x0010000000384239
- (void)loadLastAWDTimestamps;	// IMP=0x0010000000384135
- (void)awdMotionFitnessStrideCalibration:(const CDStruct_9878d8f4 *)arg1;	// IMP=0x0010000000383c18
- (void)activityLoggerLogStrideCalEntry:(const CDStruct_9878d8f4 *)arg1;	// IMP=0x00100000003839ac
- (void)awdLogDistance:(double)arg1 status:(int)arg2 description:(id)arg3;	// IMP=0x0010000000383734
- (void)setReadyForSubmission;	// IMP=0x0010000000383722
- (void)endSessionMetrics:(double)arg1;	// IMP=0x001000000038335c
- (void)startSessionMetricsWithTime:(double)arg1 session:(int)arg2;	// IMP=0x0010000000383302
- (id)init;	// IMP=0x001000000038329c

@end
