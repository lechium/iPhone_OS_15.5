//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHConcurrentMapTable;

@interface PUReviewAssetsMediaProvider
{
    _Atomic int _nextRequestIdentifier;	// 8 = 0x8
    double __screenScale;	// 16 = 0x10
    PHConcurrentMapTable *__mediaRequests;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000395533
@property(readonly, nonatomic) PHConcurrentMapTable *_mediaRequests; // @synthesize _mediaRequests=__mediaRequests;
@property(readonly, nonatomic) double _screenScale; // @synthesize _screenScale=__screenScale;
- (void)cancelImageRequest:(int)arg1;	// IMP=0x0000000000395434
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003950a5
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000394d70
- (int)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000394b74
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000039481e
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003944c8
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000394294
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000039402b
- (id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(struct CGSize)arg3 bakeInOrientation:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000393d1a
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000003938f7
- (int)_requestAdjustmentDataForAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000393719
- (int)_incrementRequestIdentifier;	// IMP=0x0000000000393700
- (id)init;	// IMP=0x0000000000393622

@end
