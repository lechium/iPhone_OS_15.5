//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKCADisplayMonitor, BKDisplayController, BKDisplayLink, BKHIDClientConnectionManager, BKKeyboardHIDEventProcessor, BKMouseEventAccumulator, BKMousePointerAnalyticsReporter, BKMousePointerAnnotationController, BKMousePointerControllerConfiguration, BKMousePointerDeviceAvailabilityMonitor, BKMousePointerEventStatisticsLogger, BKMousePointerRegion, BKMousePointerRegionArrangement, BKMousePointerServiceServer, BKOrientationManager, BKSLocalDefaults, BKSMousePointerDevicePreferences, BKSmartCoverHIDEventProcessor, BKTouchPadManager, MISSING_TYPE, NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSSet, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKMousePointerController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    struct os_unfair_lock_s _preferencesLock;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_pointerDeviceAvailabilityMonitorQueue;	// 16 = 0x10
    BKMousePointerControllerConfiguration *_configuration;	// 24 = 0x18
    double _mainDisplayCornerRadius;	// 32 = 0x20
    BKMousePointerDeviceAvailabilityMonitor *_pointerDeviceAvailabilityMonitor;	// 40 = 0x28
    BKMousePointerAnalyticsReporter *_analyticsReporter;	// 48 = 0x30
    NSDictionary *_displayUUIDToPointerRegion;	// 56 = 0x38
    BKCADisplayMonitor *_displayMonitor;	// 64 = 0x40
    id <BSInvalidatable> _displayMonitorObservingAssertion;	// 72 = 0x48
    NSString *_mainDisplayUUID;	// 80 = 0x50
    BKMousePointerRegionArrangement *_regionArrangement;	// 88 = 0x58
    BKMousePointerRegion *_pointerRegion;	// 96 = 0x60
    NSMutableArray *_activePointerAnimations;	// 104 = 0x68
    unsigned long long _pointerAnimationRevisionID;	// 112 = 0x70
    struct CGPoint _pointerRegionPoint;	// 120 = 0x78
    unsigned char _pointerRegionEdgeMask;	// 136 = 0x88
    unsigned long long _interpolatedEventMask;	// 144 = 0x90
    BKDisplayLink *_displayLink;	// 152 = 0x98
    BKMouseEventAccumulator *_eventAccumulator;	// 160 = 0xa0
    NSSet *_lastEventContexts;	// 168 = 0xa8
    long long _mainDisplayInterfaceOrientation;	// 176 = 0xb0
    NSMutableDictionary *_senderPropertiesBySenderID;	// 184 = 0xb8
    long long _activeKeyboardModifiers;	// 192 = 0xc0
    BKTouchPadManager *_touchPadManager;	// 200 = 0xc8
    BKKeyboardHIDEventProcessor *_keyboardEventProcessor;	// 208 = 0xd0
    BKSmartCoverHIDEventProcessor *_smartCoverEventProcessor;	// 216 = 0xd8
    BKDisplayController *_displayController;	// 224 = 0xe0
    BKOrientationManager *_orientationManager;	// 232 = 0xe8
    id <BSInvalidatable> _displayBlankingObservationAssertion;	// 240 = 0xf0
    id <BSInvalidatable> _keyboardEventObservationAssertion;	// 248 = 0xf8
    id <BSInvalidatable> _smartCoverObservationAssertion;	// 256 = 0x100
    BKMousePointerAnnotationController *_annotationController;	// 264 = 0x108
    BKMousePointerServiceServer *_ipcServer_do_not_access_directly;	// 272 = 0x110
    NSMutableArray *_lifecycleObservers;	// 280 = 0x118
    BKMousePointerEventStatisticsLogger *_statisticsLogger;	// 288 = 0x120
    NSHashTable *_globalDevicePreferencesObservers;	// 296 = 0x128
    NSMutableOrderedSet *_buttonDownRepositionAssertions;	// 304 = 0x130
    NSMutableDictionary *_globalEventRoutesByDisplayID;	// 312 = 0x138
    NSMutableDictionary *_modelUpdateSuppressionAssertionsByDisplayID;	// 320 = 0x140
    _Bool _debugVisualizationEnabled;	// 328 = 0x148
    _Bool _displayLinkDisabled;	// 329 = 0x149
    struct atomic_flag _invalid;	// 330 = 0x14a
    BKSLocalDefaults *_localDefaults;	// 336 = 0x150
    MISSING_TYPE *_HIDConnectionManager;	// 344 = 0x158
}

