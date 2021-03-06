//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMMLogEventObserver-Protocol.h>

@class HMDMetricsManager, NSDictionary, NSString;

@interface HMDCoreAnalyticsLogObserver : HMFObject <HMFLogging, HMMLogEventObserver>
{
    HMDMetricsManager *_metricsManager;	// 8 = 0x8
    NSDictionary *_homeConfigurationCommonDimensions;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000005dc62d
- (void).cxx_destruct;	// IMP=0x00000000005dc5df
@property(retain, nonatomic) NSDictionary *homeConfigurationCommonDimensions; // @synthesize homeConfigurationCommonDimensions=_homeConfigurationCommonDimensions;
@property(readonly, nonatomic) HMDMetricsManager *metricsManager; // @synthesize metricsManager=_metricsManager;
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000005dc347
- (id)dictionaryFromEvent:(id)arg1;	// IMP=0x00000000005dc0bd
- (void)addEventDurationInMillisecondsFromLogEvent:(id)arg1 toEventDictionary:(id)arg2;	// IMP=0x00000000005dbff1
- (void)addErrorDetailsFromLogEvent:(id)arg1 toEventDictionary:(id)arg2;	// IMP=0x00000000005dbe78
- (void)addAccessoryDetailsFromLogEvent:(id)arg1 toEventDictionary:(id)arg2;	// IMP=0x00000000005dba9e
- (void)addHistogrammedCommonConfigurationDimensionsForLogEvent:(id)arg1 toEventDictionary:(id)arg2;	// IMP=0x00000000005db999
- (void)addDeviceCapabilitiesAndEnablementsCommonDimensionsToEventDictionary:(id)arg1;	// IMP=0x00000000005db8e8
- (void)addHomesCategorizationCommonDimensionToEventDictionary:(id)arg1;	// IMP=0x00000000005db837
- (id)initWithMetricsManager:(id)arg1;	// IMP=0x00000000005db7c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

