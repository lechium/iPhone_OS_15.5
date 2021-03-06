//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKitUI/EKICSPreviewControllerDelegate-Protocol.h>
#import <EventKitUI/UIAlertViewDelegate-Protocol.h>
#import <EventKitUI/UIDragInteractionDelegate-Protocol.h>
#import <EventKitUI/UIDropInteractionDelegate-Protocol.h>
#import <EventKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class EKCalendarDate, EKDayOccurrenceView, EKEvent, EKICSPreviewController, EKUIEmailCompositionManager, EKUIRecurrenceAlertController, NSString, NSTimer, UIDragInteraction, UIDropInteraction, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, _UIDragSnappingFeedbackGenerator;
@protocol EKEventGestureControllerDelegate, EKEventGestureControllerUntimedDelegate;

@interface EKEventGestureController : NSObject <UIDropInteractionDelegate, UIDragInteractionDelegate, EKICSPreviewControllerDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    UILongPressGestureRecognizer *_draggingGestureRecognizer;	// 8 = 0x8
    UITapGestureRecognizer *_tapGestureRecognizer;	// 16 = 0x10
    UIView *_targetView;	// 24 = 0x18
    int _currentDraggingState;	// 32 = 0x20
    int _pendingDraggingState;	// 36 = 0x24
    int _queuedDraggingState;	// 40 = 0x28
    _Bool _dragCompletionPending;	// 44 = 0x2c
    _Bool _dropAnimationInProgress;	// 45 = 0x2d
    _Bool _waitingForDragToInitialize;	// 46 = 0x2e
    _Bool _needToSetSystemDragPreview;	// 47 = 0x2f
    _Bool _dragInitiationLocked;	// 48 = 0x30
    EKDayOccurrenceView *_draggingView;	// 56 = 0x38
    EKEvent *_event;	// 64 = 0x40
    int _currentDragType;	// 72 = 0x48
    struct CGPoint _firstTouchPoint;	// 80 = 0x50
    double _firstTouchTime;	// 96 = 0x60
    struct CGPoint _latestTouchPoint;	// 104 = 0x68
    struct CGPoint _previousTouchPoint;	// 120 = 0x78
    double _previousTouchTime;	// 136 = 0x88
    double _previousTouchVelocity;	// 144 = 0x90
    struct CGPoint _touchOffset;	// 152 = 0x98
    long long _touchOffsetDays;	// 168 = 0xa8
    double _dateAtFirstTouchPoint;	// 176 = 0xb0
    _Bool _isNewEvent;	// 184 = 0xb8
    _Bool _isInCancelRegion;	// 185 = 0xb9
    _Bool _isMultiDayTimedEvent;	// 186 = 0xba
    EKCalendarDate *_currentDay;	// 192 = 0xc0
    _Bool _horizontalDragLocked;	// 200 = 0xc8
    _Bool _dragLockDisabled;	// 201 = 0xc9
    _Bool _isDragging;	// 202 = 0xca
    NSTimer *_scrollTimer;	// 208 = 0xd0
    double _timeSinceEnteredPageMargin;	// 216 = 0xd8
    double _firstContactOfDraggingViewTop;	// 224 = 0xe0
    _Bool _hasStartedScrolling;	// 232 = 0xe8
    long long _consecutivePageTurnCount;	// 240 = 0xf0
    _Bool _forcedStart;	// 248 = 0xf8
    _Bool _needsCommit;	// 249 = 0xf9
    EKUIRecurrenceAlertController *_recurrenceAlertController;	// 256 = 0x100
    _UIDragSnappingFeedbackGenerator *_dragSnappingFeedback;	// 264 = 0x108
    EKICSPreviewController *_currentICSPreviewController;	// 272 = 0x110
    UIDropInteraction *_dropInteraction;	// 280 = 0x118
    UIDragInteraction *_dragInteraction;	// 288 = 0x120
    long long _currentDropDataOwnerCache;	// 296 = 0x128
    _Bool _usesXDragOffsetInCancelRegion;	// 304 = 0x130
    _Bool _usesHorizontalDragLocking;	// 305 = 0x131
    _Bool _commitBlocked;	// 306 = 0x132
    id <EKEventGestureControllerUntimedDelegate> _untimedDelegate;	// 312 = 0x138
    id <EKEventGestureControllerDelegate> _delegate;	// 320 = 0x140
    NSString *_sessionIdentifierForDebug;	// 328 = 0x148
    EKDayOccurrenceView *_draggingViewSource;	// 336 = 0x150
    EKUIEmailCompositionManager *_messageSendingManager;	// 344 = 0x158
}

