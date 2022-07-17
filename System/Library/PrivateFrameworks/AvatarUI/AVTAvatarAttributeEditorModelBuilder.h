//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVTAvatarAttributeEditorModelBuilder : NSObject
{
}

+ (id)sectionOptionFromModelOptions:(id)arg1;	// IMP=0x00000000000b3cdc
+ (id)firstColorSectionInSections:(id)arg1;	// IMP=0x00000000000b3c20
+ (id)tagSetForTagNames:(id)arg1 inTagSet:(id)arg2;	// IMP=0x00000000000b39de
+ (void)setTags:(id)arg1 onMutableTagSet:(id)arg2;	// IMP=0x00000000000b38dd
+ (void)addTags:(id)arg1 toMutableTagSet:(id)arg2;	// IMP=0x00000000000b379d
+ (int)scoreForTags:(id)arg1 forCombination:(id)arg2 currentSelection:(id)arg3;	// IMP=0x00000000000b33e8
+ (void)insertPreset:(id)arg1 intoList:(id)arg2 forSortingOption:(unsigned long long)arg3;	// IMP=0x00000000000b3358
+ (id)filterPresets:(id)arg1 matchingTagValues:(id)arg2 sortedUsing:(unsigned long long)arg3;	// IMP=0x00000000000b2efb
+ (id)tagSetByRemovingTagNames:(id)arg1 fromTagSet:(id)arg2;	// IMP=0x00000000000b2d80
+ (id)tagCombinationsForTagNames:(id)arg1 availableTags:(id)arg2;	// IMP=0x00000000000b280f
+ (id)filterPresets:(id)arg1 forRowRepresentingTags:(id)arg2 currentTagSelection:(id)arg3 fixedTags:(id)arg4 availableTags:(id)arg5 sortingOption:(unsigned long long)arg6;	// IMP=0x00000000000b21c0
+ (id)framingModeForRow:(id)arg1 selectedPreset:(id)arg2;	// IMP=0x00000000000b1e53
+ (unsigned long long)sectionDisplayModeForCoreModelDisplayMode:(unsigned long long)arg1;	// IMP=0x00000000000b1e44
+ (id)sectionForModelRow:(id)arg1 fromModelPresets:(id)arg2 selectedModelPreset:(id)arg3 tagSelection:(id)arg4 fixedTags:(id)arg5 availableTags:(id)arg6 category:(long long)arg7 imageProvider:(id)arg8 stickerRenderer:(id)arg9 configuration:(id)arg10 previousSection:(id)arg11 pairedCategory:(long long)arg12;	// IMP=0x00000000000b10aa
+ (id)sectionColorItemsForColors:(id)arg1 selectedPreset:(id)arg2 configuration:(id)arg3 modelManager:(id)arg4 additionalUpdateKind:(CDStruct_597dd055)arg5 imageProvider:(id)arg6 colorLayerProvider:(id)arg7 pairedCategory:(long long)arg8 editingColors:(id)arg9;	// IMP=0x00000000000b0a6c
+ (id)selectedPresetForCoreModelColorsPicker:(id)arg1 isEnabled:(_Bool)arg2 fallbackToColorsPicker:(id)arg3 colorDefaultsProvider:(id)arg4 modelManager:(id)arg5;	// IMP=0x00000000000b05fa
+ (id)subtitleFromSubtitles:(id)arg1 forIndex:(long long)arg2 enabledIndex:(long long)arg3;	// IMP=0x00000000000b0514
+ (id)multicolorSectionProviderForCoreMulticolorPicker:(id)arg1 platform:(unsigned long long)arg2 configuration:(id)arg3 imageProvider:(id)arg4 colorLayerProvider:(id)arg5 editingColors:(id)arg6 colorDefaultsProvider:(id)arg7 modelManager:(id)arg8 previousSectionMap:(id)arg9 pairingPickers:(id)arg10;	// IMP=0x00000000000ae96e
+ (id)sectionForModelColorsRow:(id)arg1 selectedColorPreset:(id)arg2 configuration:(id)arg3 modelManager:(id)arg4 additionalAvatarUpdateKind:(CDStruct_597dd055)arg5 imageProvider:(id)arg6 colorLayerProvider:(id)arg7 pairedCategory:(long long)arg8 destination:(long long)arg9 editingColors:(id)arg10 displaysTitle:(_Bool)arg11;	// IMP=0x00000000000ae4ae
+ (id)sectionForModelColorsRow:(id)arg1 configuration:(id)arg2 modelManager:(id)arg3 imageProvider:(id)arg4 colorLayerProvider:(id)arg5 pairedCategory:(long long)arg6 destination:(long long)arg7 editingColors:(id)arg8 displaysTitle:(_Bool)arg9;	// IMP=0x00000000000ae2db
+ (id)selectedModelPresetForSelectedPreset:(id)arg1 inPresetsList:(id)arg2;	// IMP=0x00000000000ae0d7
+ (id)previewModeForCoreModelGroup:(id)arg1;	// IMP=0x00000000000adf2a
+ (id)sectionProvidersForCoreModelCategory:(id)arg1 platform:(unsigned long long)arg2 modelManager:(id)arg3 pairingPickers:(id)arg4 editingColors:(id)arg5 colorDefaultsProvider:(id)arg6 previousSectionMap:(id)arg7 imageProvider:(id)arg8 colorLayerProvider:(id)arg9 stickerRenderer:(id)arg10 configuration:(id)arg11 displayConditionEvaluator:(CDUnknownBlockType)arg12;	// IMP=0x00000000000ad028
+ (id)buildDataSourceCategoriesFromCoreModel:(id)arg1 selectingFromAvatarConfiguration:(id)arg2 imageProvider:(id)arg3 colorLayerProvider:(id)arg4 stickerRenderer:(id)arg5 modelManager:(id)arg6 withSelectedCategory:(id)arg7 atIndex:(unsigned long long)arg8;	// IMP=0x00000000000ac7a4
+ (unsigned long long)destinationForPresetCategory:(long long)arg1 isPaired:(_Bool)arg2;	// IMP=0x00000000000ac754

@end
