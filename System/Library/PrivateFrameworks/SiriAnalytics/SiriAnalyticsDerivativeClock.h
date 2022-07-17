//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID, SiriAnalyticsLogicalClock;

@interface SiriAnalyticsDerivativeClock
{
    SiriAnalyticsLogicalClock *_rootClock;	// 8 = 0x8
    NSUUID *_isolatedStreamUUID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000a4ae
@property(readonly, nonatomic) NSUUID *isolatedStreamUUID; // @synthesize isolatedStreamUUID=_isolatedStreamUUID;
- (id)initWithClockIdentifier:(id)arg1 isolatedStreamUUID:(id)arg2 timestampOffset:(unsigned long long)arg3 rootClock:(id)arg4;	// IMP=0x000000000000a3eb
- (id)init;	// IMP=0x000000000000a3dd

@end
