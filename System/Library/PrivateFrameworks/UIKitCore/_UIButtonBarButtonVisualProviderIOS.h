//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLayoutConstraint, NSMutableDictionary, UIButton, UIColor, UIImageView, UITapGestureRecognizer, _UIBackButtonMaskView, _UIModernBarButton;
@protocol _UIButtonBarAppearanceDelegate;

__attribute__((visibility("hidden")))
@interface _UIButtonBarButtonVisualProviderIOS
{
    NSMutableDictionary *_currentConstraints;	// 24 = 0x18
    NSMutableDictionary *_oldConstraints;	// 32 = 0x20
    UIButton *_backIndicatorButton;	// 40 = 0x28
    _UIBackButtonMaskView *_backButtonMask;	// 48 = 0x30
    _UIModernBarButton *_titleButton;	// 56 = 0x38
    _UIModernBarButton *_imageButton;	// 64 = 0x40
    UIImageView *_backgroundView;	// 72 = 0x48
    id <_UIButtonBarAppearanceDelegate> _appearanceDelegate;	// 80 = 0x50
    NSArray *_barButtonTitleAttributes;	// 88 = 0x58
    NSArray *_finalTitleAttributes;	// 96 = 0x60
    UIColor *_tintColor;	// 104 = 0x68
    NSMutableDictionary *_backgroundImages;	// 112 = 0x70
    NSArray *_titleContent;	// 120 = 0x78
    NSMutableDictionary *_titleLookup;	// 128 = 0x80
    NSLayoutConstraint *_backButtonTitleMaxWidthConstraint;	// 136 = 0x88
    UITapGestureRecognizer *_pressTapRecognizer;	// 144 = 0x90
    CDUnknownBlockType _menuProvider;	// 152 = 0x98
    long long _systemItem;	// 160 = 0xa0
    struct {
        unsigned int imageHasBaseline:1;
        unsigned int backButtonMaskEnabled:1;
        unsigned int style:3;
        unsigned int isSystemItem:1;
    } _flags;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000012775f
- (void)_handlePressGesture:(id)arg1;	// IMP=0x000000000012771d
- (id)buttonSpringLoadedInteractionEffect;	// IMP=0x0000000000127704
- (void)updateMenu;	// IMP=0x0000000000127027
- (_Bool)canUpdateMenuInPlace;	// IMP=0x000000000012701f
- (struct CGPoint)menuAnchorPoint;	// IMP=0x0000000000126eb2
- (id)buttonContextMenuTargetedPreview;	// IMP=0x0000000000126e7b
- (id)buttonContextMenuStyleFromDefaultStyle:(id)arg1;	// IMP=0x0000000000126ddd
- (id)buttonContextMenuInteractionConfiguration;	// IMP=0x0000000000126d97
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(CDUnknownBlockType)arg2;	// IMP=0x00000000001269b3
- (_Bool)shouldButtonAdjustToTraitCollection:(id)arg1;	// IMP=0x000000000012696b
- (void)traitCollectionChangedInSubtreeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000012663a
- (void)updateButton:(id)arg1 appearance:(id)arg2;	// IMP=0x0000000000126628
- (void)_updateViewsForMaskingEnabled;	// IMP=0x000000000012650c
- (void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2;	// IMP=0x000000000012585e
- (void)_setupAlternateTitles;	// IMP=0x000000000012524d
- (id)_titleContentForTitle:(id)arg1;	// IMP=0x0000000000125168
- (void)_configureBackButtonWithBackButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg1 useBaselineAlignment:(_Bool)arg2;	// IMP=0x00000000001250fd
- (void)_configureTextBackButtonWithTitlePositionAdjustment:(struct UIOffset)arg1 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg2 useBaselineAlignment:(_Bool)arg3;	// IMP=0x0000000000124fe8
- (void)_configureImageBackButtonWithImageInsets:(struct UIEdgeInsets)arg1 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg2 useBaselineAlignment:(_Bool)arg3;	// IMP=0x0000000000124ecc
- (void)_configureBackButtonMask;	// IMP=0x0000000000124a9e
- (void)_configureTextWithOffset:(struct UIOffset)arg1 additionalPadding:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000124a4d
- (void)_configureImageWithInsets:(struct UIEdgeInsets)arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3;	// IMP=0x0000000000124a06
- (void)_addVerticalConstraintsForImageWithInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000124565
- (void)_addVerticalConstraintsForTextWithOffset:(double)arg1;	// IMP=0x000000000012423d
- (void)_addVerticalConstraintsForBackIndicatorWithTitleOffset:(double)arg1 bottomOffset:(double)arg2 useBaselineAlignment:(_Bool)arg3;	// IMP=0x0000000000123f98
- (void)_addHorizontalConstraintsForImageWithInsets:(struct UIEdgeInsets)arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3;	// IMP=0x0000000000123956
- (void)_addHorizontalConstraintsForTextWithOffset:(double)arg1 additionalPadding:(struct UIEdgeInsets)arg2;	// IMP=0x000000000012380e
- (void)_addHorizontalConstraintsForContentButton:(id)arg1 titleOffset:(double)arg2 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg3;	// IMP=0x000000000012354e
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;	// IMP=0x00000000001234cf
- (struct UIEdgeInsets)_imageInsetsForBarButtonItem:(id)arg1 compact:(_Bool)arg2 isBackButton:(_Bool)arg3;	// IMP=0x00000000001232e6
- (id)alignmentViewForStaticNavBarButtonTrailing;	// IMP=0x00000000001232a3
- (id)alignmentViewForStaticNavBarButtonLeading;	// IMP=0x0000000000123260
- (double)_defaultPaddingForInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000012320d
- (double)_defaultBackIndicatorBaselineInsetCompact:(_Bool)arg1;	// IMP=0x0000000000123183
- (struct UIEdgeInsets)_insetsForCompact:(_Bool)arg1;	// IMP=0x000000000012314c
- (void)_addConstraintsForBackgroundViewWithOffset:(double)arg1 isBackButton:(_Bool)arg2 resizesImage:(_Bool)arg3;	// IMP=0x0000000000122d8a
- (void)_prepareBackgroundViewFromBarButtonItem:(id)arg1 isBackButton:(_Bool)arg2;	// IMP=0x00000000001229d7
- (void)_configureImageOrTitleCompact:(_Bool)arg1;	// IMP=0x0000000000122221
- (void)_removeTitleButton;	// IMP=0x00000000001221ca
- (void)_setTitle:(id)arg1;	// IMP=0x0000000000121da8
- (void)_computeTextAttributes;	// IMP=0x00000000001216c4
- (void)_computeTextAttributesForBarButtonItem:(id)arg1;	// IMP=0x000000000012152f
- (id)contentView;	// IMP=0x00000000001214bc
- (id)backIndicatorView;	// IMP=0x00000000001214a7
- (_Bool)supportsBackButtons;	// IMP=0x000000000012149f
- (void)updateButton:(id)arg1 forEnabledState:(_Bool)arg2;	// IMP=0x0000000000121341
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;	// IMP=0x00000000001211e9
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;	// IMP=0x00000000001210a1
- (_Bool)buttonSelectionState:(id)arg1 forRequestedState:(_Bool)arg2;	// IMP=0x0000000000121056
- (void)setBackButtonMaskEnabled:(_Bool)arg1;	// IMP=0x0000000000121016
- (_Bool)backButtonMaskEnabled;	// IMP=0x0000000000121002
- (void)activateHeightMinimizer;	// IMP=0x0000000000120f7f
- (void)activateWidthMinimizer;	// IMP=0x0000000000120efc
- (void)addActiveConstraint:(id)arg1 named:(id)arg2;	// IMP=0x0000000000120c82
- (void)updateActiveConstraints:(CDUnknownBlockType)arg1;	// IMP=0x0000000000120b03
- (_Bool)shouldLift;	// IMP=0x0000000000120a5a
- (id)matchingPointerShapeForView:(id)arg1 rect:(struct CGRect)arg2 inContainer:(id)arg3;	// IMP=0x0000000000120985
- (id)pointerShapeInContainer:(id)arg1;	// IMP=0x000000000011ff52
- (id)pointerPreviewParameters;	// IMP=0x000000000011fd7f
- (_Bool)useLocalPointerInteraction;	// IMP=0x000000000011fd77
- (void)resetButtonHasHighlighted;	// IMP=0x000000000011fd17
- (id)_backIndicatorMaskSymbolConfigurationForCompact:(_Bool)arg1;	// IMP=0x000000000011fc20
- (id)_backIndicatorMaskForCompact:(_Bool)arg1;	// IMP=0x000000000011fb04
- (id)_backIndicatorSymbolConfigurationForCompact:(_Bool)arg1;	// IMP=0x000000000011fa0d
- (id)_backIndicatorImageForCompact:(_Bool)arg1;	// IMP=0x000000000011f8d7
- (struct UIOffset)backButtonTitlePositionOffsetForCompact:(_Bool)arg1;	// IMP=0x000000000011f7c3
- (struct UIOffset)titlePositionOffsetForCompact:(_Bool)arg1;	// IMP=0x000000000011f6af
- (id)tintColor;	// IMP=0x000000000011f5ac
- (struct UIOffset)backButtonBackgroundVerticalAdjustmentForCompact:(_Bool)arg1;	// IMP=0x000000000011f4e0
- (struct UIOffset)backgroundVerticalAdjustmentForCompact:(_Bool)arg1;	// IMP=0x000000000011f414
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 compact:(_Bool)arg2;	// IMP=0x000000000011f334
- (id)backgroundImageForState:(unsigned long long)arg1 compact:(_Bool)arg2;	// IMP=0x000000000011f241
- (id)symbolConfigurationCompact:(_Bool)arg1;	// IMP=0x000000000011f199
- (id)backgroundImageView;	// IMP=0x00000000001278b7
- (id)imageButton;	// IMP=0x00000000001278a2
- (id)textButton;	// IMP=0x000000000012788d

@end

