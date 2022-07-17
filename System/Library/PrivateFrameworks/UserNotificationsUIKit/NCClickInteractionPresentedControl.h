//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>
#import <UserNotificationsUIKit/UIPointerInteractionDelegate-Protocol.h>

@class MTMaterialView, NCClickInteractionPresentedView, NSString, UITraitCollection;

@interface NCClickInteractionPresentedControl : UIControl <PLContentSizeCategoryAdjusting, UIPointerInteractionDelegate>
{
    _Bool _adjustsFontForContentSizeCategory;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NCClickInteractionPresentedView *_presentedView;	// 24 = 0x18
    long long _materialRecipe;	// 32 = 0x20
    MTMaterialView *_backgroundMaterialView;	// 40 = 0x28
    UITraitCollection *_overrideTraitCollection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000d4778
@property(retain, nonatomic) UITraitCollection *overrideTraitCollection; // @synthesize overrideTraitCollection=_overrideTraitCollection;
@property(readonly, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView; // @synthesize backgroundMaterialView=_backgroundMaterialView;
@property(readonly, nonatomic, getter=_materialRecipe) long long materialRecipe; // @synthesize materialRecipe=_materialRecipe;
@property(readonly, nonatomic, getter=_presentedView) NCClickInteractionPresentedView *presentedView; // @synthesize presentedView=_presentedView;
@property(readonly, copy, nonatomic, getter=_title) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void)_configureContentViewIfNecessaryWithTitle:(id)arg1;	// IMP=0x00000000000d4404
- (void)_configureMaterialViewsIfNecessary;	// IMP=0x00000000000d4385
- (id)_newMaterialViewWithRecipe:(long long)arg1;	// IMP=0x00000000000d42f9
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000000d41b2
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000000d419c
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x00000000000d415d
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000d3f28
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000d3f05
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x00000000000d3ebd
- (void)_setCornerRadius:(double)arg1;	// IMP=0x00000000000d3e75
- (id)initWithTitle:(id)arg1 materialRecipe:(long long)arg2;	// IMP=0x00000000000d3d1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
