//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSEngagement, NSDictionary, NSString;

@interface ODPMetricsHandler
{
    NSString *_logKey;	// 8 = 0x8
    AMSEngagement *_engagement;	// 16 = 0x10
    NSDictionary *_powerMetrics;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000022029b
@property(retain, nonatomic) NSDictionary *powerMetrics; // @synthesize powerMetrics=_powerMetrics;
@property(retain, nonatomic) AMSEngagement *engagement; // @synthesize engagement=_engagement;
- (id)_launchEventsSinceDate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000021f5ad
- (id)_externalEventsWithPostedState:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000021f306
- (void)_enqueueEventsWithAMSEngagment:(id)arg1;	// IMP=0x001000000021ef23
- (id)_createEventWithDictionary:(id)arg1 bundleID:(id)arg2 metadata:(id)arg3;	// IMP=0x001000000021ea15
- (id)_crashEventsSinceDate:(id)arg1;	// IMP=0x001000000021e9c6
- (id)_appEventsWithWithPostedState:(_Bool)arg1;	// IMP=0x001000000021e6b6
- (id)_allEventsWithPostedState:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000021e210
- (id)_createAggregateEventWithEvents:(id)arg1 topic:(id)arg2 eventType:(unsigned char)arg3;	// IMP=0x001000000021e0b9
- (id)_aggregateEvents:(id)arg1 showPosted:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000021d9a0
- (id)topic;	// IMP=0x001000000021d993
- (_Bool)shouldCollectMetrics;	// IMP=0x001000000021d98b
- (void)resetMetrics;	// IMP=0x001000000021d3f9
- (void)recordSupplementalAppMetricsEvents;	// IMP=0x001000000021ce3e
- (void)recordDeletedBundleIDs:(id)arg1;	// IMP=0x001000000021c67e
- (void)recordInstallEventsForBundleIDs:(id)arg1 installType:(unsigned char)arg2;	// IMP=0x001000000021bda4
- (void)postMetrics;	// IMP=0x001000000021bc5e
- (id)logKey;	// IMP=0x001000000021bbc7
- (id)getAppEventsWithError:(id *)arg1;	// IMP=0x001000000021bbad
- (id)deviceID;	// IMP=0x001000000021ba1c

@end
