//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSKKeyboardObserver-Protocol.h>

@class NSString, TSDCanvasView, TSDInteractiveCanvasController;

@interface TSDCanvasLayer <TSKKeyboardObserver>
{
    TSDInteractiveCanvasController *mController;	// 8 = 0x8
    struct CGSize mUnscaledSize;	// 16 = 0x10
    struct UIEdgeInsets mContentInset;	// 32 = 0x20
    double mViewScale;	// 64 = 0x40
    unsigned long long mViewScaleAnimationCount;	// 72 = 0x48
    unsigned long long mLayoutDisabledDepth;	// 80 = 0x50
    _Bool mAllowsPinchZoom;	// 88 = 0x58
    double mMinimumPinchViewScale;	// 96 = 0x60
    double mMaximumPinchViewScale;	// 104 = 0x68
    _Bool mShowsScaleFeedback;	// 112 = 0x70
    _Bool mIsInfinite;	// 113 = 0x71
    _Bool mHorizontallyCenteredInScrollView;	// 114 = 0x72
    _Bool mVerticallyCenteredInScrollView;	// 115 = 0x73
    _Bool mAvoidKeyboardWhenVerticallyCenteredInScrollView;	// 116 = 0x74
    _Bool _torndown;	// 117 = 0x75
    _Bool _createdAsCopy;	// 118 = 0x76
}

@property(nonatomic) _Bool createdAsCopy; // @synthesize createdAsCopy=_createdAsCopy;
@property(nonatomic) _Bool torndown; // @synthesize torndown=_torndown;
@property(nonatomic) _Bool avoidKeyboardWhenVerticallyCenteredInScrollView; // @synthesize avoidKeyboardWhenVerticallyCenteredInScrollView=mAvoidKeyboardWhenVerticallyCenteredInScrollView;
@property(nonatomic) _Bool verticallyCenteredInScrollView; // @synthesize verticallyCenteredInScrollView=mVerticallyCenteredInScrollView;
@property(nonatomic) _Bool horizontallyCenteredInScrollView; // @synthesize horizontallyCenteredInScrollView=mHorizontallyCenteredInScrollView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property(nonatomic) struct CGSize unscaledSize; // @synthesize unscaledSize=mUnscaledSize;
@property(nonatomic) TSDInteractiveCanvasController *controller; // @synthesize controller=mController;
@property(nonatomic, getter=isInfinite) _Bool infinite; // @synthesize infinite=mIsInfinite;
@property(nonatomic) _Bool showsScaleFeedback; // @synthesize showsScaleFeedback=mShowsScaleFeedback;
@property(nonatomic) _Bool allowsPinchZoom; // @synthesize allowsPinchZoom=mAllowsPinchZoom;
@property(nonatomic) double maximumPinchViewScale; // @synthesize maximumPinchViewScale=mMaximumPinchViewScale;
@property(nonatomic) double minimumPinchViewScale; // @synthesize minimumPinchViewScale=mMinimumPinchViewScale;
@property(nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
- (void)keyboardWillChangeFrame:(id)arg1;	// IMP=0x00000000001fb70c
- (void)keyboardDidChangeFrame:(id)arg1;	// IMP=0x00000000001fb6fa
- (void)_adjustContentInsetsForKeyboard;	// IMP=0x00000000001fb6af
- (void)p_fixFrameAndScrollView;	// IMP=0x00000000001fb534
- (void)adjustContentInsets;	// IMP=0x00000000001fb2ba
- (struct CGRect)p_fixedBoundsForScrollViewSize:(struct CGSize)arg1 viewScale:(double)arg2 contentInset:(struct UIEdgeInsets)arg3;	// IMP=0x00000000001faeb1
- (void)p_setEnclosingScrollViewZoomParameters;	// IMP=0x00000000001fae39
- (void)p_setViewScale:(double)arg1 preservingScrollOffset:(_Bool)arg2;	// IMP=0x00000000001facca
- (void)p_setViewScale:(double)arg1;	// IMP=0x00000000001fac36
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001faac8
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect)arg1;	// IMP=0x00000000001faab4
- (void)animateToViewScale:(double)arg1 contentCenter:(struct CGPoint)arg2 contentInset:(struct UIEdgeInsets)arg3 duration:(double)arg4 animation:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000001fa0f5
- (void)animateToViewScale:(double)arg1 contentCenter:(struct CGPoint)arg2 contentInset:(struct UIEdgeInsets)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000001fa0db
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect)arg2 maintainPosition:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x00000000001f9e23
- (struct CGPoint)p_contentOffsetForUnscaledContentCenter:(struct CGPoint)arg1 viewScale:(double)arg2 contentInset:(struct UIEdgeInsets)arg3;	// IMP=0x00000000001f9c74
- (struct CGPoint)contentOffsetForUnscaledContentCenter:(struct CGPoint)arg1;	// IMP=0x00000000001f9bfb
@property(readonly, nonatomic) struct CGPoint unscaledContentCenter;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;	// IMP=0x00000000001f9a5d
- (void)popLayoutDisabled;	// IMP=0x00000000001f9972
- (void)pushLayoutDisabled;	// IMP=0x00000000001f9961
@property(readonly, nonatomic, getter=isLayoutDisabled) _Bool disableLayout;
@property(readonly, nonatomic) TSDCanvasView *canvasView;
- (struct CGRect)p_boundsRect;	// IMP=0x00000000001f9852
- (void)p_reenableDrawingAfterResumingFromBackground;	// IMP=0x00000000001f97c5
- (void)layoutSublayers;	// IMP=0x00000000001f96ef
- (void)layoutIfNeededIgnoringDisabledLayout;	// IMP=0x00000000001f96b3
- (void)setNeedsLayoutForTilingLayers;	// IMP=0x00000000001f9677
- (void)setNeedsLayout;	// IMP=0x00000000001f95e6
- (void)fixFrameAndScrollView;	// IMP=0x00000000001f958c
@property(nonatomic) _Bool centeredInScrollView; // @dynamic centeredInScrollView;
- (void)setUnscaledSizeOnLayer:(struct CGSize)arg1;	// IMP=0x00000000001f93c1
- (void)teardownWithoutClearingLayerDelegates;	// IMP=0x00000000001f92a9
- (void)teardown;	// IMP=0x00000000001f9231
- (void)dealloc;	// IMP=0x00000000001f9060
- (void)p_scrollViewScrollerStyleDidChange:(id)arg1;	// IMP=0x00000000001f904e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f9002
- (id)initWithLayer:(id)arg1;	// IMP=0x00000000001f8f9c
- (id)init;	// IMP=0x00000000001f8f50
- (void)p_commonInit;	// IMP=0x00000000001f8e10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
