//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIButtonArchivingVisualProvider-Protocol.h>
#import <UIKitCore/UIButtonDeprecatedAPISupportingVisualProvider-Protocol.h>
#import <UIKitCore/UIButtonDeprecatedSPISupportingVisualProvider-Protocol.h>
#import <UIKitCore/UIButtonVisualEffectSupportingVisualProvider-Protocol.h>
#import <UIKitCore/UIButtonVisualProvider-Protocol.h>
#import <UIKitCore/_UIButtonMaskAnimationViewDelegate-Protocol.h>
#import <UIKitCore/_UIFloatingContentViewDelegate-Protocol.h>

@class CALayer, NSArray, NSString, UIButton, UIImageView, UILabel, UIView, UIVisualEffectView, _UIButtonMaskAnimationView, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UIButtonLegacyVisualProvider : NSObject <_UIFloatingContentViewDelegate, _UIButtonMaskAnimationViewDelegate, UIButtonVisualProvider, UIButtonArchivingVisualProvider, UIButtonVisualEffectSupportingVisualProvider, UIButtonDeprecatedAPISupportingVisualProvider, UIButtonDeprecatedSPISupportingVisualProvider>
{
    UIButton *_button;	// 8 = 0x8
    UIImageView *_backgroundView;	// 16 = 0x10
    _UIFloatingContentView *_floatingContentView;	// 24 = 0x18
    UIVisualEffectView *_contentBackdropView;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UILabel *_titleView;	// 48 = 0x30
    UIView *_selectionView;	// 56 = 0x38
    CALayer *_highlightLayer;	// 64 = 0x40
    _UIButtonMaskAnimationView *_maskAnimationView;	// 72 = 0x48
    UIView *_effectiveContentView;	// 80 = 0x50
    NSArray *_contentConstraints;	// 88 = 0x58
}

