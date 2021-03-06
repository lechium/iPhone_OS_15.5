//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/UIMenuForcedAutomaticSelectionDelegate-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, UIAction, UIBarButtonItemGroup, UIColor, UIImage, UILayoutGuide, UIMenu, UINavigationItem, UIToolbarButton, UIView, _UIBarButtonItemAppearanceStorage;
@protocol _UIBarButtonItemViewOwner;

@interface UIBarButtonItem <UIMenuForcedAutomaticSelectionDelegate, NSCoding>
{
    NSString *_title;	// 8 = 0x8
    NSSet *_possibleTitles;	// 16 = 0x10
    SEL _action;	// 24 = 0x18
    id _target;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    UIImage *_landscapeImagePhone;	// 48 = 0x30
    struct UIEdgeInsets _imageInsets;	// 56 = 0x38
    struct UIEdgeInsets _landscapeImagePhoneInsets;	// 88 = 0x58
    double _width;	// 120 = 0x78
    UIView *_view;	// 128 = 0x80
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;	// 136 = 0x88
    struct {
        unsigned int enabled:1;
        unsigned int style:3;
        unsigned int isSystemItem:1;
        unsigned int systemItem:7;
        unsigned int viewIsCustom:1;
        unsigned int isMinibarView:1;
        unsigned int disableAutosizing:1;
        unsigned int selected:1;
        unsigned int menuIsPrimary:2;
        unsigned int imageHasEffects:1;
        unsigned int actsAsFakeBackButton:1;
        unsigned int springLoaded:1;
        unsigned int showsChevron:1;
        unsigned int wantsThreeUp:1;
        unsigned int changesSelectionAsPrimaryAction:1;
    } _barButtonItemFlags;	// 144 = 0x90
    NSArray *_gestureRecognizers;	// 152 = 0x98
    NSArray *_interactions;	// 160 = 0xa0
    _Bool _flexible;	// 168 = 0xa8
    _Bool __viewWantsLetterpressImage;	// 169 = 0xa9
    _Bool __needsViewUpdateForLetterpressImage;	// 170 = 0xaa
    _Bool _groupRepresentative;	// 171 = 0xab
    _Bool __showsBackButtonIndicator;	// 172 = 0xac
    _Bool __hidden;	// 173 = 0xad
    _Bool _isKeyboardItem;	// 174 = 0xae
    _Bool __changesSelectionAsPrimaryAction;	// 175 = 0xaf
    double _minimumWidth;	// 176 = 0xb0
    double _maximumWidth;	// 184 = 0xb8
    NSSet *_possibleSystemItems;	// 192 = 0xc0
    NSDictionary *_stylesForSizingTitles;	// 200 = 0xc8
    CDUnknownBlockType _secondaryActionsProvider;	// 208 = 0xd0
    UIAction *_primaryAction;	// 216 = 0xd8
    UIMenu *_menu;	// 224 = 0xe0
    UIBarButtonItemGroup *_buttonGroup;	// 232 = 0xe8
    UINavigationItem *__owningNavigationItem;	// 240 = 0xf0
    UIBarButtonItemGroup *__owningButtonGroup;	// 248 = 0xf8
    id <_UIBarButtonItemViewOwner> __viewOwner;	// 256 = 0x100
    CDUnknownBlockType __autoValidationHandler;	// 264 = 0x108
    UILayoutGuide *__popoverLayoutGuide;	// 272 = 0x110
    NSArray *__backButtonAlternateTitles;	// 280 = 0x118
    double __toolbarCharge;	// 288 = 0x120
    UIBarButtonItem *__itemVariation;	// 296 = 0x128
    struct UIEdgeInsets _additionalSelectionInsets;	// 304 = 0x130
}

