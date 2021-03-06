//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKPalettePencilInteractionFeedbackHostViewDelegate-Protocol.h>
#import <PencilKit/PKPaletteTransitionDelegate-Protocol.h>
#import <PencilKit/PKPaletteViewHosting-Protocol.h>
#import <PencilKit/PKPaletteViewInternalDelegate-Protocol.h>
#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>
#import <PencilKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, PKColorPicker, PKPalettePencilInteractionFeedbackHostView, PKPaletteTransition, PKPaletteView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol PKPaletteHostViewDelegate;

@interface PKPaletteHostView : UIView <UIGestureRecognizerDelegate, PKPaletteViewInternalDelegate, UIPopoverPresentationControllerDelegate, PKPalettePencilInteractionFeedbackHostViewDelegate, PKPaletteTransitionDelegate, PKPaletteViewHosting>
{
    _Bool _paletteVisible;	// 8 = 0x8
    _Bool _effectivePaletteVisible;	// 9 = 0x9
    PKPaletteView *_paletteView;	// 16 = 0x10
    id <PKPaletteHostViewDelegate> _delegate;	// 24 = 0x18
    NSLayoutConstraint *_paletteWidthConstraint;	// 32 = 0x20
    NSLayoutConstraint *_paletteHeightConstraint;	// 40 = 0x28
    NSLayoutConstraint *_paletteTopConstraint;	// 48 = 0x30
    NSLayoutConstraint *_paletteBottomConstraint;	// 56 = 0x38
    NSLayoutConstraint *_paletteLeftConstraint;	// 64 = 0x40
    NSLayoutConstraint *_paletteRightConstraint;	// 72 = 0x48
    NSLayoutConstraint *_paletteCenterXConstraint;	// 80 = 0x50
    NSLayoutConstraint *_paletteCenterYConstraint;	// 88 = 0x58
    UIPanGestureRecognizer *_panGestureRecognizer;	// 96 = 0x60
    UITapGestureRecognizer *_tapToExpandPaletteFromMinimizedGestureRecognizer;	// 104 = 0x68
    UILongPressGestureRecognizer *_touchDownFeedbackGestureRecognizer;	// 112 = 0x70
    long long _paletteDraggingBehavior;	// 120 = 0x78
    long long _paletteVisualState;	// 128 = 0x80
    long long _palettePosition;	// 136 = 0x88
    long long _lastNonCompactPalettePosition;	// 144 = 0x90
    long long _draggingPendingPaletteVisualState;	// 152 = 0x98
    PKPaletteTransition *_paletteTransition;	// 160 = 0xa0
    PKPalettePencilInteractionFeedbackHostView *_pencilInteractionFeedbackHostView;	// 168 = 0xa8
    PKColorPicker *_colorPickerPopover;	// 176 = 0xb0
    struct CGPoint _draggingInitialPaletteCenterInSelf;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000155f4a
@property(retain, nonatomic) PKColorPicker *colorPickerPopover; // @synthesize colorPickerPopover=_colorPickerPopover;
@property(retain, nonatomic) PKPalettePencilInteractionFeedbackHostView *pencilInteractionFeedbackHostView; // @synthesize pencilInteractionFeedbackHostView=_pencilInteractionFeedbackHostView;
@property(retain, nonatomic) PKPaletteTransition *paletteTransition; // @synthesize paletteTransition=_paletteTransition;
@property(nonatomic) struct CGPoint draggingInitialPaletteCenterInSelf; // @synthesize draggingInitialPaletteCenterInSelf=_draggingInitialPaletteCenterInSelf;
@property(nonatomic) long long draggingPendingPaletteVisualState; // @synthesize draggingPendingPaletteVisualState=_draggingPendingPaletteVisualState;
@property(nonatomic) long long lastNonCompactPalettePosition; // @synthesize lastNonCompactPalettePosition=_lastNonCompactPalettePosition;
@property(nonatomic) long long palettePosition; // @synthesize palettePosition=_palettePosition;
@property(nonatomic, setter=_setPaletteVisualState:) long long paletteVisualState; // @synthesize paletteVisualState=_paletteVisualState;
@property(nonatomic) long long paletteDraggingBehavior; // @synthesize paletteDraggingBehavior=_paletteDraggingBehavior;
@property(retain, nonatomic) UILongPressGestureRecognizer *touchDownFeedbackGestureRecognizer; // @synthesize touchDownFeedbackGestureRecognizer=_touchDownFeedbackGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapToExpandPaletteFromMinimizedGestureRecognizer; // @synthesize tapToExpandPaletteFromMinimizedGestureRecognizer=_tapToExpandPaletteFromMinimizedGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *paletteCenterYConstraint; // @synthesize paletteCenterYConstraint=_paletteCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteCenterXConstraint; // @synthesize paletteCenterXConstraint=_paletteCenterXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteRightConstraint; // @synthesize paletteRightConstraint=_paletteRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteLeftConstraint; // @synthesize paletteLeftConstraint=_paletteLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteBottomConstraint; // @synthesize paletteBottomConstraint=_paletteBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteTopConstraint; // @synthesize paletteTopConstraint=_paletteTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteHeightConstraint; // @synthesize paletteHeightConstraint=_paletteHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteWidthConstraint; // @synthesize paletteWidthConstraint=_paletteWidthConstraint;
@property(nonatomic, getter=isEffectivePaletteVisible) _Bool effectivePaletteVisible; // @synthesize effectivePaletteVisible=_effectivePaletteVisible;
@property(nonatomic) __weak id <PKPaletteHostViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isPaletteVisible) _Bool paletteVisible; // @synthesize paletteVisible=_paletteVisible;
@property(retain, nonatomic) PKPaletteView *paletteView; // @synthesize paletteView=_paletteView;
- (double)paletteEdgeSpacingForMinimized;	// IMP=0x0000000000155beb
- (double)paletteEdgeSpacing;	// IMP=0x0000000000155bdd
- (double)paletteSpringAnimationResponse;	// IMP=0x0000000000155bcf
- (double)paletteSpringAnimationDampingRatio;	// IMP=0x0000000000155bc1
- (double)paletteBorderWidth;	// IMP=0x0000000000155b23
- (double)paletteShadowRadius;	// IMP=0x0000000000155ad3
- (double)paletteShadowOpacity;	// IMP=0x0000000000155a83
- (struct CGSize)paletteShadowOffset;	// IMP=0x0000000000155a6d
- (id)paletteBorderColor;	// IMP=0x00000000001559c6
- (id)paletteShadowColor;	// IMP=0x00000000001559ad
- (void)paletteViewStateDidChangeEnableKeyboardButtons:(id)arg1;	// IMP=0x00000000001559a7
- (void)paletteViewStateDidChangeIsVisible:(id)arg1;	// IMP=0x00000000001559a1
- (void)paletteViewStateDidChangeInputAssistantItems:(id)arg1;	// IMP=0x000000000015599b
- (void)paletteViewStateDidChangeSelectedTool:(id)arg1;	// IMP=0x0000000000155995
- (void)paletteViewStateDidChangeShowsHandwritingTool:(id)arg1;	// IMP=0x0000000000155983
- (void)paletteViewStateDidChangeAutoHide:(id)arg1;	// IMP=0x0000000000155880
- (void)paletteViewStateDidChangeScaleFactor:(id)arg1;	// IMP=0x000000000015586e
- (void)paletteViewStateDidChange:(id)arg1;	// IMP=0x000000000015585c
- (void)paletteViewReturnKeyTypeDidChange:(id)arg1;	// IMP=0x0000000000155748
- (void)paletteViewContentSizeDidChange:(id)arg1;	// IMP=0x0000000000155734
- (void)paletteViewShowFeedbackForToolChange:(id)arg1;	// IMP=0x0000000000155653
@property(readonly, nonatomic, getter=isPaletteVisualStateMinimized) _Bool paletteVisualStateMinimized;
@property(readonly, nonatomic) UIView *hostingView;
- (_Bool)_shouldBeCompact;	// IMP=0x00000000001555cd
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000015544c
- (_Bool)_isPaletteAnimating;	// IMP=0x0000000000155408
- (struct CGSize)_paletteSizeForVisualState:(long long)arg1;	// IMP=0x0000000000155269
- (void)_updatePaletteSizeAnimated:(_Bool)arg1;	// IMP=0x0000000000154dbe
- (void)_updateToolPreviewRotationAnimated:(_Bool)arg1;	// IMP=0x0000000000154b02
- (void)_updateToolPreviewMinimizedStateAnimated:(_Bool)arg1;	// IMP=0x0000000000154a28
- (void)_performAnimated:(_Bool)arg1 tracking:(_Bool)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000015487c
- (void)transitionExpandedToCollapsedRatioDidChange:(id)arg1;	// IMP=0x000000000015486a
- (void)transitionPointingDirectionDidChange:(id)arg1;	// IMP=0x0000000000154853
- (void)transitionIntermediateVisualStateDidChange:(id)arg1;	// IMP=0x000000000015480e
- (struct CGPoint)_projectedLandingPointForGestureRecognizerEnd:(id)arg1;	// IMP=0x0000000000153d41
- (void)_processPendingDraggingTransition;	// IMP=0x0000000000153cdf
- (void)_scheduleDraggingTransitionToVisualState:(long long)arg1;	// IMP=0x0000000000153c28
- (void)_panGestureHandler:(id)arg1;	// IMP=0x0000000000152b88
- (void)_deactivatePaletteEdgeConstraints;	// IMP=0x0000000000152a99
- (void)_activatePaletteCenterConstraints;	// IMP=0x0000000000152a08
- (void)_deactivatePaletteCenterConstraints;	// IMP=0x0000000000152977
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001522d4
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000152099
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000151f3c
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000151d7e
- (void)_tapToExpandPaletteFromMinimizedGestureHandler:(id)arg1;	// IMP=0x0000000000151cae
- (void)_touchDownFeedbackGestureHandler:(id)arg1;	// IMP=0x000000000015197d
- (void)_paletteDidDockToPosition:(long long)arg1 fromUserReposition:(_Bool)arg2;	// IMP=0x00000000001518ad
- (void)_paletteWillDockToPosition:(long long)arg1 prepareForExpansion:(_Bool)arg2;	// IMP=0x0000000000151840
- (void)_updateConstraintsToDockPaletteToPosition:(long long)arg1;	// IMP=0x0000000000150d1a
- (void)_dockPaletteToPosition:(long long)arg1 isFromUserReposition:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000150b05
- (void)_dockPaletteToPosition:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000150aee
- (double)_paletteViewCompactHeight;	// IMP=0x0000000000150993
- (void)_updatePaletteHeightConstraint;	// IMP=0x00000000001508f3
- (void)_updateConstraintsToFixToBottomEdge;	// IMP=0x000000000015058c
- (void)_fixToBottomEdge;	// IMP=0x00000000001504d6
- (void)safeAreaInsetsDidChange;	// IMP=0x0000000000150406
- (void)layoutSubviews;	// IMP=0x0000000000150370
- (void)_updatePaletteContentAlpha;	// IMP=0x0000000000150267
- (void)_updatePaletteViewSizeConstraints;	// IMP=0x0000000000150181
- (void)_updatePaletteAppearance;	// IMP=0x000000000014fc0a
@property(readonly, nonatomic, getter=isPaletteDragging) _Bool paletteDragging;
- (void)_setPaletteVisualState:(long long)arg1 usingTransition:(_Bool)arg2;	// IMP=0x000000000014f96d
- (void)updateKeyboardAvoidanceForPalette:(_Bool)arg1;	// IMP=0x000000000014f8c3
- (void)setPaletteVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000014f5cc
- (void)_cancelPanGestureIfNecessary;	// IMP=0x000000000014f56f
- (void)_installPencilInteractionFeedbackHostViewIfNeeded;	// IMP=0x000000000014f4dc
- (void)didMoveToWindow;	// IMP=0x000000000014f370
- (id)initWithPaletteView:(id)arg1;	// IMP=0x000000000014e83b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

