//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SBFullScreenSessionMetric
{
    double _startTimestamp;	// 8 = 0x8
    NSString *_startReason;	// 16 = 0x10
    NSString *_primaryBundleIdentifier;	// 24 = 0x18
    NSString *_sideBundleIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000624fe2
@property(copy, nonatomic) NSString *sideBundleIdentifier; // @synthesize sideBundleIdentifier=_sideBundleIdentifier;
@property(copy, nonatomic) NSString *primaryBundleIdentifier; // @synthesize primaryBundleIdentifier=_primaryBundleIdentifier;
@property(copy, nonatomic) NSString *startReason; // @synthesize startReason=_startReason;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
- (_Bool)_sendCoreAnalyticsEventWithStartReason:(id)arg1 endReason:(id)arg2 duration:(double)arg3 primaryBundleIdentifier:(id)arg4 doNotDisturbActive:(_Bool)arg5 hardwareKeyboardAttached:(_Bool)arg6;	// IMP=0x0000000000624d5c
- (id)_bundleIdentifierForElementWithLayoutRole:(long long)arg1 fromContext:(id)arg2;	// IMP=0x0000000000624c08
- (_Bool)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000624b75
- (id)init;	// IMP=0x0000000000623e5d

@end
