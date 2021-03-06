//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableImageRequester-Protocol.h>

@class NSString, PXImageRequest, UIImage;
@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXImageRequester <PXMutableImageRequester>
{
    struct {
        _Bool targetSize;
        _Bool imageRequest;
        _Bool isInCloud;
    } _needsUpdateFlags;	// 8 = 0x8
    _Bool _hasFullQuality;	// 11 = 0xb
    _Bool _isInCloud;	// 12 = 0xc
    id <PXUIImageProvider> _mediaProvider;	// 16 = 0x10
    id <PXDisplayAsset> _asset;	// 24 = 0x18
    double _scale;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    UIImage *_opportunisticImage;	// 48 = 0x30
    double _loadingProgress;	// 56 = 0x38
    id <PXDisplayAsset> __currentImageSourceAsset;	// 64 = 0x40
    PXImageRequest *__currentRequest;	// 72 = 0x48
    struct CGSize _contentSize;	// 80 = 0x50
    struct CGSize _maximumRequestSize;	// 96 = 0x60
    struct CGSize _viewportSize;	// 112 = 0x70
    struct CGSize __targetSize;	// 128 = 0x80
    struct CGRect _desiredContentsRect;	// 144 = 0x90
    struct CGRect _cropRect;	// 176 = 0xb0
    struct CGRect _contentsRect;	// 208 = 0xd0
}

+ (id)defaultOptions;	// IMP=0x00000000008a4593
- (void).cxx_destruct;	// IMP=0x00000000008a391a
@property(nonatomic, setter=_setTargetSize:) struct CGSize _targetSize; // @synthesize _targetSize=__targetSize;
@property(retain, nonatomic, setter=_setCurrentRequest:) PXImageRequest *_currentRequest; // @synthesize _currentRequest=__currentRequest;
@property(retain, nonatomic, setter=_setCurrentImageSourceAsset:) id <PXDisplayAsset> _currentImageSourceAsset; // @synthesize _currentImageSourceAsset=__currentImageSourceAsset;
@property(nonatomic, setter=_setLoadingProgress:) double loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(nonatomic, setter=_setIsInCloud:) _Bool isInCloud; // @synthesize isInCloud=_isInCloud;
@property(nonatomic, setter=_setHasFullQuality:) _Bool hasFullQuality; // @synthesize hasFullQuality=_hasFullQuality;
@property(readonly, nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(retain, nonatomic, setter=_setOpportunisticImage:) UIImage *opportunisticImage; // @synthesize opportunisticImage=_opportunisticImage;
@property(retain, nonatomic, setter=_setImage:) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) struct CGRect desiredContentsRect; // @synthesize desiredContentsRect=_desiredContentsRect;
@property(readonly, nonatomic) struct CGSize maximumRequestSize; // @synthesize maximumRequestSize=_maximumRequestSize;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) id <PXUIImageProvider> mediaProvider; // @synthesize mediaProvider=_mediaProvider;
- (void)_cancelRequests;	// IMP=0x00000000008a374b
@property(readonly, copy) NSString *description;
- (void)handlePreloadedImageRequester:(id)arg1;	// IMP=0x00000000008a3308
- (void)handlePreloadedImage:(id)arg1;	// IMP=0x00000000008a3253
- (void)setViewportSize:(struct CGSize)arg1;	// IMP=0x00000000008a31db
- (void)setContentsRect:(struct CGRect)arg1;	// IMP=0x00000000008a315e
- (void)setDesiredContentsRect:(struct CGRect)arg1;	// IMP=0x00000000008a30e6
- (void)setMaximumRequestSize:(struct CGSize)arg1;	// IMP=0x00000000008a307e
- (void)setScale:(double)arg1;	// IMP=0x00000000008a302d
- (void)setCropRect:(struct CGRect)arg1;	// IMP=0x00000000008a2f9e
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x00000000008a2f36
- (void)setAsset:(id)arg1;	// IMP=0x00000000008a2dfb
- (void)setMediaProvider:(id)arg1;	// IMP=0x00000000008a2d9a
- (void)_updateIsInCloudIfNeeded;	// IMP=0x00000000008a2cba
- (void)_invalidateIsInCloud;	// IMP=0x00000000008a2ca8
- (void)_handleResultOfImageRequest:(id)arg1 image:(id)arg2 info:(id)arg3;	// IMP=0x00000000008a2aca
- (void)_handleProgressForImageRequest:(id)arg1 progress:(double)arg2;	// IMP=0x00000000008a2a19
- (void)_updateImageRequestIfNeeded;	// IMP=0x00000000008a23c9
- (void)_invalidateImageRequest;	// IMP=0x00000000008a23b7
- (void)_updateTargetSizeIfNeeded;	// IMP=0x00000000008a22af
- (void)_invalidateTargetSize;	// IMP=0x00000000008a229e
- (_Bool)_needsUpdate;	// IMP=0x00000000008a227a
- (void)_updateIfNeeded;	// IMP=0x00000000008a2226
- (void)didPerformChanges;	// IMP=0x00000000008a21e5
- (id)mutableChangeObject;	// IMP=0x00000000008a21dc
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000008a21ad
- (void)dealloc;	// IMP=0x00000000008a216f
- (id)init;	// IMP=0x00000000008a20fc
- (id)initWithMediaProvider:(id)arg1 asset:(id)arg2;	// IMP=0x00000000008a1fc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

