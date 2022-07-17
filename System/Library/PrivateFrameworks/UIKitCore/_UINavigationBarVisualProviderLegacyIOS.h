//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>
#import <UIKitCore/_UINavigationBarGestureHandlerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIFocusContainerGuide, UIImageView, UILayoutGuide, UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy, _UINavBarPrompt, _UINavigationBarGestureHandler, _UINavigationBarLegacyContentView;
@protocol UIViewControllerTransitionCoordinator;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderLegacyIOS <_UIBasicAnimationFactory, _UINavigationBarGestureHandlerDelegate>
{
    _UIBarBackground *_backgroundView;	// 40 = 0x28
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;	// 48 = 0x30
    UIView *_customBackgroundView;	// 56 = 0x38
    UIView *_currentCanvasView;	// 64 = 0x40
    UIView *_titleView;	// 72 = 0x48
    NSArray *_leftViews;	// 80 = 0x50
    NSArray *_rightViews;	// 88 = 0x58
    UIImageView *_backIndicatorView;	// 96 = 0x60
    _UINavBarPrompt *_prompt;	// 104 = 0x68
    _UINavigationBarGestureHandler *_gestureHandler;	// 112 = 0x70
    NSMutableArray *_slideTransitionClippingViews;	// 120 = 0x78
    id <UIViewControllerTransitionCoordinator> _transitionCoordinator;	// 128 = 0x80
    _UINavigationBarLegacyContentView *_layoutView;	// 136 = 0x88
    UIView *_contentView;	// 144 = 0x90
    UILayoutGuide *_userContentGuide;	// 152 = 0x98
    NSLayoutConstraint *_userContentGuideLeading;	// 160 = 0xa0
    NSLayoutConstraint *_userContentGuideTrailing;	// 168 = 0xa8
    UIFocusContainerGuide *_contentFocusContainerGuide;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000187bf6
- (_Bool)_shim_34415965;	// IMP=0x0000000000187bee
- (void)_shim_30244716;	// IMP=0x0000000000187bc8
- (void)_shim_updateBackgroundViewIgnoringFlag;	// IMP=0x0000000000187b76
- (_Bool)_shim_throwConstraintExceptions;	// IMP=0x0000000000187b60
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint)arg1;	// IMP=0x0000000000187b12
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000187985
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001878d7
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000018773e
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000187690
- (void)_popForTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000187620
- (_Bool)_shouldPopForTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000187274
- (void)_handleMouseUpAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000186f6c
- (void)_handleMouseDownAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000186cc5
- (id)backButtonViewAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000186a3a
- (id)_navigationItemAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000186840
- (_Bool)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;	// IMP=0x0000000000186830
- (id)_shim_customHitTest:(struct CGPoint)arg1 forView:(id)arg2;	// IMP=0x0000000000185d21
- (void)_shim_pressBackIndicator:(_Bool)arg1 initialPress:(_Bool)arg2;	// IMP=0x0000000000185c53
- (id)_shim_backIndicatorView;	// IMP=0x0000000000185c3e
- (void)_shim_updateBackIndicator;	// IMP=0x0000000000185c2c
- (void)_shim_setPromptText:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000185643
- (id)_shim_promptText;	// IMP=0x0000000000185626
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;	// IMP=0x00000000001854b5
- (id)_shim_userContentGuide;	// IMP=0x0000000000185127
- (long long)_shim_backdropStyle;	// IMP=0x000000000018507c
- (double)_shim_backgroundHeight;	// IMP=0x0000000000185034
- (void)_shim_setDisableBlurTinting:(_Bool)arg1;	// IMP=0x0000000000184ffb
- (_Bool)_shim_disableBlurTinting;	// IMP=0x0000000000184fde
- (void)_shim_setUseContentView:(_Bool)arg1;	// IMP=0x0000000000184ee7
- (void)_shim_setShadowAlpha:(double)arg1;	// IMP=0x0000000000184eca
- (double)_shim_shadowAlpha;	// IMP=0x0000000000184ead
- (id)_shim_compatibilityBackgroundView;	// IMP=0x0000000000184e85
- (void)_shim_setCustomBackgroundView:(id)arg1;	// IMP=0x0000000000184e24
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(_Bool)arg1;	// IMP=0x0000000000184c89
- (id)_shim_layoutView;	// IMP=0x0000000000184c74
- (id)_shim_contentView;	// IMP=0x0000000000184c5f
- (void)_setUpContentFocusContainerGuide;	// IMP=0x0000000000184971
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;	// IMP=0x0000000000184745
- (void)updateBackgroundGroupName;	// IMP=0x00000000001846f2
- (void)_updateBackground;	// IMP=0x0000000000183cf2
- (void)_completeTopItemTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 previousLeftViews:(id)arg3 previousRightViews:(id)arg4 enableUserInteraction:(id)arg5 transitionAssistant:(id)arg6;	// IMP=0x0000000000183882
- (void)_setViewsAnimated:(_Bool)arg1 forTopNavigationItem:(id)arg2 backNavigationItem:(id)arg3 previousTopItem:(id)arg4;	// IMP=0x0000000000180579
- (void)_completeNavigationTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 transitionAssistant:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000017f980
- (void)_startPopAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000017d6f5
- (void)_startPushAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000017b34f
- (void)_completeTransitionFromCanvasView:(id)arg1 toCanvasView:(id)arg2 updateSize:(_Bool)arg3 transitionAssistant:(id)arg4;	// IMP=0x000000000017b224
- (_Bool)_performCanvasViewTransitionFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x000000000017ae08
- (_Bool)_prepareTransitionFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x000000000017abdb
- (_Bool)_supportsCanvasView;	// IMP=0x000000000017abbd
- (struct CGRect)_contentViewFrameInBounds:(struct CGRect)arg1 style:(id)arg2;	// IMP=0x000000000017ab1a
- (struct CGRect)_frameForCanvasView:(id)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x000000000017aab9
- (void)_updateBackIndicatorViewTintColor;	// IMP=0x000000000017a861
- (void)_updateBackIndicatorImage;	// IMP=0x000000000017a538
- (id)_effectiveBackIndicatorTransitionMaskImage;	// IMP=0x000000000017a455
- (id)_effectiveBackIndicatorImage;	// IMP=0x000000000017a372
- (_Bool)_suppressBackIndicator;	// IMP=0x000000000017a2eb
- (double)_backIndicatorClippingMargin;	// IMP=0x000000000017a2c6
- (double)_effectiveBackIndicatorLeftMargin;	// IMP=0x000000000017a15f
- (void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(_Bool)arg5 rightMaskImage:(id)arg6;	// IMP=0x00000000001799ff
- (unsigned long long)_subviewIndexAboveBackground;	// IMP=0x0000000000179946
- (double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3;	// IMP=0x00000000001797b1
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5;	// IMP=0x00000000001793df
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5 returnedIdealWidthOfTextContent:(double *)arg6 availableLayoutWidthForTextContent:(double *)arg7 idealBackButtonWidth:(double *)arg8;	// IMP=0x0000000000174cbc
- (void)_getLeftMargin:(double *)arg1 rightMargin:(double *)arg2 forNavigationItem:(id)arg3 showingBackButton:(_Bool)arg4 visualStyle:(id)arg5;	// IMP=0x0000000000174ad5
- (id)_defaultTitleFontForItem:(id)arg1 fittingHeight:(double)arg2 withScaleAdjustment:(double)arg3;	// IMP=0x000000000017478e
- (id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2;	// IMP=0x00000000001746f3
- (_Bool)_shouldShowBackButtonForNavigationItem:(id)arg1;	// IMP=0x00000000001746eb
- (void)setBackButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001742fd
- (void)setupTopNavigationItem;	// IMP=0x0000000000174034
- (void)updateTopNavigationItemTitleView;	// IMP=0x0000000000173eff
- (void)updateTopNavigationItemAnimated:(_Bool)arg1;	// IMP=0x0000000000173e59
- (void)popAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000173991
- (void)pushAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017360e
- (void)prepareForPop;	// IMP=0x000000000017358b
- (void)prepareForPush;	// IMP=0x000000000017336b
- (void)layoutSubviews;	// IMP=0x0000000000173252
- (void)_layoutInBounds:(struct CGRect)arg1 withVisualStyle:(id)arg2;	// IMP=0x0000000000172131
- (void)_layoutSubviewsFromContentView;	// IMP=0x0000000000172033
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x0000000000171fe8
- (void)barSizeChanged;	// IMP=0x0000000000171f9d
- (_Bool)shouldUseHeightRangeFittingWidth;	// IMP=0x0000000000171f95
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000171e68
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000000171d30
- (struct CGSize)_preferredContentSizeForItem:(id)arg1;	// IMP=0x0000000000171c00
- (struct CGPoint)frameOriginForStatusBarLocatedAt:(struct CGPoint)arg1;	// IMP=0x0000000000171bd3
- (_Bool)shouldGestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000171bc1
- (void)gestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000171baf
- (_Bool)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(CDUnknownBlockType)arg2;	// IMP=0x0000000000171ad9
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x00000000001719fd
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000171963
- (id)preferredFocusedView;	// IMP=0x00000000001718e6
- (_Bool)canHandleStatusBarTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000017184d
- (long long)statusBarStyle;	// IMP=0x00000000001717d4
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000001714ea
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000171478
- (void)updateArchivedSubviews:(id)arg1;	// IMP=0x000000000017118f
- (void)changeAppearance;	// IMP=0x000000000017111f
- (void)teardown;	// IMP=0x0000000000171082
- (void)prepare;	// IMP=0x0000000000170f2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
