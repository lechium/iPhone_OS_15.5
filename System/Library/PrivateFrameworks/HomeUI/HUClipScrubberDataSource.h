//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HFCameraPlaybackEngineObserver-Protocol.h>
#import <HomeUI/UICollectionViewDataSource-Protocol.h>

@class HFCameraPlaybackEngine, HFPlaybackEventsData, HUClipScrubberSelectionView, HUClipScrubberTimeController, NSArray, NSDate, NSString, UICollectionView, UICollectionViewDiffableDataSource;
@protocol HFCameraRecordingEvent, OS_dispatch_queue;

@interface HUClipScrubberDataSource : NSObject <HFCameraPlaybackEngineObserver, UICollectionViewDataSource>
{
    _Bool _editing;	// 8 = 0x8
    _Bool _selectionViewHidden;	// 9 = 0x9
    HUClipScrubberTimeController *_timeController;	// 16 = 0x10
    id <HFCameraRecordingEvent> _currentEvent;	// 24 = 0x18
    UICollectionView *_clipCollectionView;	// 32 = 0x20
    unsigned long long _currentTimelineState;	// 40 = 0x28
    unsigned long long _displayMode;	// 48 = 0x30
    NSDate *_currentDate;	// 56 = 0x38
    HFCameraPlaybackEngine *_playbackEngine;	// 64 = 0x40
    unsigned long long _mostRecentClipIndex;	// 72 = 0x48
    long long _lastSelectedClipIndex;	// 80 = 0x50
    double _posterFrameWidth;	// 88 = 0x58
    double _startingPinchDeltaX;	// 96 = 0x60
    HUClipScrubberSelectionView *_selectionView;	// 104 = 0x68
    double _lastGestureScale;	// 112 = 0x70
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 120 = 0x78
    id <HFCameraRecordingEvent> _lastUpdatedEvent;	// 128 = 0x80
    HFPlaybackEventsData *_eventsData;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_snapshotQueue;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000173ff8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *snapshotQueue; // @synthesize snapshotQueue=_snapshotQueue;
@property(retain, nonatomic) HFPlaybackEventsData *eventsData; // @synthesize eventsData=_eventsData;
@property(nonatomic) __weak id <HFCameraRecordingEvent> lastUpdatedEvent; // @synthesize lastUpdatedEvent=_lastUpdatedEvent;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(nonatomic) double lastGestureScale; // @synthesize lastGestureScale=_lastGestureScale;
@property(retain, nonatomic) HUClipScrubberSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(nonatomic) double startingPinchDeltaX; // @synthesize startingPinchDeltaX=_startingPinchDeltaX;
@property(nonatomic) double posterFrameWidth; // @synthesize posterFrameWidth=_posterFrameWidth;
@property(nonatomic) _Bool selectionViewHidden; // @synthesize selectionViewHidden=_selectionViewHidden;
@property(nonatomic) long long lastSelectedClipIndex; // @synthesize lastSelectedClipIndex=_lastSelectedClipIndex;
@property(readonly, nonatomic) unsigned long long mostRecentClipIndex; // @synthesize mostRecentClipIndex=_mostRecentClipIndex;
@property(nonatomic) __weak HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) unsigned long long currentTimelineState; // @synthesize currentTimelineState=_currentTimelineState;
@property(nonatomic) __weak UICollectionView *clipCollectionView; // @synthesize clipCollectionView=_clipCollectionView;
@property(nonatomic) __weak id <HFCameraRecordingEvent> currentEvent; // @synthesize currentEvent=_currentEvent;
@property(retain, nonatomic) HUClipScrubberTimeController *timeController; // @synthesize timeController=_timeController;
- (void)shrinkToMinimumZoom;	// IMP=0x0000000000173dd9
- (void)expandToMaximumZoom;	// IMP=0x0000000000173d60
- (void)updateSelectionViewIfNeeded;	// IMP=0x000000000017393d
- (void)updateMostRecentClipIndex;	// IMP=0x000000000017386f
- (id)indexPathsForClip:(id)arg1;	// IMP=0x00000000001737ba
- (void)playbackEngine:(id)arg1 didRemoveEvents:(id)arg2;	// IMP=0x000000000017350a
- (void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2;	// IMP=0x00000000001733d3
- (void)updateClipCollectionView;	// IMP=0x00000000001731e4
- (double)scrubbingResolutionForClip:(id)arg1;	// IMP=0x00000000001730e7
- (id)selectedDateFromCell:(id)arg1 atCurrentOffset:(double)arg2;	// IMP=0x0000000000172f35
- (id)startDateFromCell:(id)arg1;	// IMP=0x0000000000172eb0
- (id)selectedDateFromCell:(id)arg1 atOffset:(double)arg2;	// IMP=0x0000000000172e9e
- (id)indexPathForEvent:(id)arg1;	// IMP=0x0000000000172d14
- (id)previousEventForSection:(unsigned long long)arg1;	// IMP=0x0000000000172ce3
- (id)eventForSection:(unsigned long long)arg1;	// IMP=0x0000000000172c26
- (_Bool)isValidRecordingEventAtIndexPath:(id)arg1;	// IMP=0x0000000000172b52
- (_Bool)isValidEventAtIndexPath:(id)arg1;	// IMP=0x0000000000172b3d
- (double)offsetForEvent:(id)arg1;	// IMP=0x00000000001720fb
- (void)changeTimeScaleForNewScale:(double)arg1;	// IMP=0x0000000000172013
- (void)changeTimeScaleForPinchGesture:(id)arg1;	// IMP=0x0000000000171f4e
- (_Bool)isZoomingIn:(double)arg1;	// IMP=0x0000000000171f1e
- (void)beginTimeScaleTrackingForPinchGesture:(id)arg1;	// IMP=0x0000000000171e9d
- (id)spacerCellForCollectionView:(id)arg1 forEvent:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000171d30
- (id)reachabilitySectionCellForCollectionView:(id)arg1 forEvent:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000171b6e
- (id)recordingSectionCellForCollectionView:(id)arg1 forEvent:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000171957
- (void)updateSnapshotForEditing;	// IMP=0x0000000000171283
- (void)updateSnapshot;	// IMP=0x0000000000170e3b
- (void)addDiffableDataSource;	// IMP=0x0000000000170931
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000170852
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001706b5
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000017062e
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000017042e
- (_Bool)isSpacerAtIndexPath:(id)arg1;	// IMP=0x0000000000170348
- (void)updateToClipAtIndexPath:(id)arg1;	// IMP=0x000000000016ff57
- (void)toggleSelectionStateForItemAtIndexPath:(id)arg1;	// IMP=0x000000000016feba
- (void)updateEvents:(id)arg1;	// IMP=0x000000000016f760
- (void)reloadEvents:(id)arg1;	// IMP=0x000000000016f571
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x000000000016f34f
@property(readonly, nonatomic) NSArray *currentEvents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

