//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@class NSString;

@interface UIColor (PKAccessibility)
+ (id)pkaxHueNameForValue:(double)arg1;	// IMP=0x000000000001e3ab
+ (double)pk_rgbDistanceFromColor:(id)arg1 toColor:(id)arg2;	// IMP=0x00000000001ab093
+ (id)pk_randomColor;	// IMP=0x0000000000288128
+ (id)pk_convertColorPickerColor:(id)arg1 fromUserInterfaceStyle:(long long)arg2 to:(long long)arg3;	// IMP=0x000000000028810f
+ (id)pk_textInputReserveSpaceColor;	// IMP=0x00000000002880e6
+ (id)pk_textInputDeletionPreviewColor;	// IMP=0x00000000002880bd
+ (id)pk_linedPaperLineColor_light;	// IMP=0x0000000000288094
+ (id)pk_linedPaperLineColor_dark;	// IMP=0x000000000028806b
+ (id)pk_removeActiveToolButtonColor;	// IMP=0x0000000000288052
+ (id)pk_toolSampleViewBackgroundColor;	// IMP=0x0000000000287ff7
+ (id)pk_doneButtonBackgroundColor;	// IMP=0x0000000000287f9c
+ (id)pk_doneButtonTitleColor;	// IMP=0x0000000000287f83
+ (id)pk_separatorLineColor;	// IMP=0x0000000000287f6a
+ (id)pk_toolTintColor;	// IMP=0x0000000000287f51
+ (id)pk_toolDockMaskColor;	// IMP=0x0000000000287f38
+ (id)pk_crosshairViewShadowColor;	// IMP=0x0000000000287f1f
+ (id)pk_crosshairViewBorderColor;	// IMP=0x0000000000287f06
+ (id)pk_thicknessButtonWhite;	// IMP=0x0000000000287eed
+ (id)pk_thicknessButtonBlack;	// IMP=0x0000000000287ed4
+ (id)pk_thicknessButtonLightGray;	// IMP=0x0000000000287ebb
+ (id)pk_selectedPickerButtonMaskColor;	// IMP=0x0000000000287ea2
+ (id)pk_selectedPickerButtonBackgroundColor;	// IMP=0x0000000000287e89
+ (id)pk_opacityValueLabel;	// IMP=0x0000000000287e70
+ (id)pk_opacityTitleLabel;	// IMP=0x0000000000287e57
+ (id)pk_paletteShadowColor;	// IMP=0x0000000000287e3e
+ (id)pk_paletteStrokeColor;	// IMP=0x0000000000287de3
+ (id)pk_buttonImageColor;	// IMP=0x0000000000287dca
+ (id)pk_paletteBackgroundColor;	// IMP=0x0000000000287db1
+ (id)pk_paletteButtonBackgroundColor;	// IMP=0x0000000000287d98
- (id)_pkaxLightnessSaturationHueFormatString;	// IMP=0x000000000001eae5
- (id)_pkaxSaturationHueFormatString;	// IMP=0x000000000001ea89
- (id)_pkaxLightnessHueFormatString;	// IMP=0x000000000001ea2d
- (id)_pkaxColorDescriptionForHue:(id)arg1 saturation:(id)arg2 lightness:(id)arg3;	// IMP=0x000000000001e86a
@property(readonly, nonatomic) NSString *pkaxDescriptionWithLuma;
- (id)pkaxSaturationModifier;	// IMP=0x000000000001e2e1
- (id)pkaxLightnessModifier;	// IMP=0x000000000001e230
- (id)pkaxHueName;	// IMP=0x000000000001e1ee
@property(readonly, nonatomic) NSString *pkaxApproximateColorDescription;
@property(readonly, nonatomic) double pkaxLuma;
- (double)pkaxSaturation;	// IMP=0x000000000001dde4
- (double)pkaxHue;	// IMP=0x000000000001ddb0
@property(retain, nonatomic, setter=_pkaxSetCachedApproximateColorDescription:) NSString *_pkaxCachedApproximateColorDescription;
- (_Bool)pk_isColorBlack;	// IMP=0x00000000001aafa9
- (_Bool)pk_isColorWhite;	// IMP=0x00000000001aaeb4
@end
