//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSSimilarStacker, PGManagerWorkingContext, PHPhotoLibrary;

@interface PGSyndicationProcessor : NSObject
{
    PGManagerWorkingContext *_workingContext;	// 8 = 0x8
    CLSSimilarStacker *_similarStacker;	// 16 = 0x10
    PHPhotoLibrary *_syndicationLibrary;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002468b6
- (id)similarStacker;	// IMP=0x0000000000246869
- (id)_bestAssetUUIDInAssetCluster:(id)arg1;	// IMP=0x00000000002465b0
- (id)duplicateAssetUUIDsForSuggesterResult:(id)arg1 assetsInferredAsGuestAsset:(id)arg2 syndicationLibrary:(id)arg3 error:(id *)arg4 progressBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000245291
- (id)guestAssetSenderIdentifiersByMomentUUIDForMomentUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x0000000000244bca
- (_Bool)processSyndicatedAssetGuestInferenceWithError:(id *)arg1 progressBlock:(CDUnknownBlockType)arg2 shareBackSuggester:(id)arg3;	// IMP=0x00000000002439fa
- (_Bool)processSyndicatedAssetGuestInferenceWithError:(id *)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002439e5
- (_Bool)processSavedSyndicatedAssetsWithError:(id *)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000024274e
- (void)_persistCurationScores:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x00000000002425d1
- (_Bool)processSyndicatedAssetCurationWithError:(id *)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000241a7f
- (id)syndicationPhotoLibraryWithError:(id *)arg1;	// IMP=0x000000000024192f
- (id)initWithWorkingContext:(id)arg1 syndicationLibrary:(id)arg2;	// IMP=0x00000000002418d0
- (id)initWithWorkingContext:(id)arg1;	// IMP=0x0000000000241865

@end
