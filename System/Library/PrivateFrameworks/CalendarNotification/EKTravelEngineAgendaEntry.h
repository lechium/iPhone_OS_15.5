//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, CalGeocoder, EKTravelEngineHypothesis, EKTravelEngineOriginalEvent, EKTravelEngineThrottle, NSData, NSString;
@protocol CALNRouteHypothesizer, CALNRouteHypothesizerProvider, OS_dispatch_queue;

@interface EKTravelEngineAgendaEntry : NSObject
{
    _Bool _dismissed;	// 8 = 0x8
    _Bool _geocodedEventEncountered;	// 9 = 0x9
    _Bool _hypothesizerSentAtLeastOneHypothesis;	// 10 = 0xa
    CDUnknownBlockType _updateBlock;	// 16 = 0x10
    CDUnknownBlockType _entrySignificantlyChangedBlock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 40 = 0x28
    EKTravelEngineOriginalEvent *_originalEventInternal;	// 48 = 0x30
    EKTravelEngineThrottle *_throttle;	// 56 = 0x38
    CalGeocoder *_geocoder;	// 64 = 0x40
    id <CALNRouteHypothesizerProvider> _hypothesizerProvider;	// 72 = 0x48
    id <CALNRouteHypothesizer> _hypothesizer;	// 80 = 0x50
    EKTravelEngineHypothesis *_latestHypothesis;	// 88 = 0x58
    CLLocation *_geoLocation;	// 96 = 0x60
    NSData *_mapKitHandle;	// 104 = 0x68
    long long _travelTimeThresholdExceededState;	// 112 = 0x70
    double _maximumTravelDurationEncountered;	// 120 = 0x78
    NSString *_agendaEntryIdentifier;	// 128 = 0x80
}

+ (double)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;	// IMP=0x0000000000059c48
- (void).cxx_destruct;	// IMP=0x000000000005cd03
@property(retain, nonatomic) NSString *agendaEntryIdentifier; // @synthesize agendaEntryIdentifier=_agendaEntryIdentifier;
@property(nonatomic) double maximumTravelDurationEncountered; // @synthesize maximumTravelDurationEncountered=_maximumTravelDurationEncountered;
@property(nonatomic) long long travelTimeThresholdExceededState; // @synthesize travelTimeThresholdExceededState=_travelTimeThresholdExceededState;
@property(nonatomic) _Bool hypothesizerSentAtLeastOneHypothesis; // @synthesize hypothesizerSentAtLeastOneHypothesis=_hypothesizerSentAtLeastOneHypothesis;
@property(nonatomic) _Bool geocodedEventEncountered; // @synthesize geocodedEventEncountered=_geocodedEventEncountered;
@property(retain, nonatomic) NSData *mapKitHandle; // @synthesize mapKitHandle=_mapKitHandle;
@property(retain, nonatomic) CLLocation *geoLocation; // @synthesize geoLocation=_geoLocation;
@property(retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis; // @synthesize latestHypothesis=_latestHypothesis;
@property(retain, nonatomic) id <CALNRouteHypothesizer> hypothesizer; // @synthesize hypothesizer=_hypothesizer;
@property(readonly, nonatomic) id <CALNRouteHypothesizerProvider> hypothesizerProvider; // @synthesize hypothesizerProvider=_hypothesizerProvider;
@property(retain, nonatomic) CalGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain, nonatomic) EKTravelEngineThrottle *throttle; // @synthesize throttle=_throttle;
@property(retain, nonatomic) EKTravelEngineOriginalEvent *originalEventInternal; // @synthesize originalEventInternal=_originalEventInternal;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(copy, nonatomic) CDUnknownBlockType entrySignificantlyChangedBlock; // @synthesize entrySignificantlyChangedBlock=_entrySignificantlyChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (void)_updateWithHypothesis:(id)arg1;	// IMP=0x000000000005ca00
- (void)_createHypothesizerForDestination:(id)arg1;	// IMP=0x000000000005c0dc
- (id)_createSyntheticHypothesis;	// IMP=0x000000000005bcb7
- (id)_generateDestination;	// IMP=0x000000000005b942
- (void)_setUpRouteMonitoring;	// IMP=0x000000000005b736
- (void)_enhanceLocation;	// IMP=0x000000000005a7a2
- (void)_clearEverything;	// IMP=0x000000000005a54b
- (void)_sendFeedbackToHypothesizerForPostingNotification:(unsigned long long)arg1;	// IMP=0x000000000005a380
- (void)receivedAlarmNamed:(id)arg1;	// IMP=0x000000000005a212
- (id)emissionHypothesisRefreshAlarmName;	// IMP=0x000000000005a0fb
- (id)requestHypothesisRefreshAlarmName;	// IMP=0x0000000000059fe4
- (void)_performAnalyticsPostProcessing;	// IMP=0x0000000000059e15
- (void)_updateTravelTimeExceededThresholdStateUsingExceededValue:(_Bool)arg1;	// IMP=0x0000000000059dac
- (void)_trackTTLCandidateEvent:(id)arg1;	// IMP=0x0000000000059d3f
- (void)_accountForGeocodedEventEncounter;	// IMP=0x0000000000059cb4
- (void)sendFeedbackForPostingLeaveNowNotification;	// IMP=0x0000000000059c9d
- (void)sendFeedbackForPostingLeaveByNotification;	// IMP=0x0000000000059c86
@property(readonly, nonatomic) EKTravelEngineOriginalEvent *originalEvent;
- (void)reset;	// IMP=0x00000000000598de
- (void)_uninstallEmissionHypothesisRefreshTimer;	// IMP=0x0000000000059823
- (void)_createEmissionHypothesisRefreshTimerWithDate:(id)arg1;	// IMP=0x0000000000059741
- (void)_uninstallRequestHypothesisRefreshTimer;	// IMP=0x0000000000059686
- (void)_createHypothesisRequestRefreshTimerWithDate:(id)arg1;	// IMP=0x00000000000595a4
- (void)removeAlarmWithName:(id)arg1;	// IMP=0x0000000000059569
- (void)createAlarmWithName:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000000059429
- (void)cancelEmissionHypothesisRefresh;	// IMP=0x0000000000059417
- (void)cancelHypothesisRefreshRequest;	// IMP=0x0000000000059405
- (void)requestHypothesisRefreshAtDate:(id)arg1;	// IMP=0x000000000005939d
- (void)_emissionHypothesisRefreshTimerFired;	// IMP=0x0000000000059327
- (void)_requestHypothesisRefreshTimerFired;	// IMP=0x00000000000592b1
- (void)_hypothesisRefreshTimerFired;	// IMP=0x0000000000059192
- (void)updateHypothesizerIfNecessaryWithOriginalEvent:(id)arg1;	// IMP=0x0000000000058442
- (void)dealloc;	// IMP=0x0000000000058404
- (id)initWithRouteHypothesizerProvider:(id)arg1;	// IMP=0x000000000005826c

@end
