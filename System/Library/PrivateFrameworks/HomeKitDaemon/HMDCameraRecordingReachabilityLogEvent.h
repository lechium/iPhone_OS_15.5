//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class HMDAccessoryVersion, NSDictionary, NSString;

@interface HMDCameraRecordingReachabilityLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    _Bool _reachable;	// 8 = 0x8
    _Bool _didCreateEventModel;	// 9 = 0x9
    unsigned long long _reachabilityChangeDebounceCount;	// 16 = 0x10
    double _offlineDuration;	// 24 = 0x18
    HMDAccessoryVersion *_firmwareVersion;	// 32 = 0x20
    NSString *_manufacturer;	// 40 = 0x28
    NSString *_model;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001bab88
@property(readonly) NSString *model; // @synthesize model=_model;
@property(readonly) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly) HMDAccessoryVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly) double offlineDuration; // @synthesize offlineDuration=_offlineDuration;
@property(readonly) unsigned long long reachabilityChangeDebounceCount; // @synthesize reachabilityChangeDebounceCount=_reachabilityChangeDebounceCount;
@property(readonly) _Bool didCreateEventModel; // @synthesize didCreateEventModel=_didCreateEventModel;
@property(readonly) _Bool reachable; // @synthesize reachable=_reachable;
- (id)initWithReachability:(_Bool)arg1 didCreateEventModel:(_Bool)arg2 reachabilityChangeDebounceCount:(unsigned long long)arg3 offlineDuration:(double)arg4 hapAccessory:(id)arg5;	// IMP=0x00000000001ba8b9
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end
