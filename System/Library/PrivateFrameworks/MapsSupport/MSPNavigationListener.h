//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/GEONavigationListenerDelegate-Protocol.h>

@class GEONavigationGuidanceState, GEONavigationListener, GEOSharedNavState, NSString;
@protocol MSPNavigationListenerDelegate, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MSPNavigationListener : NSObject <GEONavigationListenerDelegate>
{
    GEONavigationListener *_navigationListener;	// 8 = 0x8
    GEONavigationGuidanceState *_guidanceState;	// 16 = 0x10
    NSObject<OS_os_transaction> *_transaction;	// 24 = 0x18
    GEOSharedNavState *_state;	// 32 = 0x20
    _Bool _postedStateIsReady;	// 40 = 0x28
    NSString *_navigationSessionIdentifier;	// 48 = 0x30
    id <MSPNavigationListenerDelegate> _delegate;	// 56 = 0x38
    GEOSharedNavState *_currentState;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000009f27f
@property(retain, nonatomic) GEOSharedNavState *currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak id <MSPNavigationListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performDelegateNotificationBlockIfReady:(CDUnknownBlockType)arg1;	// IMP=0x000000000009f1f2
- (int)_analyticsPipelineTransportModeForGEOTransportType:(int)arg1;	// IMP=0x000000000009f1d8
- (void)navigationListener:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x000000000009effc
- (void)navigationListener:(id)arg1 didUpdateTrafficForCurrentRoute:(id)arg2;	// IMP=0x000000000009efac
- (void)navigationListener:(id)arg1 didUpdateRoute:(id)arg2;	// IMP=0x000000000009edfb
- (void)navigationListener:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x000000000009edab
- (void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(CDStruct_c3b9c2ee)arg2;	// IMP=0x000000000009ed7d
- (void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;	// IMP=0x000000000009ec60
- (void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;	// IMP=0x000000000009eb5c
- (void)navigationListener:(id)arg1 didChangeNavigationState:(unsigned long long)arg2 transportType:(int)arg3;	// IMP=0x000000000009e817
- (void)_updateTransaction;	// IMP=0x000000000009e6d7
- (int)_referenceFrameForDestination:(id)arg1;	// IMP=0x000000000009e4d8
- (void)_updateTransportTypeFromCurrentState;	// IMP=0x000000000009e217
- (void)_updateETAWithArrival:(CDStruct_c3b9c2ee)arg1;	// IMP=0x000000000009dfe1
- (_Bool)_updateDestinationIfNeeded:(id)arg1;	// IMP=0x000000000009ddbd
- (void)_updateLocation:(id)arg1;	// IMP=0x000000000009dbaf
- (void)_updateTraffic:(id)arg1;	// IMP=0x000000000009dadc
- (void)_updateRoute:(id)arg1;	// IMP=0x000000000009d998
- (int)_currentTransportType;	// IMP=0x000000000009d957
- (_Bool)_isCompatibleTransportType:(int)arg1;	// IMP=0x000000000009d90a
@property(readonly, nonatomic) _Bool isCompatibleTransportType;
@property(readonly, nonatomic) _Bool isCompatibleNavigationType;
@property(readonly, nonatomic) _Bool isInNavigatingState;
- (void)dealloc;	// IMP=0x000000000009d79e
@property(readonly, copy, nonatomic) NSString *navigationSessionIdentifier;
- (void)_checkStateIsReady;	// IMP=0x000000000009d39c
- (void)_initPendingStateIfNeededWithTransportType:(int)arg1;	// IMP=0x000000000009cf02
- (void)_initPendingStateIfNeeded;	// IMP=0x000000000009ced2
- (id)init;	// IMP=0x000000000009cda4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
