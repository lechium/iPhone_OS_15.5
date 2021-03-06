//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableSet;

@interface VCPFaceLibraryProcessingTask : NSObject
{
    struct atomic<bool> _cancel;	// 8 = 0x8
    struct atomic<bool> _started;	// 9 = 0x9
    NSArray *_photoLibraries;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    unsigned long long _subtasks;	// 32 = 0x20
    NSMutableSet *_assetBatch;	// 40 = 0x28
    CDUnknownBlockType _progressHandler;	// 48 = 0x30
    CDUnknownBlockType _completionHandler;	// 56 = 0x38
    CDUnknownBlockType _cancelBlock;	// 64 = 0x40
}

+ (void)_logSubtasks:(unsigned long long)arg1;	// IMP=0x002000000005a024
+ (id)taskWithPhotoLibraries:(id)arg1 andOptions:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4 andCancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000059f31
- (void).cxx_destruct;	// IMP=0x0020000000063c80
- (_Bool)autoCancellable;	// IMP=0x0010000000063c78
- (int)run;	// IMP=0x0010000000062f68
- (int)_processAutoCounterForPhotoLibrary:(id)arg1;	// IMP=0x00100000000626dd
- (int)_clusterAndProcessPersonsForPhotoLibrary:(id)arg1 withContext:(id)arg2 progressMade:(_Bool *)arg3;	// IMP=0x0010000000062053
- (int)_promotePersonsForPhotoLibrary:(id)arg1;	// IMP=0x0010000000061c28
- (int)_buildPersonsForPhotoLibrary:(id)arg1 withClusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x00100000000616a6
- (int)_clusterFacesWithClusterer:(id)arg1;	// IMP=0x0010000000061273
- (int)_updateQuickFaceIDModelForPhotoLibrary:(id)arg1 withContext:(id)arg2 andQuickFaceIDManager:(id)arg3;	// IMP=0x0010000000060e5e
- (int)_generateAndDetectFaceCropsForPhotoLibrary:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000060944
- (int)_detectFacesForPhotoLibrary:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000000606bf
- (_Bool)_readyToProcessProcessLibrary:(id)arg1;	// IMP=0x00100000000603ec
- (int)completeSceneProcessing;	// IMP=0x0010000000060158
- (int)_processingLibraryWithTask:(id)arg1;	// IMP=0x001000000005fa38
- (int)_maintainProcessingStatusWithTask:(id)arg1;	// IMP=0x001000000005f42f
- (int)_analyzeAssetsWithChangeToken:(id)arg1 withTask:(id)arg2;	// IMP=0x001000000005dfe5
- (int)_queryChangeTokenCountSince:(id)arg1 count:(unsigned long long *)arg2 withTask:(id)arg3;	// IMP=0x001000000005dd21
- (int)_processLocalIdentifiers:(id)arg1 change:(id)arg2 insert:(_Bool)arg3 withTask:(id)arg4;	// IMP=0x001000000005d626
- (int)_analyzeAllAssetsWithTask:(id)arg1;	// IMP=0x001000000005cc7c
- (int)_processFetchedAssets:(id)arg1 withProcessingTask:(id)arg2 andProgressReporter:(id)arg3;	// IMP=0x001000000005c8a0
- (int)_retryFailedAssetsWithTask:(id)arg1;	// IMP=0x001000000005c570
- (int)_retryEligibleAssetsWithTask:(id)arg1 andStatus:(unsigned long long)arg2 andReporter:(id)arg3;	// IMP=0x001000000005bdb1
- (int)_streamAnalysisWithTask:(id)arg1 andProcessingStatus:(unsigned long long)arg2;	// IMP=0x001000000005b670
- (int)_screenLocalIdentifiers:(id)arg1 withTask:(id)arg2 andPreviousStatus:(unsigned long long)arg3 andProgressReporter:(id)arg4;	// IMP=0x001000000005ab00
- (int)_addBatchWithAsset:(id)arg1 isRetry:(_Bool)arg2 withTask:(id)arg3;	// IMP=0x001000000005a0f8
- (_Bool)isCancelled;	// IMP=0x001000000005a0d4
- (void)cancel;	// IMP=0x001000000005a0c9
- (float)resourceRequirement;	// IMP=0x001000000005a0bb
- (void)dealloc;	// IMP=0x001000000005a02a
- (id)initWithPhotoLibraries:(id)arg1 andOptions:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4 andCancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000059c8e
- (id)init;	// IMP=0x0010000000059c80

@end

