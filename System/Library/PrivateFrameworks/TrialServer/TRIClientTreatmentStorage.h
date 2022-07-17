//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TRIAssetExtracting, TRIPaths;

@interface TRIClientTreatmentStorage : NSObject
{
    id <TRIPaths> _paths;	// 8 = 0x8
    id <TRIAssetExtracting> _extractor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010aa47
- (_Bool)_resolveAssetPathsInTreatment:(id)arg1 usingReferenceURL:(id)arg2;	// IMP=0x000000000010a623
- (id)urlForTreatmentWithTreatmentId:(id)arg1;	// IMP=0x000000000010a487
- (id)_copyFileFromURL:(id)arg1 to:(id)arg2;	// IMP=0x000000000010a1b3
- (id)_baseUrlForTreatment:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000010a10f
- (id)_assetURLForFactor:(id)arg1 treatmentId:(id)arg2;	// IMP=0x0000000000109ef3
- (id)_defaultsAssetURLForFactor:(id)arg1;	// IMP=0x0000000000109eda
- (_Bool)_saveNamespacePartitionedTreatmentsForTreatment:(id)arg1 forNamespaceNames:(id)arg2 forRollouts:(_Bool)arg3;	// IMP=0x000000000010962c
- (_Bool)_linkAssetsUpdatingTreatment:(id)arg1 forRollouts:(_Bool)arg2;	// IMP=0x0000000000108cec
- (_Bool)_deleteOnDemandAssetsWithIndexes:(id)arg1 treatment:(id)arg2 forRollouts:(_Bool)arg3;	// IMP=0x00000000001084e4
- (_Bool)_savePersistedTreatment:(id)arg1;	// IMP=0x0000000000108150
- (id)urlForDefaultFactorsWithNamespaceName:(id)arg1;	// IMP=0x0000000000108134
- (id)urlForFactorsWithTreatmentId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x0000000000107fd8
- (_Bool)_removeFactorsWithURL:(id)arg1;	// IMP=0x0000000000107b55
- (_Bool)_removeRolloutWithDescriptor:(id)arg1 descriptorDir:(id)arg2 treatmentLayer:(unsigned long long)arg3 namespaceName:(id)arg4;	// IMP=0x0000000000107a3d
- (_Bool)_removeFactorsWithTreatmentId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x00000000001079ea
- (_Bool)removeTreatmentWithTreatmentId:(id)arg1;	// IMP=0x000000000010745c
- (_Bool)removeTreatmentFromLayer:(unsigned long long)arg1 withNamespaceName:(id)arg2 upgradeNCVs:(id)arg3;	// IMP=0x0000000000106e9b
- (id)updateSavedTreatmentWithTreatmentId:(id)arg1 deletingAssetsIndexes:(id)arg2 forNamespaceNames:(id)arg3 forRollouts:(_Bool)arg4;	// IMP=0x0000000000106d38
- (id)_linkAssetWithId:(id)arg1 treatmentId:(id)arg2 assetStore:(id)arg3 factor:(id)arg4 forRollouts:(_Bool)arg5;	// IMP=0x0000000000106ac5
- (_Bool)_linkAssetsWithIds:(id)arg1 updatingTreatment:(id)arg2;	// IMP=0x00000000001065cc
- (id)updateSavedTreatmentWithTreatmentId:(id)arg1 linkingNewAssetIds:(id)arg2 forNamespaceNames:(id)arg3;	// IMP=0x0000000000106432
- (id)saveTreatment:(id)arg1;	// IMP=0x0000000000105cd5
- (id)loadTreatmentWithTreatmentId:(id)arg1 isFilePresent:(_Bool *)arg2;	// IMP=0x0000000000105735
- (id)initWithPaths:(id)arg1 extractor:(id)arg2;	// IMP=0x000000000010569c
- (id)initWithPaths:(id)arg1;	// IMP=0x0000000000105625
- (id)init;	// IMP=0x000000000010561f

@end
