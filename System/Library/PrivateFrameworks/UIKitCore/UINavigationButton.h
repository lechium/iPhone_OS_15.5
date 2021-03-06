//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet, NSString, UIBarButtonItem, UIColor, UIImage, UINavigationItem, UIView, _UIBarButtonItemAppearanceStorage;

@interface UINavigationButton
{
    NSSet *_possibleTitles;	// 264 = 0x108
    int _style;	// 272 = 0x110
    long long _barStyle;	// 280 = 0x118
    UIColor *_navigationBarTintColor;	// 288 = 0x120
    struct CGSize _boundsAdjustment;	// 296 = 0x128
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;	// 312 = 0x138
    NSSet *_possibleSystemItems;	// 320 = 0x140
    unsigned int _size:2;	// 328 = 0x148
    unsigned int _wantsLetterpressContent:1;	// 328 = 0x148
    UIBarButtonItem *_originatingButtonItem;	// 336 = 0x150
    UINavigationItem *_originatingNavigationItem;	// 344 = 0x158
    _Bool _createdByBarButtonItem;	// 352 = 0x160
    _Bool _isFontScaleInvalid;	// 353 = 0x161
    _Bool _wantsBlendModeForAccessibilityBackgrounds;	// 354 = 0x162
    _Bool __barItemHidden;	// 355 = 0x163
    long long _buttonItemStyle;	// 360 = 0x168
    NSDictionary *_stylesForSizingTitles;	// 368 = 0x170
    double _fontScaleAdjustment;	// 376 = 0x178
    UIColor *_accessibilityBackgroundTintColor;	// 384 = 0x180
    Class _appearanceGuideClass;	// 392 = 0x188
    UIView *__enclosingBar;	// 400 = 0x190
    double _minimumWidth;	// 408 = 0x198
    double _maximumWidth;	// 416 = 0x1a0
    struct UIEdgeInsets __additionalSelectionInsets;	// 424 = 0x1a8
}

