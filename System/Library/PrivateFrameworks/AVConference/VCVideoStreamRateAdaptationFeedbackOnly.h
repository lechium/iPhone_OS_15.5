//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCStatisticsCollector, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCVideoStreamRateAdaptationFeedbackOnly
{
    AVCStatisticsCollector *_statisticsCollector;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_rateControlFeedbackSource;	// 128 = 0x80
    _Bool _didReceiveVideo;	// 136 = 0x88
    _Bool _useLowPrecisionEchoTimeStamp;	// 137 = 0x89
    unsigned int _previousRTPTimestamp;	// 140 = 0x8c
    unsigned int _totalPacketsReceived;	// 144 = 0x90
    unsigned int _lastTimestamp;	// 148 = 0x94
    double _lastTimestampReceiveTime;	// 152 = 0x98
}

@property(nonatomic) _Bool didReceiveVideo; // @synthesize didReceiveVideo=_didReceiveVideo;
- (double)owrd;	// IMP=0x00000000002251aa
- (void)updateRateControlInfoWithStatisticsMessage:(CDStruct_87b99198)arg1;	// IMP=0x000000000022513f
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3 size:(unsigned int)arg4 endOfFrame:(_Bool)arg5;	// IMP=0x0000000000224f73
- (void)sendRateControlFeedback;	// IMP=0x0000000000224be1
- (void)stopFeedbackSource;	// IMP=0x0000000000224aef
- (void)startFeedbackSource;	// IMP=0x0000000000224815
- (void)setEnableRateAdaptation:(_Bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;	// IMP=0x00000000002247df
- (void)dealloc;	// IMP=0x00000000002246de
- (id)initWithRTPHandle:(struct tagHANDLE *)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2 receiverStats:(id)arg3 dumpID:(unsigned int)arg4 reportingParentID:(int)arg5 statisticsCollector:(id)arg6 lowTimestampPrecision:(_Bool)arg7;	// IMP=0x000000000022459e

@end
