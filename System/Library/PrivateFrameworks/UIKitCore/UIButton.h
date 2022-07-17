//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/UIAccessibilityContentSizeCategoryImageAdjusting-Protocol.h>
#import <UIKitCore/UIAccessibilityContentSizeCategoryImageAdjustingInternal-Protocol.h>
#import <UIKitCore/UIButtonControl-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIMenuForcedAutomaticSelectionDelegate-Protocol.h>

@class NSAttributedString, NSMutableDictionary, NSString, UIButtonConfiguration, UIColor, UIFont, UIImage, UIImageSymbolConfiguration, UIImageView, UILabel, UIMenu, UITapGestureRecognizer, _UIButtonConfiguration, _UIButtonConfigurationState;
@protocol UIButtonVisualProvider, _UIButtonConfigurationShim;

@interface UIButton <UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, UIGestureRecognizerDelegate, UIMenuForcedAutomaticSelectionDelegate, UIButtonControl, NSCoding>
{
    unsigned long long _externalFlatEdge;	// 120 = 0x78
    struct {
        unsigned int isPopulated:1;
        unsigned int implementsButton:1;
        unsigned int implementsModernProvider:1;
        unsigned int implementsArchiving:1;
        unsigned int implementsEffectSupport:1;
        unsigned int implementsDeprecatedAPISupport:1;
        unsigned int implementsDeprecatedSPISupport:1;
        unsigned int preferredBehavioralStyle:4;
    } _buttonVisualProviderFlags;	// 128 = 0x80
    id <_UIButtonConfigurationShim> _configuration;	// 136 = 0x88
    NSMutableDictionary *_contentLookup;	// 144 = 0x90
    struct UIEdgeInsets _contentEdgeInsets;	// 152 = 0x98
    struct UIEdgeInsets _titleEdgeInsets;	// 184 = 0xb8
    struct UIEdgeInsets _imageEdgeInsets;	// 216 = 0xd8
    _Bool _initialized;	// 248 = 0xf8
    unsigned long long _lastDrawingControlState;	// 256 = 0x100
    UITapGestureRecognizer *_selectGestureRecognizer;	// 264 = 0x108
    id <UIButtonVisualProvider> _visualProvider;	// 272 = 0x110
    struct {
        unsigned int reversesTitleShadowWhenHighlighted:1;
        unsigned int adjustsImageWhenHighlighted:1;
        unsigned int adjustsImageWhenDisabled:1;
        unsigned int autosizeToFit:1;
        unsigned int disabledDimsImage:1;
        unsigned int showsTouchWhenHighlighted:1;
        unsigned int buttonType:8;
        unsigned int role:8;
        unsigned int shouldHandleScrollerMouseEvent:1;
        unsigned int titleFrozen:1;
        unsigned int resendTraitToImageViews:2;
        unsigned int animateNextHighlightChange:1;
        unsigned int blurEnabled:1;
        unsigned int visualEffectViewEnabled:1;
        unsigned int suppressAccessibilityUnderline:1;
        unsigned int requiresLayoutForPropertyChange:1;
        unsigned int needsTitleViewDefaultColorUpdate:1;
        unsigned int adjustsImageSizeForAccessibilityContentSizeCategory:1;
        unsigned int disableAutomaticTitleAnimations:1;
        unsigned int overridesRectAccessors:1;
        unsigned int overridesLegacyCursorDelegateSelectors:1;
        unsigned int hasActivePointerEffect:1;
        unsigned int automaticallyUpdatesConfiguration:1;
        unsigned int changesSelectionAsPrimaryAction:1;
    } _buttonFlags;	// 280 = 0x118
    UIFont *_lazyTitleViewFont;	// 288 = 0x120
    _Bool _lazyTitleViewFontIsDefaultForIdiom;	// 296 = 0x128
    CDUnknownBlockType _menuProvider;	// 304 = 0x130
    CDUnknownBlockType _configurationUpdateHandler;	// 312 = 0x138
    CDUnknownBlockType _pointerStyleProvider;	// 320 = 0x140
    UIMenu *_menu;	// 328 = 0x148
    long long __imageContentMode;	// 336 = 0x150
    UIColor *__plainButtonBackgroundColor;	// 344 = 0x158
    CDUnknownBlockType _cursorStyleProvider;	// 352 = 0x160
    struct UIEdgeInsets _internalTitlePaddingInsets;	// 360 = 0x168
}

