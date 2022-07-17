//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SBSlideOverSessionMetric
{
    double _startTimestamp;	// 8 = 0x8
    NSString *_startReason;	// 16 = 0x10
    NSString *_floatingBundleIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000189759
@property(copy, nonatomic) NSString *floatingBundleIdentifier; // @synthesize floatingBundleIdentifier=_floatingBundleIdentifier;
@property(copy, nonatomic) NSString *startReason; // @synthesize startReason=_startReason;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
- (_Bool)_sendCoreAnalyticsEventWithStartReason:(id)arg1 endReason:(id)arg2 duration:(double)arg3 floatingBundleIdentifier:(id)arg4 doNotDisturbActive:(_Bool)arg5 hardwareKeyboardAttached:(_Bool)arg6;	// IMP=0x00000000001894f5
- (id)_bundleIdentifierForElementWithLayoutRole:(long long)arg1 fromContext:(id)arg2;	// IMP=0x00000000001893a1
- (_Bool)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2;	// IMP=0x000000000018930e
- (id)initWithHeartbeatMetricPersistence:(id)arg1;	// IMP=0x00000000001886cf

@end
