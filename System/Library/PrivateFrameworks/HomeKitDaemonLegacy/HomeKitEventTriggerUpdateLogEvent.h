//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMDAWDLogEvent-Protocol.h>

@class HMDAnalyticsUpdateEventTriggerData, NSString;

@interface HomeKitEventTriggerUpdateLogEvent : HMMLogEvent <HMDAWDLogEvent>
{
    HMDAnalyticsUpdateEventTriggerData *_analyticsData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000005c22cd
@property(readonly, nonatomic) HMDAnalyticsUpdateEventTriggerData *analyticsData; // @synthesize analyticsData=_analyticsData;
- (id)metricForAWD;	// IMP=0x00000000005c2175
- (unsigned int)AWDMessageType;	// IMP=0x00000000005c216a
- (id)init;	// IMP=0x00000000005c20b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