+ (id)standardConfiguration;	// IMP=0x0000000000051293
- (void).cxx_destruct;	// IMP=0x002000000004ecaa
@property(retain, nonatomic) BKHIDClientConnectionManager *HIDConnectionManager; // @synthesize HIDConnectionManager=_HIDConnectionManager;
@property(retain, nonatomic) BKSLocalDefaults *localDefaults; // @synthesize localDefaults=_localDefaults;
- (long long)_processTopLevelTrackpadEvent:(struct __IOHIDEvent *)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000004e85a
- (void)_locked_updateEventLifecycleObservers;	// IMP=0x001000000004e47e
- (long long)_processTopLevelScaleEvent:(struct __IOHIDEvent *)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000004e409
- (long long)_processTopLevelScrollEvent:(struct __IOHIDEvent *)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000004e387
- (long long)_processTopLevelMouseEvent:(struct __IOHIDEvent *)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000004e2ec
- (id)_locked_senderPropertiesForSenderID:(unsigned long long)arg1;	// IMP=0x001000000004e282
- (void)_locked_addSenderProperties:(id)arg1;	// IMP=0x001000000004e22e
- (id)_senderPropertiesFromServices:(id)arg1;	// IMP=0x001000000004dc8e
- (id)_locked_pidsCorrespondingToContextsAtGlobalLocation:(struct CGPoint)arg1;	// IMP=0x001000000004d9ab
- (_Bool)_locked_validateNewGlobalPointerLocationRemainsInContextOfPID:(int)arg1 afterApplyingDeltaPoint:(struct CGPoint)arg2;	// IMP=0x001000000004d8b4
- (void)_locked_updateGlobalPointerLocationFromDeltaPoint:(struct CGPoint)arg1 reason:(id)arg2;	// IMP=0x001000000004d60b
- (void)_locked_processOneAccumulatedEventAtTimestamp:(unsigned long long)arg1 shouldDisableDeltaPointerLocationUpdate:(_Bool)arg2;	// IMP=0x001000000004c94a
- (id)_locked_authenticationMessageForDisplay:(id)arg1 context:(id)arg2 clientPort:(unsigned int)arg3;	// IMP=0x001000000004c668
- (void)_locked_getHitTestPoint:(out struct CGPoint *)arg1 display:(out id *)arg2 interfaceOrientation:(out long long *)arg3;	// IMP=0x001000000004c4e4
- (void)_locked_recenterModelPointIfNeeded:(out _Bool *)arg1;	// IMP=0x001000000004bede
- (void)_locked_processAccumulatedEvents:(unsigned long long)arg1;	// IMP=0x001000000004bd6e
- (void)_locked_produceSyntheticPointerEventsAtTimestamp:(unsigned long long)arg1 alwaysSend:(_Bool)arg2;	// IMP=0x001000000004bd01
- (_Bool)_locked_shouldProcessEventsOnDisplayLink;	// IMP=0x001000000004bcec
- (void)_locked_produceSyntheticPointerEventsAtTimestamp:(unsigned long long)arg1;	// IMP=0x001000000004bcd5
- (struct __IOHIDEvent *)_locked_exitEventForEventContext:(id)arg1 timestamp:(unsigned long long)arg2 poster:(id)arg3;	// IMP=0x001000000004bc80
- (void)_locked_dispatchExitEventAtTimestamp:(unsigned long long)arg1;	// IMP=0x001000000004ba3f
- (struct __IOHIDEvent *)_locked_eventWithPointerState:(unsigned short)arg1 timestamp:(unsigned long long)arg2 eventContext:(id)arg3 unacceleratedRelativePoint:(struct CGPoint)arg4 acceleratedRelativePoint:(struct CGPoint)arg5 poster:(id)arg6;	// IMP=0x001000000004b95c
- (id)_locked_eventAttributesWithPointerState:(unsigned short)arg1 eventContext:(id)arg2 unacceleratedRelativePoint:(struct CGPoint)arg3 acceleratedRelativePoint:(struct CGPoint)arg4;	// IMP=0x001000000004b293
- (struct __IOHIDEvent *)_locked_eventAtTimestamp:(unsigned long long)arg1 eventContext:(id)arg2;	// IMP=0x001000000004b141
- (long long)_locked_orientationForDisplayUUID:(id)arg1;	// IMP=0x001000000004b0bb
- (void)_locked_updatePointerWithProposedGlobalPoint:(struct CGPoint)arg1 shouldUpdateDisplayProperties:(_Bool)arg2 reason:(id)arg3;	// IMP=0x001000000004ac32
- (void)_locked_updateMousePointerRegionArrangement;	// IMP=0x001000000004a697
- (void)_displayLinkFired:(id)arg1;	// IMP=0x001000000004a51c
- (void)_locked_reevaluateDisplayLinkForReason:(id)arg1;	// IMP=0x001000000004a317
- (void)_locked_sendExitEventsAfterTerminatingDisplayLink;	// IMP=0x0010000000049d89
- (void)_locked_invalidateGlobalEventRoutesInSet:(id)arg1 forPID:(int)arg2 display:(id)arg3;	// IMP=0x0010000000049ac7
- (void)_locked_setGlobalPointerEventContextIDsForPID:(int)arg1 displayUUID:(id)arg2 targetContextIDs:(id)arg3;	// IMP=0x0010000000049691
- (void)_locked_removeLifecycleObserver:(id)arg1;	// IMP=0x001000000004961a
- (void)_locked_addLifecycleObserver:(id)arg1;	// IMP=0x00100000000495bd
- (_Bool)_preferencesLock_setGlobalDevicePreferences:(id)arg1;	// IMP=0x001000000004947c
- (id)_preferencesLock_globalDevicePreferences;	// IMP=0x00100000000492a3
- (void)_preferencesLock_applyDevicePreferences:(id)arg1 toService:(id)arg2;	// IMP=0x0010000000048db4
- (void)_locked_applyViewStateToServices:(id)arg1;	// IMP=0x0010000000048c4f
- (void)_locked_updateService:(id)arg1 viewStateDictionary:(id)arg2;	// IMP=0x0010000000048ae6
- (void)_locked_resetEventAccumulator;	// IMP=0x00100000000489db
- (void)_locked_updateEventAccumulatorSettings;	// IMP=0x0010000000048946
- (id)_viewStateDictionaryForScreenOn:(_Bool)arg1 digitizerSurfaceCovered:(_Bool)arg2;	// IMP=0x0010000000048856
- (void)_reevaluteMousePointerVisualizationFromDefaults;	// IMP=0x00100000000483dd
- (void)globalKeyboardModifiersDidChange:(long long)arg1;	// IMP=0x0010000000048366
- (void)smartCoverStateDidChange:(int)arg1;	// IMP=0x00100000000482bd
- (void)displayUUIDDidChange:(id)arg1;	// IMP=0x001000000004827c
- (void)displayCurrentModeDidChange:(id)arg1;	// IMP=0x001000000004823b
- (void)displayAvailableModesDidChange:(id)arg1;	// IMP=0x00100000000481fa
- (void)display:(id)arg1 didBecomeBlank:(_Bool)arg2;	// IMP=0x0010000000048171
- (void)mousePointerIOHIDServicesRemoved:(id)arg1;	// IMP=0x0010000000047eb7
- (void)_invokeServerCallout:(CDUnknownBlockType)arg1;	// IMP=0x0010000000047e8d
- (void)mousePointerIOHIDServicesAdded:(id)arg1;	// IMP=0x0010000000047a7a
- (void)mousePointerDeviceAvailabilityMonitorDidChangeAvailability:(id)arg1;	// IMP=0x0010000000047899
- (void)orientationManager:(id)arg1 deviceOrientationMayHaveChanged:(long long)arg2 changeSource:(long long)arg3 isDeviceOrientationLocked:(_Bool)arg4;	// IMP=0x001000000004783b
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000004776f
- (void)removeGlobalDevicePreferencesObserver:(id)arg1;	// IMP=0x00100000000476f1
- (void)addGlobalDevicePreferencesObserver:(id)arg1;	// IMP=0x0010000000047668
- (void)removeLifecycleObserver:(id)arg1;	// IMP=0x001000000004761f
- (void)addLifecycleObserver:(id)arg1;	// IMP=0x00100000000475d6
@property(nonatomic) BKSMousePointerDevicePreferences *globalDevicePreferences;
- (void)setPreferences:(id)arg1 forDevice:(id)arg2;	// IMP=0x0010000000047216
- (id)preferencesForDevice:(id)arg1;	// IMP=0x00100000000471b7
- (void)hitTestRegionsDidChange:(id)arg1 forDisplayUUID:(id)arg2;	// IMP=0x00100000000470b8
- (void)stopRoutingGlobalEventsForPID:(int)arg1;	// IMP=0x0010000000047010
- (void)setGlobalPointerEventContextIDsForPID:(int)arg1 displayUUID:(id)arg2 targetContextIDs:(id)arg3;	// IMP=0x0010000000046d38
- (void)getHitTestContextsAtPoint:(id)arg1 withAdditionalContexts:(id)arg2 onDisplay:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000467ba
- (id)acquireButtonDownPointerRepositionAssertionForReason:(id)arg1 contextRelativePointerPosition:(id)arg2 onDisplay:(id)arg3 restrictingToPID:(int)arg4;	// IMP=0x001000000004627e
- (void)_setPointerPosition:(struct CGPoint)arg1 onDisplay:(id)arg2 restrictedToPID:(int)arg3 auditPID:(int)arg4 withAnimationDriverProvider:(CDUnknownBlockType)arg5;	// IMP=0x0010000000045d2d
- (void)setContextRelativePointerPosition:(id)arg1 withInitialVelocity:(id)arg2 onDisplay:(id)arg3 withDecelerationRate:(double)arg4 restrictingToPID:(int)arg5 auditPID:(int)arg6;	// IMP=0x0010000000045b97
- (void)setContextRelativePointerPosition:(id)arg1 onDisplay:(id)arg2 withAnimationParameters:(id)arg3 restrictingToPID:(int)arg4 auditPID:(int)arg5;	// IMP=0x0010000000045ade
- (int)_pidForContextID:(unsigned int)arg1 onDisplay:(id)arg2 pidValidOut:(out _Bool *)arg3;	// IMP=0x0010000000045a2b
- (void)setPointerPosition:(struct CGPoint)arg1 onDisplay:(id)arg2 withAnimationParameters:(id)arg3 auditPID:(int)arg4;	// IMP=0x001000000004584b
- (struct CGPoint)_pointerRegionPointForContextRelativePoint:(id)arg1 onDisplay:(id)arg2;	// IMP=0x001000000004573c
- (void)setGlobalPointerPosition:(struct CGPoint)arg1 synthesizeEvents:(_Bool)arg2 process:(id)arg3;	// IMP=0x0010000000045631
- (void)setGlobalPointerPosition:(struct CGPoint)arg1 process:(id)arg2;	// IMP=0x0010000000045617
@property(readonly, nonatomic) struct CGPoint globalPointerPosition;
- (id)suppressPointerModelUpdatesAssertionForDisplay:(id)arg1 reason:(id)arg2;	// IMP=0x0010000000045372
@property(readonly, nonatomic) NSArray *availableDevices;
- (void)invalidate;	// IMP=0x0010000000045049
- (void)dealloc;	// IMP=0x001000000004500b
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000044a29
- (id)init;	// IMP=0x00100000000449ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