+ (void)_resetRenderingModesForBackgroundImageView:(id)arg1 inBarStyle:(long long)arg2 isEnabled:(_Bool)arg3 withAccessibilityBackground:(_Bool)arg4 wantsBlendModeForAccessibilityBackgrounds:(_Bool)arg5 accessibilityBackgroundTintColor:(id)arg6;	// IMP=0x00000000001364b0
+ (id)defaultFont;	// IMP=0x0000000000135ebc
- (void).cxx_destruct;	// IMP=0x000000000013b4cf
@property(nonatomic, setter=_setBarItemHidden:) _Bool _barItemHidden; // @synthesize _barItemHidden=__barItemHidden;
@property(nonatomic) __weak UIBarButtonItem *originatingButtonItem; // @synthesize originatingButtonItem=_originatingButtonItem;
@property(nonatomic) __weak UINavigationItem *originatingNavigationItem; // @synthesize originatingNavigationItem=_originatingNavigationItem;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic, setter=_setEnclosingBar:) __weak UIView *_enclosingBar; // @synthesize _enclosingBar=__enclosingBar;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets; // @synthesize _additionalSelectionInsets=__additionalSelectionInsets;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(retain, nonatomic, setter=_setAccessibilityBackgroundTintColor:) UIColor *_accessibilityBackgroundTintColor; // @synthesize _accessibilityBackgroundTintColor;
@property(nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) _Bool _wantsBlendModeForAccessibilityBackgrounds; // @synthesize _wantsBlendModeForAccessibilityBackgrounds;
@property(nonatomic, setter=_setFontScaleAdjustment:) double _fontScaleAdjustment; // @synthesize _fontScaleAdjustment;
@property(nonatomic, setter=_setFontScaleInvalid:) _Bool _isFontScaleInvalid; // @synthesize _isFontScaleInvalid;
@property(nonatomic, setter=_setCreatedByBarButtonItem:) _Bool _createdByBarButtonItem; // @synthesize _createdByBarButtonItem;
@property(copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles; // @synthesize _stylesForSizingTitles;
@property(nonatomic, setter=_setButtonItemStyle:) long long _buttonItemStyle; // @synthesize _buttonItemStyle;
- (void)setPointerInteractionEnabled:(_Bool)arg1;	// IMP=0x000000000013afad
- (void)_uinavigationbar_prepareToAppearInNavigationItem:(id)arg1 onLeft:(_Bool)arg2;	// IMP=0x000000000013aefd
- (id)_externalUnfocusedBorderColor;	// IMP=0x000000000013aee4
- (_Bool)_isExternalRoundedRectButton;	// IMP=0x000000000013ae9b
- (_Bool)canBecomeFocused;	// IMP=0x000000000013ae48
- (_Bool)_supportsMacIdiom;	// IMP=0x000000000013ae40
- (id)_activeVisualStyle;	// IMP=0x000000000013ae0f
- (long long)_externalDrawingStyleForState:(unsigned long long)arg1;	// IMP=0x000000000013ade3
- (id)_visualStyleForMetrics:(long long)arg1;	// IMP=0x000000000013ac0b
- (long long)_activeBarMetrics;	// IMP=0x000000000013abf0
- (void)_setGroupName:(id)arg1 forNavigationBar:(id)arg2;	// IMP=0x000000000013ab1d
- (id)_appearanceStorage;	// IMP=0x000000000013ab08
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x000000000013a50b
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000013a505
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000013a4ff
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000013a4f9
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000013a4f3
- (struct UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x000000000013a41b
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000013a409
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000013a249
- (_Bool)_hasBaselineAlignedAbsoluteVerticalPosition:(out double *)arg1 withinNavBar:(id)arg2 forSize:(struct CGSize)arg3;	// IMP=0x000000000013a07b
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x000000000013a05e
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000013a04c
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000139f7e
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000139f78
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000139f72
- (id)_titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x0000000000139e01
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000139def
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000139adf
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
- (void)_UIAppearance_setTintColor:(id)arg1;	// IMP=0x00000000001399f7
- (id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;	// IMP=0x0000000000139935
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000139923
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x0000000000139911
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x00000000001398f6
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x0000000000139536
- (void)_updateContentInsets;	// IMP=0x000000000013937b
- (void)_setBoundsAdjustment:(struct CGSize)arg1;	// IMP=0x000000000013933a
- (void)_setFrame:(struct CGRect)arg1 deferLayout:(_Bool)arg2;	// IMP=0x000000000013922e
- (void)_adjustBounds;	// IMP=0x00000000001391bc
- (_Bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000001391b4
- (void)setNavigationBarTintColor:(id)arg1;	// IMP=0x0000000000139153
@property(nonatomic) int controlSize;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000138ea0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000138d40
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000138cc0
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000137e77
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;	// IMP=0x0000000000137e6f
- (_Bool)contentsEqualTo:(id)arg1 withStyle:(int)arg2;	// IMP=0x0000000000137dae
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *title;
- (_Bool)_isModernButton;	// IMP=0x0000000000137cc3
- (void)dealloc;	// IMP=0x0000000000137c41
- (id)initWithImage:(id)arg1 style:(int)arg2;	// IMP=0x0000000000137c15
- (id)initWithImage:(id)arg1;	// IMP=0x0000000000137be7
- (id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3;	// IMP=0x0000000000137bbe
- (id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3 applyBezel:(_Bool)arg4 forBarStyle:(long long)arg5 buttonItemStyle:(long long)arg6;	// IMP=0x0000000000137b88
- (id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(int)arg3;	// IMP=0x0000000000137b59
- (id)initWithTitle:(id)arg1 style:(int)arg2;	// IMP=0x0000000000137b2d
- (id)initWithTitle:(id)arg1;	// IMP=0x0000000000137aff
- (id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6;	// IMP=0x0000000000137adf
- (id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 possibleSystemItems:(id)arg6 tintColor:(id)arg7 applyBezel:(_Bool)arg8 forButtonItemStyle:(long long)arg9;	// IMP=0x0000000000137663
- (void)_setTitleFrozen:(_Bool)arg1;	// IMP=0x0000000000137618
- (void)_updateStyle;	// IMP=0x0000000000136f90
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x0000000000136ee9
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;	// IMP=0x0000000000136ed7
- (void)_accessibilityButtonShapesParametersDidChange;	// IMP=0x0000000000136e90
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(_Bool)arg3;	// IMP=0x0000000000136e04
- (id)_adjustedDefaultTitleFont;	// IMP=0x0000000000136d40
- (struct UIEdgeInsets)_pathImageEdgeInsets;	// IMP=0x0000000000136d2d
- (struct UIEdgeInsets)_pathTitleEdgeInsets;	// IMP=0x0000000000136d1a
- (struct UIEdgeInsets)_buttonTitleEdgeInsets;	// IMP=0x0000000000136ceb
- (long long)_barButtonItemStyle;	// IMP=0x0000000000136ca5
- (void)_updateTitleColorsForState:(unsigned long long)arg1;	// IMP=0x00000000001369ac
- (void)layoutSubviews;	// IMP=0x000000000013677a
- (struct CGRect)_selectedIndicatorBounds;	// IMP=0x00000000001366fa
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;	// IMP=0x00000000001366c6
- (void)_setWantsLetterpressContent;	// IMP=0x00000000001365f8
- (void)_updateTitleForLetterpress;	// IMP=0x00000000001363df
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000013635a
- (struct CGSize)_defaultTitleShadowOffsetForState:(unsigned long long)arg1;	// IMP=0x0000000000136344
- (id)_defaultTitleShadowColorForState:(unsigned long long)arg1;	// IMP=0x0000000000136312
- (id)_externalTitleColorForState:(unsigned long long)arg1 isTintColor:(_Bool *)arg2;	// IMP=0x000000000013629f
- (id)_defaultTitleColorForState:(unsigned long long)arg1 isTintColor:(_Bool *)arg2;	// IMP=0x0000000000136125
- (_Bool)_wantsAccessibilityButtonShapes;	// IMP=0x00000000001360f4
- (_Bool)_showsAccessibilityBackgroundWhenEnabled;	// IMP=0x0000000000136058
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x0000000000135f1a
- (_Bool)_isCarPlaySystemTypeButton;	// IMP=0x0000000000135ba1
- (long long)buttonType;	// IMP=0x0000000000135b58

// Remaining properties
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;

@end