+ (id)_selectedIndicatorImage;	// IMP=0x00000000007dfb33
+ (_Bool)shouldUpdateContextMenuEnabledOnMenuChanges;	// IMP=0x00000000007d8291
+ (id)visualProviderForButton:(id)arg1;	// IMP=0x00000000007d734c
+ (_Bool)requiresNewVisualProviderForChanges;	// IMP=0x00000000007d7344
- (void).cxx_destruct;	// IMP=0x00000000007e2b70
@property(copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints; // @synthesize _contentConstraints;
@property(nonatomic) UIButton *button; // @synthesize button=_button;
- (void)_setupTitleView;	// IMP=0x00000000007e2b2c
- (void)_setupImageView;	// IMP=0x00000000007e284e
- (id)_createPreparedImageViewWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007e27f5
- (id)_setupBackgroundView;	// IMP=0x00000000007e26c1
- (id)_newImageViewWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007e2621
- (void)_updateEffectsForImageView:(id)arg1 background:(_Bool)arg2;	// IMP=0x00000000007e25bd
- (_Bool)_shouldDefaultToTemplatesForImageViewBackground:(_Bool)arg1;	// IMP=0x00000000007e257b
- (void)_reducedTransparencyDidChange:(id)arg1;	// IMP=0x00000000007e2569
- (void)setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000007e2517
- (void)setExternalFlatEdge:(unsigned long long)arg1;	// IMP=0x00000000007e24d9
- (id)selectionIndicatorView;	// IMP=0x00000000007e249f
- (id)effectiveContentView;	// IMP=0x00000000007e23f9
- (id)_floatingContentView;	// IMP=0x00000000007e225d
- (id)preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000000007e21a9
- (_Bool)canBecomeFocused;	// IMP=0x00000000007e2180
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000007e216a
- (void)_setupTitleViewRequestingLayout:(_Bool)arg1;	// IMP=0x00000000007e1e64
- (id)_newLabelWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007e1d3b
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000007e1cec
- (void)_setupDrawingStyleForState:(unsigned long long)arg1;	// IMP=0x00000000007e10b4
- (double)_borderWidthForState:(unsigned long long)arg1 bounds:(struct CGRect)arg2;	// IMP=0x00000000007e1063
- (id)_fadeOutAnimationWithKeyPath:(id)arg1;	// IMP=0x00000000007e0f36
- (id)_transitionAnimationWithKeyPath:(id)arg1;	// IMP=0x00000000007e0e64
- (struct CGRect)_highlightBoundsForDrawingStyle;	// IMP=0x00000000007e0d87
- (void)_prepareMaskAnimationViewIfNecessary;	// IMP=0x00000000007e0cc9
- (void)_updateMaskState;	// IMP=0x00000000007e0aaa
- (void)layoutSubviews;	// IMP=0x00000000007e071e
- (void)_updateSelectionViewForState:(unsigned long long)arg1;	// IMP=0x00000000007e02e2
- (struct CGRect)_selectedIndicatorBounds;	// IMP=0x00000000007e000f
- (void)_setupPressednessForState:(unsigned long long)arg1;	// IMP=0x00000000007dfdd2
- (_Bool)_highlightsBackgroundImage;	// IMP=0x00000000007dfdb0
- (_Bool)_textNeedsCompositingModeWhenSelected;	// IMP=0x00000000007dfd38
- (_Bool)_imageNeedsCompositingModeWhenSelected;	// IMP=0x00000000007dfce4
- (void)_applyAppropriateTouchInsetsForButton;	// IMP=0x00000000007dfa81
- (void)_layoutHighlightLayer;	// IMP=0x00000000007df603
- (void)_updateTitleView;	// IMP=0x00000000007df2db
- (void)_updateTitleViewStyleEffectConfiguration;	// IMP=0x00000000007df2d5
- (void)_beginTitleAnimation;	// IMP=0x00000000007deff6
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00000000007defe4
- (void)_layoutImageAndTitleViews;	// IMP=0x00000000007ded72
- (void)_updateImageView;	// IMP=0x00000000007de8e2
- (void)_layoutContentBackdropView;	// IMP=0x00000000007de803
- (void)_updateContentBackdropView;	// IMP=0x00000000007de7fd
- (void)setVisualEffectViewEnabled:(_Bool)arg1 backgroundColor:(id)arg2;	// IMP=0x00000000007de71f
- (void)setBlurEnabled:(_Bool)arg1;	// IMP=0x00000000007de719
- (_Bool)_wantsContentBackdropView;	// IMP=0x00000000007de6dc
- (id)contentBackdropView;	// IMP=0x00000000007de52c
- (void)_layoutBackgroundImageView;	// IMP=0x00000000007de46c
- (void)_updateBackgroundImageView;	// IMP=0x00000000007de218
- (_Bool)_shouldUpdatePressedness;	// IMP=0x00000000007de1c5
- (_Bool)_isExternalRoundedRectButtonWithPressednessState;	// IMP=0x00000000007de172
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x00000000007ddf9a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000007ddf84
- (struct CGSize)intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x00000000007ddd74
- (struct CGSize)_intrinsicSizeForTitle:(id)arg1 attributedTitle:(id)arg2 image:(id)arg3 backgroundImage:(id)arg4 titlePaddingInsets:(struct UIEdgeInsets *)arg5;	// IMP=0x00000000007dd03b
- (double)_intrinsicWidthForAttributedTitle:(id)arg1;	// IMP=0x00000000007dd00d
- (id)currentImageWithResolvedConfiguration;	// IMP=0x00000000007dcff7
- (void)didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x00000000007dcfb2
- (void)tintColorDidChange;	// IMP=0x00000000007dce48
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000007dcd1c
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x00000000007dcbc9
- (struct CGRect)_highlightRectForImageRect:(struct CGRect)arg1;	// IMP=0x00000000007dca84
- (struct CGRect)_highlightRectForTextRect:(struct CGRect)arg1;	// IMP=0x00000000007dc9c1
- (CDStruct_c3b9c2ee)baselineOffsetsAtSize:(struct CGSize)arg1;	// IMP=0x00000000007dc6e2
- (id)_viewForBaselineLayout;	// IMP=0x00000000007dc66d
- (id)viewForLastBaselineLayout;	// IMP=0x00000000007dc65b
- (id)viewForFirstBaselineLayout;	// IMP=0x00000000007dc649
- (void)updateConstraints;	// IMP=0x00000000007db70c
- (void)_invalidateContentConstraints;	// IMP=0x00000000007db6d1
- (id)_titleOrImageViewForBaselineLayout;	// IMP=0x00000000007db4f7
- (void)setContentHuggingPriorities:(struct CGSize)arg1;	// IMP=0x00000000007db4dc
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;	// IMP=0x00000000007db4ba
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;	// IMP=0x00000000007db498
- (void)_deriveTitleRect:(struct CGRect *)arg1 imageRect:(struct CGRect *)arg2 fromContentRect:(struct CGRect)arg3 calculatePositionForEmptyTitle:(_Bool)arg4;	// IMP=0x00000000007da0c8
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000000007da071
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000000007da03c
- (_Bool)useTitleForSelectedIndicatorBounds;	// IMP=0x00000000007da01a
- (struct CGRect)_titleRectForContentRect:(struct CGRect)arg1 calculatePositionForEmptyTitle:(_Bool)arg2;	// IMP=0x00000000007d9ec5
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000007d9d5b
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000007d9cc7
- (id)defaultFocusEffect;	// IMP=0x00000000007d9cbf
- (id)pointerShapeInContainer:(id)arg1 proposal:(CDUnknownBlockType)arg2;	// IMP=0x00000000007d8e0f
- (id)pointerEffectWithPreview:(id)arg1;	// IMP=0x00000000007d8cf2
- (id)pointerEffectPreviewParameters;	// IMP=0x00000000007d8b64
- (void)pointerWillExit:(id)arg1;	// IMP=0x00000000007d8b5e
- (void)pointerWillEnter:(id)arg1;	// IMP=0x00000000007d8b58
- (void)setContentVerticalAlignment:(long long)arg1;	// IMP=0x00000000007d8b46
- (void)setContentHorizontalAlignment:(long long)arg1;	// IMP=0x00000000007d8aec
- (id)imageViewCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000000007d8a49
- (id)titleViewCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000000007d89cb
- (id)backgroundViewCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000000007d89bd
- (void)setRole:(long long)arg1;	// IMP=0x00000000007d89b7
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;	// IMP=0x00000000007d899e
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x00000000007d8985
- (void)contextMenuInteraction:(id)arg1 updateStyleForMenuWithConfiguration:(id)arg2 style:(id)arg3;	// IMP=0x00000000007d88bc
- (struct CGPoint)menuAttachmentPointForConfiguration:(id)arg1;	// IMP=0x00000000007d86a4
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000007d82a5
- (void)setMenuProvider:(CDUnknownBlockType)arg1;	// IMP=0x00000000007d829f
- (void)setMenu:(id)arg1;	// IMP=0x00000000007d8299
- (void)setImageContentMode:(long long)arg1;	// IMP=0x00000000007d827b
- (void)setShowsTouchWhenHighlighted:(_Bool)arg1;	// IMP=0x00000000007d80d5
- (void)setContextMenuIsPrimary:(_Bool)arg1;	// IMP=0x00000000007d80cf
- (void)setOn:(_Bool)arg1;	// IMP=0x00000000007d80c9
- (_Bool)isOn;	// IMP=0x00000000007d80c1
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000007d7f84
- (struct CGRect)highlightBounds;	// IMP=0x00000000007d7d23
- (void)setTitleShadowOffset:(struct CGSize)arg1;	// IMP=0x00000000007d7c42
- (struct CGSize)titleShadowOffset;	// IMP=0x00000000007d7c14
- (void)setLineBreakMode:(long long)arg1;	// IMP=0x00000000007d7b7a
- (long long)lineBreakMode;	// IMP=0x00000000007d7b58
- (void)setFont:(id)arg1 isDefaultForIdiom:(_Bool)arg2;	// IMP=0x00000000007d79c1
- (id)font;	// IMP=0x00000000007d79ab
- (_Bool)fontIsDefaultForIdiom;	// IMP=0x00000000007d7995
- (_Bool)deferToLazyTitleFont;	// IMP=0x00000000007d7987
- (void)cleanupForVisualProvider:(id)arg1;	// IMP=0x00000000007d7677
- (void)dealloc;	// IMP=0x00000000007d7633
- (id)encodableSubviews;	// IMP=0x00000000007d75e3
- (void)populateArchivedSubviews:(id)arg1;	// IMP=0x00000000007d74cf
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000007d74c9
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000007d7458
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000007d73c8
- (void)setPreferredSymbolConfiguration:(id)arg1 forImageInState:(unsigned long long)arg2;	// IMP=0x00000000007d73c2
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000007d73bc
- (_Bool)adjustsFontForContentSizeCategory;	// IMP=0x00000000007d73a6
- (void)setReversesTitleShadowWhenHighlighted:(_Bool)arg1;	// IMP=0x00000000007d736a
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000007d7364
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000007d735e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
