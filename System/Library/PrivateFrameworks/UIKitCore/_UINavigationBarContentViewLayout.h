//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, UIBarButtonItemGroup, UILabel, UILayoutGuide, UITraitCollection, UIView, _UIBarButtonItemData, _UIButtonBar, _UIButtonBarButton, _UINavigationBarContentView, _UITAMICAdaptorView;
@protocol _UINavigationBarAugmentedTitleView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarContentViewLayout : NSObject
{
    NSLayoutConstraint *_leadingMarginConstraint;	// 8 = 0x8
    NSLayoutConstraint *_trailingMarginConstraint;	// 16 = 0x10
    NSLayoutConstraint *_backButtonToLeadingBarSpacer;	// 24 = 0x18
    NSLayoutConstraint *_leadingBarToTitleSpacer;	// 32 = 0x20
    NSLayoutConstraint *_titleToTrailingBarSpacer;	// 40 = 0x28
    NSArray *_layoutGuideConstraints;	// 48 = 0x30
    NSArray *_alignmentConstraints;	// 56 = 0x38
    NSArray *_heightConstraints;	// 64 = 0x40
    NSArray *_backButtonConstraints;	// 72 = 0x48
    NSLayoutConstraint *_backButtonMinimumWidthConstraint;	// 80 = 0x50
    NSLayoutConstraint *_backButtonMaximumWidthConstraint;	// 88 = 0x58
    NSArray *_leadingBarConstraints;	// 96 = 0x60
    NSArray *_titleViewConstraints;	// 104 = 0x68
    NSArray *_augmentedTitleViewContraints;	// 112 = 0x70
    NSArray *_trailingBarConstraints;	// 120 = 0x78
    UIBarButtonItemGroup *_leadingBarGroup;	// 128 = 0x80
    UIBarButtonItemGroup *_trailingBarGroup;	// 136 = 0x88
    UIView *_leadingBarSnapshot;	// 144 = 0x90
    UIView *_trailingBarSnapshot;	// 152 = 0x98
    UIView *_titleViewSnapshot;	// 160 = 0xa0
    UIView *_backButtonSnapshot;	// 168 = 0xa8
    _Bool _hasFakedBackButton;	// 176 = 0xb0
    _Bool _active;	// 177 = 0xb1
    _Bool _keepsSnapshotsInHierarchy;	// 178 = 0xb2
    _UINavigationBarContentView *_contentView;	// 184 = 0xb8
    UILayoutGuide *_backButtonGuide;	// 192 = 0xc0
    UILayoutGuide *_leadingBarGuide;	// 200 = 0xc8
    UILayoutGuide *_titleViewGuide;	// 208 = 0xd0
    UILayoutGuide *_trailingBarGuide;	// 216 = 0xd8
    long long _alignment;	// 224 = 0xe0
    long long _currentContentSize;	// 232 = 0xe8
    double _overrideSize;	// 240 = 0xf0
    double _resolvedSize;	// 248 = 0xf8
    long long _resolvedAlignment;	// 256 = 0x100
    _UIButtonBarButton *_backButton;	// 264 = 0x108
    double _minimumBackButtonWidth;	// 272 = 0x110
    double _maximumBackButtonWidth;	// 280 = 0x118
    UILabel *_inlineTitleView;	// 288 = 0x120
    double _inlineTitleViewAlpha;	// 296 = 0x128
    UIView *_titleView;	// 304 = 0x130
    _UITAMICAdaptorView *_titleViewWrapperView;	// 312 = 0x138
    UIView<_UINavigationBarAugmentedTitleView> *_augmentedTitleView;	// 320 = 0x140
    double _largeTitleHeight;	// 328 = 0x148
    UITraitCollection *_augmentedTitleNavigationBarTraits;	// 336 = 0x150
    _UIButtonBar *_leadingBar;	// 344 = 0x158
    _UIButtonBar *_trailingBar;	// 352 = 0x160
    _UIBarButtonItemData *_plainItemAppearance;	// 360 = 0x168
    _UIBarButtonItemData *_doneItemAppearance;	// 368 = 0x170
    _UIBarButtonItemData *_backButtonAppearance;	// 376 = 0x178
    struct UIOffset _titlePositionAdjustment;	// 384 = 0x180
    CDStruct_ef18196a _largeTitleHeightRange;	// 400 = 0x190
    struct NSDirectionalEdgeInsets _layoutMargins;	// 416 = 0x1a0
}

