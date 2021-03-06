//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/TAStoreObserver-Protocol.h>
#import <TrackingAvoidance/TATrackingAvoidanceServiceProtocol-Protocol.h>

@class NSDate, NSHashTable, NSString, TAOutgoingRequests, TASettings, TAStore, TATrackingAvoidanceServiceSettings;

@interface TATrackingAvoidanceService : NSObject <TAStoreObserver, TATrackingAvoidanceServiceProtocol>
{
    TAStore *_store;	// 8 = 0x8
    TASettings *_settings;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    NSDate *_latestClassificationDate;	// 32 = 0x20
    TATrackingAvoidanceServiceSettings *_serviceSettings;	// 40 = 0x28
    TAOutgoingRequests *_stagedIntervisitMetrics;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001d3e8
@property(retain, nonatomic) TAOutgoingRequests *stagedIntervisitMetrics; // @synthesize stagedIntervisitMetrics=_stagedIntervisitMetrics;
@property(retain, nonatomic) TATrackingAvoidanceServiceSettings *serviceSettings; // @synthesize serviceSettings=_serviceSettings;
@property(retain, nonatomic) NSDate *latestClassificationDate; // @synthesize latestClassificationDate=_latestClassificationDate;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) TASettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) TAStore *store; // @synthesize store=_store;
- (void)ingestTAEvent:(id)arg1;	// IMP=0x000000000001d161
- (void)_performDetection;	// IMP=0x000000000001c901
- (void)_performUpdateIfNecessary:(id)arg1;	// IMP=0x000000000001c5c6
- (void)filterAndStageDetectionResults:(id)arg1;	// IMP=0x000000000001c23b
- (void)visitState:(id)arg1 didIssueMetricsSubmissionHint:(unsigned long long)arg2;	// IMP=0x000000000001be71
- (void)visitState:(id)arg1 didChangeStateFromType:(unsigned long long)arg2 toType:(unsigned long long)arg3;	// IMP=0x000000000001be1c
- (_Bool)shouldPerformDetection;	// IMP=0x000000000001bdab
- (void)notifyObserversOfVisitStateChange;	// IMP=0x000000000001bc54
- (void)notifyObserversOfStagedSuspiciousDevices:(id)arg1;	// IMP=0x000000000001baab
- (void)notifyObserversOfSuspiciousDeviceUpdate:(id)arg1;	// IMP=0x000000000001b644
- (void)notifyObserversOfRequests:(id)arg1;	// IMP=0x000000000001b30d
- (void)notifyObserversOfSuspiciousDevices:(id)arg1;	// IMP=0x000000000001acd8
- (void)bootstrapVisitState:(id)arg1;	// IMP=0x000000000001ac46
- (void)bootstrapDeviceRecord:(id)arg1;	// IMP=0x000000000001abb4
- (void)removeObserver:(id)arg1;	// IMP=0x000000000001ab9e
- (void)addObserver:(id)arg1;	// IMP=0x000000000001ab88
- (id)initWithTASettings:(id)arg1;	// IMP=0x000000000001a971
- (id)initWithSettings:(id)arg1;	// IMP=0x000000000001a8f3
- (id)init;	// IMP=0x000000000001a8da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

