//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class LPApplePhotosMomentMetadata, NSString, PHFetchResult, PHPhotoLibrary;

__attribute__((visibility("hidden")))
@interface LPApplePhotosMetadataProviderSpecialization <PXPhotoLibraryUIChangeObserver>
{
    _Bool _cancelled;	// 8 = 0x8
    int _pendingImageRequest;	// 12 = 0xc
    PHPhotoLibrary *_photoLibrary;	// 16 = 0x10
    PHFetchResult *_keyAssetFetch;	// 24 = 0x18
    PHFetchResult *_anyAssetFetch;	// 32 = 0x20
    LPApplePhotosMomentMetadata *_metadata;	// 40 = 0x28
}

+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;	// IMP=0x000000000005de1b
+ (unsigned long long)specialization;	// IMP=0x000000000005de10
- (void).cxx_destruct;	// IMP=0x000000000005f240
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x000000000005f09b
- (void)didFetchAsset:(id)arg1;	// IMP=0x000000000005ecce
- (void)completeWithMetadata:(id)arg1;	// IMP=0x000000000005eb03
- (void)fail;	// IMP=0x000000000005ea32
- (void)cancel;	// IMP=0x000000000005e8f4
- (void)start;	// IMP=0x000000000005df6b
- (void)dealloc;	// IMP=0x000000000005deda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

