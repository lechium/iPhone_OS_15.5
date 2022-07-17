//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTColor, NSArray, NSString;
@protocol MTRecipeMaterialSettingsProviding;

@interface MTMaterialSettingsInterpolator : NSObject
{
    double _previousWeighting;	// 8 = 0x8
    _Bool _overlay;	// 16 = 0x10
    double _weighting;	// 24 = 0x18
    id <MTRecipeMaterialSettingsProviding> _finalSettings;	// 32 = 0x20
    id <MTRecipeMaterialSettingsProviding> _initialSettings;	// 40 = 0x28
    CDUnknownBlockType _blurRadiusTransformer;	// 48 = 0x30
}

+ (id)_filteringProtocolGetterNames;	// IMP=0x000000000000f9b0
- (void).cxx_destruct;	// IMP=0x0000000000010ef3
@property(copy, nonatomic) CDUnknownBlockType blurRadiusTransformer; // @synthesize blurRadiusTransformer=_blurRadiusTransformer;
@property(readonly, nonatomic, getter=isOverlay) _Bool overlay; // @synthesize overlay=_overlay;
@property(retain, nonatomic) id <MTRecipeMaterialSettingsProviding> initialSettings; // @synthesize initialSettings=_initialSettings;
@property(retain, nonatomic) id <MTRecipeMaterialSettingsProviding> finalSettings; // @synthesize finalSettings=_finalSettings;
@property(nonatomic) double weighting; // @synthesize weighting=_weighting;
- (id)description;	// IMP=0x0000000000010df8
- (id)_backdropScaleWithSettings:(id)arg1;	// IMP=0x0000000000010d88
- (id)_colorMatrixColorWithSettings:(id)arg1 alpha:(double)arg2;	// IMP=0x0000000000010cb7
- (id)_zoomWithSettings:(id)arg1;	// IMP=0x0000000000010c47
- (id)_tintAlphaWithSettings:(id)arg1;	// IMP=0x0000000000010bd7
- (id)_colorMatrixWithSettings:(id)arg1;	// IMP=0x0000000000010bbb
- (id)_brightnessWithSettings:(id)arg1;	// IMP=0x0000000000010b9f
- (id)_saturationWithSettings:(id)arg1;	// IMP=0x0000000000010b83
- (id)_luminanceAmountWithSettings:(id)arg1;	// IMP=0x0000000000010b67
- (id)_blurRadiusWithSettings:(id)arg1;	// IMP=0x0000000000010b4b
- (id)_filteringProperty:(id)arg1 withSettings:(id)arg2;	// IMP=0x0000000000010a05
- (_Bool)_isTintEnabledWithSettings:(id)arg1;	// IMP=0x00000000000109b2
- (_Bool)_isBackdropRequiredWithSettings:(id)arg1;	// IMP=0x000000000001095c
- (_Bool)_isBackdropRequiredWithSubSettings:(id)arg1;	// IMP=0x0000000000010748
- (id)_luminanceInputValues;	// IMP=0x00000000000103a7
- (id)_colorWithGetterBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000100fc
- (double)_floatPropertyValueForProperty:(id)arg1;	// IMP=0x00000000000100e8
- (double)_floatPropertyValueForProperty:(id)arg1 withTransformer:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fd90
- (id)_propertyValueForProperty:(id)arg1 withTransformer:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fbcd
- (_Bool)_isPropertyEnabled:(id)arg1 consideringWeighting:(_Bool)arg2;	// IMP=0x000000000000fa12
- (struct CGImage *)variableBlurInputMask;	// IMP=0x000000000000f955
@property(readonly, copy, nonatomic) MTColor *tintColor;
@property(readonly, nonatomic, getter=isBlurAtEnd) _Bool blurAtEnd;
@property(readonly, copy, nonatomic) NSString *blurInputQuality;
@property(readonly, nonatomic) double backdropScale;
@property(readonly, nonatomic) double zoom;
@property(readonly, nonatomic) double tintAlpha;
@property(readonly, nonatomic) struct CAColorMatrix colorMatrix;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double saturation;
@property(readonly, copy, nonatomic) NSArray *luminanceValues;
@property(readonly, nonatomic) double luminanceAmount;
@property(readonly, nonatomic) double blurRadius;
@property(readonly, nonatomic, getter=isZoomEnabled) _Bool zoomEnabled;
@property(readonly, nonatomic, getter=isTintEnabled) _Bool tintEnabled;
@property(readonly, nonatomic, getter=isColorMatrixEnabled) _Bool colorMatrixEnabled;
@property(readonly, nonatomic, getter=isBrightnessEnabled) _Bool brightnessEnabled;
@property(readonly, nonatomic, getter=isSaturationEnabled) _Bool saturationEnabled;
@property(readonly, nonatomic, getter=isLuminanceEnabled) _Bool luminanceEnabled;
@property(readonly, nonatomic, getter=isBlurEnabled) _Bool blurEnabled;
@property(readonly, nonatomic, getter=isBackdropRequiredEver) _Bool backdropRequiredEver;
@property(readonly, nonatomic, getter=isBackdropRequiredFinally) _Bool backdropRequiredFinally;
@property(readonly, nonatomic, getter=isBackdropRequiredInitially) _Bool backdropRequiredInitially;
- (void)finalizeWeighting;	// IMP=0x000000000000f31c
@property(readonly, nonatomic, getter=isWeightingChanging) _Bool weightingChanging;
- (id)initialSettingsInterpolator;	// IMP=0x000000000000f264
- (id)initWithSettings:(id)arg1;	// IMP=0x000000000000f1fc

@end