- (void).cxx_destruct;	// IMP=0x000000000019f20b
@property(nonatomic) _Bool keepsSnapshotsInHierarchy; // @synthesize keepsSnapshotsInHierarchy=_keepsSnapshotsInHierarchy;
@property(readonly, nonatomic) UIView *backButtonSnapshot; // @synthesize backButtonSnapshot=_backButtonSnapshot;
@property(readonly, nonatomic) UIView *titleViewSnapshot; // @synthesize titleViewSnapshot=_titleViewSnapshot;
@property(readonly, nonatomic) UIView *trailingBarSnapshot; // @synthesize trailingBarSnapshot=_trailingBarSnapshot;
@property(readonly, nonatomic) UIView *leadingBarSnapshot; // @synthesize leadingBarSnapshot=_leadingBarSnapshot;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) _UIBarButtonItemData *backButtonAppearance; // @synthesize backButtonAppearance=_backButtonAppearance;
@property(copy, nonatomic) _UIBarButtonItemData *doneItemAppearance; // @synthesize doneItemAppearance=_doneItemAppearance;
@property(copy, nonatomic) _UIBarButtonItemData *plainItemAppearance; // @synthesize plainItemAppearance=_plainItemAppearance;
@property(retain, nonatomic) _UIButtonBar *trailingBar; // @synthesize trailingBar=_trailingBar;
@property(retain, nonatomic) _UIButtonBar *leadingBar; // @synthesize leadingBar=_leadingBar;
@property(retain, nonatomic) UITraitCollection *augmentedTitleNavigationBarTraits; // @synthesize augmentedTitleNavigationBarTraits=_augmentedTitleNavigationBarTraits;
@property(nonatomic) CDStruct_c3b9c2ee largeTitleHeightRange; // @synthesize largeTitleHeightRange=_largeTitleHeightRange;
@property(nonatomic) double largeTitleHeight; // @synthesize largeTitleHeight=_largeTitleHeight;
@property(retain, nonatomic) UIView<_UINavigationBarAugmentedTitleView> *augmentedTitleView; // @synthesize augmentedTitleView=_augmentedTitleView;
@property(nonatomic) struct UIOffset titlePositionAdjustment; // @synthesize titlePositionAdjustment=_titlePositionAdjustment;
@property(readonly, nonatomic) _UITAMICAdaptorView *titleViewWrapperView; // @synthesize titleViewWrapperView=_titleViewWrapperView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) double inlineTitleViewAlpha; // @synthesize inlineTitleViewAlpha=_inlineTitleViewAlpha;
@property(retain, nonatomic) UILabel *inlineTitleView; // @synthesize inlineTitleView=_inlineTitleView;
@property(nonatomic) _Bool hasFakedBackButton; // @synthesize hasFakedBackButton=_hasFakedBackButton;
@property(nonatomic) double maximumBackButtonWidth; // @synthesize maximumBackButtonWidth=_maximumBackButtonWidth;
@property(nonatomic) double minimumBackButtonWidth; // @synthesize minimumBackButtonWidth=_minimumBackButtonWidth;
@property(retain, nonatomic) _UIButtonBarButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) long long resolvedAlignment; // @synthesize resolvedAlignment=_resolvedAlignment;
@property(readonly, nonatomic) double resolvedSize; // @synthesize resolvedSize=_resolvedSize;
@property(nonatomic) double overrideSize; // @synthesize overrideSize=_overrideSize;
@property(nonatomic) struct NSDirectionalEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) long long currentContentSize; // @synthesize currentContentSize=_currentContentSize;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(readonly, nonatomic) UILayoutGuide *trailingBarGuide; // @synthesize trailingBarGuide=_trailingBarGuide;
@property(readonly, nonatomic) UILayoutGuide *titleViewGuide; // @synthesize titleViewGuide=_titleViewGuide;
@property(readonly, nonatomic) UILayoutGuide *leadingBarGuide; // @synthesize leadingBarGuide=_leadingBarGuide;
@property(readonly, nonatomic) UILayoutGuide *backButtonGuide; // @synthesize backButtonGuide=_backButtonGuide;
@property(readonly, nonatomic) _UINavigationBarContentView *contentView; // @synthesize contentView=_contentView;
- (void)removeContent;	// IMP=0x000000000019ee9b
- (void)replaceBackButtonWithSnapshot;	// IMP=0x000000000019ed99
- (void)replaceTitleViewWithSnapshot;	// IMP=0x000000000019ec72
- (void)replaceTrailingBarWithSnapshot;	// IMP=0x000000000019eac4
- (void)replaceLeadingBarWithSnapshot;	// IMP=0x000000000019e91a
- (id)traitOverridesForChild:(id)arg1;	// IMP=0x000000000019e88c
- (void)updateSpacingConstraints;	// IMP=0x000000000019e5a0
@property(retain, nonatomic) NSArray *trailingBarItems;
@property(retain, nonatomic) NSArray *leadingBarItems;
- (void)updateAlphas;	// IMP=0x000000000019dc86
- (void)updateTitleHeight;	// IMP=0x000000000019dc74
- (void)updateAugmentedTitleViewBackButtonConstraints;	// IMP=0x000000000019dc56
- (void)updateAugmentedTitleViewLayout;	// IMP=0x000000000019dc38
- (void)_updateAugmentedTitleViewLayout;	// IMP=0x000000000019dbc9
- (void)updateAugmentedTitleViewHeight;	// IMP=0x000000000019dbab
@property(readonly, nonatomic) double baselineOffsetFromTop;
@property(readonly, nonatomic) UIView *effectiveTitleView;
- (void)_activateConstraintsAndUpdateViewOrderIfNecessary:(id)arg1;	// IMP=0x000000000019d350
- (void)_deactivateConstraintsIfNecessary:(id)arg1;	// IMP=0x000000000019d327
- (void)_updateSubviewOrder;	// IMP=0x000000000019d20e
- (void)setBackButtonHidden:(_Bool)arg1 titleLabelHidden:(_Bool)arg2 titleViewHidden:(_Bool)arg3 barsHidden:(_Bool)arg4;	// IMP=0x000000000019cfff
- (void)setContentHidden:(_Bool)arg1;	// IMP=0x000000000019cfe5
- (void)cleanupAfterLayoutTransitionCompleted;	// IMP=0x000000000019cf9d
- (void)removeAllSnapshots;	// IMP=0x000000000019ced4
- (void)_deactivateAllConstraints;	// IMP=0x000000000019cdd8
- (void)_activateAllConstraints;	// IMP=0x000000000019cc26
- (void)_updateTrailingBarConstraints;	// IMP=0x000000000019c966
- (void)_updateLeadingBarConstraints;	// IMP=0x000000000019c6a6
- (void)_updateAugmentedTitleViewConstraints;	// IMP=0x000000000019c44d
- (void)unfreeze;	// IMP=0x000000000019c439
- (void)freeze;	// IMP=0x000000000019c422
- (void)_disableLayoutFlushing:(_Bool)arg1;	// IMP=0x000000000019c2a0
- (void)_updateTitleViewConstraints;	// IMP=0x000000000019bc16
- (double)_inlineTitleBaselineOffset;	// IMP=0x000000000019bb95
- (void)_prepareTitleViewAndWrapIfNecessary;	// IMP=0x000000000019baa4
- (void)_updateBackButtonWidthConstraintsAndActivateIfNecessary;	// IMP=0x000000000019b991
- (void)_updateBackButtonConstraints;	// IMP=0x000000000019b738
- (void)_updateMarginConstraints;	// IMP=0x000000000019b6b2
- (void)_updateHeightConstraints;	// IMP=0x000000000019b231
@property(readonly, nonatomic) double baseHeight;
- (double)_contentHeight;	// IMP=0x000000000019b0f4
@property(readonly, nonatomic) double currentHeight;
- (void)_updateAlignmentConstraints;	// IMP=0x000000000019a88a
- (id)initWithContentView:(id)arg1;	// IMP=0x0000000000199f38
- (id)description;	// IMP=0x0000000000199788

@end
