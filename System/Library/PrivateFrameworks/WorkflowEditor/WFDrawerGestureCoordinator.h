//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowEditor/WFDrawerDismissalHelperDelegate-Protocol.h>

@class NSString, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, WFDrawerVelocityFilter;
@protocol WFDrawerGestureCoordinatorDelegate;

@interface WFDrawerGestureCoordinator : NSObject <WFDrawerDismissalHelperDelegate>
{
    _Bool _correctingContentOffset;	// 8 = 0x8
    id <WFDrawerGestureCoordinatorDelegate> _delegate;	// 16 = 0x10
    UIPanGestureRecognizer *_panGestureRecognizer;	// 24 = 0x18
    UITapGestureRecognizer *_tapGestureRecognizer;	// 32 = 0x20
    WFDrawerVelocityFilter *_heightVelocityFilter;	// 40 = 0x28
    WFDrawerVelocityFilter *_heightAccelerationFilter;	// 48 = 0x30
    unsigned long long _tapGestureIgnoringCount;	// 56 = 0x38
    double _minimumDrawerHeight;	// 64 = 0x40
    double _maximumDrawerHeight;	// 72 = 0x48
    double _topRubberBandRange;	// 80 = 0x50
    double _bottomRubberBandRange;	// 88 = 0x58
    UIScrollView *_scrollView;	// 96 = 0x60
    struct CGPoint _previousPanTranslation;	// 104 = 0x68
    struct CGPoint _initialContentOffset;	// 120 = 0x78
    struct CGPoint _unmodifiedInitialContentOffset;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000027fe2a
@property(nonatomic) _Bool correctingContentOffset; // @synthesize correctingContentOffset=_correctingContentOffset;
@property(nonatomic) struct CGPoint unmodifiedInitialContentOffset; // @synthesize unmodifiedInitialContentOffset=_unmodifiedInitialContentOffset;
@property(nonatomic) struct CGPoint initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double bottomRubberBandRange; // @synthesize bottomRubberBandRange=_bottomRubberBandRange;
@property(nonatomic) double topRubberBandRange; // @synthesize topRubberBandRange=_topRubberBandRange;
@property(nonatomic) double maximumDrawerHeight; // @synthesize maximumDrawerHeight=_maximumDrawerHeight;
@property(nonatomic) double minimumDrawerHeight; // @synthesize minimumDrawerHeight=_minimumDrawerHeight;
@property(nonatomic) struct CGPoint previousPanTranslation; // @synthesize previousPanTranslation=_previousPanTranslation;
@property(nonatomic) unsigned long long tapGestureIgnoringCount; // @synthesize tapGestureIgnoringCount=_tapGestureIgnoringCount;
@property(readonly, nonatomic) WFDrawerVelocityFilter *heightAccelerationFilter; // @synthesize heightAccelerationFilter=_heightAccelerationFilter;
@property(readonly, nonatomic) WFDrawerVelocityFilter *heightVelocityFilter; // @synthesize heightVelocityFilter=_heightVelocityFilter;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) __weak id <WFDrawerGestureCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (double)clampedDrawerHeight:(double)arg1;	// IMP=0x000000000027fc90
- (double)containerHeight;	// IMP=0x000000000027fbf8
- (double)drawerHeight;	// IMP=0x000000000027fba8
- (double)heightForRubberBandHeight:(double)arg1;	// IMP=0x000000000027faa1
- (double)rubberBandHeightForHeight:(double)arg1;	// IMP=0x000000000027f99a
- (double)unapplyRubberBandToValue:(double)arg1 withRange:(double)arg2;	// IMP=0x000000000027f956
- (double)applyRubberBandToValue:(double)arg1 withRange:(double)arg2;	// IMP=0x000000000027f90a
- (id)dragGestureTrackerForCardDismissalHelper:(id)arg1;	// IMP=0x000000000027f8d4
- (void)drawerDismissalHelper:(id)arg1 requestedDismissalWithVelocity:(double)arg2;	// IMP=0x000000000027f8c0
- (double)dismissalRectTopEdgeForCardDismissalHelper:(id)arg1 coordinateSpace:(id)arg2;	// IMP=0x000000000027f7d2
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000027f6a6
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000027f438
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000027f2d3
- (void)handlePanGesture:(id)arg1;	// IMP=0x000000000027f031
- (void)endDraggingWithVerticalVelocity:(double)arg1 animation:(id)arg2;	// IMP=0x000000000027ef9f
- (void)endDraggingWithAnimation:(id)arg1;	// IMP=0x000000000027ef20
- (void)dragTranslatedWithVerticalDelta:(double)arg1;	// IMP=0x000000000027edb4
- (void)beginDragging;	// IMP=0x000000000027ec2f
- (void)handleTapGesture:(id)arg1;	// IMP=0x000000000027ec29
- (void)endIgnoringTapGestures;	// IMP=0x000000000027eb64
- (void)beginIgnoringTapGestures;	// IMP=0x000000000027eb25
- (void)updateTapGestureRecognizer;	// IMP=0x000000000027eac5
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000027e875

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

