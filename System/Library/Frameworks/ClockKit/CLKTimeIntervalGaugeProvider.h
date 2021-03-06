//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKClockTimerToken, NSDate, NSMutableDictionary;

@interface CLKTimeIntervalGaugeProvider
{
    unsigned long long _nextUpdateToken;	// 8 = 0x8
    NSMutableDictionary *_updateHandlersByToken;	// 16 = 0x10
    CLKClockTimerToken *_timerToken;	// 24 = 0x18
    _Bool _paused;	// 32 = 0x20
    float _startFillFraction;	// 36 = 0x24
    float _endFillFraction;	// 40 = 0x28
    NSDate *_startDate;	// 48 = 0x30
    NSDate *_endDate;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028dc1
+ (id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;	// IMP=0x0000000000028b8e
+ (id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 startDate:(id)arg4 startFillFraction:(float)arg5 endDate:(id)arg6 endFillFraction:(float)arg7;	// IMP=0x0000000000028a63
- (void).cxx_destruct;	// IMP=0x0000000000029ec2
@property(nonatomic) float endFillFraction; // @synthesize endFillFraction=_endFillFraction;
@property(nonatomic) float startFillFraction; // @synthesize startFillFraction=_startFillFraction;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (_Bool)validate;	// IMP=0x0000000000029c5d
- (id)JSONObjectRepresentation;	// IMP=0x0000000000029aa8
- (id)initWithJSONObjectRepresentation:(id)arg1;	// IMP=0x0000000000029711
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029684
- (unsigned long long)hash;	// IMP=0x00000000000294ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002935d
- (void)_update;	// IMP=0x00000000000292da
- (void)_maybeStartOrStopUpdates;	// IMP=0x0000000000029025
- (void)stopUpdatesForToken:(id)arg1;	// IMP=0x0000000000028fec
- (id)startUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028edc
- (double)progressFractionForNow:(id)arg1;	// IMP=0x0000000000028e04
- (_Bool)needsTimerUpdates;	// IMP=0x0000000000028dfc
- (_Bool)paused;	// IMP=0x0000000000028dec
- (void)setPaused:(_Bool)arg1;	// IMP=0x0000000000028dc9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028c92
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028bae

@end

