//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@interface UIColor (AMSUICommonColor)
+ (id)_colorIdentifierDictionary;	// IMP=0x0000000000018d9c
+ (id)ams_dynamicColorFromDictionary:(id)arg1;	// IMP=0x0000000000018b94
+ (id)ams_namedColorFromDictionary:(id)arg1;	// IMP=0x0000000000018abe
+ (id)ams_rgbColorFromDictionary:(id)arg1;	// IMP=0x000000000001884d
+ (id)ams_colorFromDictionary:(id)arg1;	// IMP=0x0000000000018749
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 lightHighContrastColor:(id)arg3 darkHighContrastColor:(id)arg4;	// IMP=0x0000000000018730
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 darkHighContrastColor:(id)arg3;	// IMP=0x0000000000018718
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 lightHighContrastColor:(id)arg3;	// IMP=0x0000000000018703
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2;	// IMP=0x00000000000186eb
+ (id)ams_colorFromHexString:(id)arg1;	// IMP=0x00000000000183a0
+ (id)ams_shadow;	// IMP=0x0000000000019867
+ (id)ams_mediaBorder;	// IMP=0x00000000000197ca
+ (id)ams_defaultLine;	// IMP=0x00000000000197b8
+ (id)ams_quaternaryText;	// IMP=0x00000000000197a6
+ (id)ams_tertiaryText;	// IMP=0x0000000000019794
+ (id)ams_secondaryText;	// IMP=0x0000000000019782
+ (id)ams_primaryText;	// IMP=0x0000000000019770
+ (id)ams_secondaryGroupedBackground;	// IMP=0x000000000001975e
+ (id)ams_secondaryBackground;	// IMP=0x000000000001974c
+ (id)ams_primaryGroupedBackground;	// IMP=0x000000000001973a
+ (id)ams_primaryBackground;	// IMP=0x0000000000019728
+ (id)ams_placeholderBackground;	// IMP=0x0000000000019716
+ (id)ams_componentBackground;	// IMP=0x0000000000019704
+ (id)ams_dim;	// IMP=0x0000000000019667
+ (id)ams_clear;	// IMP=0x0000000000019655
+ (id)ams_appTint;	// IMP=0x0000000000019643
@property(readonly, nonatomic) double ams_luminance;
@property(readonly, nonatomic, getter=ams_isLight) _Bool ams_light;
@property(readonly, nonatomic, getter=ams_isDark) _Bool ams_dark;
@end

