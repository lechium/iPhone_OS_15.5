//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet, NSOrderedSet, PKDrawing, PKImageView, PKSelectionController, PKSpaceInsertionView, PKStroke, PKStrokeSelection, UIPanGestureRecognizer, UIView;

@interface PKSpaceInsertionController : NSObject
{
    NSMutableOrderedSet *_strokesBelow;	// 8 = 0x8
    NSMutableOrderedSet *_strokesAbove;	// 16 = 0x10
    UIView *_tapToDismissView;	// 24 = 0x18
    PKSpaceInsertionView *_topInsertionView;	// 32 = 0x20
    PKSpaceInsertionView *_bottomInsertionView;	// 40 = 0x28
    struct CGPoint _beginDragLocation;	// 48 = 0x30
    struct CGPoint _initialViewLocation;	// 64 = 0x40
    UIPanGestureRecognizer *_dragTopLollipopGR;	// 80 = 0x50
    UIPanGestureRecognizer *_dragBottomLollipopGR;	// 88 = 0x58
    PKStrokeSelection *_bottomStrokeSelection;	// 96 = 0x60
    PKStrokeSelection *_topStrokeSelection;	// 104 = 0x68
    PKImageView *_topImageView;	// 112 = 0x70
    PKImageView *_bottomImageView;	// 120 = 0x78
    _Bool _topHandleRemovesWhitespace;	// 128 = 0x80
    PKStrokeSelection *_strokeSelectionBeforeInsertingSpace;	// 136 = 0x88
    long long _selectionTypeBeforeInsertingSpace;	// 144 = 0x90
    PKStrokeSelection *_cachedStrokeSelection;	// 152 = 0x98
    NSOrderedSet *_cachedStrokesBelow;	// 160 = 0xa0
    NSOrderedSet *_cachedStrokesAbove;	// 168 = 0xa8
    _Bool _shouldUseCachedStrokes;	// 176 = 0xb0
    _Bool _insertSpaceAffordancePanDidEnd;	// 177 = 0xb1
    _Bool _isCurrentlyAddingSpace;	// 178 = 0xb2
    _Bool _didMoveStrokes;	// 179 = 0xb3
    PKStroke *_lassoStroke;	// 184 = 0xb8
    PKDrawing *_drawing;	// 192 = 0xc0
    PKSelectionController *_selectionController;	// 200 = 0xc8
    NSArray *_externalElements;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000022a963
@property(copy, nonatomic) NSArray *externalElements; // @synthesize externalElements=_externalElements;
@property(readonly, nonatomic) _Bool didMoveStrokes; // @synthesize didMoveStrokes=_didMoveStrokes;
@property(readonly, nonatomic) __weak PKSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) PKStroke *lassoStroke; // @synthesize lassoStroke=_lassoStroke;
@property(nonatomic) _Bool isCurrentlyAddingSpace; // @synthesize isCurrentlyAddingSpace=_isCurrentlyAddingSpace;
- (void)fetchStrokesAmbiguouslyBelowAndAboveInsertSpaceHandleWithStrokes:(id)arg1 inDrawing:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000022a751
- (double)offsetInStrokeSpaceFromViewOffset:(double)arg1 inDrawing:(id)arg2;	// IMP=0x000000000022a64f
- (id)_visibleStrokesOnPage:(id)arg1;	// IMP=0x000000000022a5ca
- (void)_blitStrokesToViewForSpaceInsertionType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000229f8f
- (void)initTopAndBottomSelectionIfNecessary;	// IMP=0x0000000000229d2a
- (void)shiftStrokesWithOffset:(double)arg1;	// IMP=0x00000000002299c0
- (void)insertDefaultSpace:(double)arg1;	// IMP=0x0000000000229944
- (void)_temporarilyShiftStrokesWithOffset:(double)arg1 spaceInsertionType:(unsigned long long)arg2;	// IMP=0x0000000000229612
- (void)_makeSpaceWithOffset:(double)arg1 spaceInsertionType:(unsigned long long)arg2;	// IMP=0x00000000002292a0
- (void)_sortStrokesAboveOrBelowWithStrokesAbove:(id)arg1 strokesBelow:(id)arg2;	// IMP=0x0000000000228817
- (void)_didEndCreatingSpace;	// IMP=0x000000000022878c
- (void)projectPath:(struct CGPath *)arg1 toEndOfFrame:(struct CGRect)arg2;	// IMP=0x00000000002285e8
- (void)_addSpacingViewsWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000227c05
- (void)didBeginCreatingSpaceWithLassoStroke:(id)arg1 drawing:(id)arg2 addDefaultSpace:(_Bool)arg3 strokesAbove:(id)arg4 strokesBelow:(id)arg5 externalElements:(id)arg6;	// IMP=0x00000000002277ba
- (void)_layoutViewsIfNecessary;	// IMP=0x00000000002275bb
- (void)_dismissSpacingResizeHandles;	// IMP=0x0000000000227570
- (void)commitSpacingResize;	// IMP=0x0000000000227502
- (void)_panGestureDidCancelOrFail:(id)arg1;	// IMP=0x00000000002274eb
- (void)_panGestureDidEnd:(id)arg1;	// IMP=0x00000000002270a7
- (void)_panGestureDidChange:(id)arg1;	// IMP=0x0000000000226b13
- (void)_panGestureDidBegin:(id)arg1;	// IMP=0x0000000000226a37
- (void)_dismissHandlesAndReselectExistingSelectionInDrawing:(id)arg1;	// IMP=0x0000000000226879
- (void)_didGrabInsertSpaceAffordance:(id)arg1;	// IMP=0x000000000022610a
- (void)_dragLollipop:(id)arg1;	// IMP=0x0000000000226014
- (void)invalidateCachedStrokes;	// IMP=0x0000000000225fb8
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000225df6
- (double)_initalBufferBetweenLollipops;	// IMP=0x0000000000225ded
- (void)didScroll:(struct CGPoint)arg1;	// IMP=0x0000000000225ce8
- (id)initWithSelectionController:(id)arg1;	// IMP=0x0000000000225c51

@end
