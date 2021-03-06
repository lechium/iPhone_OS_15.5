//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGReusableView-Protocol.h>

@class NSLayoutConstraint, NSString, PXDisplayAssetUIView, PXStoryModel, PXStoryRecipeManager, PXStoryTVInfoPanelButton, PXStoryTVInfoPanelViewConfiguration, PXStoryViewModel, PXUpdater, UIFocusGuide, UIImageView, UILabel, UIVisualEffectView;

@interface PXStoryTVInfoPanelView : UIView <PXChangeObserver, PXGReusableView>
{
    UIFocusGuide *_focusGuide;	// 8 = 0x8
    UIVisualEffectView *_visualEffectView;	// 16 = 0x10
    PXDisplayAssetUIView *_assetView;	// 24 = 0x18
    PXStoryTVInfoPanelButton *_infoButton;	// 32 = 0x20
    UIView *_assetContainerView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UIImageView *_musicSymbolView;	// 56 = 0x38
    UILabel *_musicLabel;	// 64 = 0x40
    UIImageView *_colorGradeSymbolView;	// 72 = 0x48
    UILabel *_colorGradeLabel;	// 80 = 0x50
    UILabel *_footerLabel;	// 88 = 0x58
    NSLayoutConstraint *_panelMarginConstraintLeading;	// 96 = 0x60
    NSLayoutConstraint *_panelMarginConstraintTrailing;	// 104 = 0x68
    NSLayoutConstraint *_panelMarginConstraintBottom;	// 112 = 0x70
    NSLayoutConstraint *_panelHeightConstraint;	// 120 = 0x78
    NSLayoutConstraint *_infoButtonLeadingConstraint;	// 128 = 0x80
    NSLayoutConstraint *_infoButtonBottomConstraint;	// 136 = 0x88
    NSLayoutConstraint *_infoButtonHeightConstraint;	// 144 = 0x90
    NSLayoutConstraint *_assetContainerConstraintTop;	// 152 = 0x98
    NSLayoutConstraint *_assetContainerConstraintBottom;	// 160 = 0xa0
    NSLayoutConstraint *_assetContainerConstraintLeading;	// 168 = 0xa8
    NSLayoutConstraint *_assetContainerConstraintAspectRatio;	// 176 = 0xb0
    NSLayoutConstraint *_titleLabelBaselineConstraint;	// 184 = 0xb8
    NSLayoutConstraint *_musicSymbolCenterConstraint;	// 192 = 0xc0
    NSLayoutConstraint *_colorGradeSymbolCenterConstraint;	// 200 = 0xc8
    NSLayoutConstraint *_musicLabelLeadingConstraint;	// 208 = 0xd0
    NSLayoutConstraint *_musicLabelTrailingConstraint;	// 216 = 0xd8
    NSLayoutConstraint *_titleToMetadataBaselineConstraint;	// 224 = 0xe0
    NSLayoutConstraint *_musicToColorGradeBaselineConstraint;	// 232 = 0xe8
    NSLayoutConstraint *_colorGradeLabelLeadingConstraint;	// 240 = 0xf0
    NSLayoutConstraint *_colorGradeLabelTrailingConstraint;	// 248 = 0xf8
    NSLayoutConstraint *_footerLabelBaselineConstraint;	// 256 = 0x100
    NSLayoutConstraint *_titleLabelLeadingConstraint;	// 264 = 0x108
    NSLayoutConstraint *_footerLabelLeadingConstraint;	// 272 = 0x110
    NSLayoutConstraint *_titleLabelTrailingConstraint;	// 280 = 0x118
    NSLayoutConstraint *_footerLabelTrailingConstraint;	// 288 = 0x120
    PXStoryTVInfoPanelViewConfiguration *_userData;	// 296 = 0x128
    PXUpdater *_updater;	// 304 = 0x130
    PXStoryViewModel *_viewModel;	// 312 = 0x138
    PXStoryModel *_mainModel;	// 320 = 0x140
    PXStoryRecipeManager *_recipeManager;	// 328 = 0x148
    struct CGRect _clippingRect;	// 336 = 0x150
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000690ff0
- (void).cxx_destruct;	// IMP=0x0000000000690aa4
@property(retain, nonatomic) PXStoryRecipeManager *recipeManager; // @synthesize recipeManager=_recipeManager;
@property(retain, nonatomic) PXStoryModel *mainModel; // @synthesize mainModel=_mainModel;
@property(retain, nonatomic) PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(copy, nonatomic) PXStoryTVInfoPanelViewConfiguration *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
- (struct CGPoint)convertHostedChildCenter:(struct CGPoint)arg1 fromGlobalLayer:(id)arg2;	// IMP=0x0000000000690975
- (void)addHostedLayer:(id)arg1;	// IMP=0x0000000000690903
- (void)addHostedView:(id)arg1;	// IMP=0x00000000006908f1
- (void)prepareForReuse;	// IMP=0x00000000006908c1
- (void)becomeReusable;	// IMP=0x00000000006908bb
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000690682
- (void)_updateAutolayoutConstraints;	// IMP=0x000000000068fea9
- (void)_invalidateAutolayoutConstraints;	// IMP=0x000000000068fe65
- (void)_updateCompositingFilters;	// IMP=0x000000000068fcef
- (void)_invalidateCompositingFilters;	// IMP=0x000000000068fcab
- (void)_updateContentAlpha;	// IMP=0x000000000068fba4
- (void)_invalidateContentAlpha;	// IMP=0x000000000068fb60
- (void)_updateFooterLabel;	// IMP=0x000000000068f9a4
- (void)_invalidateFooterLabel;	// IMP=0x000000000068f960
- (void)_updateColorGradeLabel;	// IMP=0x000000000068f721
- (void)_invalidateColorGradeLabel;	// IMP=0x000000000068f6dd
- (void)_updateMusicLabel;	// IMP=0x000000000068f47b
- (void)_invalidateMusicLabel;	// IMP=0x000000000068f437
- (void)_updateTitleLabel;	// IMP=0x000000000068f1ea
- (void)_invalidateTitleLabel;	// IMP=0x000000000068f1a6
- (void)_updateKeyAsset;	// IMP=0x000000000068eff1
- (void)_invalidateKeyAsset;	// IMP=0x000000000068efad
- (void)_updateRecipeManager;	// IMP=0x000000000068ef3e
- (void)_invalidateRecipeManager;	// IMP=0x000000000068eefa
- (void)_updateMainModel;	// IMP=0x000000000068ee64
- (void)_invalidateMainModel;	// IMP=0x000000000068ee20
- (void)_setNeedsUpdate;	// IMP=0x000000000068ee0e
- (void)_dismiss;	// IMP=0x000000000068edca
- (void)_reuseAssetView;	// IMP=0x000000000068ed60
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000068ed1f
- (void)layoutSubviews;	// IMP=0x000000000068ecb4
- (void)dealloc;	// IMP=0x000000000068ec76
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000068d311

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;
@property(readonly) Class superclass;

@end

