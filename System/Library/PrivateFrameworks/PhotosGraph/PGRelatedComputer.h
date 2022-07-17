//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, PGManagerWorkingContext;
@protocol OS_os_log;

@interface PGRelatedComputer : NSObject
{
    PGManagerWorkingContext *_workingContext;	// 8 = 0x8
    NSSet *_blockedFeatures;	// 16 = 0x10
    NSObject<OS_os_log> *_loggingConnection;	// 24 = 0x18
}

+ (id)searchNodesInGraph:(id)arg1 forAsset:(id)arg2 inMoment:(id)arg3;	// IMP=0x0000000000588c20
+ (id)stringFromPGRelatedType:(unsigned long long)arg1;	// IMP=0x0000000000588b5e
- (void).cxx_destruct;	// IMP=0x000000000058323e
- (void)_generateTitleForRelatedResults:(id)arg1 withGraph:(id)arg2 referenceEvent:(id)arg3 referenceAsset:(id)arg4;	// IMP=0x0000000000582635
- (id)_referenceAssetWithLocalIdentifier:(id)arg1;	// IMP=0x00000000005824e2
- (_Bool)exportMatchingResultsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id *)arg4;	// IMP=0x000000000058239f
- (_Bool)exportMatchingResultsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id *)arg4;	// IMP=0x000000000058225c
- (id)_fileURLForMomentNode:(id)arg1 inGraph:(id)arg2 relatedType:(unsigned long long)arg3 focusOnAsset:(id)arg4 toURL:(id)arg5;	// IMP=0x0000000000581fd6
- (id)_stringFromRelatedType:(unsigned long long)arg1;	// IMP=0x0000000000581f45
- (id)_weekendsForTargetDomain:(unsigned short)arg1 inGraph:(id)arg2;	// IMP=0x0000000000581d45
- (id)_tripsForTargetDomain:(unsigned short)arg1 inGraph:(id)arg2;	// IMP=0x0000000000581b45
- (id)_diverseResultsFromMatchingResults:(id)arg1 inGraph:(id)arg2 timeShuffleDate:(id)arg3 matchingOptions:(id)arg4 options:(id)arg5;	// IMP=0x000000000057e5e5
- (id)_postProcessMatchingResults:(id)arg1 inGraph:(id)arg2 matchingOptions:(id)arg3 options:(id)arg4;	// IMP=0x000000000057c25e
- (id)relatedCollectionBetweenAssetCollection:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(_Bool)arg4;	// IMP=0x000000000057be83
- (id)_relatedCollectionBetweenHighlight:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(_Bool)arg4 needsDiversityInfo:(_Bool)arg5;	// IMP=0x000000000057bce2
- (id)_relatedCollectionBetweenMoment:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(_Bool)arg4 needsDiversityInfo:(_Bool)arg5;	// IMP=0x000000000057bb41
- (id)relatedCollectionBetweenAsset:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(_Bool)arg4;	// IMP=0x000000000057b9a4
- (id)relatedCollectionsForPersonLocalIdentifiers:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000057b4de
- (id)_relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 error:(id *)arg5;	// IMP=0x000000000057a7c8
- (id)relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000057a7a6
- (id)_relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 error:(id *)arg5;	// IMP=0x00000000005798b3
- (id)_upNextCollectionsForAssetCollection:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000578f00
- (id)relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000578ede
- (id)relatedCollectionsForAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000578864
- (id)relatedCollectionsForHighlight:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 generateTitles:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00000000005783b2
- (id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 generateTitles:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000577f00
- (id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000577edb
- (id)relatedCollectionsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000577827
- (id)initWithWorkingContext:(id)arg1 blockedFeatures:(id)arg2;	// IMP=0x0000000000577768

@end
