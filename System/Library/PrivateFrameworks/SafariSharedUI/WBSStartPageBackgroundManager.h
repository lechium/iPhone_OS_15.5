//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_queue;

@interface WBSStartPageBackgroundManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_imageSavingQueue;	// 16 = 0x10
    RetainPtr_c27edd19 _prefetchedImage;	// 24 = 0x18
    RetainPtr_c27edd19 _prefetchedImageThumbnail;	// 32 = 0x20
    NSURL *_prefetchedImageURL;	// 40 = 0x28
    NSString *_lastPrefetchedFilePath;	// 48 = 0x30
    _Atomic long long _prefetchingCoalescingDelay;	// 56 = 0x38
    double _prefetchedImageLuminance;	// 64 = 0x40
    NSURL *_imageURL;	// 72 = 0x48
    long long _appearance;	// 80 = 0x50
    RetainPtr_c27edd19 _image;	// 88 = 0x58
}

+ (id)ciColorKernel;	// IMP=0x0000000000121519
+ (void)warmUp;	// IMP=0x000000000011f1de
+ (id)defaultManager;	// IMP=0x000000000011f0fa
- (id).cxx_construct;	// IMP=0x0000000000122048
- (void).cxx_destruct;	// IMP=0x0000000000121fbd
- (RetainPtr_c27edd19)analyzeImageAndThresholdIfNecessary:(struct CGImage *)arg1 thumbnail:(struct CGImage *)arg2 precomputedLuminance:(double)arg3 appearance:(long long *)arg4;	// IMP=0x0000000000121e92
- (RetainPtr_c27edd19)normalizeImage:(RetainPtr_c27edd19)arg1 imageSource:(RetainPtr_f3a3e1f4)arg2 properties:(id)arg3;	// IMP=0x0000000000121cbc
- (RetainPtr_c27edd19)assignImage:(RetainPtr_c27edd19)arg1 oldImage:(RetainPtr_c27edd19)arg2;	// IMP=0x0000000000121c72
- (RetainPtr_c27edd19)thresholdImage:(struct CGImage *)arg1 minValue:(double)arg2 maxValue:(double)arg3 multiplier:(double)arg4;	// IMP=0x000000000012191c
- (id)ciContext;	// IMP=0x00000000001217bd
@property(readonly, copy, nonatomic) NSString *prefetchedImageName;
@property(readonly, nonatomic) RetainPtr_c27edd19 prefetchedImageThumbnail;
- (long long)appearanceIfImageExists:(_Bool)arg1;	// IMP=0x000000000012133e
- (long long)appearanceForImage:(RetainPtr_c27edd19)arg1;	// IMP=0x0000000000121321
- (long long)appearanceForLuminance:(double)arg1;	// IMP=0x0000000000121317
@property(readonly, nonatomic) RetainPtr_c27edd19 image; // @synthesize image=_image;
- (void)prefetchImage:(id)arg1 luminance:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001211c7
- (void)prefetchImage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001211b1
- (void)_prefetchImage:(id)arg1 luminance:(double)arg2 completion:(CDUnknownBlockType)arg3 withNanoSecondDelay:(long long)arg4;	// IMP=0x0000000000120b4f
- (void)clearImage;	// IMP=0x0000000000120adf
- (void)clearPrefetchedImage;	// IMP=0x0000000000120a6a
- (void)_clearPrefetchedImage;	// IMP=0x0000000000120a26
- (void)cacheImageFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000120a0d
- (void)_processImage;	// IMP=0x000000000012085d
- (void)_commitImage:(RetainPtr_c27edd19)arg1 appearanceName:(long long)arg2;	// IMP=0x00000000001206ef
- (void)commitPrefetchedImageWithLuminance:(double)arg1;	// IMP=0x000000000012056e
- (void)_updateThumbnailIfNeeded;	// IMP=0x00000000001203cd
- (void)_saveImage:(RetainPtr_c27edd19)arg1 appearance:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000011fb7f
- (void)processImage;	// IMP=0x000000000011fb15
- (void)_setImageOnAnyQueue:(RetainPtr_c27edd19)arg1 withAppearance:(long long)arg2;	// IMP=0x000000000011f956
- (void)_setImage:(RetainPtr_c27edd19)arg1 withAppearance:(long long)arg2;	// IMP=0x000000000011f8dd
- (void)_setExtendedAttributesOnBackgroundImage;	// IMP=0x000000000011f786
- (void)_loadImageFromDisk;	// IMP=0x000000000011f394
- (void)loadImageFromDisk;	// IMP=0x000000000011f333
- (id)initWithImageURL:(id)arg1;	// IMP=0x000000000011f200

@end

