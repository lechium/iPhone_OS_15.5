//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <Pegasus/PGControlsViewModelDelegate-Protocol.h>
#import <Pegasus/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSTimer, PGControlsView, PGControlsViewModel, UIGestureRecognizer, UITapGestureRecognizer, UIViewPropertyAnimator;
@protocol PGCommandHandler;

__attribute__((visibility("hidden")))
@interface PGControlsContainerView : UIView <PGControlsViewModelDelegate, UIGestureRecognizerDelegate>
{
    PGControlsViewModel *_viewModel;	// 8 = 0x8
    PGControlsView *_controlsView;	// 16 = 0x10
    UIViewPropertyAnimator *_containerViewVisibilityAnimator;	// 24 = 0x18
    UIViewPropertyAnimator *_controlsViewVisibilityAnimator;	// 32 = 0x20
    UIViewPropertyAnimator *_hidableControlsVisibilityAnimator;	// 40 = 0x28
    UIView *_interruptionDimmingView;	// 48 = 0x30
    UITapGestureRecognizer *_singleTapGestureRecognizer;	// 56 = 0x38
    UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 64 = 0x40
    UITapGestureRecognizer *_doubleDoubleTapGestureRecognizer;	// 72 = 0x48
    UIGestureRecognizer *_hoverGestureRecognizer;	// 80 = 0x50
    NSTimer *_hideControlsAfterDelayTimer;	// 88 = 0x58
    NSMutableSet *_preventAutoHideOfControlsAssertionIdentifiers;	// 96 = 0x60
    _Bool _interactivelyResizing;	// 104 = 0x68
    _Bool _showsPictureInPictureUnavailableIndicator;	// 105 = 0x69
    _Bool _showingControlsForHoverActive;	// 106 = 0x6a
    id <PGCommandHandler> _commandHandler;	// 112 = 0x70
    CDUnknownBlockType _coordinatedAnimationsForControlsVisibiity;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000012105
@property(copy, nonatomic) CDUnknownBlockType coordinatedAnimationsForControlsVisibiity; // @synthesize coordinatedAnimationsForControlsVisibiity=_coordinatedAnimationsForControlsVisibiity;
@property(nonatomic, getter=isInteractivelyResizing) _Bool interactivelyResizing; // @synthesize interactivelyResizing=_interactivelyResizing;
@property(nonatomic, getter=isShowingControlsForHoverActive) _Bool showingControlsForHoverActive; // @synthesize showingControlsForHoverActive=_showingControlsForHoverActive;
@property(nonatomic) _Bool showsPictureInPictureUnavailableIndicator; // @synthesize showsPictureInPictureUnavailableIndicator=_showsPictureInPictureUnavailableIndicator;
@property(nonatomic) __weak id <PGCommandHandler> commandHandler; // @synthesize commandHandler=_commandHandler;
- (void)_invalidateTimer;	// IMP=0x000000000001202e
- (void)_updateHideControlsAfterDelayTimer;	// IMP=0x0000000000011e58
- (_Bool)_controlsShouldAutoHide;	// IMP=0x0000000000011dad
- (id)_performVisibilityTransitionAnimated:(_Bool)arg1 existingAnimator:(id)arg2 animations:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4;	// IMP=0x0000000000011a80
- (id)_updateVisibilityOfView:(id)arg1 hidden:(_Bool)arg2 animated:(_Bool)arg3 existingAnimator:(id)arg4;	// IMP=0x00000000000118cb
- (void)_setControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001181f
- (void)_setPrefersControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000115af
- (id)_acquirePreventAutoHideOfControlsAssertionWithReason:(id)arg1;	// IMP=0x0000000000011347
- (id)PG_acquireAssertionToPreventAutoHideOfControlsWithReason:(id)arg1;	// IMP=0x0000000000011335
- (void)_handleHoverGestureRecognizer:(id)arg1;	// IMP=0x0000000000011219
- (void)_handleDoubleDoubleTapGestureRecognizer:(id)arg1;	// IMP=0x00000000000111ed
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;	// IMP=0x00000000000111d0
- (void)_handleSingleTapGestureRecognizer:(id)arg1;	// IMP=0x0000000000011185
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000000110f6
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000010f73
- (void)controlsViewModel:(id)arg1 valuesChangedFromOldValue:(id)arg2;	// IMP=0x0000000000010a91
- (void)controlsViewModel:(id)arg1 didIssueCommand:(id)arg2;	// IMP=0x00000000000109dc
- (id)viewModel;	// IMP=0x00000000000109c7
- (void)setControlsContainerHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000108f4
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x0000000000010880
- (void)layoutSubviews;	// IMP=0x00000000000107b5
- (void)didMoveToWindow;	// IMP=0x00000000000106bf
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;	// IMP=0x00000000000103c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
