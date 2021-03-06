//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLSpotlightProgressManager : NSObject
{
}

+ (id)_progressFilePathForPhotoLibraryPathManager:(id)arg1;	// IMP=0x0000000000287ee3
+ (id)_readProgressFromDiskForPhotoLibraryPathManager:(id)arg1;	// IMP=0x0000000000287d8c
+ (_Bool)_writeProgressToDisk:(id)arg1 forPhotoLibraryPathManager:(id)arg2;	// IMP=0x0000000000287b25
+ (id)_minimumScheduledDateForNextReindexRetry;	// IMP=0x0000000000287a1e
+ (_Bool)_shouldRetryReindexWithScheduledDateOf:(id)arg1;	// IMP=0x000000000028799d
+ (_Bool)_shouldRetryRequestWithMostRecentAttemptOf:(id)arg1;	// IMP=0x0000000000287901
+ (id)_updateFailureCountsForSearchableItemIdentifiers:(id)arg1 shouldIncrementCounts:(_Bool)arg2 forPhotoLibraryPathManager:(id)arg3;	// IMP=0x00000000002875e8
+ (id)_storageKeyForOperationType:(unsigned long long)arg1;	// IMP=0x00000000002875c2
+ (_Bool)_addSearchableItemIdentifiers:(id)arg1 operationType:(unsigned long long)arg2 forPhotoLibraryPathManager:(id)arg3 isRetry:(_Bool)arg4;	// IMP=0x000000000028700b
+ (void)spotlightProgressForPhotoLibraryPathManager:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000286dca
+ (_Bool)deleteSpotlightProgressForPhotoLibraryPathManager:(id)arg1;	// IMP=0x0000000000286b05
+ (_Bool)shouldPerformSpotlightOperationsWithPhotoLibraryPathManager:(id)arg1;	// IMP=0x0000000000286863
+ (_Bool)shouldPerformSpotlightOperationOfType:(unsigned long long)arg1 withSearchableItemIdentifiers:(id)arg2 photoLibraryPathManager:(id)arg3;	// IMP=0x00000000002864f7
+ (_Bool)shouldReindexSpotlightIndexForPhotoLibraryPathManager:(id)arg1;	// IMP=0x00000000002862fa
+ (_Bool)setSpotlightIndexNeedsReindexing:(_Bool)arg1 forPhotoLibraryPathManager:(id)arg2;	// IMP=0x00000000002860f1
+ (_Bool)spotlightResetOperationCompletedForPhotoLibraryPathManager:(id)arg1 success:(_Bool)arg2;	// IMP=0x0000000000285e5e
+ (_Bool)removeSearchableItemIdentifiers:(id)arg1 forPhotoLibraryPathManager:(id)arg2;	// IMP=0x0000000000285a56
+ (_Bool)addSearchableItemIdentifiers:(id)arg1 forOperationType:(unsigned long long)arg2 forPhotoLibraryPathManager:(id)arg3;	// IMP=0x0000000000285844
+ (_Bool)spotlightOperationCompletedForOperationType:(unsigned long long)arg1 withSearchableIdentifiers:(id)arg2 forPhotoLibraryPathManager:(id)arg3 success:(_Bool)arg4;	// IMP=0x00000000002854ef

@end

