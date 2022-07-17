//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PlatterKit/MTMaterialGrouping-Protocol.h>
#import <PlatterKit/MTVisualStylingProviding-Protocol.h>
#import <PlatterKit/MTVisualStylingRequiring-Protocol.h>
#import <PlatterKit/PLPlatter-Protocol.h>
#import <PlatterKit/PLPlatterInternal-Protocol.h>

@class MTMaterialShadowView, MTMaterialView, MTShadowView, NSArray, NSBundle, NSDictionary, NSMutableDictionary, NSString;

@interface PLPlatterView : UIView <PLPlatterInternal, PLPlatter, MTVisualStylingProviding, MTVisualStylingRequiring, MTMaterialGrouping>
{
    MTShadowView *_shadowView;	// 8 = 0x8
    UIView *_customContentView;	// 16 = 0x10
    _Bool _recipeDynamic;	// 24 = 0x18
    NSMutableDictionary *_categoriesToProviders;	// 32 = 0x20
    NSDictionary *_recipeNamesByTraitCollection;	// 40 = 0x28
    NSBundle *_recipeBundle;	// 48 = 0x30
    double _cornerRadius;	// 56 = 0x38
    _Bool _backgroundBlurred;	// 64 = 0x40
    _Bool _usesBackgroundView;	// 65 = 0x41
    NSString *_materialGroupNameBase;	// 72 = 0x48
    UIView *_backgroundView;	// 80 = 0x50
    long long _materialRecipe;	// 88 = 0x58
    CDStruct_b48b9fb5 _shadowAttributes;	// 96 = 0x60
}

+ (id)platterViewWithBlurEffectStyle:(long long)arg1;	// IMP=0x0000000000026ce3
+ (id)platterViewWithStyle:(id)arg1;	// IMP=0x0000000000026ccf
+ (id)platterViewWithStyle:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000000027a9f
- (void).cxx_destruct;	// IMP=0x0000000000027a19
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) CDStruct_b48b9fb5 shadowAttributes; // @synthesize shadowAttributes=_shadowAttributes;
@property(nonatomic) long long materialRecipe; // @synthesize materialRecipe=_materialRecipe;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool usesBackgroundView; // @synthesize usesBackgroundView=_usesBackgroundView;
@property(copy, nonatomic) NSString *materialGroupNameBase; // @synthesize materialGroupNameBase=_materialGroupNameBase;
@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;	// IMP=0x000000000002780a
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;	// IMP=0x0000000000027733
- (void)_layoutShadowView;	// IMP=0x0000000000027691
- (void)_configureShadowViewIfNecessary;	// IMP=0x00000000000275d3
- (void)_configureBackgroundViewIfNecessary;	// IMP=0x0000000000027552
- (_Bool)_isMaterialViewSufficientlySpecified;	// IMP=0x000000000002752d
- (id)_newDefaultBackgroundView;	// IMP=0x000000000002739c
- (void)_configureBackgroundView:(id)arg1;	// IMP=0x00000000000272a7
- (void)_invalidateShadowView;	// IMP=0x0000000000027253
@property(nonatomic) _Bool hasShadow;
@property(readonly, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;	// IMP=0x00000000000270c4
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;	// IMP=0x00000000000270be
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x000000000002705a
- (double)_continuousCornerRadius;	// IMP=0x0000000000027048
- (void)layoutSubviews;	// IMP=0x0000000000026fd8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000026faa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000026f5c
@property(readonly, nonatomic) struct UIEdgeInsets shadowOutsets;
- (id)initWithRecipe:(long long)arg1;	// IMP=0x0000000000026d19
- (id)_newCarPlayBannerStrokeView;	// IMP=0x0000000000025941
- (id)_initWithBlurEffectStyle:(long long)arg1;	// IMP=0x00000000000258cf
- (id)_initWithNotificationsBannerStyle;	// IMP=0x0000000000025803
- (id)_initWithCarPlayBannerStyle;	// IMP=0x00000000000256db
- (id)_initWithNavigationBannerStyle;	// IMP=0x000000000002566b
@property(nonatomic, getter=isRecipeDynamic) _Bool recipeDynamic;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (id)initWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000000027bb6
@property(readonly, nonatomic) MTMaterialView *backgroundMaterialView;
- (void)_configureCustomContentViewIfNecessary;	// IMP=0x0000000000027ce5
- (void)_willRemoveCustomContent:(id)arg1;	// IMP=0x0000000000027ef3
- (void)_configureCustomContentView;	// IMP=0x0000000000027e6d
- (id)_initWithRecipe:(long long)arg1 orRecipeNamesByTraitCollection:(id)arg2 inBundle:(id)arg3;	// IMP=0x0000000000027d07
@property(readonly, nonatomic) MTMaterialShadowView *backgroundMaterialShadowView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
