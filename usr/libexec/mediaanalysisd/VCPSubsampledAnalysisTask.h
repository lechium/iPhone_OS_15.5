//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPBatchAnalysisTask, VCPDatabaseWriter, VCPPhotosAssetChangeManager;

@interface VCPSubsampledAnalysisTask
{
    VCPDatabaseWriter *_database;	// 8 = 0x8
    VCPPhotosAssetChangeManager *_changeManager;	// 16 = 0x10
    VCPBatchAnalysisTask *_pendingBatch;	// 24 = 0x18
    unsigned long long _highlightCount;	// 32 = 0x20
    unsigned long long _memoryCountPerAssetType;	// 40 = 0x28
    _Bool _networkAvailable;	// 48 = 0x30
}

+ (id)taskWithPhotoLibrary:(id)arg1 options:(id)arg2;	// IMP=0x00400000000a504c
- (void).cxx_destruct;	// IMP=0x00200000000a7d31
- (int)mainInternal;	// IMP=0x00100000000a74b3
- (unsigned long long)queryMemoryCount;	// IMP=0x00100000000a741d
- (unsigned long long)queryHighlightCount;	// IMP=0x00100000000a7369
- (int)processMemorieswithProgressReporter:(id)arg1;	// IMP=0x00100000000a6fd9
- (int)processMemoriesWithAssetPredicate:(id)arg1 andProgressReporter:(id)arg2;	// IMP=0x00100000000a6cd8
- (int)processMemory:(id)arg1 withAssetPredicate:(id)arg2 andAnalyzedAssetCount:(unsigned long long *)arg3;	// IMP=0x00100000000a698f
- (id)memorySpecificFetchOptions;	// IMP=0x00100000000a68e1
- (int)processHighlightsOfTypes:(long long)arg1 withHighlightPredicate:(id)arg2 andLimit:(_Bool)arg3 andProgressReporter:(id)arg4;	// IMP=0x00100000000a65e0
- (int)processHighlightsOfTypes:(long long)arg1 withHighlightPredicate:(id)arg2 assetPredicate:(id)arg3 andLimit:(_Bool)arg4 andProgressReporter:(id)arg5;	// IMP=0x00100000000a60ff
- (int)processHighlight:(id)arg1 withAssetPredicate:(id)arg2 andLimit:(_Bool)arg3;	// IMP=0x00100000000a59e8
- (int)processAsset:(id)arg1 skipped:(_Bool *)arg2;	// IMP=0x00100000000a51e2
- (int)processPendingBatch;	// IMP=0x00100000000a5188
- (void)resetPendingBatch;	// IMP=0x00100000000a50c2
- (id)initWithPhotoLibrary:(id)arg1 options:(id)arg2;	// IMP=0x00100000000a4f82

@end