+ (id)_defaultImageColorForState:(unsigned long long)arg1 button:(id)arg2;	// IMP=0x000000000056af04
+ (id)_defaultImageColorForType:(long long)arg1 andState:(unsigned long long)arg2;	// IMP=0x000000000056aece
+ (id)_defaultTitleColorForState:(unsigned long long)arg1 button:(id)arg2 isTintColor:(_Bool *)arg3;	// IMP=0x000000000056abfe
+ (id)_defaultBackgroundImageForType:(long long)arg1 andState:(unsigned long long)arg2;	// IMP=0x000000000056a952
+ (id)_defaultBackgroundImageColorForType:(long long)arg1 andState:(unsigned long long)arg2;	// IMP=0x000000000056a91c
+ (id)_defaultBackgroundImageNameForType:(long long)arg1 andState:(unsigned long long)arg2 compact:(_Bool)arg3;	// IMP=0x000000000056a8e7
+ (id)_defaultSymbolConfigurationForType:(long long)arg1 andState:(unsigned long long)arg2 compact:(_Bool)arg3;	// IMP=0x000000000056a6aa
+ (id)_defaultSymbolConfigurationForType:(long long)arg1 andState:(unsigned long long)arg2;	// IMP=0x000000000056a695
+ (id)_defaultImageForType:(long long)arg1 andState:(unsigned long long)arg2 withConfiguration:(id)arg3;	// IMP=0x000000000056a29c
+ (id)_defaultImageNameForType:(long long)arg1 andState:(unsigned long long)arg2;	// IMP=0x000000000056a285
+ (void)_setVisuallyHighlighted:(_Bool)arg1 forViews:(id)arg2 initialPress:(_Bool)arg3;	// IMP=0x00000000005652ce
+ (void)_setVisuallyHighlighted:(_Bool)arg1 forViews:(id)arg2 initialPress:(_Bool)arg3 baseAlpha:(double)arg4;	// IMP=0x000000000056502b
+ (void)_setVisuallyHighlighted:(_Bool)arg1 forViews:(id)arg2 initialPress:(_Bool)arg3 highlightBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000564e28
+ (void)_registerVisualProviderClass:(Class)arg1 forIdiom:(long long)arg2;	// IMP=0x0000000000563d03
+ (Class)_visualProviderClass;	// IMP=0x0000000000563cfb
+ (id)_defaultNormalTitleShadowColor;	// IMP=0x000000000056148c
+ (id)_defaultNormalTitleColor;	// IMP=0x0000000000561473
+ (id)systemButtonWithPrimaryAction:(id)arg1;	// IMP=0x0000000000561459
+ (id)buttonWithConfiguration:(id)arg1 primaryAction:(id)arg2;	// IMP=0x00000000005613b5
+ (id)buttonWithType:(long long)arg1 primaryAction:(id)arg2;	// IMP=0x0000000000561348
+ (id)buttonWithType:(long long)arg1;	// IMP=0x0000000000560eb3
+ (id)systemButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x0000000000560def
+ (id)_systemButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x0000000000560ddd
+ (_Bool)_buttonTypeIsiOSSystemProvided:(long long)arg1;	// IMP=0x0000000000560dc3
+ (_Bool)_buttonTypeIsSystemProvided:(long long)arg1;	// IMP=0x0000000000560d9a
+ (_Bool)_buttonTypeIsModernUI:(long long)arg1;	// IMP=0x0000000000560d3f
+ (_Bool)_allowsUnsupportedMacIdiomBehavior;	// IMP=0x000000000110b0fd
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(_Bool)arg1;	// IMP=0x000000000110b0e4
+ (double)_defaultNeighborSpacingForAxis:(long long)arg1;	// IMP=0x00000000011ab7ef
- (void).cxx_destruct;	// IMP=0x000000000056d863
@property(copy, nonatomic) CDUnknownBlockType cursorStyleProvider; // @synthesize cursorStyleProvider=_cursorStyleProvider;
@property(retain, nonatomic, getter=_plainButtonBackgroundColor, setter=_setPlainButtonBackgroundColor:) UIColor *_plainButtonBackgroundColor; // @synthesize _plainButtonBackgroundColor=__plainButtonBackgroundColor;
@property(nonatomic, setter=_setImageContentMode:) long long _imageContentMode; // @synthesize _imageContentMode=__imageContentMode;
@property(copy, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(copy, nonatomic) CDUnknownBlockType pointerStyleProvider; // @synthesize pointerStyleProvider=_pointerStyleProvider;
@property(copy, nonatomic) CDUnknownBlockType configurationUpdateHandler; // @synthesize configurationUpdateHandler=_configurationUpdateHandler;
@property(copy, nonatomic, setter=_setMenuProvider:) CDUnknownBlockType _menuProvider; // @synthesize _menuProvider;
@property(nonatomic, setter=_setInternalTitlePaddingInsets:) struct UIEdgeInsets _internalTitlePaddingInsets; // @synthesize _internalTitlePaddingInsets;
- (id)_titleOrImageViewForBaselineLayout;	// IMP=0x000000000056d66c
@property(retain, nonatomic, setter=_setCurrentConfiguration:) id <_UIButtonConfigurationShim> _currentConfiguration;
- (void)_shim_setConfiguration:(id)arg1;	// IMP=0x000000000056d51e
@property(copy, nonatomic, setter=_setConfiguration:) _UIButtonConfiguration *_configuration;
@property(copy, nonatomic) UIButtonConfiguration *configuration;
@property(nonatomic, setter=_setAutomaticallyUpdatesButtonConfiguration:) _Bool _automaticallyUpdatesButtonConfiguration;
@property(nonatomic) _Bool automaticallyUpdatesConfiguration;
- (void)_updateConfigurationUsingState:(id)arg1;	// IMP=0x000000000056d3fd
- (void)updateConfiguration;	// IMP=0x000000000056d3f7
- (void)_setNeedsUpdateConfiguration;	// IMP=0x000000000056d3e5
- (void)setNeedsUpdateConfiguration;	// IMP=0x000000000056d300
@property(copy, nonatomic, setter=_setConfigurationUpdateHandler:) CDUnknownBlockType _configurationUpdateHandler;
@property(readonly, copy, nonatomic) _UIButtonConfigurationState *_configurationState;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;	// IMP=0x000000000056cf2f
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x000000000056ce3a
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x000000000056cd73
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000056ccd9
- (struct CGPoint)menuAttachmentPointForConfiguration:(id)arg1;	// IMP=0x000000000056cc51
- (void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2;	// IMP=0x000000000056cba7
@property(nonatomic, setter=_setChangesSelectionAsPrimaryAction:) _Bool _changesSelectionAsPrimaryAction;
@property(nonatomic) _Bool changesSelectionAsPrimaryAction;
- (void)setShowsMenuAsPrimaryAction:(_Bool)arg1;	// IMP=0x000000000056caa9
- (void)forcedSelectionOfMenu:(id)arg1 willChangeTo:(id)arg2;	// IMP=0x000000000056ca04
- (void)_updateForAutomaticSelection;	// IMP=0x000000000056c8f3
- (_Bool)_isToggleButton;	// IMP=0x000000000056c8ba
- (_Bool)_isPopUpMenuButtonWithMenu:(id)arg1;	// IMP=0x000000000056c891
- (void)_updateContextMenuEnabled;	// IMP=0x000000000056c638
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000056c622
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;	// IMP=0x000000000056c4f2
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;	// IMP=0x000000000056c3bf
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x000000000056c226
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000056c0be
- (_Bool)_pointerInteractionCanBeAssisted;	// IMP=0x000000000056c002
- (id)_createPointerInteraction;	// IMP=0x000000000056bf48
- (_Bool)_selectorOverridden:(SEL)arg1;	// IMP=0x000000000056bf02
- (id)_shapeInContainer:(id)arg1 proposal:(CDUnknownBlockType)arg2;	// IMP=0x000000000056be6b
- (id)_shapeInContainer:(id)arg1;	// IMP=0x000000000056be57
- (id)_pointerEffect;	// IMP=0x000000000056bdcd
- (id)_pointerEffectWithPreview:(id)arg1;	// IMP=0x000000000056bd4a
- (id)_pointerEffectPreviewParameters;	// IMP=0x000000000056bcfa
- (_Bool)_isInCarPlay;	// IMP=0x000000000056bbdd
- (_Bool)_isCarPlaySystemTypeButton;	// IMP=0x000000000056bb8f
- (void)_applyCarPlaySystemButtonCustomizations;	// IMP=0x000000000056bb20
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000056b5e7
- (_Bool)_hasImageForProperty:(id)arg1;	// IMP=0x000000000056b497
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x000000000056b425
- (id)_letterpressStyleForState:(unsigned long long)arg1;	// IMP=0x000000000056b382
- (_Bool)_shouldAdjustToTraitCollection;	// IMP=0x000000000056b37a
- (id)_attributedTitleForState:(unsigned long long)arg1 adjustedToTraitCollection:(id)arg2;	// IMP=0x000000000056b204
- (id)_attributedTitleForState:(unsigned long long)arg1;	// IMP=0x000000000056b1a0
- (id)_shadowColorForState:(unsigned long long)arg1;	// IMP=0x000000000056b0fd
- (id)_imageColorForState:(unsigned long long)arg1;	// IMP=0x000000000056b000
- (id)_titleColorForState:(unsigned long long)arg1 suppressTintColorFollowing:(_Bool *)arg2;	// IMP=0x000000000056ad98
- (id)_titleColorForState:(unsigned long long)arg1;	// IMP=0x000000000056ad48
- (id)_titleForState:(unsigned long long)arg1;	// IMP=0x000000000056ab5b
- (id)_backgroundForState:(unsigned long long)arg1 usesBackgroundForNormalState:(_Bool *)arg2;	// IMP=0x000000000056aa2a
- (id)_preferredConfigurationForState:(unsigned long long)arg1 includeDefault:(_Bool)arg2;	// IMP=0x000000000056a7b2
- (id)_preferredConfigurationForState:(unsigned long long)arg1;	// IMP=0x000000000056a79b
- (id)_imageForState:(unsigned long long)arg1 applyingConfiguration:(_Bool)arg2 usesImageForNormalState:(_Bool *)arg3;	// IMP=0x000000000056a466
- (id)_defaultImageForState:(unsigned long long)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000056a434
- (void)_takeContentFromArchivableContent:(id)arg1;	// IMP=0x000000000056a0dd
- (id)_archivableContent:(id *)arg1;	// IMP=0x0000000000569b5b
- (id)_allButtonContent;	// IMP=0x0000000000569b36
- (id)_contentForState:(unsigned long long)arg1;	// IMP=0x0000000000569aa8
- (void)_setAttributedTitle:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x0000000000569a5f
- (void)_setShadowColor:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x0000000000569a16
- (void)_setImageColor:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x00000000005699cd
- (void)_setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x0000000000569984
- (void)_setTitle:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x000000000056993b
- (void)_setBackground:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x00000000005698f2
- (void)_setImage:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x00000000005698a9
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000005697ef
- (void)_setOn:(_Bool)arg1;	// IMP=0x00000000005697a3
- (_Bool)_isOn;	// IMP=0x000000000056975f
@property(nonatomic, getter=_isContentBackgroundHidden, setter=_setContentBackgroundHidden:) _Bool contentBackgroundHidden;
- (double)_drawingStrokeForState:(unsigned long long)arg1;	// IMP=0x00000000005695ad
- (void)_setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000569441
- (long long)_drawingStyleForState:(unsigned long long)arg1;	// IMP=0x0000000000569413
- (void)_setDrawingStyle:(long long)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000005693d6
- (long long)_drawingStyleForStroke:(double)arg1;	// IMP=0x00000000005693a2
- (double)_drawingStrokeForStyle:(long long)arg1;	// IMP=0x000000000056937b
- (struct CGRect)_highlightBounds;	// IMP=0x00000000005692af
- (id)image;	// IMP=0x00000000005692a7
- (void)setTitle:(id)arg1;	// IMP=0x00000000005692a1
- (id)title;	// IMP=0x0000000000569299
- (id)_titleView;	// IMP=0x0000000000569245
- (id)_imageView;	// IMP=0x00000000005691f1
- (id)_backgroundView;	// IMP=0x000000000056919f
- (void)_setTitleShadowOffset:(struct CGSize)arg1;	// IMP=0x00000000005690e4
- (struct CGSize)_titleShadowOffset;	// IMP=0x0000000000569021
- (void)_setLineBreakMode:(long long)arg1;	// IMP=0x0000000000568f7a
- (long long)_lineBreakMode;	// IMP=0x0000000000568ed3
- (void)_resetLazyTitleViewFont;	// IMP=0x0000000000568e9f
- (void)_setLazyTitleViewFont:(id)arg1 isDefaultForIdiom:(_Bool)arg2;	// IMP=0x0000000000568e70
- (id)_lazyTitleViewFontIsDefaultForIdiom:(_Bool *)arg1;	// IMP=0x0000000000568e4a
- (void)_setFont:(id)arg1;	// IMP=0x0000000000568e36
- (void)_setFont:(id)arg1 isDefaultForIdiom:(_Bool)arg2;	// IMP=0x0000000000568d76
- (void)_setDefaultFontForIdiom;	// IMP=0x0000000000568c8b
- (_Bool)_fontIsDefaultForIdiom;	// IMP=0x0000000000568b97
- (id)_defaultFontForIdiom:(long long)arg1;	// IMP=0x0000000000568b69
- (id)_font;	// IMP=0x0000000000568a73
- (void)_setLetterpressStyle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000568a6d
- (void)crossfadeToImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000568a67
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x0000000000568a17
- (void)setImage:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x00000000005689c7
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x0000000000568999
- (void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x000000000056896b
- (void)setTitle:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x000000000056891b
- (struct CGPoint)pressFeedbackPosition;	// IMP=0x0000000000568839
- (void)setShowPressFeedback:(_Bool)arg1;	// IMP=0x0000000000568827
- (void)setDisabledDimsImage:(_Bool)arg1;	// IMP=0x00000000005687ec
- (_Bool)autosizesToFit;	// IMP=0x00000000005687d7
- (void)setAutosizesToFit:(_Bool)arg1;	// IMP=0x000000000056879b
- (void)_setShouldHandleScrollerMouseEvent:(_Bool)arg1;	// IMP=0x0000000000568776
- (_Bool)_alwaysHandleScrollerMouseEvent;	// IMP=0x0000000000568752
- (void)_titleViewLabelMetricsChanged;	// IMP=0x0000000000568700
- (long long)_buttonType;	// IMP=0x00000000005686ea
- (void)_setButtonType:(long long)arg1;	// IMP=0x0000000000568690
@property(nonatomic, setter=_setWantsAccessibilityUnderline:) _Bool _wantsAccessibilityUnderline;
- (id)_effectiveContentView;	// IMP=0x0000000000568602
- (_Bool)_shouldHaveFloatingAppearance;	// IMP=0x00000000005685fa
@property(nonatomic) struct CGSize titleShadowOffset;
@property(nonatomic) long long lineBreakMode;
@property(retain, nonatomic) UIFont *font;
- (void)layoutSubviews;	// IMP=0x00000000005684fd
- (_Bool)_shouldSkipNormalLayoutForSakeOfTemplateLayout;	// IMP=0x00000000005684b2
- (_Bool)_requiresLayoutForPropertyChange;	// IMP=0x000000000056849c
- (void)_setBlurEnabled:(_Bool)arg1;	// IMP=0x00000000005683c9
- (_Bool)_blurEnabled;	// IMP=0x00000000005683b3
- (void)_setVisualEffectViewEnabled:(_Bool)arg1 backgroundColor:(id)arg2;	// IMP=0x00000000005682d3
- (_Bool)_visualEffectViewEnabled;	// IMP=0x00000000005682bd
- (id)_contentBackdropView;	// IMP=0x000000000056826d
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000056820f
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x0000000000568102
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000005680f0
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000568082
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000567fb1
- (double)_preferredMaxLayoutWidth;	// IMP=0x0000000000567eea
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;	// IMP=0x0000000000567d80
- (void)_prepareForFirstIntrinsicContentSizeCalculation;	// IMP=0x0000000000567c6c
- (_Bool)_needsDoubleUpdateConstraintsPass;	// IMP=0x0000000000567bc8
- (struct CGSize)_roundSize:(struct CGSize)arg1;	// IMP=0x0000000000567b99
- (double)_baselineOffsetFromBottom;	// IMP=0x0000000000567ae8
- (double)_firstBaselineOffsetFromTop;	// IMP=0x0000000000567a3a
- (double)_baselineOffsetFromNearestEdgeForLayoutAttribute:(long long)arg1;	// IMP=0x00000000005678e6
- (_Bool)_wantsBaselineUpdatingFollowingConstraintsPass;	// IMP=0x0000000000567823
- (void)_updateBaselineInformationDependentOnBounds;	// IMP=0x000000000056772d
- (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(struct CGSize)arg1;	// IMP=0x00000000005676bf
- (_Bool)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;	// IMP=0x00000000005675a5
- (_Bool)_hasBaseline;	// IMP=0x00000000005674e2
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000567454
- (id)viewForFirstBaselineLayout;	// IMP=0x00000000005673c6
- (void)updateConstraints;	// IMP=0x0000000000567358
- (void)_setContentHuggingPriorities:(struct CGSize)arg1;	// IMP=0x0000000000567286
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;	// IMP=0x0000000000567268
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;	// IMP=0x000000000056724a
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000000005671d0
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000567156
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000005670dc
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000567068
- (id)_currentImageWithResolvedConfiguration;	// IMP=0x0000000000566fb8
@property(readonly, nonatomic) UIImageSymbolConfiguration *currentPreferredSymbolConfiguration;
@property(readonly, nonatomic) NSAttributedString *currentAttributedTitle;
@property(readonly, nonatomic) UIImage *currentBackgroundImage;
@property(readonly, nonatomic) UIImage *currentImage;
@property(readonly, nonatomic) UIColor *currentTitleShadowColor;
@property(readonly, retain, nonatomic) UIColor *_currentImageColor;
@property(readonly, nonatomic) UIColor *currentTitleColor;
@property(readonly, nonatomic) NSString *currentTitle;
- (id)_attributedSubtitleForState:(unsigned long long)arg1;	// IMP=0x0000000000566db3
- (id)_subtitleForState:(unsigned long long)arg1;	// IMP=0x0000000000566d36
- (id)attributedTitleForState:(unsigned long long)arg1;	// IMP=0x0000000000566d22
- (id)preferredSymbolConfigurationForImageInState:(unsigned long long)arg1;	// IMP=0x0000000000566d10
- (id)backgroundImageForState:(unsigned long long)arg1;	// IMP=0x0000000000566cfc
- (id)imageForState:(unsigned long long)arg1;	// IMP=0x0000000000566ce5
- (id)titleShadowColorForState:(unsigned long long)arg1;	// IMP=0x0000000000566cd3
- (id)titleColorForState:(unsigned long long)arg1;	// IMP=0x0000000000566cbf
- (id)titleForState:(unsigned long long)arg1;	// IMP=0x0000000000566cad
- (void)_setAttributedSubtitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000566c33
- (void)_setSubtitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000566bb9
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000566ade
- (void)setPreferredSymbolConfiguration:(id)arg1 forImageInState:(unsigned long long)arg2;	// IMP=0x0000000000566a03
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000056698e
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000005668b3
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000566875
- (void)_setImageColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000566837
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000005667f9
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000056671e
- (void)setNeedsLayout;	// IMP=0x00000000005666aa
- (void)_invalidateForPropertyChange;	// IMP=0x0000000000566671
- (void)setSpringLoaded:(_Bool)arg1;	// IMP=0x00000000005661af
- (_Bool)isSpringLoaded;	// IMP=0x00000000005661a5
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x000000000056619f
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000005660b5
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000000056603e
- (struct CGRect)_clippedHighlightBounds;	// IMP=0x0000000000565faf
- (void)_setTitleFrozen:(_Bool)arg1;	// IMP=0x0000000000565f8a
- (_Bool)_isTitleFrozen;	// IMP=0x0000000000565f76
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;	// IMP=0x0000000000565f70
- (_Bool)_hasDrawingStyle;	// IMP=0x0000000000565db1
- (id)_borderColorForState:(unsigned long long)arg1;	// IMP=0x0000000000565c9d
@property(setter=_setExternalFlatEdge:) unsigned long long _externalFlatEdge;
- (id)_externalImageColorForState:(unsigned long long)arg1;	// IMP=0x0000000000565b8f
- (id)_externalBorderColorForState:(unsigned long long)arg1;	// IMP=0x0000000000565aac
- (id)_externalUnfocusedBorderColor;	// IMP=0x0000000000565a93
- (id)_externalTitleColorForState:(unsigned long long)arg1 isTintColor:(_Bool *)arg2;	// IMP=0x00000000005659ff
- (id)_externalFocusedTitleColor;	// IMP=0x00000000005659e6
- (long long)_externalDrawingStyleForState:(unsigned long long)arg1;	// IMP=0x00000000005659cd
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x0000000000565768
- (void)_willMoveToWindow:(id)arg1;	// IMP=0x00000000005656d4
- (id)_selectionIndicatorView;	// IMP=0x0000000000565684
- (struct CGRect)_selectedIndicatorBounds;	// IMP=0x000000000056534c
- (id)_selectedIndicatorViewWithImage:(id)arg1;	// IMP=0x00000000005652f6
- (double)_selectedIndicatorAlpha;	// IMP=0x00000000005652e8
- (_Bool)_hasHighlightColor;	// IMP=0x0000000000564d7d
- (double)_highlightCornerRadius;	// IMP=0x0000000000564d07
- (struct UIEdgeInsets)_pathImageEdgeInsets;	// IMP=0x0000000000564c55
- (struct UIEdgeInsets)_pathTitleEdgeInsets;	// IMP=0x0000000000564ba3
- (void)tintColorDidChange;	// IMP=0x0000000000564b36
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000564a05
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005648d4
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005647a0
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000564771
- (unsigned long long)_controlEventsForActionTriggered;	// IMP=0x0000000000564766
- (void)_selectGestureChanged:(id)arg1;	// IMP=0x0000000000564690
- (void)_uninstallSelectGestureRecognizer;	// IMP=0x000000000056464e
- (void)_installSelectGestureRecognizer;	// IMP=0x00000000005645af
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000000005644f4
- (id)_defaultFocusEffect;	// IMP=0x0000000000564469
- (_Bool)canBecomeFocused;	// IMP=0x00000000005643ec
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000056433d
- (_Bool)_isEffectivelyDisabledExternalButton;	// IMP=0x00000000005642c0
- (_Bool)_isiOSSystemProvidedButton;	// IMP=0x000000000056427b
- (_Bool)_isSystemProvidedButton;	// IMP=0x0000000000564236
- (_Bool)_hasVisibleDefaultSelectionIndicator;	// IMP=0x00000000005641ba
- (_Bool)_isModernButton;	// IMP=0x0000000000564156
@property(nonatomic, getter=_disableAutomaticTitleAnimations, setter=_setDisableAutomaticTitleAnimations:) _Bool _disableAutomaticTitleAnimations;
- (_Bool)_supportsMacIdiom;	// IMP=0x0000000000564038
- (void)_refreshVisualProviderForTraitCollection:(id)arg1 populatingAPIProperties:(_Bool)arg2;	// IMP=0x0000000000563ff1
- (void)_refreshVisualProviderForTraitCollection:(id)arg1;	// IMP=0x0000000000563fda
- (void)_refreshVisualProvider;	// IMP=0x0000000000563f8e
- (id)visualProviderClassForTraitCollection:(id)arg1;	// IMP=0x0000000000563daa
@property(readonly, retain, nonatomic) id <UIButtonVisualProvider> _visualProvider;
- (void)_setVisualProvider:(id)arg1;	// IMP=0x000000000056397f
@property(nonatomic) long long role;
- (void)setContentVerticalAlignment:(long long)arg1;	// IMP=0x0000000000563870
- (void)setContentHorizontalAlignment:(long long)arg1;	// IMP=0x00000000005637e4
@property(readonly, nonatomic) UILabel *_subtitleLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel;
@property(readonly, nonatomic) UIImageView *imageView;
@property(readonly, nonatomic) UILabel *titleLabel;
- (_Bool)_likelyToHaveTitle;	// IMP=0x0000000000563644
- (_Bool)_canHaveTitle;	// IMP=0x0000000000563623
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @dynamic imageEdgeInsets;
@property(nonatomic) _Bool showsTouchWhenHighlighted;
@property(nonatomic) _Bool adjustsImageWhenDisabled; // @dynamic adjustsImageWhenDisabled;
@property(nonatomic) _Bool adjustsImageWhenHighlighted; // @dynamic adjustsImageWhenHighlighted;
@property(nonatomic) _Bool reversesTitleShadowWhenHighlighted; // @dynamic reversesTitleShadowWhenHighlighted;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @dynamic titleEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @dynamic contentEdgeInsets;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x0000000000563076
@property(readonly, nonatomic, getter=isHovered) _Bool hovered;
- (void)_setHovered:(_Bool)arg1;	// IMP=0x0000000000563017
@property(readonly, nonatomic, getter=isHeld) _Bool held;
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000562f61
- (void)_setHighlightedWithoutUpdatingState:(_Bool)arg1;	// IMP=0x0000000000562f32
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000562f10
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000562e71
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000562dd2
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000562c3e
- (_Bool)_unconditionallyWantsSetBoundsFromISEngineLayout;	// IMP=0x0000000000562b95
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000562b1c
- (void)_setFrame:(struct CGRect)arg1 deferLayout:(_Bool)arg2;	// IMP=0x00000000005629e5
@property(readonly, nonatomic) long long buttonType;
- (void)dealloc;	// IMP=0x00000000005629a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000562261
- (void)_populateArchivedSubviews:(id)arg1;	// IMP=0x0000000000562187
- (id)_encodableSubviews;	// IMP=0x00000000005620d7
- (id)initWithFrame:(struct CGRect)arg1 primaryAction:(id)arg2;	// IMP=0x0000000000562097
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000561847
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000561599
- (void)_commonInitForPrimaryAction:(id)arg1;	// IMP=0x0000000000561494
- (struct UIEdgeInsets)_combinedContentPaddingInsets;	// IMP=0x0000000000560cdc
- (id)_layoutDebuggingTitle;	// IMP=0x0000000000560c67
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
@property(readonly, copy) NSString *description;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;	// IMP=0x000000000000a9af
- (unsigned long long)defaultAccessibilityTraits;	// IMP=0x000000000000a976
- (_Bool)isAccessibilityElementByDefault;	// IMP=0x000000000000a96e
@property(nonatomic) unsigned long long preferredBehavioralStyle;
@property(readonly, nonatomic) unsigned long long behavioralStyle;
- (_Bool)_accessibilityShouldActivateOnHUDLift;	// IMP=0x000000000056d9f7
@property(nonatomic) _Bool adjustsImageSizeForAccessibilityContentSizeCategory;
- (double)_scaleFactorForImage;	// IMP=0x000000000056da19
- (struct CGSize)_effectiveSizeForImage:(id)arg1;	// IMP=0x000000000056da09
- (double)_additionalBaselineSpacingForEdge:(int)arg1;	// IMP=0x000000000056da59
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000089b766
- (_Bool)scalesLargeContentImage;	// IMP=0x0000000000c80b2a
- (id)largeContentImage;	// IMP=0x0000000000c80a66
- (id)largeContentTitle;	// IMP=0x0000000000c80980
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(id)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6;	// IMP=0x00000000011ab85a
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(_Bool)arg4;	// IMP=0x00000000011ab805
- (_Bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)arg1;	// IMP=0x00000000011ab7fd
- (id)_viewForLoweringBaselineLayoutAttribute:(int)arg1;	// IMP=0x00000000011ab906

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isPointerInteractionEnabled) _Bool pointerInteractionEnabled; // @dynamic pointerInteractionEnabled;
@property(readonly) Class superclass;

@end
