//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSProgress, PUActivityProgressController;

__attribute__((visibility("hidden")))
@interface PUDuplicateActionController : NSObject
{
    long long _itemCount;	// 8 = 0x8
    NSMutableArray *_resourceLocalAvailabilityRequests;	// 16 = 0x10
    _Bool __canDuplicate;	// 24 = 0x18
    _Bool __canExtractStill;	// 25 = 0x19
    _Bool __didCheckDuplicateCapabilities;	// 26 = 0x1a
    NSDictionary *__assetsByAssetCollection;	// 32 = 0x20
    NSProgress *__overallProgress;	// 40 = 0x28
    NSProgress *__downloadingProgress;	// 48 = 0x30
    NSProgress *__duplicatingProgress;	// 56 = 0x38
    PUActivityProgressController *__progressController;	// 64 = 0x40
    CDUnknownBlockType __onFinishDownloadCompletionHandler;	// 72 = 0x48
}

+ (void)_presentDuplicationWasInterruptedWithItemCount:(long long)arg1 hasPhotos:(_Bool)arg2 hasVideos:(_Bool)arg3;	// IMP=0x0000000000114218
+ (_Bool)canPerformDuplicateActionOnAssets:(id)arg1 orAssetsByAssetCollection:(id)arg2;	// IMP=0x000000000011404e
- (void).cxx_destruct;	// IMP=0x0000000000112c53
@property(copy, nonatomic, setter=_setOnFinishDownloadCompletionHandler:) CDUnknownBlockType _onFinishDownloadCompletionHandler; // @synthesize _onFinishDownloadCompletionHandler=__onFinishDownloadCompletionHandler;
@property(retain, nonatomic, setter=_setProgressController:) PUActivityProgressController *_progressController; // @synthesize _progressController=__progressController;
@property(retain, nonatomic, setter=_setDuplicatingProgress:) NSProgress *_duplicatingProgress; // @synthesize _duplicatingProgress=__duplicatingProgress;
@property(retain, nonatomic, setter=_setDownloadingProgress:) NSProgress *_downloadingProgress; // @synthesize _downloadingProgress=__downloadingProgress;
@property(retain, nonatomic, setter=_setOverallProgress:) NSProgress *_overallProgress; // @synthesize _overallProgress=__overallProgress;
@property(nonatomic, setter=_setDidCheckDuplicateCapabilities:) _Bool _didCheckDuplicateCapabilities; // @synthesize _didCheckDuplicateCapabilities=__didCheckDuplicateCapabilities;
@property(readonly, copy, nonatomic) NSDictionary *_assetsByAssetCollection; // @synthesize _assetsByAssetCollection=__assetsByAssetCollection;
- (void)_checkHasPhotos:(_Bool *)arg1 hasVideos:(_Bool *)arg2;	// IMP=0x00000000001129a8
- (void)_handleProgressUserCancellation;	// IMP=0x000000000011296b
- (void)_finishedDuplicationWithSuccess:(_Bool)arg1;	// IMP=0x00000000001128b9
- (void)_finishedDownloadWithSuccess:(_Bool)arg1;	// IMP=0x000000000011281f
- (void)_overallProgressIsCancelledDidChange;	// IMP=0x00000000001127b4
- (void)_overallProgressFractionCompletedDidChange;	// IMP=0x000000000011268e
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000011246a
- (void)_handlePhotoLibraryDuplicationCompletionWithSuccess:(_Bool)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011227a
- (void)_performPhotoLibraryChangeForAction:(long long)arg1 newStillImageTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000111fb6
- (void)_downloadResourcesForDuplicateAction:(long long)arg1 newStillImageTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000111db7
- (void)_handleOperationCompletionWithError:(id)arg1;	// IMP=0x0000000000111c16
- (void)performDuplicateAction:(long long)arg1 newStillImageTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001118ab
- (_Bool)_validateOriginalAssetResourcesForDuplicateAction:(long long)arg1;	// IMP=0x00000000001117c9
@property(readonly, nonatomic) _Bool _canExtractStill; // @synthesize _canExtractStill=__canExtractStill;
@property(readonly, nonatomic) _Bool _canDuplicate; // @synthesize _canDuplicate=__canDuplicate;
- (void)_checkDuplicateCapabilities;	// IMP=0x00000000001115f9
- (id)alertControllerForDuplicateActionWithPreview:(_Bool)arg1 newStillImageTime:(CDStruct_1b6d18a9)arg2 userConfirmationHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011119e
@property(readonly, nonatomic) _Bool shouldUseAlertController;
- (void)dealloc;	// IMP=0x000000000011114c
- (id)initWithAssetsByAssetCollection:(id)arg1;	// IMP=0x00000000001110d9
- (id)init;	// IMP=0x00000000001110c5

@end
