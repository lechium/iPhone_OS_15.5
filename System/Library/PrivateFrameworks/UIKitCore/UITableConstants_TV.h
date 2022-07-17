//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITableConstants-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_TV : NSObject <UITableConstants>
{
}

+ (id)sharedConstants;	// IMP=0x0000000000ee40f1
- (_Bool)shouldUseRoundedGroupsForTableViewStyle:(long long)arg1 backgroundInsets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000ee6ec2
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5;	// IMP=0x0000000000ee6eba
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5 inheritedTintColor:(id)arg6;	// IMP=0x0000000000ee6d64
- (id)defaultImageTintColorForState:(id)arg1;	// IMP=0x0000000000ee6d23
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;	// IMP=0x0000000000ee6c78
- (double)defaultMaskGradientHeightForTableView:(id)arg1;	// IMP=0x0000000000ee6c6a
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;	// IMP=0x0000000000ee6c5c
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;	// IMP=0x0000000000ee6c4e
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee6c40
- (_Bool)reorderingCellWantsShadows;	// IMP=0x0000000000ee6c38
- (double)defaultAlphaForReorderingCell;	// IMP=0x0000000000ee6c2a
- (id)defaultFocusedReorderControlImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee6c13
- (id)defaultReorderControlImageForTraitCollection:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000ee6b3c
- (id)_defaultReorderControlImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000ee6a36
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000ee6a20
- (double)defaultEditAndUpdateAnimationDuration;	// IMP=0x0000000000ee6a12
- (id)defaultFocusedMultiSelectSelectedImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee69fb
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 checkmarkColor:(id)arg3 backgroundColor:(id)arg4;	// IMP=0x0000000000ee69c7
- (id)_defaultMultiSelectSelectedImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000ee6887
- (id)defaultFocusedMultiSelectNotSelectedImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee6870
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 accessoryBaseColor:(id)arg3;	// IMP=0x0000000000ee674a
- (id)_defaultMultiSelectNotSelectedImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000ee662d
- (id)defaultFocusedInsertImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee6616
- (id)defaultInsertImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000000ee64e5
- (id)defaultInsertImageForCell:(id)arg1;	// IMP=0x0000000000ee6476
- (id)_defaultInsertImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000ee6359
- (id)defaultFocusedDeleteImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee6342
- (id)defaultDeleteImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000000ee6211
- (id)defaultDeleteImageForCell:(id)arg1;	// IMP=0x0000000000ee61a2
- (id)defaultDeleteImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000ee5fc1
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee5fa3
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee5f95
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee5f8c
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee5f76
- (id)defaultFocusedCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee5f5f
- (id)defaultCheckmarkImageForCell:(id)arg1;	// IMP=0x0000000000ee5eeb
- (id)_defaultCheckmarkImageForCell:(id)arg1 forUserInterfaceStyle:(long long)arg2;	// IMP=0x0000000000ee5cee
- (id)defaultFocusedDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee5c68
- (id)defaultDisclosureImageForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000ee5b45
- (id)_defaultDisclosureImageForCell:(id)arg1;	// IMP=0x0000000000ee5a78
- (id)_symbolImageNamed:(id)arg1 font:(id)arg2 cell:(id)arg3;	// IMP=0x0000000000ee59e4
- (id)_kitImageNamed:(id)arg1 withTint:(id)arg2 flippedForRightToLeftLayoutDirection:(_Bool)arg3;	// IMP=0x0000000000ee589c
- (struct _UITableConstantsBackgroundProperties)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 tableBackgroundColor:(id)arg2 floating:(_Bool)arg3;	// IMP=0x0000000000ee586d
- (_Bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;	// IMP=0x0000000000ee5865
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000000ee5853
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000000ee57aa
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 userInterfaceStyle:(long long)arg2;	// IMP=0x0000000000ee5744
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000000ee5721
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000000ee56fe
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000000ee56cc
- (id)defaultDetailTextFontForCellStyle:(long long)arg1;	// IMP=0x0000000000ee5689
- (id)defaultFocusedDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee55cc
- (id)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 state:(id)arg3;	// IMP=0x0000000000ee554e
- (id)defaultDetailTextColorForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000ee5508
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000000ee54db
- (id)defaultTextLabelFontForCellStyle:(long long)arg1;	// IMP=0x0000000000ee5496
- (id)defaultFocusedTextColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee53b3
- (id)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 state:(id)arg4;	// IMP=0x0000000000ee5335
- (id)defaultTextColorForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000ee52ef
- (double)defaultLabelMinimumScaleFactorForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000ee52e6
- (_Bool)defaultLabelAllowsTighteningForTruncationForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000ee52de
- (long long)defaultLabelNumberOfLinesForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000ee52d6
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;	// IMP=0x0000000000ee5228
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000000ee521a
- (_Bool)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(_Bool)arg2;	// IMP=0x0000000000ee5212
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000ee5204
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000ee5168
- (double)defaultMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000ee50c3
- (struct UIEdgeInsets)_defaultLayoutMargins;	// IMP=0x0000000000ee509a
- (_Bool)shouldUseDefaultTableLayoutMarginsAsContentInsets;	// IMP=0x0000000000ee5092
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;	// IMP=0x0000000000ee507f
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;	// IMP=0x0000000000ee500f
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;	// IMP=0x0000000000ee4ff0
- (double)defaultPaddingBetweenHeaderAndRows;	// IMP=0x0000000000ee4fe7
- (double)defaultPaddingBetweenRows;	// IMP=0x0000000000ee4fd9
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)arg1;	// IMP=0x0000000000ee4fd0
- (double)defaultIndentationWidthForSidebarStyle:(_Bool)arg1;	// IMP=0x0000000000ee4fc2
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 trailingAccessoryGroup:(_Bool)arg4;	// IMP=0x0000000000ee4dd9
- (double)defaultCellCornerRadius;	// IMP=0x0000000000ee4dcb
- (double)defaultDisclosureLayoutWidthForView:(id)arg1;	// IMP=0x0000000000ee4dc2
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg1;	// IMP=0x0000000000ee4db0
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000ee4d9b
- (double)_symbolImageLayoutSizeForTraitCollection:(id)arg1;	// IMP=0x0000000000ee4d14
- (double)defaultInterAccessoryPaddingForCell:(id)arg1 trailingAccessoryGroup:(_Bool)arg2;	// IMP=0x0000000000ee4d02
- (double)defaultCellContentTrailingPadding;	// IMP=0x0000000000ee4cf0
- (double)defaultCellContentLeadingPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000000ee4cde
- (double)defaultContentAccessoryPadding;	// IMP=0x0000000000ee4cd0
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee4cc7
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee4cbe
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee4cb6
- (struct UIEdgeInsets)defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)arg1;	// IMP=0x0000000000ee4c4c
- (struct UIEdgeInsets)defaultCellLayoutMarginsForStyle:(long long)arg1 textLabelFont:(id)arg2 rawLayoutMargins:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000ee4bfc
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee49a0
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000ee498b
- (double)_defaultNeighborPadding;	// IMP=0x0000000000ee497d
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;	// IMP=0x0000000000ee496f
- (double)defaultImageToTextPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000000ee495d
- (double)defaultSectionFooterHeightForTableView:(id)arg1;	// IMP=0x0000000000ee48a3
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000000ee47e9
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000000ee46ec
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000000ee464a
- (_Bool)defaultRowHeightDependsOnCellStyle;	// IMP=0x0000000000ee4642
- (double)defaultRowHeightForTableView:(id)arg1;	// IMP=0x0000000000ee462e
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x0000000000ee4613
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;	// IMP=0x0000000000ee460b
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000ee4603
- (struct _UITableConstantsBackgroundProperties)defaultSidebarHeaderBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(_Bool)arg3;	// IMP=0x0000000000ee450d
- (struct _UITableConstantsBackgroundProperties)defaultSidebarCellBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(_Bool)arg3;	// IMP=0x0000000000ee4417
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2;	// IMP=0x0000000000ee41a2
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000000ee4168
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;	// IMP=0x0000000000ee4160
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000000ee4147
- (_Bool)supportsUserInterfaceStyles;	// IMP=0x0000000000ee413f
- (id)variantForActive:(_Bool)arg1;	// IMP=0x0000000000ee4136
- (id)sidebarVariant;	// IMP=0x0000000000ee412d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
