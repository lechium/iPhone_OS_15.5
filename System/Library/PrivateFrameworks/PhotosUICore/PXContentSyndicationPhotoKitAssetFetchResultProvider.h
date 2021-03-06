//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>
#import <PhotosUICore/PXContentSyndicationAssetFetchResultProvider-Protocol.h>

@class NSMutableDictionary, NSString, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PXContentSyndicationPhotoKitAssetFetchResultProvider : NSObject <PHPhotoLibraryChangeObserver, PXContentSyndicationAssetFetchResultProvider>
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    CDUnknownBlockType _fetchResultBlock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    NSMutableDictionary *_observers;	// 32 = 0x20
    NSMutableDictionary *_fetchResults;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000005a918b
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x00000000005a9100
- (void)_didChangeFetchResult:(id)arg1 forAssetCollection:(id)arg2 withChangeObservers:(id)arg3;	// IMP=0x00000000005a8ee3
- (void)_serialQueue_unregisterChangeObserver:(id)arg1 forAssetCollection:(id)arg2;	// IMP=0x00000000005a8d92
- (void)_serialQueue_registerChangeObserver:(id)arg1 forAssetCollection:(id)arg2 fetchResultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000005a8ba8
- (void)_serialQueue_invalidateAssetFetchResultsInAssetCollections:(id)arg1;	// IMP=0x00000000005a8a57
- (void)_serialQueue_invalidateAllAssetFetchResults;	// IMP=0x00000000005a8a2e
- (id)_serialQueue_fetchResultAssetCollection:(id)arg1 fetchResultBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000005a87b5
- (void)invalidateAssetFetchResultsInAssetCollections:(id)arg1;	// IMP=0x00000000005a86ae
- (void)invalidateAllAssetFetchResults;	// IMP=0x00000000005a860c
- (id)assetFetchResultForAssetCollection:(id)arg1;	// IMP=0x00000000005a8389
- (void)unregisterChangeObserver:(id)arg1 forAssetCollection:(id)arg2;	// IMP=0x00000000005a80f5
- (void)registerChangeObserver:(id)arg1 forAssetCollection:(id)arg2;	// IMP=0x00000000005a7e2b
- (id)initWithPhotoLibrary:(id)arg1 fetchResultBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000005a7c16
- (id)init;	// IMP=0x00000000005a7b9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

