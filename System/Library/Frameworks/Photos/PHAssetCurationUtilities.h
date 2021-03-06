//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHAssetCurationUtilities : NSObject
{
}

+ (id)filteredAndSortedPreviewAssetsByScoreFromAssets:(id)arg1 targetSize:(struct CGSize)arg2;	// IMP=0x0000000000160831
+ (id)previewCandidatesFromAssets:(id)arg1;	// IMP=0x00000000001601fa
+ (id)internalPredicateToIncludeReceivedNotEligibleSyndicatedAssets;	// IMP=0x00000000001600de
+ (id)internalPredicateToIncludeReceivedNotAnalyzedSyndicatedAssets;	// IMP=0x000000000015fe72
+ (id)internalPredicateToIncludeOnlySentSyndicatedAssets;	// IMP=0x000000000015fe06
+ (id)internalPredicateToIncludeOnlyReceivedSyndicatedAssets;	// IMP=0x000000000015fded
+ (id)internalPredicateToFilterSyndicatedAssetsEligibleForGuestInferenceProcessing;	// IMP=0x000000000015fc96
+ (id)internalPredicateToFilterSyndicatedAssetsEligibleForCurationProcessing;	// IMP=0x000000000015fb8c
+ (id)internalPredicateToFilterGuestSyndicatedAssetsEligibleForQuestion;	// IMP=0x000000000015f9aa
+ (id)internalPredicateToFilterSyndicatedAssetsEligibleForQuestion;	// IMP=0x000000000015f7e5
+ (id)internalPredicateToFilterAssetsEligibleForSyndication;	// IMP=0x000000000015f6d0
+ (id)syndicationEligibilityForAssets:(id)arg1;	// IMP=0x000000000015f433
+ (double)_tabooVersion50ConfidenceThresholdForIdentifier:(unsigned int)arg1;	// IMP=0x000000000015f411
+ (double)_tabooVersion33ConfidenceThresholdForIdentifier:(unsigned int)arg1;	// IMP=0x000000000015f3ef
+ (_Bool)_isTabooEventIdentifier:(unsigned int)arg1;	// IMP=0x000000000015f3d0
+ (double)tabooEventConfidenceThresholdForIdentifier:(unsigned int)arg1 forSceneAnalysisVersion:(unsigned long long)arg2;	// IMP=0x000000000015f343
+ (double)NSFWGeneralConfidenceThresholdForSceneAnalysisVersion:(unsigned long long)arg1;	// IMP=0x000000000015f2be
+ (_Bool)assetIsSafeForWidgetDisplay:(id)arg1;	// IMP=0x000000000015eff9
+ (id)assetsShowcasingFoodWithoutFacesInAssets:(id)arg1;	// IMP=0x000000000015ea75

@end

