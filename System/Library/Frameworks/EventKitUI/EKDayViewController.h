//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/BlockableScrollViewDelegate-Protocol.h>
#import <EventKitUI/EKDayOccurrenceViewDelegate-Protocol.h>
#import <EventKitUI/EKDayViewDataSource-Protocol.h>
#import <EventKitUI/EKDayViewDelegate-Protocol.h>
#import <EventKitUI/EKEventGestureControllerDelegate-Protocol.h>
#import <EventKitUI/UIScrollViewDelegate-Protocol.h>

@class CalendarOccurrencesCollection, EKDayOccurrenceView, EKDayView, EKDayViewWithGutters, EKEventEditViewController, EKEventGestureController, NSArray, NSCalendar, NSDateComponents, NSObject, NSString, NSTimer, ScrollSpringFactory, UIScrollView, UIView;
@protocol EKDayViewControllerDataSource, EKDayViewControllerDelegate, OS_dispatch_queue;

@interface EKDayViewController : UIViewController <BlockableScrollViewDelegate, EKDayOccurrenceViewDelegate, EKDayViewDataSource, EKDayViewDelegate, EKEventGestureControllerDelegate, UIScrollViewDelegate>
{
    UIView *_clipView;	// 8 = 0x8
    UIScrollView *_horizontalScrollingView;	// 16 = 0x10
    EKDayView *_previousDay;	// 24 = 0x18
    EKDayView *_currentDay;	// 32 = 0x20
    EKDayView *_nextDay;	// 40 = 0x28
    EKDayOccurrenceView *_proposedTimeView;	// 48 = 0x30
    EKDayViewWithGutters *_previousDayWithGutter;	// 56 = 0x38
    EKDayViewWithGutters *_currentDayWithGutter;	// 64 = 0x40
    EKDayViewWithGutters *_nextDayWithGutter;	// 72 = 0x48
    unsigned int _scrollViewAnimating:1;	// 80 = 0x50
    unsigned int _hasPendingNextDate:1;	// 80 = 0x50
    NSDateComponents *_pendingNextDate;	// 88 = 0x58
    unsigned int _hasPendingPreviousDate:1;	// 96 = 0x60
    NSDateComponents *_pendingPreviousDate;	// 104 = 0x68
    unsigned int _decelerating:1;	// 112 = 0x70
    unsigned int _settingDateFromScrolling:1;	// 112 = 0x70
    CalendarOccurrencesCollection *_occurrences;	// 120 = 0x78
    CalendarOccurrencesCollection *_previousDayOccurrences;	// 128 = 0x80
    CalendarOccurrencesCollection *_nextDayOccurrences;	// 136 = 0x88
    EKEventGestureController *_eventGestureController;	// 144 = 0x90
    ScrollSpringFactory *_decelerationSpringFactory;	// 152 = 0x98
    NSDateComponents *_originalDisplayDate;	// 160 = 0xa0
    double _dayStart;	// 168 = 0xa8
    double _dayEnd;	// 176 = 0xb0
    _Bool _needsReload;	// 184 = 0xb8
    _Bool _shouldScrollToNowOnViewWillAppear;	// 185 = 0xb9
    _Bool _instigatedDateChange;	// 186 = 0xba
    _Bool _viewAppeared;	// 187 = 0xbb
    _Bool _adjustingForDeceleration;	// 188 = 0xbc
    _Bool _fingerDown;	// 189 = 0xbd
    _Bool _requiresFullDayRelayout;	// 190 = 0xbe
    int _springAnimatedDecelerationsInProgress;	// 192 = 0xc0
    int _sizeTransitionsInProgress;	// 196 = 0xc4
    _Bool _correctAfterScroll;	// 200 = 0xc8
    NSDateComponents *_targetDateComponents;	// 208 = 0xd0
    _Bool _needToCompleteScrollingAnimation;	// 216 = 0xd8
    _Bool _needToCompleteDeceleration;	// 217 = 0xd9
    NSObject<OS_dispatch_queue> *_reloadQueue;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_protectionQueue;	// 232 = 0xe8
    long long _targetSizeClass;	// 240 = 0xf0
    _Bool _showsBanner;	// 248 = 0xf8
    _Bool _allowsDaySwitching;	// 249 = 0xf9
    _Bool _allowsSelection;	// 250 = 0xfa
    _Bool _alwaysAnimate;	// 251 = 0xfb
    _Bool _disableGestureDayChange;	// 252 = 0xfc
    _Bool _disableNotifyDateChangeDuringTracking;	// 253 = 0xfd
    _Bool _animateAllDayAreaHeight;	// 254 = 0xfe
    _Bool _shouldAutoscrollAfterAppearance;	// 255 = 0xff
    _Bool _notifyWhenTapOtherEventDuringDragging;	// 256 = 0x100
    _Bool _preloadExtraDays;	// 257 = 0x101
    _Bool _transitionedToSameDay;	// 258 = 0x102
    int _startingFirstVisibleSecond;	// 260 = 0x104
    id <EKDayViewControllerDelegate> _delegate;	// 264 = 0x108
    id <EKDayViewControllerDataSource> _dataSource;	// 272 = 0x110
    NSDateComponents *_displayDate;	// 280 = 0x118
    NSCalendar *_calendar;	// 288 = 0x120
    double _gutterWidth;	// 296 = 0x128
    UIView *_gestureOccurrenceSuperview;	// 304 = 0x130
    EKEventEditViewController *_currentEditor;	// 312 = 0x138
    NSTimer *_showNowTimer;	// 320 = 0x140
    struct CGPoint _normalizedContentOffset;	// 328 = 0x148
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x00000000000d7aec
- (void).cxx_destruct;	// IMP=0x00000000000d8436
@property(nonatomic) _Bool transitionedToSameDay; // @synthesize transitionedToSameDay=_transitionedToSameDay;
@property(retain, nonatomic) NSTimer *showNowTimer; // @synthesize showNowTimer=_showNowTimer;
@property(copy, nonatomic) NSDateComponents *pendingPreviousDate; // @synthesize pendingPreviousDate=_pendingPreviousDate;
@property(copy, nonatomic) NSDateComponents *pendingNextDate; // @synthesize pendingNextDate=_pendingNextDate;
@property(nonatomic) struct CGPoint normalizedContentOffset; // @synthesize normalizedContentOffset=_normalizedContentOffset;
@property(nonatomic) int startingFirstVisibleSecond; // @synthesize startingFirstVisibleSecond=_startingFirstVisibleSecond;
@property(retain, nonatomic) EKEventEditViewController *currentEditor; // @synthesize currentEditor=_currentEditor;
@property(retain, nonatomic) UIView *gestureOccurrenceSuperview; // @synthesize gestureOccurrenceSuperview=_gestureOccurrenceSuperview;
@property(nonatomic) double gutterWidth; // @synthesize gutterWidth=_gutterWidth;
@property(nonatomic) _Bool preloadExtraDays; // @synthesize preloadExtraDays=_preloadExtraDays;
@property(nonatomic) _Bool notifyWhenTapOtherEventDuringDragging; // @synthesize notifyWhenTapOtherEventDuringDragging=_notifyWhenTapOtherEventDuringDragging;
@property(nonatomic) _Bool shouldAutoscrollAfterAppearance; // @synthesize shouldAutoscrollAfterAppearance=_shouldAutoscrollAfterAppearance;
@property(nonatomic) _Bool animateAllDayAreaHeight; // @synthesize animateAllDayAreaHeight=_animateAllDayAreaHeight;
@property(nonatomic) _Bool disableNotifyDateChangeDuringTracking; // @synthesize disableNotifyDateChangeDuringTracking=_disableNotifyDateChangeDuringTracking;
@property(nonatomic) _Bool disableGestureDayChange; // @synthesize disableGestureDayChange=_disableGestureDayChange;
@property(nonatomic) _Bool alwaysAnimate; // @synthesize alwaysAnimate=_alwaysAnimate;
@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(nonatomic) _Bool allowsDaySwitching; // @synthesize allowsDaySwitching=_allowsDaySwitching;
@property(nonatomic) _Bool showsBanner; // @synthesize showsBanner=_showsBanner;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(copy, nonatomic) NSDateComponents *displayDate; // @synthesize displayDate=_displayDate;
@property(nonatomic) __weak id <EKDayViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <EKDayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)__cutLongTailCallbackForScrollAnimationFromExternalSource;	// IMP=0x00000000000d8171
- (void)__cutLongCallbackTailForDecelerationFromUserInput;	// IMP=0x00000000000d815f
- (void)_cancelAllLongTailCuttingCallbacks;	// IMP=0x00000000000d8104
- (void)_cutAnimationTailAfterDelayForScrollAnimationFromExternalSource;	// IMP=0x00000000000d80b4
- (void)_cutAnimationTailAfterDelayForDecelerationFromUserInput;	// IMP=0x00000000000d8064
- (void)_completeScrollingAnimationIfNeeded;	// IMP=0x00000000000d801e
- (void)_setHorizontalContentOffsetUsingSpringAnimation:(struct CGPoint)arg1;	// IMP=0x00000000000d7eaf
- (void)applicationWillResignActive;	// IMP=0x00000000000d7ea9
- (void)applicationDidBecomeActive;	// IMP=0x00000000000d7e92
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000000000d7dbd
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000d7b8e
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000d7af4
- (void)blockableScrollViewDidChangeFrameSize;	// IMP=0x00000000000d7aa4
- (_Bool)blockableScrollViewShouldAllowScrolling;	// IMP=0x00000000000d7a0b
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000000d79e8
- (void)_stopShowNowTimer;	// IMP=0x00000000000d798e
- (void)dayView:(id)arg1 scrollViewWillBeginDragging:(id)arg2;	// IMP=0x00000000000d797c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000d7863
- (void)_didRespondToApplicationDidBecomeActiveStateChange;	// IMP=0x00000000000d77c6
- (_Bool)_shouldRespondToApplicationDidBecomeActiveStateChange;	// IMP=0x00000000000d772d
- (void)_scrollToNowOnScrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000000d76c8
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000000d756d
- (void)_cleanUpTargetDateComponents;	// IMP=0x00000000000d7421
- (void)_showNowTimerFired:(id)arg1;	// IMP=0x00000000000d73da
- (_Bool)_canShowNowAfterScrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000d739c
- (double)_showNowDelay;	// IMP=0x00000000000d738e
- (void)_showNowAfterScrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000d7309
- (void)_scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000d71a4
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000d7192
- (void)_completeDecelerationIfNeeded;	// IMP=0x00000000000d7162
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x00000000000d6b85
- (double)_weightedAllDayHeightForView:(id)arg1 visibleRect:(struct CGRect)arg2;	// IMP=0x00000000000d698a
- (void)_updateAllDayAreaHeight;	// IMP=0x00000000000d66d1
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000d62e7
- (_Bool)_isViewInVisibleRect:(id)arg1;	// IMP=0x00000000000d6195
- (id)verticalScrollView;	// IMP=0x00000000000d6178
- (id)horizontalScrollView;	// IMP=0x00000000000d6163
- (void)_setDayView:(id)arg1 toDate:(id)arg2;	// IMP=0x00000000000d5e3c
- (void)_relayoutDaysDuringScrollingAndPerformDayChanges:(_Bool)arg1;	// IMP=0x00000000000d52d9
- (_Bool)_isResizing;	// IMP=0x00000000000d5262
- (void)_relayoutDaysDuringScrolling;	// IMP=0x00000000000d524b
- (void)_notifyDelegateOfSelectedDateChange;	// IMP=0x00000000000d5179
- (void)_relayoutDays;	// IMP=0x00000000000d4fb4
- (void)cleanUpAfterGestureFailureForEventGestureController:(id)arg1;	// IMP=0x00000000000d4f67
- (_Bool)_shouldEndGestureEditingOnTap;	// IMP=0x00000000000d4eab
- (_Bool)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1;	// IMP=0x00000000000d4e13
- (void)validateInterfaceOrientationWithFutureOrientation:(long long)arg1;	// IMP=0x00000000000d4d46
- (void)externallyEndedGestureDragging;	// IMP=0x00000000000d4ca9
- (_Bool)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(_Bool)arg2 right:(_Bool)arg3 vertically:(_Bool)arg4 towardPoint:(struct CGPoint)arg5;	// IMP=0x00000000000d4b86
- (void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2;	// IMP=0x00000000000d4a2b
- (void)eventGestureControllerDidEndDragSession:(id)arg1;	// IMP=0x00000000000d498e
- (void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(_Bool)arg3;	// IMP=0x00000000000d4852
- (_Bool)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(_Bool)arg4 span:(long long)arg5;	// IMP=0x00000000000d4278
- (void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(_Bool)arg3;	// IMP=0x00000000000d4264
- (void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(_Bool)arg3;	// IMP=0x00000000000d409e
- (_Bool)eventGestureControllerShouldAllowLongPress:(id)arg1;	// IMP=0x00000000000d4018
- (void)eventGestureController:(id)arg1 requestsShowEvent:(id)arg2;	// IMP=0x00000000000d3f7e
- (void)eventGestureController:(id)arg1 requestsPresentationOfViewController:(id)arg2;	// IMP=0x00000000000d3eea
- (id)currentPresentationController;	// IMP=0x00000000000d3ed8
- (double)timedRegionOriginForEventGestureController:(id)arg1;	// IMP=0x00000000000d3ebb
- (double)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(_Bool)arg3;	// IMP=0x00000000000d3d01
- (double)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned long long)arg2;	// IMP=0x00000000000d3c7f
- (struct CGPoint)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(_Bool)arg3;	// IMP=0x00000000000d3c6b
- (struct CGPoint)pointAtDate:(double)arg1 isAllDay:(_Bool)arg2;	// IMP=0x00000000000d3bbb
- (double)eventGestureController:(id)arg1 dateAtPoint:(struct CGPoint)arg2;	// IMP=0x00000000000d3b9c
- (_Bool)eventGestureController:(id)arg1 isAllDayAtPoint:(struct CGPoint)arg2 requireInsistence:(_Bool)arg3;	// IMP=0x00000000000d3b6b
- (id)eventGestureController:(id)arg1 occurrenceViewForOccurrence:(id)arg2;	// IMP=0x00000000000d3b56
- (id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(struct CGPoint)arg2;	// IMP=0x00000000000d3abc
- (void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(_Bool)arg3;	// IMP=0x00000000000d39c7
- (double)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(struct CGPoint)arg3;	// IMP=0x00000000000d39a7
- (void)hideTimelineHighlight;	// IMP=0x00000000000d3902
- (void)showTimelineHighlightForTime:(id)arg1;	// IMP=0x00000000000d38cf
- (id)createEventForEventGestureController:(id)arg1;	// IMP=0x00000000000d3845
- (void)eventGestureController:(id)arg1 adjustDraggingView:(id)arg2 forAllDay:(_Bool)arg3;	// IMP=0x00000000000d37ae
- (void)updateFrameForProposedTimeView;	// IMP=0x00000000000d34b5
- (id)createOccurrenceViewForEventGestureController:(id)arg1;	// IMP=0x00000000000d349a
- (id)createOccurrenceViewForEventGestures;	// IMP=0x00000000000d33ce
- (double)horizontalOffsetForPagingForEventGestureController:(id)arg1;	// IMP=0x00000000000d3362
- (id)occurrenceViewSuperviewForEventGestureController:(id)arg1;	// IMP=0x00000000000d3350
- (id)touchTrackingViewForEventGestureController:(id)arg1;	// IMP=0x00000000000d333e
@property(readonly, nonatomic) UIView *effectiveEventGestureSuperview;
- (id)_eventGestureSuperview;	// IMP=0x00000000000d32ba
- (void)dayViewDidTapEmptySpace:(id)arg1;	// IMP=0x00000000000d30c3
- (void)_highlightDayViewDate:(double)arg1 isAllDay:(_Bool)arg2;	// IMP=0x00000000000d3053
- (id)_createGutterDayViewWithDayView:(id)arg1;	// IMP=0x00000000000d2f43
- (void)_showWeekNumbersPreferenceChanged:(id)arg1;	// IMP=0x00000000000d2f3d
- (void)_localeChanged:(id)arg1;	// IMP=0x00000000000d2f00
- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x00000000000d2eee
- (id)_occurrencesForDayView:(id)arg1;	// IMP=0x00000000000d2d5d
- (void)dayView:(id)arg1 didUpdateScrollPosition:(struct CGPoint)arg2;	// IMP=0x00000000000d2cc0
- (void)significantTimeChangeOccurred;	// IMP=0x00000000000d2c66
- (void)loadDataBetweenStart:(id)arg1 end:(id)arg2 withTrigger:(int)arg3 generation:(int)arg4 completionForCurrentDayReload:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d2301
- (void)loadData:(_Bool)arg1 withTrigger:(int)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d1cf1
- (void)reloadDataForOccurrenceChangeWithGeneration:(int)arg1;	// IMP=0x00000000000d1b8a
- (void)reloadData;	// IMP=0x00000000000d1b63
- (void)_performDisplayedOccurrencesChangedDelegateMethodWithTrigger:(int)arg1;	// IMP=0x00000000000d1a6e
- (_Bool)_delegateRespondsToDisplayedOccurrencesChangedMethod;	// IMP=0x00000000000d19e8
- (void)reloadDataIfNeeded;	// IMP=0x00000000000d19c7
- (void)setNeedsReload;	// IMP=0x00000000000d19b6
- (id)_eventsForDay:(id)arg1;	// IMP=0x00000000000d1859
- (id)eventsForStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x00000000000d17a5
- (void)editorDidCancelEditingEvent:(id)arg1;	// IMP=0x00000000000d1762
- (void)editorDidDeleteEvent:(id)arg1;	// IMP=0x00000000000d168d
- (void)editorDidSaveEvent:(id)arg1;	// IMP=0x00000000000d15b8
- (void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2;	// IMP=0x00000000000d159b
- (void)bringEventToFront:(id)arg1;	// IMP=0x00000000000d157e
- (void)scrollEventsIntoViewAnimated:(_Bool)arg1;	// IMP=0x00000000000d1561
- (void)scrollEventIntoView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d1454
- (_Bool)_isCurrentDayToday;	// IMP=0x00000000000d13e0
- (_Bool)_canScrollToNow;	// IMP=0x00000000000d139a
- (_Bool)_shouldScrollToNow;	// IMP=0x00000000000d1388
- (void)scrollToNow:(_Bool)arg1;	// IMP=0x00000000000d1343
- (void)setTimeZone:(id)arg1;	// IMP=0x00000000000d1176
- (void)_setDisplayDate:(id)arg1 forRepeat:(_Bool)arg2 animate:(_Bool)arg3;	// IMP=0x00000000000d060c
- (void)_setDisplayDate:(id)arg1 forRepeat:(_Bool)arg2;	// IMP=0x00000000000d05f4
- (void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned long long)arg2;	// IMP=0x00000000000d0533
- (void)_setNextAndPreviousFirstVisibleSecondToCurrent;	// IMP=0x00000000000d035a
- (void)_setDisplayDateInternal:(id)arg1;	// IMP=0x00000000000d01fc
- (_Bool)dayViewShouldDrawSynchronously:(id)arg1;	// IMP=0x00000000000d0176
- (id)dayView:(id)arg1 selectedCopyViewForOccurrence:(id)arg2;	// IMP=0x00000000000d00cb
- (void)dayViewDidCompleteAsyncLoadAndLayout:(id)arg1;	// IMP=0x00000000000d0034
- (void)dayView:(id)arg1 isPinchingDayViewWithScale:(double)arg2;	// IMP=0x00000000000cff8f
- (void)dayView:(id)arg1 didScaleDayViewWithScale:(double)arg2;	// IMP=0x00000000000cfddb
- (void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;	// IMP=0x00000000000cfce0
- (void)dayView:(id)arg1 didSelectEvent:(id)arg2;	// IMP=0x00000000000cfb8b
- (long long)_effectiveInterfaceOrientationForSize:(struct CGSize)arg1;	// IMP=0x00000000000cfb75
- (id)preferredEventToSelectOnDate:(id)arg1;	// IMP=0x00000000000cf145
- (_Bool)_isCalendarDate:(id)arg1 sameDayAsComponents:(id)arg2;	// IMP=0x00000000000cf066
@property(readonly, nonatomic) _Bool currentDayContainsOccurrences;
@property(readonly, nonatomic) NSArray *currentDayContentGridViewSubviews;
@property(readonly, nonatomic) UIView *currentAllDayView;
@property(readonly, nonatomic) EKDayView *currentDayView;
- (id)gestureController;	// IMP=0x00000000000ceddc
- (id)occurrenceViewForEvent:(id)arg1 includeNextAndPreviousDays:(_Bool)arg2;	// IMP=0x00000000000cec10
- (id)occurrenceViewForEvent:(id)arg1;	// IMP=0x00000000000cebfc
- (void)layoutContainerView:(id)arg1;	// IMP=0x00000000000ce8f2
- (unsigned long long)firstVisibleSecond;	// IMP=0x00000000000ce8d2
- (void)setFrame:(struct CGRect)arg1 gutterWidth:(double)arg2;	// IMP=0x00000000000ce734
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000ce6cc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000ce680
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000ce644
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ce59f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000ce4e4
- (void)_scrollDayViewAfterRelayoutDays;	// IMP=0x00000000000ce4cd
- (void)scrollDayViewAppropriatelyWithAnimation:(_Bool)arg1;	// IMP=0x00000000000ce44a
@property(nonatomic) _Bool scrollEventsInToViewIgnoresVisibility;
- (void)loadView;	// IMP=0x00000000000cd6f7
- (void)dealloc;	// IMP=0x00000000000cd61c
- (id)initWithTargetSizeClass:(long long)arg1;	// IMP=0x00000000000cd4fe
- (id)init;	// IMP=0x00000000000cd4e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
