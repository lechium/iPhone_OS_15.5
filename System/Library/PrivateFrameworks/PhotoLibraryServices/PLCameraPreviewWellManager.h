//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSString, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLCameraPreviewWellManager : NSObject
{
    NSMutableArray *_workQueue;	// 8 = 0x8
    struct os_unfair_lock_s _queueLock;	// 16 = 0x10
    _Bool _active;	// 20 = 0x14
    struct os_unfair_lock_s _activeLock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    PLPhotoLibrary *_photoLibrary;	// 40 = 0x28
    _Bool _currentPreviewWellMetadataIsLoaded;	// 48 = 0x30
    NSString *_currentPreviewWellAssetUUID;	// 56 = 0x38
    NSDate *_currentPreviewWellAddedDate;	// 64 = 0x40
    double _currentPreviewWellSortToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000d53f3
- (void)refreshPreviewWellImage;	// IMP=0x00000000000d53a0
- (void)considerAssetForPreviewWellChanges:(id)arg1;	// IMP=0x00000000000d528e
- (void)_processChange:(id)arg1;	// IMP=0x00000000000d51de
- (void)_inqProcessAssetChanges;	// IMP=0x00000000000d4934
- (void)_saveImageAndNotify:(struct CGImage *)arg1 assetUUID:(id)arg2;	// IMP=0x00000000000d47bc
- (void)_clearPreviewWellAndNotify;	// IMP=0x00000000000d4584
- (void)_fetchPreviewWellAssetWithAssetHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d44ec
- (void)_fetchPreviewWellMetadataIfNeeded;	// IMP=0x00000000000d431f
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00000000000d4204

@end