+ (id)_captureImageOfOccurrenceView:(id)arg1 withFrameOfOpaqueContent:(struct CGRect)arg2;	// IMP=0x00000000001b5f5f
- (void).cxx_destruct;	// IMP=0x00000000001bd7b9
@property(retain, nonatomic) EKUIEmailCompositionManager *messageSendingManager; // @synthesize messageSendingManager=_messageSendingManager;
@property(retain, nonatomic) EKDayOccurrenceView *draggingViewSource; // @synthesize draggingViewSource=_draggingViewSource;
@property(retain, nonatomic) NSString *sessionIdentifierForDebug; // @synthesize sessionIdentifierForDebug=_sessionIdentifierForDebug;
@property(readonly, nonatomic) EKDayOccurrenceView *draggingView; // @synthesize draggingView=_draggingView;
@property(readonly, nonatomic) struct CGPoint touchOffset; // @synthesize touchOffset=_touchOffset;
@property(readonly, nonatomic) struct CGPoint latestTouchPoint; // @synthesize latestTouchPoint=_latestTouchPoint;
@property(readonly, nonatomic) struct CGPoint firstTouchPoint; // @synthesize firstTouchPoint=_firstTouchPoint;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(nonatomic) _Bool commitBlocked; // @synthesize commitBlocked=_commitBlocked;
@property(nonatomic) _Bool usesHorizontalDragLocking; // @synthesize usesHorizontalDragLocking=_usesHorizontalDragLocking;
@property(nonatomic) _Bool usesXDragOffsetInCancelRegion; // @synthesize usesXDragOffsetInCancelRegion=_usesXDragOffsetInCancelRegion;
@property(nonatomic) __weak id <EKEventGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <EKEventGestureControllerUntimedDelegate> untimedDelegate; // @synthesize untimedDelegate=_untimedDelegate;
- (double)_Debug_HoursSinceStartOfDay:(double)arg1;	// IMP=0x00000000001bd585
- (_Bool)_isPointInCancelRegion:(struct CGPoint)arg1;	// IMP=0x00000000001bd4ca
- (double)_cancelRegionMargin;	// IMP=0x00000000001bd487
- (struct CGPoint)_computeOriginAtTouchPoint:(struct CGPoint)arg1 forDate:(double)arg2 isAllDay:(_Bool)arg3 allowXOffset:(_Bool)arg4 allowFloorAtRegionBottom:(_Bool)arg5;	// IMP=0x00000000001bcbe5
- (double)_computeHeightForOccurrenceViewOfDuration:(double)arg1 allDay:(_Bool)arg2;	// IMP=0x00000000001bcb07
- (double)_computeWidthForOccurrenceView;	// IMP=0x00000000001bca12
- (void)_updateHorizontalDragLockForPoint:(struct CGPoint)arg1;	// IMP=0x00000000001bc9a6
- (double)_capOccurrenceViewYOrigin:(double)arg1;	// IMP=0x00000000001bc8a9
- (double)_alignedYOriginForAllDayOccurrence:(id)arg1 atPoint:(struct CGPoint)arg2 floorAtAllDayRegionBottom:(_Bool)arg3;	// IMP=0x00000000001bc756
- (double)_allDayBottomPadding;	// IMP=0x00000000001bc713
- (_Bool)_flingOrCancelDraggingViewIfNeeded;	// IMP=0x00000000001bb64f
- (void)_cancel;	// IMP=0x00000000001bb4ff
- (void)_commit;	// IMP=0x00000000001b9624
- (void)_update;	// IMP=0x00000000001b8b69
- (double)_minimumDuration;	// IMP=0x00000000001b8b26
- (void)_setUpAfterForcedStartFromPoint:(struct CGPoint)arg1;	// IMP=0x00000000001b8743
- (void)_setTouchOffsetsFromPoint:(struct CGPoint)arg1 fixedToCenter:(_Bool)arg2;	// IMP=0x00000000001b82e1
- (void)_animateInNewEvent;	// IMP=0x00000000001b7d9d
- (id)_createTemporaryView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001b7588
- (id)originalStartDateForEvent:(id)arg1 includingTravel:(_Bool)arg2;	// IMP=0x00000000001b74d3
- (_Bool)_dragInteraction:(id)arg1 sessionSupportsSystemDrag:(id)arg2;	// IMP=0x00000000001b74cb
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x00000000001b74c0
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x00000000001b73a4
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;	// IMP=0x00000000001b7306
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;	// IMP=0x00000000001b7300
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;	// IMP=0x00000000001b72f8
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;	// IMP=0x00000000001b72f0
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;	// IMP=0x00000000001b72e8
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;	// IMP=0x00000000001b72e2
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;	// IMP=0x00000000001b71f1
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;	// IMP=0x00000000001b7113
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x00000000001b6611
- (id)_eventToUseAtInteractionStart:(struct CGPoint)arg1;	// IMP=0x00000000001b6392
- (_Bool)_isTouchFromDragSessionInResizeHandles:(id)arg1;	// IMP=0x00000000001b6352
- (unsigned long long)numberOfDragSourcesForView:(id)arg1;	// IMP=0x00000000001b6347
- (id)_findLocalDragItemInSession:(id)arg1;	// IMP=0x00000000001b60a8
- (id)_clippingPathForDraggingView;	// IMP=0x00000000001b5ef2
- (id)_captureImageOfDraggingView;	// IMP=0x00000000001b5db8
- (void)_setToLocalDraggingImageForDrag:(id)arg1;	// IMP=0x00000000001b5bdb
- (void)_setLocalDraggingViewHidden:(_Bool)arg1;	// IMP=0x00000000001b5b14
- (void)_setToSystemDraggingImageForDrag:(id)arg1;	// IMP=0x00000000001b5703
- (void)_enableSystemPreviewForDrag:(id)arg1;	// IMP=0x00000000001b56c4
- (void)_disableSystemPreviewForDrag:(id)arg1;	// IMP=0x00000000001b5678
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x00000000001b54dd
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;	// IMP=0x00000000001b53c5
- (struct CGPoint)_estimateFinalDropOriginForTimedDelegate;	// IMP=0x00000000001b5212
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x00000000001b4e93
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;	// IMP=0x00000000001b4e20
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;	// IMP=0x00000000001b4e08
- (void)_extractFileFromSession:(id)arg1;	// IMP=0x00000000001b46cb
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x00000000001b41cc
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;	// IMP=0x00000000001b411d
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x00000000001b3e58
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;	// IMP=0x00000000001b3bdd
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x00000000001b3b66
- (void)_dismissCurrentICSPreviewControllerAnimated:(_Bool)arg1;	// IMP=0x00000000001b3acb
- (void)_icsPreviewControllerCancelButtonPressed;	// IMP=0x00000000001b3ab4
- (void)icsPreviewController:(id)arg1 importDidImportEvents:(id)arg2;	// IMP=0x00000000001b3a92
- (void)icsPreviewControllerImportDidFail:(id)arg1;	// IMP=0x00000000001b3a70
- (void)icsPreviewControllerWantsDismissal:(id)arg1;	// IMP=0x00000000001b3a4e
- (void)_presentICSPreviewControllerIfNeeded;	// IMP=0x00000000001b38f0
- (void)_handleImportingICSData:(id)arg1 intoEventStore:(id)arg2;	// IMP=0x00000000001b37da
- (void)_handleShowingEventWithUniqueId:(id)arg1 date:(id)arg2 eventStore:(id)arg3;	// IMP=0x00000000001b36e2
- (void)_setupEvent:(id)arg1 withImportData:(id)arg2;	// IMP=0x00000000001b3585
- (_Bool)_dropSessionRequiresExternalDataExtraction:(id)arg1;	// IMP=0x00000000001b356b
- (unsigned long long)_dropOperationGivenDropSession:(id)arg1;	// IMP=0x00000000001b335d
- (id)_getEventUsingDropSession:(id)arg1;	// IMP=0x00000000001b3006
- (id)_acceptedFileExternalTypes;	// IMP=0x00000000001b2fd4
- (id)_acceptedNonFileExternalTypes;	// IMP=0x00000000001b2fbb
- (id)_acceptedExternalTypes;	// IMP=0x00000000001b2f3b
- (id)_acceptedTypes;	// IMP=0x00000000001b2ec2
- (_Bool)_calendarCanAcceptManagedData:(id)arg1;	// IMP=0x00000000001b2e5e
- (id)_findFirstCalendar:(id)arg1;	// IMP=0x00000000001b2e02
- (void)_setEventCalendar:(id)arg1 useManagedCalendar:(_Bool)arg2;	// IMP=0x00000000001b2b59
- (void)_updateFlingToCancelParameters;	// IMP=0x00000000001b2afd
- (id)_viewForTracking;	// IMP=0x00000000001b2a67
- (void)_dragFailedToStart;	// IMP=0x00000000001b295d
- (void)_returnDraggingViewToLastCommittedPositionFromTouchPoint:(struct CGPoint)arg1;	// IMP=0x00000000001b2884
- (void)_writeDraggingChangesToOccurrenceWithTouchPoint:(struct CGPoint)arg1;	// IMP=0x00000000001b27d9
- (void)_resumePreviousDrag;	// IMP=0x00000000001b27c7
- (void)_suspendCurrentDrag;	// IMP=0x00000000001b27b5
- (_Bool)__timedDelegateBeginEditingSessionAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001b227d
- (_Bool)canProposeNewTime:(id)arg1;	// IMP=0x00000000001b2177
- (_Bool)_beginEditingSessionAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001b204d
- (void)_createAndSetUpDraggingViewWithTouchPoint:(struct CGPoint)arg1 event:(id)arg2 ignoreOffsets:(_Bool)arg3;	// IMP=0x00000000001b1ae9
- (void)_adjustNewEventDates:(id)arg1 withPoint:(struct CGPoint)arg2;	// IMP=0x00000000001b1968
- (id)_createNewEventIfNeededAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000001b17c8
- (void)_cleanUpAllStateWithTouchPoint:(struct CGPoint)arg1 commit:(_Bool)arg2;	// IMP=0x00000000001b164f
- (void)_setUpInitialTouchPointsWithPoint:(struct CGPoint)arg1;	// IMP=0x00000000001b15e9
- (_Bool)_beginNewDragFromOffStateWithPoint:(struct CGPoint)arg1;	// IMP=0x00000000001b1479
- (void)_manageDraggingViewInteractivityForStateChangeFrom:(int)arg1 to:(int)arg2;	// IMP=0x00000000001b144d
- (void)didCrossDragBoundary:(int)arg1;	// IMP=0x00000000001b142d
- (void)_manageFeedbackForStateChangeFrom:(int)arg1 to:(int)arg2;	// IMP=0x00000000001b132c
- (id)_debugStringForDraggingState:(int)arg1;	// IMP=0x00000000001b12a1
- (int)_draggingState;	// IMP=0x00000000001b1298
- (_Bool)_setDraggingState:(int)arg1 withPoint:(struct CGPoint)arg2 event:(id)arg3 context:(id)arg4;	// IMP=0x00000000001b0bd9
- (_Bool)_setDraggingState:(int)arg1 withPoint:(struct CGPoint)arg2 event:(id)arg3;	// IMP=0x00000000001b0bc1
- (void)_scrollTimerFired:(id)arg1;	// IMP=0x00000000001b03fb
- (void)_removeScrollTimer;	// IMP=0x00000000001b03b3
- (void)_installScrollTimer;	// IMP=0x00000000001b02be
- (void)_commitUntimed;	// IMP=0x00000000001b0037
- (void)_handleLongPressResponseForOldAPI:(id)arg1;	// IMP=0x00000000001afe62
- (_Bool)_shouldUseSystemAPIForDrag;	// IMP=0x00000000001afe43
- (_Bool)_useNewDragAndDropAPI;	// IMP=0x00000000001afe3b
- (void)_longPress:(id)arg1;	// IMP=0x00000000001afbf6
- (void)_tapGesture:(id)arg1;	// IMP=0x00000000001af8d0
- (void)_cleanUpForcedStart;	// IMP=0x00000000001af7f5
- (void)liftUpOccurrenceForEditingEvent:(id)arg1;	// IMP=0x00000000001af7aa
- (void)endForcedStart;	// IMP=0x00000000001af711
- (void)forceStartWithOccurrence:(id)arg1 shouldUpdateViewSource:(_Bool)arg2 shouldUpdateOrigin:(_Bool)arg3;	// IMP=0x00000000001aed21
- (void)updateDraggingOccurrenceFrameFromSource;	// IMP=0x00000000001aea89
- (void)updateDraggingOccurrenceOrigin;	// IMP=0x00000000001ae9d2
@property(readonly, nonatomic) _Bool dragGestureInProgress;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000001ae64e
- (void)promptUserForProposeNewTime:(id)arg1 forEvent:(id)arg2 whenFinished:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ae19e
- (void)promptUserForRecurrenceActionOnOccurrence:(id)arg1 whenFinished:(CDUnknownBlockType)arg2;	// IMP=0x00000000001adf5a
- (void)removeDraggedOccurrence;	// IMP=0x00000000001adf11
- (void)updateDraggingOccurrenceFrame;	// IMP=0x00000000001ade7d
- (struct CGRect)_calculateFrameForDraggingViewIncludingTravelTime:(_Bool)arg1;	// IMP=0x00000000001adac0
- (void)updateDraggingOccurrenceForced:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001ad6c4
- (void)updateDraggingOccurrence;	// IMP=0x00000000001ad6ab
- (void)invalidate;	// IMP=0x00000000001ad56f
- (void)dealloc;	// IMP=0x00000000001ad4e8
- (id)initWithView:(id)arg1;	// IMP=0x00000000001ad24a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

