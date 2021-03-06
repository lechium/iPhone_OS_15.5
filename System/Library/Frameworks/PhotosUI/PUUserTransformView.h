//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUI/UIScrollViewDelegate-Protocol.h>

@class CADisplayLink, NSString, UIImage, UIScrollView;
@protocol PUUserTransformViewDelegate;

@interface PUUserTransformView : UIView <UIScrollViewDelegate>
{
    struct {
        _Bool respondsToShouldReceiveTouchAtPoint;
        _Bool respondsToDidChangeIsUserInteracting;
    } _delegateFlags;	// 8 = 0x8
    _Bool _isUserInteracting;	// 10 = 0xa
    _Bool __updatingScrollView;	// 11 = 0xb
    _Bool __isUserPanning;	// 12 = 0xc
    _Bool __isUserDeceleratingPan;	// 13 = 0xd
    _Bool __isUserZooming;	// 14 = 0xe
    _Bool __isUserEndingZoom;	// 15 = 0xf
    _Bool __isUserPanningOrDecelerating;	// 16 = 0x10
    _Bool __isUserZoomingOrBouncing;	// 17 = 0x11
    _Bool __shouldTrackContentAnimation;	// 18 = 0x12
    _Bool __isContentAnimating;	// 19 = 0x13
    _Bool __isAnimatingZoomEnd;	// 20 = 0x14
    _Bool __isUpdatingState;	// 21 = 0x15
    _Bool __wasUserInteractingBeforeStateUpdate;	// 22 = 0x16
    _Bool __needsUpdateUserPanningOrDecelerating;	// 23 = 0x17
    _Bool __needsUpdateUserZoomingOrBouncing;	// 24 = 0x18
    _Bool __needsUpdateUserInteracting;	// 25 = 0x19
    _Bool __needsUpdateShouldTrackContentAnimation;	// 26 = 0x1a
    _Bool __needsUpdateUserAffineTransform;	// 27 = 0x1b
    _Bool __needsUpdateContentState;	// 28 = 0x1c
    _Bool __needsUpdateAnimatingZoomEnd;	// 29 = 0x1d
    _Bool __needsUpdateZoomAndScroll;	// 30 = 0x1e
    _Bool __needsUpdateScrollView;	// 31 = 0x1f
    id <PUUserTransformViewDelegate> _delegate;	// 32 = 0x20
    unsigned long long _enabledInteractions;	// 40 = 0x28
    UIScrollView *__scrollView;	// 48 = 0x30
    UIView *__scrollContentView;	// 56 = 0x38
    double __doubleTapZoomScale;	// 64 = 0x40
    double __contentZoomScale;	// 72 = 0x48
    long long __numberOfNestedStateChanges;	// 80 = 0x50
    CADisplayLink *__displayLink;	// 88 = 0x58
    double __desiredZoomScale;	// 96 = 0x60
    double __preferredMinimumZoomScale;	// 104 = 0x68
    double __preferredMaximumZoomScale;	// 112 = 0x70
    long long __numberOfNestedZoomAndScrollChanges;	// 120 = 0x78
    UIImage *_debugScrollViewContentImage;	// 128 = 0x80
    struct CGSize _contentPixelSize;	// 136 = 0x88
    struct CGSize _scrollPadding;	// 152 = 0x98
    struct CGPoint __contentCenter;	// 168 = 0xa8
    struct CGRect _untransformedContentFrame;	// 184 = 0xb8
    struct CGAffineTransform _userAffineTransform;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000479097
@property(retain, nonatomic) UIImage *debugScrollViewContentImage; // @synthesize debugScrollViewContentImage=_debugScrollViewContentImage;
@property(nonatomic, setter=_setNeedsUpdateScrollView:) _Bool _needsUpdateScrollView; // @synthesize _needsUpdateScrollView=__needsUpdateScrollView;
@property(nonatomic, setter=_setNeedsUpdateZoomAndScroll:) _Bool _needsUpdateZoomAndScroll; // @synthesize _needsUpdateZoomAndScroll=__needsUpdateZoomAndScroll;
@property(nonatomic, setter=_setNumberOfNestedZoomAndScrollChanges:) long long _numberOfNestedZoomAndScrollChanges; // @synthesize _numberOfNestedZoomAndScrollChanges=__numberOfNestedZoomAndScrollChanges;
@property(nonatomic, setter=_setPreferredMaximumZoomScale:) double _preferredMaximumZoomScale; // @synthesize _preferredMaximumZoomScale=__preferredMaximumZoomScale;
@property(nonatomic, setter=_setPreferredMinimumZoomScale:) double _preferredMinimumZoomScale; // @synthesize _preferredMinimumZoomScale=__preferredMinimumZoomScale;
@property(nonatomic, setter=_setDesiredZoomScale:) double _desiredZoomScale; // @synthesize _desiredZoomScale=__desiredZoomScale;
@property(retain, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property(nonatomic, setter=_setNeedsUpdateAnimatingZoomEnd:) _Bool _needsUpdateAnimatingZoomEnd; // @synthesize _needsUpdateAnimatingZoomEnd=__needsUpdateAnimatingZoomEnd;
@property(nonatomic, setter=_setNeedsUpdateContentState:) _Bool _needsUpdateContentState; // @synthesize _needsUpdateContentState=__needsUpdateContentState;
@property(nonatomic, setter=_setNeedsUpdateUserAffineTransform:) _Bool _needsUpdateUserAffineTransform; // @synthesize _needsUpdateUserAffineTransform=__needsUpdateUserAffineTransform;
@property(nonatomic, setter=_setNeedsUpdateShouldTrackContentAnimation:) _Bool _needsUpdateShouldTrackContentAnimation; // @synthesize _needsUpdateShouldTrackContentAnimation=__needsUpdateShouldTrackContentAnimation;
@property(nonatomic, setter=_setNeedsUpdateUserInteracting:) _Bool _needsUpdateUserInteracting; // @synthesize _needsUpdateUserInteracting=__needsUpdateUserInteracting;
@property(nonatomic, setter=_setNeedsUpdateUserZoomingOrBouncing:) _Bool _needsUpdateUserZoomingOrBouncing; // @synthesize _needsUpdateUserZoomingOrBouncing=__needsUpdateUserZoomingOrBouncing;
@property(nonatomic, setter=_setNeedsUpdateUserPanningOrDecelerating:) _Bool _needsUpdateUserPanningOrDecelerating; // @synthesize _needsUpdateUserPanningOrDecelerating=__needsUpdateUserPanningOrDecelerating;
@property(nonatomic, setter=_setWasUserInteractingBeforeStateUpdate:) _Bool _wasUserInteractingBeforeStateUpdate; // @synthesize _wasUserInteractingBeforeStateUpdate=__wasUserInteractingBeforeStateUpdate;
@property(nonatomic, setter=_setUpdatingState:) _Bool _isUpdatingState; // @synthesize _isUpdatingState=__isUpdatingState;
@property(nonatomic, setter=_setNumberOfNestedStateChanges:) long long _numberOfNestedStateChanges; // @synthesize _numberOfNestedStateChanges=__numberOfNestedStateChanges;
@property(nonatomic, setter=_setAnimatingZoomEnd:) _Bool _isAnimatingZoomEnd; // @synthesize _isAnimatingZoomEnd=__isAnimatingZoomEnd;
@property(nonatomic, setter=_setContentZoomScale:) double _contentZoomScale; // @synthesize _contentZoomScale=__contentZoomScale;
@property(nonatomic, setter=_setContentCenter:) struct CGPoint _contentCenter; // @synthesize _contentCenter=__contentCenter;
@property(nonatomic, setter=_setContentAnimating:) _Bool _isContentAnimating; // @synthesize _isContentAnimating=__isContentAnimating;
@property(nonatomic, setter=_setShouldTrackContentAnimation:) _Bool _shouldTrackContentAnimation; // @synthesize _shouldTrackContentAnimation=__shouldTrackContentAnimation;
@property(nonatomic, setter=_setUserZoomingOrBouncing:) _Bool _isUserZoomingOrBouncing; // @synthesize _isUserZoomingOrBouncing=__isUserZoomingOrBouncing;
@property(nonatomic, setter=_setUserPanningOrDecelerating:) _Bool _isUserPanningOrDecelerating; // @synthesize _isUserPanningOrDecelerating=__isUserPanningOrDecelerating;
@property(nonatomic, setter=_setUserEndingZoom:) _Bool _isUserEndingZoom; // @synthesize _isUserEndingZoom=__isUserEndingZoom;
@property(nonatomic, setter=_setUserZooming:) _Bool _isUserZooming; // @synthesize _isUserZooming=__isUserZooming;
@property(nonatomic, setter=_setUserDeceleratingPan:) _Bool _isUserDeceleratingPan; // @synthesize _isUserDeceleratingPan=__isUserDeceleratingPan;
@property(nonatomic, setter=_setUserPanning:) _Bool _isUserPanning; // @synthesize _isUserPanning=__isUserPanning;
@property(nonatomic, getter=_isUpdatingScrollView, setter=_setUpdatingScrollView:) _Bool _updatingScrollView; // @synthesize _updatingScrollView=__updatingScrollView;
@property(nonatomic, setter=_setDoubleTapZoomScale:) double _doubleTapZoomScale; // @synthesize _doubleTapZoomScale=__doubleTapZoomScale;
@property(readonly, nonatomic) UIView *_scrollContentView; // @synthesize _scrollContentView=__scrollContentView;
@property(readonly, nonatomic) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property(nonatomic, setter=_setUserInteracting:) _Bool isUserInteracting; // @synthesize isUserInteracting=_isUserInteracting;
@property(nonatomic) struct CGSize scrollPadding; // @synthesize scrollPadding=_scrollPadding;
@property(nonatomic) unsigned long long enabledInteractions; // @synthesize enabledInteractions=_enabledInteractions;
@property(nonatomic) struct CGAffineTransform userAffineTransform; // @synthesize userAffineTransform=_userAffineTransform;
@property(nonatomic) struct CGRect untransformedContentFrame; // @synthesize untransformedContentFrame=_untransformedContentFrame;
@property(nonatomic) struct CGSize contentPixelSize; // @synthesize contentPixelSize=_contentPixelSize;
@property(nonatomic) __weak id <PUUserTransformViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;	// IMP=0x0000000000478b4f
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;	// IMP=0x0000000000478a3d
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000047892b
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000478810
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000004786fe
- (void)scrollViewDidZoom:(id)arg1;	// IMP=0x00000000004785ec
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000004784da
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x00000000004783fd
- (void)_handleDisplayLink:(id)arg1;	// IMP=0x00000000004783b1
- (void)_updateDisplayLink;	// IMP=0x00000000004781bc
- (void)_updateScrollViewIfNeeded;	// IMP=0x0000000000477651
- (void)_invalidateScrollView;	// IMP=0x00000000004775ad
- (struct CGPoint)_contentOffsetAdjustmentForContentInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000477578
- (struct UIEdgeInsets)_contentInsetsForContentScale:(double)arg1;	// IMP=0x0000000000477434
- (void)_updateZoomAndScrollIfNeeded;	// IMP=0x0000000000477316
- (void)_invalidateZoomAndScroll;	// IMP=0x00000000004772ff
- (void)_assertInsideZoomAndScrollChangeBlock;	// IMP=0x0000000000477266
- (void)_setEnabledInteractions:(unsigned long long)arg1;	// IMP=0x0000000000477120
- (void)_performZoomAndScrollChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000047702a
- (void)_updateUserAffineTransformIfNeeded;	// IMP=0x0000000000476d7e
- (void)_invalidateUserAffineTransform;	// IMP=0x0000000000476d4b
- (void)_updateAnimatingZoomEndIfNeeded;	// IMP=0x0000000000476cc7
- (void)_invalidateAnimatingZoomEnd;	// IMP=0x0000000000476c94
- (void)_updateContentStateIfNeeded;	// IMP=0x00000000004767d5
- (void)_invalidateContentState;	// IMP=0x00000000004767a2
- (void)_updateShouldTrackContentAnimationIfNeeded;	// IMP=0x0000000000476749
- (void)_invalidateShouldTrackContentAnimation;	// IMP=0x0000000000476716
- (void)_updateUserInteractingIfNeeded;	// IMP=0x00000000004766a4
- (void)_invalidateUserInteracting;	// IMP=0x0000000000476671
- (void)_updateUserZoomingOrBouncingIfNeeded;	// IMP=0x00000000004765e8
- (void)_invalidateUserZoomingOrBouncing;	// IMP=0x00000000004765b5
- (void)_updateUserPanningOrDeceleratingIfNeeded;	// IMP=0x0000000000476543
- (void)_invalidateUserPanningOrDecelerating;	// IMP=0x0000000000476510
- (void)_setUserAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000476336
- (void)_setNeedsStateUpdate;	// IMP=0x00000000004757cb
- (_Bool)_needsStateUpdate;	// IMP=0x000000000047572e
- (void)_updateStateIfNeeded;	// IMP=0x00000000004755bc
- (void)_didChangeState;	// IMP=0x0000000000475560
- (void)_willChangeState;	// IMP=0x000000000047552e
- (void)_performStateChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000475462
- (void)_assertInsideStateUpdate;	// IMP=0x00000000004753ca
- (void)_assertInsideStateChangeBlock;	// IMP=0x0000000000475331
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000047528f
- (void)layoutSubviews;	// IMP=0x00000000004751c1
- (void)handleDoubleTapWithLocationProvider:(id)arg1;	// IMP=0x00000000004750ce
- (_Bool)contentContainsLocationFromProvider:(id)arg1;	// IMP=0x0000000000475025
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000474ce7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

