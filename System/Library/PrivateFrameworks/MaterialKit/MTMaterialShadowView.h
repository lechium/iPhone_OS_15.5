//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MaterialKit/MTMaterialViewObserving-Protocol.h>

@class MTMaterialView, NSString, UIColor;

@interface MTMaterialShadowView : UIView <MTMaterialViewObserving>
{
    UIView *_shadowView;	// 8 = 0x8
    MTMaterialView *_captureOnlyMaterialView;	// 16 = 0x10
    _Bool _captureOnlyMaterialViewSuppliedByClient;	// 24 = 0x18
    MTMaterialView *_materialView;	// 32 = 0x20
}

+ (id)materialShadowViewWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(CDUnknownBlockType)arg5;	// IMP=0x000000000000f15d
+ (id)materialShadowViewWithRecipeNamed:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(CDUnknownBlockType)arg5;	// IMP=0x000000000000f087
+ (id)materialShadowViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(CDUnknownBlockType)arg4;	// IMP=0x000000000000efe5
+ (id)materialShadowViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3;	// IMP=0x000000000000efd0
+ (id)materialShadowViewWithRecipe:(long long)arg1 configuration:(long long)arg2;	// IMP=0x000000000000efb6
- (void).cxx_destruct;	// IMP=0x000000000000fcb7
@property(nonatomic, getter=isCaptureOnlyMaterialViewSuppliedByClient) _Bool captureOnlyMaterialViewSuppliedByClient; // @synthesize captureOnlyMaterialViewSuppliedByClient=_captureOnlyMaterialViewSuppliedByClient;
@property(readonly, nonatomic) MTMaterialView *materialView; // @synthesize materialView=_materialView;
- (void)_configureCaptureOnlyMaterialViewIfNecessary;	// IMP=0x000000000000fb4e
- (void)_configureShadowViewIfNecessary;	// IMP=0x000000000000fa3d
- (void)groupNameDidChangeForMaterialView:(id)arg1;	// IMP=0x000000000000f9e6
- (void)weightingDidChangeForMaterialView:(id)arg1;	// IMP=0x000000000000f9ad
- (void)recipeNameDidChangeForMaterialView:(id)arg1;	// IMP=0x000000000000f956
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x000000000000f8ed
- (void)layoutSubviews;	// IMP=0x000000000000f8ac
@property(nonatomic) _Bool shadowPathIsBounds;
@property(nonatomic) double shadowRadius;
@property(nonatomic) struct CGSize shadowOffset;
@property(nonatomic) double shadowOpacity;
@property(copy, nonatomic) UIColor *shadowColor;
- (id)initWithMaterialView:(id)arg1;	// IMP=0x000000000000f236

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

