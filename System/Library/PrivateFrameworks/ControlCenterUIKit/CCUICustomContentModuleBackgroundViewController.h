//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUIKit/CCUIContentModuleBackgroundViewController-Protocol.h>

@class CCUICAPackageView, NSArray, NSMutableDictionary, NSString, UIImageView, UILabel, UIView;

@interface CCUICustomContentModuleBackgroundViewController : UIViewController <CCUIContentModuleBackgroundViewController>
{
    UILabel *_headerTitleLabel;	// 8 = 0x8
    UIImageView *_headerImageView;	// 16 = 0x10
    CCUICAPackageView *_packageView;	// 24 = 0x18
    NSMutableDictionary *_categoriesToVisualStylingProviders;	// 32 = 0x20
    NSArray *_footerButtons;	// 40 = 0x28
    UIView *_customHeaderView;	// 48 = 0x30
    UIView *_customFooterView;	// 56 = 0x38
    _Bool _positionHeaderToRightInLandscapeRight;	// 64 = 0x40
    double _expandedContentModuleHeight;	// 72 = 0x48
    double _expandedContentModuleWidth;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000026640
@property(nonatomic) _Bool positionHeaderToRightInLandscapeRight; // @synthesize positionHeaderToRightInLandscapeRight=_positionHeaderToRightInLandscapeRight;
@property(nonatomic) double expandedContentModuleWidth; // @synthesize expandedContentModuleWidth=_expandedContentModuleWidth;
@property(nonatomic) double expandedContentModuleHeight; // @synthesize expandedContentModuleHeight=_expandedContentModuleHeight;
- (void)_visualStylingProvider:(id)arg1 didChangeForCategory:(long long)arg2 outgoingVisualStylingProvider:(id)arg3;	// IMP=0x0000000000026351
- (struct CGPoint)_footerCenterForBounds:(struct CGRect)arg1;	// IMP=0x0000000000025fc7
- (void)_updateCustomFooterViewLayoutIfNecessary;	// IMP=0x0000000000025ef2
- (void)_updateFooterButtonsLayoutIfNecessary;	// IMP=0x000000000002505a
- (_Bool)_shouldLimitContentSizeCategory;	// IMP=0x0000000000024fc2
- (id)_titleFont;	// IMP=0x0000000000024ee9
- (void)_updateTitleFont;	// IMP=0x0000000000024e4b
- (void)_contentSizeCategoryDidChange;	// IMP=0x0000000000024e39
- (void)_updateHeaderGlyphVisualStylingWithProvider:(id)arg1;	// IMP=0x0000000000024d96
- (struct CGPoint)_headerCenterForBounds:(struct CGRect)arg1;	// IMP=0x000000000002495a
- (void)_updateCustomHeaderViewLayoutIfNecessary;	// IMP=0x000000000002481b
- (void)_updateHeaderLayoutIfNecessary;	// IMP=0x0000000000023b48
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;	// IMP=0x000000000002390b
- (id)requiredVisualStyleCategories;	// IMP=0x000000000002372c
- (id)visualStylingProviderForCategory:(long long)arg1;	// IMP=0x00000000000235e3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000023504
- (struct CGRect)effectiveContentFrameForContainerFrame:(struct CGRect)arg1;	// IMP=0x0000000000022e23
- (void)setGlyphState:(id)arg1;	// IMP=0x0000000000022e11
- (void)setGlyphPackageDescription:(id)arg1;	// IMP=0x0000000000022dff
- (void)setGlyphImage:(id)arg1;	// IMP=0x0000000000022ded
- (void)setCustomFooterView:(id)arg1;	// IMP=0x0000000000022a12
- (void)setFooterButtons:(id)arg1;	// IMP=0x0000000000022668
- (void)setCustomHeaderView:(id)arg1;	// IMP=0x00000000000224a3
- (void)setHeaderGlyphState:(id)arg1;	// IMP=0x0000000000022449
- (void)setHeaderGlyphPackageDescription:(id)arg1;	// IMP=0x0000000000021e8e
- (void)setHeaderGlyphImage:(id)arg1;	// IMP=0x0000000000021d1b
- (void)setHeaderTitle:(id)arg1;	// IMP=0x0000000000021b76
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x0000000000021a8d
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000021a1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

