//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMeasurement;

@interface MXAppRunTimeMetric
{
    NSMeasurement *_cumulativeForegroundTime;	// 8 = 0x8
    NSMeasurement *_cumulativeBackgroundTime;	// 16 = 0x10
    NSMeasurement *_cumulativeBackgroundAudioTime;	// 24 = 0x18
    NSMeasurement *_cumulativeBackgroundLocationTime;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c5b5
- (void).cxx_destruct;	// IMP=0x000000000000ca26
@property(readonly) NSMeasurement *cumulativeBackgroundLocationTime; // @synthesize cumulativeBackgroundLocationTime=_cumulativeBackgroundLocationTime;
@property(readonly) NSMeasurement *cumulativeBackgroundAudioTime; // @synthesize cumulativeBackgroundAudioTime=_cumulativeBackgroundAudioTime;
@property(readonly) NSMeasurement *cumulativeBackgroundTime; // @synthesize cumulativeBackgroundTime=_cumulativeBackgroundTime;
@property(readonly) NSMeasurement *cumulativeForegroundTime; // @synthesize cumulativeForegroundTime=_cumulativeForegroundTime;
- (id)toDictionary;	// IMP=0x000000000000c7cc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c66e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c5bd
- (id)initWithCumulativeForegroundTimeMeasurement:(id)arg1 cumulativeBackgroundTimeMeasurement:(id)arg2 cumulativeBackgroundAudioTimeMeasurement:(id)arg3 cumulativeBackgroundLocationTimeMeasurement:(id)arg4;	// IMP=0x000000000000c436

@end
