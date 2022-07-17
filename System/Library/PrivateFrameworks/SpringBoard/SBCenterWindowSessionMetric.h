//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SBCenterWindowSessionMetric
{
    double _startTimestamp;	// 8 = 0x8
    NSString *_startReason;	// 16 = 0x10
    NSString *_centerBundleIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005443ff
@property(copy, nonatomic) NSString *centerBundleIdentifier; // @synthesize centerBundleIdentifier=_centerBundleIdentifier;
@property(copy, nonatomic) NSString *startReason; // @synthesize startReason=_startReason;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
- (_Bool)_sendCoreAnalyticsEventWithStartReason:(id)arg1 endReason:(id)arg2 duration:(double)arg3 centerBundleIdentifier:(id)arg4 doNotDisturbActive:(_Bool)arg5 hardwareKeyboardAttached:(_Bool)arg6;	// IMP=0x000000000054419b
- (id)_bundleIdentifierForElementWithLayoutRole:(long long)arg1 fromContext:(id)arg2;	// IMP=0x0000000000544047
- (_Bool)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000543fb4
- (id)initWithHeartbeatMetricPersistence:(id)arg1;	// IMP=0x0000000000543376

@end
