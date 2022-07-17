//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKPaletteHostViewDelegate-Protocol.h>
#import <PencilKit/PKPaletteHostingWindowSceneObserver-Protocol.h>
#import <PencilKit/PKPalettePopoverDismissing-Protocol.h>
#import <PencilKit/PKPalettePopoverPresenting-Protocol.h>
#import <PencilKit/PKPaletteViewStateSubject-Protocol.h>

@class MTMaterialView, NSLayoutConstraint, NSString, PKPaletteContainerView, PKPaletteScaleFactorPolicy, PKPaletteToolPreview, UIViewController;
@protocol PKPaletteViewDelegate, PKPaletteViewHosting, PKPaletteViewInternalDelegate;

@interface PKPaletteView : UIView <PKPaletteViewStateSubject, PKPaletteHostViewDelegate, PKPaletteHostingWindowSceneObserver, PKPalettePopoverPresenting, PKPalettePopoverDismissing>
{
    _Bool _autoHideEnabled;	// 8 = 0x8
    _Bool _shouldStartUpMinimized;	// 9 = 0x9
    _Bool _shouldExpandFromCorner;	// 10 = 0xa
    _Bool _shouldAdjustShadowRadiusForMinimized;	// 11 = 0xb
    _Bool _ignoresSafeAreaInsetsInCompactSize;	// 12 = 0xc
    _Bool _toolPreviewMinimized;	// 13 = 0xd
    _Bool _paletteIsCompactSize;	// 14 = 0xe
    _Bool _paletteHasLayoutSubviews;	// 15 = 0xf
    UIViewController *_palettePopoverPresentingController;	// 16 = 0x10
    id <PKPaletteViewDelegate> _delegate;	// 24 = 0x18
    long long _palettePosition;	// 32 = 0x20
    double _paletteScaleFactor;	// 40 = 0x28
    UIViewController *_presentationController;	// 48 = 0x30
    MTMaterialView *_backgroundMaterialView;	// 56 = 0x38
    double _compactPaletteHeight;	// 64 = 0x40
    PKPaletteScaleFactorPolicy *_paletteScaleFactorPolicy;	// 72 = 0x48
    double _shadowOpacity;	// 80 = 0x50
    double _shadowRadius;	// 88 = 0x58
    unsigned long long _lastEdgeLocation;	// 96 = 0x60
    id <PKPaletteViewHosting> _paletteViewHosting;	// 104 = 0x68
    id <PKPaletteViewInternalDelegate> _internalDelegate;	// 112 = 0x70
    unsigned long long _autoHideCorner;	// 120 = 0x78
    UIView *_clippingView;	// 128 = 0x80
    PKPaletteContainerView *_containerView;	// 136 = 0x88
    NSLayoutConstraint *_paletteContainerWidthConstraint;	// 144 = 0x90
    NSLayoutConstraint *_paletteContainerHeightConstraint;	// 152 = 0x98
    NSLayoutConstraint *_paletteContainerCenterXConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_paletteContainerCenterYConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_paletteContainerCompactTopConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_paletteContainerCompactBottomConstraint;	// 184 = 0xb8
    NSLayoutConstraint *_paletteContainerCompactLeftConstraint;	// 192 = 0xc0
    NSLayoutConstraint *_paletteContainerCompactRightConstraint;	// 200 = 0xc8
    PKPaletteToolPreview *_toolPreview;	// 208 = 0xd0
    NSLayoutConstraint *_toolPreviewCenterXConstraint;	// 216 = 0xd8
    NSLayoutConstraint *_toolPreviewCenterYConstraint;	// 224 = 0xe0
    NSLayoutConstraint *_toolPreviewWidthConstraint;	// 232 = 0xe8
    NSLayoutConstraint *_toolPreviewHeightConstraint;	// 240 = 0xf0
    unsigned long long _lastPaletteEdgePositionWhileDragging;	// 248 = 0xf8
    struct UIEdgeInsets _palettePopoverLayoutSceneMargins;	// 256 = 0x100
    struct CGRect _adjustedWindowSceneBounds;	// 288 = 0x120
    struct NSDirectionalEdgeInsets _edgeInsetsInCompactSize;	// 320 = 0x140
}

