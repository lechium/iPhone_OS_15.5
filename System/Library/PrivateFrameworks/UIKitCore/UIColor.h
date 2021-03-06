//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSItemProviderReading-Protocol.h>
#import <UIKitCore/NSItemProviderWriting-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/UIItemProviderReading-Protocol.h>
#import <UIKitCore/UIItemProviderWriting-Protocol.h>

@class CIColor, NSArray, NSString;

@interface UIColor : NSObject <NSItemProviderReading, NSItemProviderWriting, UIItemProviderReading, UIItemProviderWriting, NSSecureCoding, NSCopying>
{
    NSString *_systemColorName;	// 8 = 0x8
    NSString *_cachedStyleString;	// 16 = 0x10
}

+ (id)_apiColorNames;	// IMP=0x0000000000805b0a
+ (id)colorNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x0000000000805a26
+ (id)colorNamed:(id)arg1;	// IMP=0x0000000000805a0f
+ (id)_webContentBackgroundColor;	// IMP=0x0000000000805937
+ (id)__tintColor;	// IMP=0x0000000000805925
+ (id)_tintColor;	// IMP=0x0000000000805913
+ (id)tintColor;	// IMP=0x00000000008058be
+ (id)_vibrantLightSectionDelimiterDividerDarkeningColor;	// IMP=0x000000000080588f
+ (id)_vibrantLightSectionDelimiterDividerBurnColor;	// IMP=0x0000000000805876
+ (id)_vibrantDarkFillDodgeColor;	// IMP=0x000000000080584d
+ (id)_vibrantLightFillDarkeningColor;	// IMP=0x0000000000805829
+ (id)_vibrantLightFillBurnColor;	// IMP=0x0000000000805800
+ (id)_vibrantLightDividerDarkeningColor;	// IMP=0x00000000008057d1
+ (id)_vibrantLightDividerBurnColor;	// IMP=0x00000000008057a8
+ (id)_systemSelectedColor;	// IMP=0x000000000080578f
+ (id)_externalBarBackgroundColor;	// IMP=0x0000000000805776
+ (id)_grayColorForFontSize:(double)arg1;	// IMP=0x0000000000805728
+ (id)_dimmingViewColor;	// IMP=0x000000000080570f
+ (id)_translucentPaperTextureColor;	// IMP=0x0000000000805629
+ (id)noContentDarkGradientBackgroundColor;	// IMP=0x00000000008054d5
+ (id)noContentLightGradientBackgroundColor;	// IMP=0x0000000000805439
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;	// IMP=0x000000000080536c
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;	// IMP=0x00000000008052a4
+ (id)_accessibilityButtonShapesDisabledBackgroundColorOnDark;	// IMP=0x00000000008051d7
+ (id)_accessibilityButtonShapesBackgroundColorOnDark;	// IMP=0x000000000080510a
+ (id)_accessibilityButtonShapesBackgroundColorOnLight;	// IMP=0x000000000080503d
+ (id)_externalSystemSuperDarkGrayColor;	// IMP=0x0000000000804f70
+ (id)_externalSystemExtraDarkGrayColor;	// IMP=0x0000000000804ea3
+ (id)_externalSystemDarkGrayColor;	// IMP=0x0000000000804dd6
+ (id)_externalSystemGrayColor;	// IMP=0x0000000000804d09
+ (id)_externalSystemMidGrayColor;	// IMP=0x0000000000804c3c
+ (id)_externalSystemWhiteColor;	// IMP=0x0000000000804b74
+ (id)_systemMidGrayTintColor;	// IMP=0x0000000000804aa1
+ (id)_barStyleBlackHairlineShadowColor;	// IMP=0x00000000008049ce
+ (id)_barHairlineShadowColor;	// IMP=0x0000000000804900
+ (id)_systemDestructiveTintColor;	// IMP=0x0000000000804828
+ (id)_systemInteractionTintColor;	// IMP=0x0000000000804755
+ (id)systemDarkGrayTintColor;	// IMP=0x0000000000804592
+ (id)systemDarkMidGrayTintColor;	// IMP=0x00000000008043d4
+ (id)systemDarkLightMidGrayTintColor;	// IMP=0x0000000000804211
+ (id)systemDarkLightGrayTintColor;	// IMP=0x000000000080404e
+ (id)systemDarkExtraLightGrayTintColor;	// IMP=0x0000000000803e8b
+ (id)systemGrayTintColor;	// IMP=0x0000000000803cc8
+ (id)systemMidGrayTintColor;	// IMP=0x0000000000803b0a
+ (id)systemLightMidGrayTintColor;	// IMP=0x0000000000803947
+ (id)systemLightGrayTintColor;	// IMP=0x0000000000803784
+ (id)systemExtraLightGrayTintColor;	// IMP=0x00000000008035c1
+ (id)externalSystemGreenColor;	// IMP=0x00000000008033f9
+ (id)externalSystemRedColor;	// IMP=0x0000000000803236
+ (id)externalSystemTealColor;	// IMP=0x000000000080306e
+ (id)systemDarkGrayColor;	// IMP=0x0000000000802eab
+ (id)systemDarkMidGrayColor;	// IMP=0x0000000000802ce8
+ (id)systemDarkLightMidGrayColor;	// IMP=0x0000000000802b25
+ (id)systemDarkLightGrayColor;	// IMP=0x0000000000802962
+ (id)systemDarkExtraLightGrayColor;	// IMP=0x000000000080279f
+ (id)systemDarkPurpleColor;	// IMP=0x00000000008025d7
+ (id)systemDarkPinkColor;	// IMP=0x000000000080240f
+ (id)systemDarkTealColor;	// IMP=0x0000000000802247
+ (id)systemDarkYellowColor;	// IMP=0x000000000080207f
+ (id)systemDarkOrangeColor;	// IMP=0x0000000000801eb7
+ (id)systemDarkBlueColor;	// IMP=0x0000000000801cf4
+ (id)systemDarkGreenColor;	// IMP=0x0000000000801b31
+ (id)systemDarkRedColor;	// IMP=0x0000000000801969
+ (id)systemBlackColor;	// IMP=0x00000000008017b0
+ (id)systemLightMidGrayColor;	// IMP=0x00000000008015ed
+ (id)systemLightGrayColor;	// IMP=0x000000000080142a
+ (id)systemExtraLightGrayColor;	// IMP=0x0000000000801267
+ (id)systemWhiteColor;	// IMP=0x00000000008010ae
+ (id)systemMidGrayColor;	// IMP=0x0000000000800ce7
+ (id)scrollViewTexturedBackgroundColor;	// IMP=0x0000000000800c59
+ (id)underPageBackgroundColor;	// IMP=0x0000000000800b9f
+ (id)viewFlipsideBackgroundColor;	// IMP=0x0000000000800ae5
+ (id)tableCellBlueTextColor;	// IMP=0x0000000000800a58
+ (id)tableGroupedSeparatorLightColor;	// IMP=0x00000000008009a7
+ (id)_appKeyColorOrDefaultTint;	// IMP=0x000000000080095d
+ (id)_appKeyColor;	// IMP=0x00000000008008ce
+ (id)keyboardFocusIndicatorColor;	// IMP=0x00000000008008b5
+ (id)darkTextColor;	// IMP=0x00000000008007ed
+ (id)lightTextColor;	// IMP=0x0000000000800720
+ (id)selectionGrabberColor;	// IMP=0x0000000000800643
+ (id)insertionPointColor;	// IMP=0x0000000000800566
+ (id)selectionHighlightColor;	// IMP=0x000000000080048e
+ (id)pinStripeColor;	// IMP=0x00000000008003a8
+ (double)_luminanceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;	// IMP=0x00000000007ff8a0
+ (id)textFieldAtomBlueColor;	// IMP=0x00000000007feb21
+ (id)__halfTransparentWhiteColor;	// IMP=0x00000000007feaac
+ (id)__halfTransparentBlackColor;	// IMP=0x00000000007fea3c
+ (id)infoTextOverPinStripeTextColor;	// IMP=0x00000000007fe95f
+ (id)textFieldAtomPurpleColor;	// IMP=0x00000000007fe887
+ (id)tableCellGrayTextColor;	// IMP=0x00000000007fe7b4
+ (id)tableCellValue2BlueColor;	// IMP=0x00000000007fe6d7
+ (id)tableCellValue1BlueColor;	// IMP=0x00000000007fe5fa
+ (id)sectionHeaderBorderColor;	// IMP=0x00000000007fe51d
+ (id)sectionHeaderOpaqueBackgroundColor;	// IMP=0x00000000007fe440
+ (id)sectionHeaderBackgroundColor;	// IMP=0x00000000007fe363
+ (id)sectionListBorderColor;	// IMP=0x00000000007fe286
+ (id)tableGroupedTopShadowColor;	// IMP=0x00000000007fe1b8
+ (id)tableShadowColor;	// IMP=0x00000000007fe0e5
+ (id)tableSelectionGradientEndColor;	// IMP=0x00000000007fe008
+ (id)tableSelectionGradientStartColor;	// IMP=0x00000000007fdf2b
+ (id)tableCellbackgroundColorCarPlay;	// IMP=0x00000000007fde5d
+ (id)tableCellBackgroundColor;	// IMP=0x00000000007fdd8f
+ (id)tableCellGroupedBackgroundColorLegacyWhite;	// IMP=0x00000000007fdcc1
+ (id)brownColor;	// IMP=0x00000000007fdbe4
+ (id)purpleColor;	// IMP=0x00000000007fdb11
+ (id)orangeColor;	// IMP=0x00000000007fda3e
+ (id)magentaColor;	// IMP=0x00000000007fd970
+ (id)yellowColor;	// IMP=0x00000000007fd8a2
+ (id)cyanColor;	// IMP=0x00000000007fd7d4
+ (id)blueColor;	// IMP=0x00000000007fd706
+ (id)greenColor;	// IMP=0x00000000007fd638
+ (id)redColor;	// IMP=0x00000000007fd56a
+ (id)clearColor;	// IMP=0x00000000007fd4a7
+ (id)grayColor;	// IMP=0x00000000007fd3da
+ (id)whiteColor;	// IMP=0x00000000007fd312
+ (id)lightGrayColor;	// IMP=0x00000000007fd245
+ (id)darkGrayColor;	// IMP=0x00000000007fd178
+ (id)blackColor;	// IMP=0x00000000007fd0b0
+ (id)classFallbacksForKeyedArchiver;	// IMP=0x00000000007fc9fa
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000007fc3e4
+ (id)_dynamicCatalogColorForNibEncodingWithName:(id)arg1 genericColor:(id)arg2;	// IMP=0x00000000007fc030
+ (id)_disabledColorForColor:(id)arg1;	// IMP=0x00000000007fbd70
+ (id)_accessibilityLightenedColorForColor:(id)arg1;	// IMP=0x00000000007fbbf5
+ (id)_accessibilityDarkenedColorForColor:(id)arg1;	// IMP=0x00000000007fba55
+ (id)__darkSystemColorForColor:(id)arg1;	// IMP=0x00000000007fb94b
+ (id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(double)arg4;	// IMP=0x00000000007fb700
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;	// IMP=0x00000000007fb650
+ (id)_systemColorWithUnvalidatedName:(id)arg1;	// IMP=0x00000000007fb60d
+ (id)_systemColorWithName:(id)arg1;	// IMP=0x00000000007fb4d5
+ (id)_systemColorSelectorTable;	// IMP=0x00000000007fa0b5
+ (id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000007fa05c
+ (id)colorWithCIColor:(id)arg1;	// IMP=0x00000000007fa00f
+ (id)colorWithPatternImage:(id)arg1;	// IMP=0x00000000007f9fc2
+ (id)_disambiguated_due_to_CIImage_colorWithCGColor:(struct CGColor *)arg1;	// IMP=0x00000000007f9fa9
+ (id)colorWithCGColor:(struct CGColor *)arg1;	// IMP=0x00000000007f9d62
+ (id)_disambiguated_due_to_CIImage_colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000007f9d49
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000007f9cf0
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000007f9c97
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;	// IMP=0x00000000007f9c52
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007f9bd9
+ (void)initialize;	// IMP=0x00000000007f9b5b
+ (id)_dynamicColorWithColorsByTraitCollection:(id)arg1;	// IMP=0x00000000008064de
+ (id)colorWithDynamicProvider:(CDUnknownBlockType)arg1;	// IMP=0x000000000080652b
+ (id)tertiarySystemGroupedBackgroundColor;	// IMP=0x0000000000810d28
+ (id)secondarySystemGroupedBackgroundColor;	// IMP=0x0000000000810903
+ (id)systemGroupedBackgroundColor;	// IMP=0x00000000008104da
+ (id)tertiarySystemBackgroundColor;	// IMP=0x00000000008100e9
+ (id)secondarySystemBackgroundColor;	// IMP=0x000000000080fce4
+ (id)systemBackgroundColor;	// IMP=0x000000000080f9f5
+ (id)opaqueSeparatorColor;	// IMP=0x000000000080f7fd
+ (id)separatorColor;	// IMP=0x000000000080f4dd
+ (id)placeholderTextColor;	// IMP=0x000000000080f418
+ (id)linkColor;	// IMP=0x000000000080f225
+ (id)quaternaryLabelColor;	// IMP=0x000000000080ed6f
+ (id)tertiaryLabelColor;	// IMP=0x000000000080e889
+ (id)secondaryLabelColor;	// IMP=0x000000000080e3a0
+ (id)labelColor;	// IMP=0x000000000080e1c9
+ (id)systemMintColor;	// IMP=0x000000000080debd
+ (id)systemIndigoColor;	// IMP=0x000000000080d9b8
+ (id)systemTealColor;	// IMP=0x000000000080d6b1
+ (id)systemCyanColor;	// IMP=0x000000000080d3af
+ (id)systemBrownColor;	// IMP=0x000000000080d09e
+ (id)systemGray6Color;	// IMP=0x000000000080cda1
+ (id)systemGray5Color;	// IMP=0x000000000080caa4
+ (id)systemGray4Color;	// IMP=0x000000000080c7a7
+ (id)systemGray3Color;	// IMP=0x000000000080c487
+ (id)systemGray2Color;	// IMP=0x000000000080c18a
+ (id)systemGrayColor;	// IMP=0x000000000080bf19
+ (id)systemPurpleColor;	// IMP=0x000000000080bb05
+ (id)systemPinkColor;	// IMP=0x000000000080b490
+ (id)systemYellowColor;	// IMP=0x000000000080b092
+ (id)systemOrangeColor;	// IMP=0x000000000080ac99
+ (id)_systemBlueColor2;	// IMP=0x000000000080a9a1
+ (id)systemBlueColor;	// IMP=0x000000000080a623
+ (id)systemGreenColor;	// IMP=0x0000000000809f88
+ (id)systemRedColor;	// IMP=0x0000000000809b88
+ (id)_tvInterfaceStyleDarkContentColor;	// IMP=0x00000000008187f7
+ (id)_tvInterfaceStyleLightContentColor;	// IMP=0x000000000081872f
+ (id)_tvLabelOpacityCColor;	// IMP=0x0000000000818716
+ (id)_tvLabelOpacityBColor;	// IMP=0x00000000008186fd
+ (id)_tvLabelOpacityAColor;	// IMP=0x00000000008186e4
+ (id)_unfocusedCarSystemColor:(id)arg1;	// IMP=0x00000000008185f9
+ (id)_focusedCarSystemColor:(id)arg1;	// IMP=0x000000000081850e
+ (id)_alternateSystemInteractionTintColor;	// IMP=0x00000000008184f5
+ (id)_carSystemFocusSecondaryColor;	// IMP=0x0000000000818318
+ (id)_carSystemFocusPrimaryColor;	// IMP=0x000000000081813b
+ (id)_carSystemFocusLabelColor;	// IMP=0x0000000000817f63
+ (id)_carSystemFocusColor;	// IMP=0x0000000000817d70
+ (id)_carSystemQuaternaryColor;	// IMP=0x0000000000817b93
+ (id)_carSystemTertiaryColor;	// IMP=0x00000000008179b6
+ (id)_carSystemSecondaryColor;	// IMP=0x00000000008177d9
+ (id)_carSystemPrimaryColor;	// IMP=0x00000000008175fc
+ (id)_monochromeCellImageTintColor;	// IMP=0x0000000000817537
+ (id)_windowBackgroundColor;	// IMP=0x00000000008172df
+ (id)_swipedSidebarCellBackgroundColor;	// IMP=0x0000000000816eda
+ (id)_sidebarBackgroundColor;	// IMP=0x0000000000816ec1
+ (id)_groupTableHeaderFooterTextColor;	// IMP=0x0000000000816bc4
+ (id)_plainTableHeaderFooterTextColor;	// IMP=0x00000000008169d6
+ (id)tablePlainHeaderFooterFloatingBackgroundColor;	// IMP=0x0000000000816911
+ (id)tablePlainHeaderFooterBackgroundColor;	// IMP=0x0000000000816575
+ (id)tableCellDisabledBackgroundColor;	// IMP=0x00000000008164a8
+ (id)tableCellFocusedBackgroundColor;	// IMP=0x00000000008163db
+ (id)tableCellHighlightedBackgroundColor;	// IMP=0x000000000081630e
+ (id)tableCellGroupedSelectedBackgroundColor;	// IMP=0x00000000008162f5
+ (id)tableCellDefaultSelectionTintColor;	// IMP=0x00000000008162dc
+ (id)tableCellPlainSelectedBackgroundColor;	// IMP=0x00000000008162c3
+ (id)tableSelectionColor;	// IMP=0x00000000008161e6
+ (id)tableSeparatorLightColor;	// IMP=0x0000000000816121
+ (id)tableSeparatorDarkColor;	// IMP=0x000000000081605c
+ (id)tableSeparatorColor;	// IMP=0x0000000000815f97
+ (id)tableCellGroupedBackgroundColor;	// IMP=0x0000000000815ed2
+ (id)groupTableViewBackgroundColor;	// IMP=0x0000000000815e0d
+ (id)tableCellPlainBackgroundColor;	// IMP=0x0000000000815a3b
+ (id)tableBackgroundColor;	// IMP=0x00000000008155f7
+ (id)_markedTextBackgroundColor;	// IMP=0x00000000008155de
+ (id)_splitViewBorderColor;	// IMP=0x00000000008155c5
+ (id)_textFieldDisabledBorderColor;	// IMP=0x00000000008153e8
+ (id)_textFieldBorderColor;	// IMP=0x000000000081520b
+ (id)_textFieldDisabledBackgroundColor;	// IMP=0x0000000000815029
+ (id)_textFieldBackgroundColor;	// IMP=0x0000000000814e51
+ (id)_systemGroupBackgroundCellColor;	// IMP=0x0000000000814e38
+ (id)_systemGroupBackgroundColor;	// IMP=0x0000000000814e1f
+ (id)_systemBackgroundSectionCellColor;	// IMP=0x0000000000814e06
+ (id)_systemBackgroundSectionColor;	// IMP=0x0000000000814ded
+ (id)_contentBackgroundColor;	// IMP=0x0000000000814dd4
+ (id)_tertiarySystemGroupedBackgroundColor;	// IMP=0x0000000000814dbb
+ (id)_secondarySystemGroupedBackgroundColor;	// IMP=0x0000000000814da2
+ (id)_systemGroupedBackgroundColor;	// IMP=0x0000000000814d89
+ (id)_tertiarySystemBackgroundColor;	// IMP=0x0000000000814d70
+ (id)_secondarySystemBackgroundColor;	// IMP=0x0000000000814d57
+ (id)_systemBackgroundColor;	// IMP=0x0000000000814d3e
+ (id)_opaqueSeparatorColor;	// IMP=0x0000000000814d25
+ (id)_separatorColor;	// IMP=0x0000000000814d0c
+ (id)_placeholderTextColor;	// IMP=0x0000000000814cf3
+ (id)_linkColor;	// IMP=0x0000000000814cda
+ (id)_quaternaryLabelColor;	// IMP=0x0000000000814cc1
+ (id)_tertiaryLabelColor;	// IMP=0x0000000000814ca8
+ (id)_secondaryLabelColor;	// IMP=0x0000000000814c8f
+ (id)_labelColor;	// IMP=0x0000000000814c76
+ (id)_systemGray6Color;	// IMP=0x0000000000814c5d
+ (id)_systemGray5Color;	// IMP=0x0000000000814c44
+ (id)_systemGray4Color;	// IMP=0x0000000000814c2b
+ (id)_systemGray3Color;	// IMP=0x0000000000814c12
+ (id)_systemGray2Color;	// IMP=0x0000000000814bf9
+ (id)_quaternaryFillColor;	// IMP=0x0000000000814be0
+ (id)_tertiaryFillColor;	// IMP=0x0000000000814bc7
+ (id)_secondaryFillColor;	// IMP=0x0000000000814bae
+ (id)_fillColor;	// IMP=0x0000000000814b95
+ (id)_systemChromeShadowColor;	// IMP=0x00000000008149b8
+ (id)_alertControllerDimmingViewColor;	// IMP=0x00000000008147e0
+ (id)_swiftColor;	// IMP=0x00000000008145e3
+ (id)_controlVibrantBottomBackgroundColor;	// IMP=0x00000000008143e6
+ (id)_controlVibrantTopBackgroundColor;	// IMP=0x00000000008141e9
+ (id)_controlShadowColor;	// IMP=0x0000000000814121
+ (id)_controlHighlightColor;	// IMP=0x0000000000813f29
+ (id)_controlForegroundColor;	// IMP=0x0000000000813cc7
+ (id)_searchBarBackgroundColor;	// IMP=0x0000000000813c02
+ (id)_searchFieldPlaceholderTextClearButtonColor;	// IMP=0x0000000000813a8d
+ (id)_pageControlPlatterIndicatorColor;	// IMP=0x00000000008137c7
+ (id)_pageControlIndicatorColor;	// IMP=0x00000000008135e5
+ (id)_searchFieldDisabledBackgroundColor;	// IMP=0x00000000008132e8
+ (id)_switchOffImageColor;	// IMP=0x000000000081310b
+ (id)_switchOffColor;	// IMP=0x0000000000812e0e
+ (id)quaternarySystemFillColor;	// IMP=0x000000000081292b
+ (id)tertiarySystemFillColor;	// IMP=0x0000000000812448
+ (id)secondarySystemFillColor;	// IMP=0x0000000000811f65
+ (id)systemFillColor;	// IMP=0x0000000000811a82
+ (id)_dynamicTestColor;	// IMP=0x000000000081112d
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0000000000bd26c1
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000bd23b8
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x0000000000bd2351
+ (id)_convertColorPickerColor:(id)arg1 fromUserInterfaceStyle:(long long)arg2 to:(long long)arg3;	// IMP=0x0000000000ee3c4f
- (void).cxx_destruct;	// IMP=0x0000000000805b17
- (id)_colorBlendedWithColors:(id)arg1;	// IMP=0x0000000000800222
- (id)_colorBlendedWithColor:(id)arg1;	// IMP=0x000000000080020e
- (id)_colorBlendedWithColor:(id)arg1 compositingFilter:(id)arg2;	// IMP=0x00000000007ff8c6
- (double)_luminanceDifferenceFromColor:(id)arg1;	// IMP=0x00000000007ff831
- (double)_luminance;	// IMP=0x00000000007ff6b2
- (double)_colorDifferenceFromColor:(id)arg1;	// IMP=0x00000000007ff348
- (_Bool)_isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;	// IMP=0x00000000007fef75
- (void)_setDebugCatalogBundleIdentifier:(id)arg1;	// IMP=0x00000000007fef5f
- (id)_debugCatalogBundleIdentifier;	// IMP=0x00000000007fef4e
- (void)_setDebugName:(id)arg1;	// IMP=0x00000000007fef38
- (id)_debugName;	// IMP=0x00000000007feef0
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;
- (_Bool)_isOpaque;	// IMP=0x00000000007fedd7
- (_Bool)_isDeepColor;	// IMP=0x00000000007fedcf
- (_Bool)isPatternColor;	// IMP=0x00000000007fedc7
- (id)styleString;	// IMP=0x00000000007fec90
- (double)alphaComponent;	// IMP=0x00000000007fec87
- (struct CGColor *)cgColor;	// IMP=0x00000000007fec6d
- (id)colorSpaceName;	// IMP=0x00000000007fec60
- (_Bool)_getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000007fec4e
- (_Bool)_getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x00000000007fec3c
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000007fec34
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000007fec2c
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x00000000007fec24
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007fec0a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007febfd
@property(readonly, nonatomic) CIColor *CIColor;
@property(readonly, nonatomic) struct CGColor *CGColor;
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x00000000007febdb
- (void)setStroke;	// IMP=0x00000000007febd1
- (void)setFill;	// IMP=0x00000000007febc7
- (void)set;	// IMP=0x00000000007feb3a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007fca07
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007fc3ec
- (Class)classForCoder;	// IMP=0x00000000007fc3d3
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000007fc37c
- (id)initWithCIColor:(id)arg1;	// IMP=0x00000000007fc321
- (id)initWithPatternImage:(id)arg1;	// IMP=0x00000000007fc2c6
- (id)initWithCGColor:(struct CGColor *)arg1;	// IMP=0x00000000007fc191
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000007fc13a
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000007fc0e3
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;	// IMP=0x00000000007fc0a0
- (id)_backgroundColorIgnoringHighContrast;	// IMP=0x00000000007fbd67
@property(readonly, nonatomic) NSString *accessibilityName;
@property(readonly, nonatomic) NSString *_accessibilityNameWithLuma;
@property(readonly, nonatomic, getter=_isDynamicTintColor) _Bool isDynamicTintColor;
@property(readonly, nonatomic, getter=_isDynamic) _Bool dynamic;
- (id)resolvedColorWithTraitCollection:(id)arg1;	// IMP=0x00000000008065d6
- (id)initWithDynamicProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000806578
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000bd2741
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000bd2616

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

