//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLStepCountNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x0010000000a26146
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a2612d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000a260d0
+ (_Bool)isSupported;	// IMP=0x0010000000a26cbe
- (void)resumeCalorimetryAfterPendingStepCountNotifications;	// IMP=0x0020000000a26b92
- (void)getPedometerBinsAndHistoryWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a26a65
- (void)getPedometerCalibrationBins:(long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a26943
- (_Bool)syncgetIsStrideCalibrationConvergedMedianForSpeed:(double)arg1;	// IMP=0x0010000000a2690a
- (id)syncgetStepCadenceToStrideLengthDefaultBins;	// IMP=0x0010000000a268be
- (id)syncgetRawSpeedToKValueDefaultBins;	// IMP=0x0010000000a26872
- (void)setStepCadenceToStrideLengthBins:(id)arg1;	// IMP=0x0010000000a26832
- (void)setRawSpeedToKValueBins:(id)arg1;	// IMP=0x0010000000a267f2
- (id)syncgetCopyStepCadenceToStrideLengthBins;	// IMP=0x0010000000a267b7
- (id)syncgetCopyRawSpeedToKValueBins;	// IMP=0x0010000000a2677c
- (int)syncgetQueryPedometerDataSince:(struct CLStepCountEntry)arg1 withResponseArray:(void *)arg2;	// IMP=0x0010000000a26740
- (id)syncgetDbUUID;	// IMP=0x0010000000a26705
- (void)reset;	// IMP=0x0010000000a266d5
- (struct CLStepDistance)syncgetQueryStartTime:(double *)arg1 andStopTime:(double *)arg2;	// IMP=0x0010000000a2648d
- (_Bool)syncgetEnabled;	// IMP=0x0010000000a26461
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0010000000a2638d
- (void)strideCalibratorSetSession:(long long)arg1;	// IMP=0x0010000000a26358
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a26330
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a26303
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a262db
- (void *)adaptee;	// IMP=0x0010000000a262a8
- (void)endService;	// IMP=0x0010000000a2628d
- (void)beginService;	// IMP=0x0010000000a261df
- (id)init;	// IMP=0x0010000000a261a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

