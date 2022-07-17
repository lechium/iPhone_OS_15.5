//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNGuidanceJunctionViewInfo, MNGuidanceLaneInfo, MNGuidanceSignInfo, NSArray, NSHashTable, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface GuidanceObserver : NSObject
{
    NSMutableDictionary *_guidanceUpdates;	// 8 = 0x8
    NSHashTable *_outlets;	// 16 = 0x10
    NSString *_destinationDisplayName;	// 24 = 0x18
    _Bool _paused;	// 32 = 0x20
    _Bool _usingSignInfo;	// 33 = 0x21
    _Bool _needsUpdate;	// 34 = 0x22
    _Bool _needsJunctionViewUpdate;	// 35 = 0x23
    _Bool _needsARInfosUpdate;	// 36 = 0x24
    MNGuidanceSignInfo *_currentSignInfo;	// 40 = 0x28
    NSArray *_currentARInfos;	// 48 = 0x30
    MNGuidanceLaneInfo *_currentLaneInfo;	// 56 = 0x38
    MNGuidanceJunctionViewInfo *_currentJunctionViewInfo;	// 64 = 0x40
    _Bool _secondarySignVisible;	// 72 = 0x48
    _Bool _shouldHideLaneGuidanceThisUpdate;	// 73 = 0x49
    _Bool _shouldHideJunctionViewThisUpdate;	// 74 = 0x4a
    _Bool _usePersistentDisplay;	// 75 = 0x4b
    NSMutableDictionary *_classicSignIDs;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000099604d
@property(retain, nonatomic) NSMutableDictionary *classicSignIDs; // @synthesize classicSignIDs=_classicSignIDs;
- (void)navigationServiceDidHideSecondaryStep:(id)arg1;	// IMP=0x0010000000995feb
- (void)navigationService:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x0010000000995ba6
- (void)navigationService:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x0010000000995b34
- (void)navigationService:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x00100000009956e3
- (void)navigationService:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x0010000000995493
- (void)navigationService:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;	// IMP=0x0010000000995249
- (void)navigationService:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x0010000000995218
- (void)navigationService:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x00100000009950cb
- (void)navigationService:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x001000000099509c
- (void)navigationService:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x0010000000995042
- (void)navigationService:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0010000000994ff8
- (void)navigationService:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0010000000994fe6
- (void)navigationService:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0010000000994fd4
- (void)_handleArrivalWithService:(id)arg1 atWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0010000000994e08
- (void)navigationService:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x0010000000994c4a
- (void)navigationService:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x0010000000994c00
- (void)navigationServiceEndGuidanceUpdate:(id)arg1;	// IMP=0x0010000000994bee
- (void)navigationServiceBeginGuidanceUpdate:(id)arg1;	// IMP=0x0010000000994be8
- (void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;	// IMP=0x0010000000994bd6
- (void)navigationServiceDidCancelReroute:(id)arg1;	// IMP=0x0010000000994b32
- (void)navigationService:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;	// IMP=0x0010000000994ab4
- (void)navigationService:(id)arg1 didReroute:(id)arg2;	// IMP=0x00100000009948e5
- (void)navigationServiceWillReroute:(id)arg1;	// IMP=0x0010000000994867
- (void)navigationService:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x001000000099485a
- (void)navigationService:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x00100000009947bf
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0010000000994743
- (void)navigationService:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x001000000099470e
- (void)_updateDisplayETA;	// IMP=0x0010000000994597
- (id)destinationTimeZone;	// IMP=0x00100000009944ef
- (void)_updateDestinationDisplayName;	// IMP=0x001000000099427e
- (void)_tearDownNavigationIfNeeded;	// IMP=0x00100000009941f9
- (void)_prepareForActiveNavigationIfNeeded;	// IMP=0x0010000000994108
- (void)_processARInfosUpdate:(id)arg1;	// IMP=0x0010000000994021
- (void)_processUsePersistentDisplay;	// IMP=0x0010000000993f07
- (void)_processHideJunctionViewInfo;	// IMP=0x0010000000993e82
- (void)_processShowJunctionViewInfo:(id)arg1;	// IMP=0x0010000000993d54
- (void)_processHideLaneInfo;	// IMP=0x0010000000993ccf
- (void)_processShowLaneInfo:(id)arg1;	// IMP=0x0010000000993ae6
- (void)_processSignInfo:(id)arg1;	// IMP=0x0010000000992b8b
- (void)_processPendingUpdates;	// IMP=0x00100000009928cb
- (void)resumeUpdates;	// IMP=0x00100000009928ad
- (void)pauseUpdates;	// IMP=0x00100000009928a3
- (void)_repeatAllUpdates;	// IMP=0x0010000000992713
- (void)_repeatAllUpdatesWithTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x001000000099253b
- (void)repeatAllUpdatesForOutlet:(id)arg1;	// IMP=0x001000000099239b
- (void)_removeAllRepeatableUpdates;	// IMP=0x0010000000992385
- (void)_removeAllRepeatableUpdatesForKeys:(id)arg1;	// IMP=0x001000000099236f
- (void)_removeRepeatableUpdateForKey:(id)arg1;	// IMP=0x0010000000992359
- (void)_eachGuidanceOutput:(CDUnknownBlockType)arg1 ignorePaused:(_Bool)arg2;	// IMP=0x001000000099220b
- (void)_eachGuidanceOutput:(CDUnknownBlockType)arg1;	// IMP=0x00100000009921f7
- (void)_performRepeatableUpdateForKey:(id)arg1 onEachGuidanceOutput:(CDUnknownBlockType)arg2;	// IMP=0x0010000000992160
- (id)_signRepeatableUpdateKeys;	// IMP=0x00100000009920e3
- (id)_orderedUpdateKinds;	// IMP=0x0010000000991fbb
- (void)_clearAllGuidance;	// IMP=0x0010000000991f51
- (void)removeOutlet:(id)arg1;	// IMP=0x0010000000991e6f
- (void)addOutlet:(id)arg1 forOwner:(id)arg2;	// IMP=0x0010000000991d8d
- (id)init;	// IMP=0x0010000000991be6
- (void)dealloc;	// IMP=0x0010000000991ad1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