+ (id)makeBackgroundView;	// IMP=0x00000000000812b4
- (void).cxx_destruct;	// IMP=0x0000000000085ba0
@property(readonly, nonatomic) unsigned long long lastPaletteEdgePositionWhileDragging; // @synthesize lastPaletteEdgePositionWhileDragging=_lastPaletteEdgePositionWhileDragging;
@property(readonly, nonatomic) _Bool paletteHasLayoutSubviews; // @synthesize paletteHasLayoutSubviews=_paletteHasLayoutSubviews;
@property(readonly, nonatomic) _Bool paletteIsCompactSize; // @synthesize paletteIsCompactSize=_paletteIsCompactSize;
@property(retain, nonatomic) NSLayoutConstraint *toolPreviewHeightConstraint; // @synthesize toolPreviewHeightConstraint=_toolPreviewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPreviewWidthConstraint; // @synthesize toolPreviewWidthConstraint=_toolPreviewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPreviewCenterYConstraint; // @synthesize toolPreviewCenterYConstraint=_toolPreviewCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPreviewCenterXConstraint; // @synthesize toolPreviewCenterXConstraint=_toolPreviewCenterXConstraint;
@property(readonly, nonatomic) PKPaletteToolPreview *toolPreview; // @synthesize toolPreview=_toolPreview;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerCompactRightConstraint; // @synthesize paletteContainerCompactRightConstraint=_paletteContainerCompactRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerCompactLeftConstraint; // @synthesize paletteContainerCompactLeftConstraint=_paletteContainerCompactLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerCompactBottomConstraint; // @synthesize paletteContainerCompactBottomConstraint=_paletteContainerCompactBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerCompactTopConstraint; // @synthesize paletteContainerCompactTopConstraint=_paletteContainerCompactTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerCenterYConstraint; // @synthesize paletteContainerCenterYConstraint=_paletteContainerCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerCenterXConstraint; // @synthesize paletteContainerCenterXConstraint=_paletteContainerCenterXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerHeightConstraint; // @synthesize paletteContainerHeightConstraint=_paletteContainerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerWidthConstraint; // @synthesize paletteContainerWidthConstraint=_paletteContainerWidthConstraint;
@property(readonly, nonatomic) PKPaletteContainerView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic, getter=isToolPreviewMinimized) _Bool toolPreviewMinimized; // @synthesize toolPreviewMinimized=_toolPreviewMinimized;
@property(nonatomic) unsigned long long autoHideCorner; // @synthesize autoHideCorner=_autoHideCorner;
@property(nonatomic) __weak id <PKPaletteViewInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) __weak id <PKPaletteViewHosting> paletteViewHosting; // @synthesize paletteViewHosting=_paletteViewHosting;
@property(nonatomic) unsigned long long lastEdgeLocation; // @synthesize lastEdgeLocation=_lastEdgeLocation;
@property(nonatomic) struct NSDirectionalEdgeInsets edgeInsetsInCompactSize; // @synthesize edgeInsetsInCompactSize=_edgeInsetsInCompactSize;
@property(nonatomic) _Bool ignoresSafeAreaInsetsInCompactSize; // @synthesize ignoresSafeAreaInsetsInCompactSize=_ignoresSafeAreaInsetsInCompactSize;
@property(readonly, nonatomic) _Bool shouldAdjustShadowRadiusForMinimized; // @synthesize shouldAdjustShadowRadiusForMinimized=_shouldAdjustShadowRadiusForMinimized;
@property(readonly, nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(readonly, nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(readonly, nonatomic) _Bool shouldExpandFromCorner; // @synthesize shouldExpandFromCorner=_shouldExpandFromCorner;
@property(readonly, nonatomic) _Bool shouldStartUpMinimized; // @synthesize shouldStartUpMinimized=_shouldStartUpMinimized;
@property(nonatomic, getter=isAutoHideEnabled) _Bool autoHideEnabled; // @synthesize autoHideEnabled=_autoHideEnabled;
@property(readonly, nonatomic) PKPaletteScaleFactorPolicy *paletteScaleFactorPolicy; // @synthesize paletteScaleFactorPolicy=_paletteScaleFactorPolicy;
@property(readonly, nonatomic) struct CGRect adjustedWindowSceneBounds; // @synthesize adjustedWindowSceneBounds=_adjustedWindowSceneBounds;
@property(readonly, nonatomic) double compactPaletteHeight; // @synthesize compactPaletteHeight=_compactPaletteHeight;
@property(nonatomic) struct UIEdgeInsets palettePopoverLayoutSceneMargins; // @synthesize palettePopoverLayoutSceneMargins=_palettePopoverLayoutSceneMargins;
@property(readonly, nonatomic) MTMaterialView *backgroundMaterialView; // @synthesize backgroundMaterialView=_backgroundMaterialView;
@property(nonatomic) __weak UIViewController *presentationController; // @synthesize presentationController=_presentationController;
@property(readonly, nonatomic) double paletteScaleFactor; // @synthesize paletteScaleFactor=_paletteScaleFactor;
@property(readonly, nonatomic) long long palettePosition; // @synthesize palettePosition=_palettePosition;
@property(nonatomic) __weak id <PKPaletteViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *palettePopoverPresentingController; // @synthesize palettePopoverPresentingController=_palettePopoverPresentingController;
- (id)_stateDictionary;	// IMP=0x00000000000855a0
- (void)saveOptionsIfNecessary;	// IMP=0x0000000000085560
- (void)_saveOptions;	// IMP=0x00000000000854d4
- (_Bool)_loadOptions;	// IMP=0x0000000000085228
- (unsigned long long)edgeLocationToDockFromCorner:(unsigned long long)arg1;	// IMP=0x0000000000085058
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000084e3d
- (struct CGSize)paletteSizeForEdge:(unsigned long long)arg1;	// IMP=0x0000000000084e27
- (struct CGSize)minimizedPaletteSize;	// IMP=0x0000000000084dd4
- (void)didEndAppearanceAnimation;	// IMP=0x0000000000084dce
- (void)willStartAppearanceAnimation:(_Bool)arg1;	// IMP=0x0000000000084d81
- (void)configureForDockedAtEdge:(unsigned long long)arg1;	// IMP=0x0000000000084d35
- (void)configureForDockedAtCorner;	// IMP=0x0000000000084cf3
@property(readonly, nonatomic) _Bool toolPreviewMatchesExpandedTool;
- (void)_updateToolPreviewScalingAnimated:(_Bool)arg1;	// IMP=0x0000000000084aa6
- (void)setToolPreviewMinimized:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000084a80
- (id)toolPreviewView;	// IMP=0x0000000000084a5a
- (void)updatePopoverUI;	// IMP=0x0000000000084a54
- (void)updatePalettePopover:(id)arg1;	// IMP=0x0000000000084860
- (id)palettePopoverSourceView;	// IMP=0x0000000000084810
- (struct CGRect)palettePopoverSourceRect;	// IMP=0x000000000008444d
- (_Bool)wantsCustomPalettePopoverPresentationSource;	// IMP=0x000000000008439c
- (struct UIEdgeInsets)palettePopoverLayoutMargins;	// IMP=0x0000000000084313
- (unsigned long long)palettePopoverPermittedArrowDirections;	// IMP=0x0000000000084209
- (id)palettePopoverPassthroughViews;	// IMP=0x000000000008411a
- (_Bool)shouldPalettePresentPopover;	// IMP=0x00000000000840d7
- (_Bool)isPalettePresentingPopover;	// IMP=0x0000000000084074
- (unsigned long long)_nextAutoHideCorner;	// IMP=0x0000000000083f50
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000083e99
- (void)didChangePalettePosition;	// IMP=0x0000000000083dfc
- (void)setPalettePosition:(long long)arg1;	// IMP=0x0000000000083d51
@property(readonly, nonatomic) unsigned long long paletteViewType;
- (double)scalingFactor;	// IMP=0x0000000000083d37
- (void)didChangePaletteScaleFactor;	// IMP=0x0000000000083ccd
- (void)_setPaletteScaleFactor:(double)arg1 notifyDidChange:(_Bool)arg2;	// IMP=0x0000000000083c76
- (void)setPaletteScaleFactor:(double)arg1;	// IMP=0x0000000000083c5f
- (void)setAdjustedWindowSceneBounds:(struct CGRect)arg1;	// IMP=0x0000000000083a24
- (void)paletteHostingWindowSceneDidChangeBounds:(id)arg1;	// IMP=0x00000000000839c8
- (void)hostView:(id)arg1 didDockPaletteToPosition:(long long)arg2;	// IMP=0x0000000000083985
- (void)_willDockPaletteToCorner:(unsigned long long)arg1;	// IMP=0x000000000008397f
- (void)_willDockPaletteToEdge:(unsigned long long)arg1 prepareForExpansion:(_Bool)arg2 isPaletteChangingOrientation:(_Bool)arg3;	// IMP=0x0000000000083838
- (void)hostView:(id)arg1 willDockPaletteToPosition:(long long)arg2 prepareForExpansion:(_Bool)arg3;	// IMP=0x0000000000083270
- (void)_updateContainerSizeConstraintsForEdge:(unsigned long long)arg1;	// IMP=0x0000000000082e08
- (void)_updateContainerSizeConstraints;	// IMP=0x0000000000082dbf
- (void)layoutSubviews;	// IMP=0x0000000000082b76
- (double)dampingRatioForThrowingFromPosition:(long long)arg1 toPosition:(long long)arg2 withVelocity:(struct CGPoint)arg3;	// IMP=0x0000000000082b6d
- (double)responseForThrowingFromPosition:(long long)arg1 toPosition:(long long)arg2 withVelocity:(struct CGPoint)arg3;	// IMP=0x0000000000082b64
- (void)_setCornerRadius:(double)arg1;	// IMP=0x0000000000082ae6
- (_Bool)_isPaletteContentViewHidden;	// IMP=0x0000000000082ade
- (void)_updateToolPreviewVisibility;	// IMP=0x000000000008298f
- (double)borderWidthForTraitCollection:(id)arg1;	// IMP=0x0000000000082986
- (id)borderColorForTraitCollection:(id)arg1;	// IMP=0x000000000008297e
@property(nonatomic) double paletteContentAlpha;
- (void)_didChangeAutoHideEnabled;	// IMP=0x0000000000082829
@property(readonly, nonatomic) _Bool useCompactSize;
- (_Bool)wantsToolPreviewForTraitCollection:(id)arg1;	// IMP=0x0000000000082787
@property(readonly, nonatomic, getter=isToolPreviewInstalled) _Bool toolPreviewInstalled;
- (void)_uninstallToolPreview;	// IMP=0x00000000000826bf
- (void)_installToolPreviewInView:(id)arg1;	// IMP=0x0000000000082208
- (void)_installContainerViewInView:(id)arg1;	// IMP=0x0000000000081bbd
- (void)_installBackgroundViewInView:(id)arg1;	// IMP=0x0000000000081b43
- (void)_installClippingViewInView:(id)arg1;	// IMP=0x0000000000081884
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000081303

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