+ (Class)classForToolbarButton;	// IMP=0x000000000014b771
+ (Class)classForNavigationButton;	// IMP=0x000000000014b760
+ (void)_getSystemItemStyle:(long long *)arg1 title:(id *)arg2 image:(id *)arg3 selectedImage:(id *)arg4 action:(SEL *)arg5 forBarStyle:(long long)arg6 landscape:(_Bool)arg7 alwaysBordered:(_Bool)arg8 usingSystemItem:(long long)arg9 usingItemStyle:(long long)arg10;	// IMP=0x000000000014b275
+ (id)_appearanceBlindViewClasses;	// IMP=0x0000000000146ea0
+ (id)flexibleSpaceItem;	// IMP=0x000000000014418b
+ (id)fixedSpaceItemOfWidth:(double)arg1;	// IMP=0x000000000014412e
- (void).cxx_destruct;	// IMP=0x000000000014c5e0
@property(nonatomic, setter=_setChangesSelectionAsPrimaryAction:) _Bool _changesSelectionAsPrimaryAction; // @synthesize _changesSelectionAsPrimaryAction=__changesSelectionAsPrimaryAction;
@property(retain, nonatomic, setter=_setItemVariation:) UIBarButtonItem *_itemVariation; // @synthesize _itemVariation=__itemVariation;
@property(nonatomic) _Bool isKeyboardItem; // @synthesize isKeyboardItem=_isKeyboardItem;
@property(nonatomic, setter=_setHidden:) _Bool _hidden; // @synthesize _hidden=__hidden;
@property(nonatomic, setter=_setShowsBackButtonIndicator:) _Bool _showsBackButtonIndicator; // @synthesize _showsBackButtonIndicator=__showsBackButtonIndicator;
@property(nonatomic, setter=_setToolbarCharge:) double _toolbarCharge; // @synthesize _toolbarCharge=__toolbarCharge;
@property(copy, nonatomic, setter=_setBackButtonAlternateTitles:) NSArray *_backButtonAlternateTitles; // @synthesize _backButtonAlternateTitles=__backButtonAlternateTitles;
@property(retain, nonatomic, setter=_setPopoverLayoutGuide:) UILayoutGuide *_popoverLayoutGuide; // @synthesize _popoverLayoutGuide=__popoverLayoutGuide;
@property(copy, nonatomic, setter=_setAutoValidationHandler:) CDUnknownBlockType _autoValidationHandler; // @synthesize _autoValidationHandler=__autoValidationHandler;
@property(readonly, nonatomic) _Bool groupRepresentative; // @synthesize groupRepresentative=_groupRepresentative;
@property(nonatomic, setter=_setViewOwner:) __weak id <_UIBarButtonItemViewOwner> _viewOwner; // @synthesize _viewOwner=__viewOwner;
@property(nonatomic, setter=_setOwningButtonGroup:) __weak UIBarButtonItemGroup *_owningButtonGroup; // @synthesize _owningButtonGroup=__owningButtonGroup;
@property(nonatomic, setter=_setOwningNavigationItem:) __weak UINavigationItem *_owningNavigationItem; // @synthesize _owningNavigationItem=__owningNavigationItem;
@property(readonly, nonatomic) _Bool _needsViewUpdateForLetterpressImage; // @synthesize _needsViewUpdateForLetterpressImage=__needsViewUpdateForLetterpressImage;
@property(readonly, nonatomic) __weak UIBarButtonItemGroup *buttonGroup; // @synthesize buttonGroup=_buttonGroup;
@property(readonly, nonatomic) _Bool _viewWantsLetterpressImage; // @synthesize _viewWantsLetterpressImage=__viewWantsLetterpressImage;
@property(copy, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(copy, nonatomic) UIAction *primaryAction; // @synthesize primaryAction=_primaryAction;
@property(copy, nonatomic, setter=_setSecondaryActionsProvider:) CDUnknownBlockType _secondaryActionsProvider; // @synthesize _secondaryActionsProvider;
@property(copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles; // @synthesize _stylesForSizingTitles;
@property(nonatomic, setter=_setFlexible:) _Bool _flexible; // @synthesize _flexible;
@property(nonatomic, setter=_setMaximumWidth:) double _maximumWidth; // @synthesize _maximumWidth;
@property(nonatomic, setter=_setMinimumWidth:) double _minimumWidth; // @synthesize _minimumWidth;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014bcda
@property(readonly) unsigned long long hash;
- (void)_updateView;	// IMP=0x000000000014b782
- (void)_getToolbarSystemItemEdgeInsetsWithImageInsets:(struct UIEdgeInsets *)arg1 forBarStyle:(long long)arg2 landscape:(_Bool)arg3 alwaysBordered:(_Bool)arg4;	// IMP=0x000000000014b710
- (double)_rightImagePaddingForEdgeMarginInNavBar;	// IMP=0x000000000014b5cc
- (double)_leftImagePaddingForEdgeMarginInNavBar;	// IMP=0x000000000014b423
- (_Bool)_isImageBarButtonItem;	// IMP=0x000000000014b3b6
- (void)_getNavBarEdgeSizeAdjust:(struct CGSize *)arg1 imageInsets:(struct UIEdgeInsets *)arg2 landscape:(_Bool)arg3;	// IMP=0x000000000014b354
- (void)_getSystemItemStyle:(long long *)arg1 title:(id *)arg2 image:(id *)arg3 selectedImage:(id *)arg4 action:(SEL *)arg5 forBarStyle:(long long)arg6 landscape:(_Bool)arg7 alwaysBordered:(_Bool)arg8;	// IMP=0x000000000014b2c0
@property(readonly, copy, nonatomic) NSString *_resolvedLargeContentSizeTitle;
@property(copy, nonatomic, setter=_setLargeContentSizeTitle:) NSString *_largeContentSizeTitle;
@property(readonly, nonatomic) UIView *_referenceView; // @dynamic _referenceView;
@property(readonly, nonatomic) UIView *_configuredFloatableView; // @dynamic _configuredFloatableView;
@property(readonly, nonatomic, getter=_isFloating) _Bool _floating; // @dynamic _floating;
@property(readonly, nonatomic, getter=_isFloatable) _Bool _floatable; // @dynamic _floatable;
@property(nonatomic, getter=_showsChevron, setter=_setShowsChevron:) _Bool _showsChevron;
@property(nonatomic, getter=_actsAsFakeBackButton, setter=_setActsAsFakeBackButton:) _Bool _actsAsFakeBackButton;
- (_Bool)_resizesBackgroundImage;	// IMP=0x000000000014b0b7
- (id)_backgroundImageForState:(unsigned long long)arg1 compact:(_Bool)arg2 type:(long long)arg3;	// IMP=0x000000000014b05c
- (id)_imageForState:(unsigned long long)arg1 compact:(_Bool)arg2 type:(long long)arg3;	// IMP=0x000000000014afa9
- (_Bool)hasImage;	// IMP=0x000000000014af48
- (_Bool)hasTitle;	// IMP=0x000000000014af15
- (id)resolvedTitle;	// IMP=0x000000000014aeb2
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000014adf2
@property(readonly, nonatomic) _Bool isSpaceItem;
@property(readonly, nonatomic) _Bool isCustomViewItem;
@property(nonatomic) _Bool isMinibarView;
@property(retain, nonatomic) UIView *view;
- (id)nextResponder;	// IMP=0x000000000014ad00
- (id)window;	// IMP=0x000000000014ace3
- (void)setSpringLoaded:(_Bool)arg1;	// IMP=0x000000000014acc6
- (_Bool)isSpringLoaded;	// IMP=0x000000000014ac92
@property(nonatomic) _Bool secondaryActionsArePrimary;
@property(copy, nonatomic) UIMenu *secondaryActions;
@property(nonatomic) _Bool changesSelectionAsPrimaryAction;
- (void)_updateForAutomaticSelection;	// IMP=0x000000000014a985
- (void)forcedSelectionOfMenu:(id)arg1 willChangeTo:(id)arg2;	// IMP=0x000000000014a8e5
- (_Bool)_isPopUpMenuButtonWithMenu:(id)arg1;	// IMP=0x000000000014a8bc
@property(readonly, nonatomic) _Bool _menuIsPrimary;
@property(copy, nonatomic, setter=_setInteractions:) NSArray *_interactions; // @synthesize _interactions;
@property(copy, nonatomic, setter=_setGestureRecognizers:) NSArray *_gestureRecognizers; // @synthesize _gestureRecognizers;
- (id)createViewForToolbar:(id)arg1;	// IMP=0x00000000001497e3
- (id)createViewForNavigationItem:(id)arg1;	// IMP=0x0000000000148dba
- (void)_setEnclosingBar:(id)arg1 onItem:(id)arg2;	// IMP=0x0000000000148d50
- (id)_foregroundColorForLetterpressWithView:(id)arg1;	// IMP=0x0000000000148c9f
@property(nonatomic, setter=_setImageHasEffects:) _Bool _imageHasEffects;
@property(readonly, nonatomic) UIToolbarButton *_toolbarButton;
@property(nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets; // @synthesize _additionalSelectionInsets;
- (void)_setMiniImageInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000148b57
- (struct UIEdgeInsets)_miniImageInsets;	// IMP=0x0000000000148b38
- (void)_setMiniImage:(id)arg1;	// IMP=0x0000000000148b26
- (id)_miniImage;	// IMP=0x0000000000148b14
@property(nonatomic, getter=_wantsThreeUp, setter=_setWantsThreeUp:) _Bool _wantsThreeUp;
- (void)_setToolbarChange:(double)arg1;	// IMP=0x0000000000148adb
- (void)_applyPositionAdjustmentToSegmentedControl:(id)arg1;	// IMP=0x00000000001489f6
- (struct UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x000000000014891e
- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000014872a
- (double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x000000000014870d
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x00000000001485fc
- (struct UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000148524
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000148317
- (double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x00000000001482fa
- (void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000014819d
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;	// IMP=0x0000000000147fc0
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000147cf7
- (id)titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x00000000001479fd
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000147748
@property(retain, nonatomic) UIColor *tintColor;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;	// IMP=0x0000000000147642
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000147627
- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000147440
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x0000000000146f9e
- (id)_appearanceStorage;	// IMP=0x0000000000146f89
@property(nonatomic, getter=selected, setter=setSelected:) _Bool _selected;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems; // @synthesize possibleSystemItems=_possibleSystemItems;
- (void)_setSystemItem:(long long)arg1;	// IMP=0x000000000014646b
@property(readonly, nonatomic) long long systemItem;
@property(readonly, nonatomic) _Bool isSystemItem;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) UIView *customView;
@property(copy, nonatomic) NSSet *possibleTitles;
- (id)itemVariation;	// IMP=0x0000000000145cfe
@property(copy, nonatomic, setter=_setPossibleItemVariations:) NSSet *_possibleItemVariations;
@property(readonly, nonatomic) struct CGRect _rectForPresenting;
@property(readonly, nonatomic) UIView *_viewForPresenting;
- (id)_itemForPresenting;	// IMP=0x000000000014534a
- (void)_executeValidationHandler;	// IMP=0x000000000014532a
- (void)_triggerActionForEvent:(id)arg1;	// IMP=0x0000000000145261
- (void)_setButtonGroup:(id)arg1 isRepresentative:(_Bool)arg2;	// IMP=0x000000000014521d
@property(nonatomic, getter=_width, setter=_setWidth:) double _width;
@property(nonatomic) double width;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001450c2
- (struct UIEdgeInsets)largeContentSizeImageInsets;	// IMP=0x000000000014506f
- (void)setLargeContentSizeImage:(id)arg1;	// IMP=0x0000000000145033
- (id)largeContentSizeImage;	// IMP=0x0000000000144fe4
- (struct UIEdgeInsets)imageInsets;	// IMP=0x0000000000144fc4
- (void)setImageInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000144f5a
- (struct UIEdgeInsets)landscapeImagePhoneInsets;	// IMP=0x0000000000144f3a
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000144ed0
- (id)landscapeImagePhone;	// IMP=0x0000000000144ea1
- (void)setLandscapeImagePhone:(id)arg1;	// IMP=0x0000000000144e33
- (id)image;	// IMP=0x0000000000144e04
- (void)setImage:(id)arg1;	// IMP=0x0000000000144d96
- (id)title;	// IMP=0x0000000000144d67
- (void)setTitle:(id)arg1;	// IMP=0x0000000000144cdb
@property(nonatomic) long long style;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;	// IMP=0x0000000000144b50
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001446cb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014420e
- (id)initWithCustomView:(id)arg1;	// IMP=0x00000000001441bc
- (id)initWithImage:(id)arg1 menu:(id)arg2;	// IMP=0x00000000001440a6
- (id)initWithTitle:(id)arg1 menu:(id)arg2;	// IMP=0x000000000014401e
- (id)initWithPrimaryAction:(id)arg1;	// IMP=0x0000000000143fcc
- (id)initWithBarButtonSystemItem:(long long)arg1 menu:(id)arg2;	// IMP=0x0000000000143f34
- (id)initWithBarButtonSystemItem:(long long)arg1 primaryAction:(id)arg2;	// IMP=0x0000000000143e9c
- (id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x0000000000143dee
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;	// IMP=0x0000000000143c91
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;	// IMP=0x0000000000143baf
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;	// IMP=0x0000000000143af6
- (id)init;	// IMP=0x0000000000143aa5
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;	// IMP=0x0000000000892c2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

