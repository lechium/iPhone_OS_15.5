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

+ (void)_logSubtasks:(unsigned long long)arg1;	// IMP=0x002000000005a004
+ (id)taskWithPhotoLibraries:(id)arg1 andOptions:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4 andCancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000059f11
- (void).cxx_destruct;	// IMP=0x0020000000063c60
- (_Bool)autoCancellable;	// IMP=0x0010000000063c58
- (int)run;	// IMP=0x0010000000062f48
- (int)_processAutoCounterForPhotoLibrary:(id)arg1;	// IMP=0x00100000000626bd
- (int)_clusterAndProcessPersonsForPhotoLibrary:(id)arg1 withContext:(id)arg2 progressMade:(_Bool *)arg3;	// IMP=0x0010000000062033
- (int)_promotePersonsForPhotoLibrary:(id)arg1;	// IMP=0x0010000000061c08
- (int)_buildPersonsForPhotoLibrary:(id)arg1 withClusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x0010000000061686
- (int)_clusterFacesWithClusterer:(id)arg1;	// IMP=0x0010000000061253
- (int)_updateQuickFaceIDModelForPhotoLibrary:(id)arg1 withContext:(id)arg2 andQuickFaceIDManager:(id)arg3;	// IMP=0x0010000000060e3e
- (int)_generateAndDetectFaceCropsForPhotoLibrary:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000060924
- (int)_detectFacesForPhotoLibrary:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000006069f
- (_Bool)_readyToProcessProcessLibrary:(id)arg1;	// IMP=0x00100000000603cc
- (int)completeSceneProcessing;	// IMP=0x0010000000060138
- (int)_processingLibraryWithTask:(id)arg1;	// IMP=0x001000000005fa18
- (int)_maintainProcessingStatusWithTask:(id)arg1;	// IMP=0x001000000005f40f
- (int)_analyzeAssetsWithChangeToken:(id)arg1 withTask:(id)arg2;	// IMP=0x001000000005dfc5
- (int)_queryChangeTokenCountSince:(id)arg1 count:(unsigned long long *)arg2 withTask:(id)arg3;	// IMP=0x001000000005dd01
- (int)_processLocalIdentifiers:(id)arg1 change:(id)arg2 insert:(_Bool)arg3 withTask:(id)arg4;	// IMP=0x001000000005d606
- (int)_analyzeAllAssetsWithTask:(id)arg1;	// IMP=0x001000000005cc5c
- (int)_processFetchedAssets:(id)arg1 withProcessingTask:(id)arg2 andProgressReporter:(id)arg3;	// IMP=0x001000000005c880
- (int)_retryFailedAssetsWithTask:(id)arg1;	// IMP=0x001000000005c550
- (int)_retryEligibleAssetsWithTask:(id)arg1 andStatus:(unsigned long long)arg2 andReporter:(id)arg3;	// IMP=0x001000000005bd91
- (int)_streamAnalysisWithTask:(id)arg1 andProcessingStatus:(unsigned long long)arg2;	// IMP=0x001000000005b650
- (int)_screenLocalIdentifiers:(id)arg1 withTask:(id)arg2 andPreviousStatus:(unsigned long long)arg3 andProgressReporter:(id)arg4;	// IMP=0x001000000005aae0
- (int)_addBatchWithAsset:(id)arg1 isRetry:(_Bool)arg2 withTask:(id)arg3;	// IMP=0x001000000005a0d8
- (_Bool)isCancelled;	// IMP=0x001000000005a0b4
- (void)cancel;	// IMP=0x001000000005a0a9
- (float)resourceRequirement;	// IMP=0x001000000005a09b
- (void)dealloc;	// IMP=0x001000000005a00a
- (id)initWithPhotoLibraries:(id)arg1 andOptions:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4 andCancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000059c6e
- (id)init;	// IMP=0x0010000000059c60

@end
