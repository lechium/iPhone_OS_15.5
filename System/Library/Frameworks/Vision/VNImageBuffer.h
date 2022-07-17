//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/VNSequencedRequestSupporting-Protocol.h>

@class CIContext, CIImage, NSDictionary, VNImageSourceManager;

@interface VNImageBuffer : NSObject <VNSequencedRequestSupporting>
{
    struct __CVBuffer *_origPixelBuffer;	// 8 = 0x8
    struct CGImage *_origCGImage;	// 16 = 0x10
    struct __CFDictionary *_pixelBufferReps;	// 24 = 0x18
    struct os_unfair_lock_s _pixelBufferRepsLock;	// 32 = 0x20
    CIImage *_origCIImage;	// 40 = 0x28
    CIContext *_passedInCIContext;	// 48 = 0x30
    struct opaqueCMSampleBuffer *_origSampleBuffer;	// 56 = 0x38
    VNImageSourceManager *_imageSourceManager;	// 64 = 0x40
    int _orientation;	// 72 = 0x48
    unsigned long long _origImageWidth;	// 80 = 0x50
    unsigned long long _origImageHeight;	// 88 = 0x58
    NSDictionary *_options;	// 96 = 0x60
}

+ (struct CGColorSpace *)copyColorspaceForFormat:(unsigned int)arg1 bitmapInfo:(unsigned int *)arg2;	// IMP=0x000000000008a746
+ (struct CGRect)computeCenterCropRectFromCropRect:(struct CGRect)arg1 inImageSize:(struct CGSize)arg2 calculatedScaleX:(double *)arg3 calculatedScaleY:(double *)arg4;	// IMP=0x000000000008a67a
+ (int)_helpReadOrientationFromOptionsDictionary:(id)arg1;	// IMP=0x000000000008a604
+ (const struct __CFDictionary *)ioSurfaceBackedPixelBufferAttributes;	// IMP=0x000000000008a5d8
+ (id)createPixelBufferRepsCacheKeyForCropRect:(struct CGRect)arg1 format:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;	// IMP=0x000000000008a591
- (void).cxx_destruct;	// IMP=0x0000000000085bd8
- (id)augmentedCroppedBuffersWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect)arg4 options:(id)arg5 augmentationOptions:(id)arg6 error:(id *)arg7;	// IMP=0x00000000000824e0
- (id)augmentedBuffersWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 augmentationOptions:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000082496
- (id)sequencedRequestPreviousObservationsKey;	// IMP=0x0000000000082410
- (_Bool)wantsSequencedRequestObservationsRecording;	// IMP=0x0000000000082408
- (void)purgeCachedRepresentations;	// IMP=0x00000000000822b6
- (struct __CVBuffer *)createCroppedBufferWithMaxSideLengthOf:(unsigned long long)arg1 andCropBounds:(struct CGRect)arg2 andPixelFormat:(unsigned int)arg3 andOptions:(id)arg4 error:(id *)arg5;	// IMP=0x000000000008213b
- (struct __CVBuffer *)createBufferWithMaxSideLengthOf:(unsigned long long)arg1 andPixelFormat:(unsigned int)arg2 andOptions:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000081f56
- (struct CGRect)makeClippedRectAgainstImageExtentUsingOriginalRect:(struct CGRect)arg1;	// IMP=0x0000000000081e8f
- (_Bool)processInChunksOfSize:(unsigned long long)arg1 overlapFraction:(float)arg2 options:(id)arg3 roi:(struct CGRect)arg4 handler:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x0000000000081775
- (id)fileURL;	// IMP=0x0000000000081751
- (id)imageProperties;	// IMP=0x0000000000081734
- (_Bool)getCameraIntrinsicsAvailable:(CDStruct_8e0628e6 *)arg1;	// IMP=0x000000000008169f
- (_Bool)getCameraOpticalCenterIfAvailable:(struct CGPoint *)arg1;	// IMP=0x00000000000815b0
- (_Bool)getPixelFocalLengthIfAvailable:(float *)arg1;	// IMP=0x00000000000814dc
@property(readonly) unsigned long long height;
@property(readonly) unsigned long long width;
@property(readonly) CDStruct_d2aef016 timingInfo;
- (int)orientation;	// IMP=0x000000000008143c
- (struct __CVBuffer *)cropAndScaleBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 cropRect:(struct CGRect)arg3 format:(unsigned int)arg4 imageCropAndScaleOption:(unsigned long long)arg5 options:(id)arg6 error:(id *)arg7 calculatedNormalizedOriginOffset:(struct CGPoint *)arg8 calculatedScaleX:(double *)arg9 calculatedScaleY:(double *)arg10 pixelBufferRepsCacheKey:(id *)arg11;	// IMP=0x0000000000080f59
- (struct __CVBuffer *)cropAndScaleBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 cropRect:(struct CGRect)arg3 format:(unsigned int)arg4 imageCropAndScaleOption:(unsigned long long)arg5 options:(id)arg6 error:(id *)arg7 calculatedNormalizedOriginOffset:(struct CGPoint *)arg8 calculatedScaleX:(double *)arg9 calculatedScaleY:(double *)arg10;	// IMP=0x0000000000080f09
- (struct __CVBuffer *)croppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect)arg4 options:(id)arg5 error:(id *)arg6 pixelBufferRepsCacheKey:(id *)arg7;	// IMP=0x000000000008055e
- (struct __CVBuffer *)croppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect)arg4 options:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000080520
- (struct __CVBuffer *)cachedPixelBufferRepresentationForKey:(id)arg1;	// IMP=0x0000000000080496
- (struct __CVBuffer *)bufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 error:(id *)arg5 pixelBufferRepsCacheKey:(id *)arg6;	// IMP=0x00000000000802e9
- (struct __CVBuffer *)bufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000802cd
- (struct CGImage *)originalCGImage;	// IMP=0x00000000000802c3
- (struct __CVBuffer *)originalPixelBuffer;	// IMP=0x00000000000802b9
- (void)dealloc;	// IMP=0x0000000000080110
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x000000000008000b
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 options:(id)arg2;	// IMP=0x000000000007fff4
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x000000000007fe67
- (id)initWithURL:(id)arg1 options:(id)arg2;	// IMP=0x000000000007fe50
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x000000000007fcc3
- (id)initWithData:(id)arg1 options:(id)arg2;	// IMP=0x000000000007fcac
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x000000000007fc32
- (id)initWithCIImage:(id)arg1 options:(id)arg2;	// IMP=0x000000000007fc1b
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x000000000007fb97
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;	// IMP=0x000000000007fb80
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x000000000007f9fa
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;	// IMP=0x000000000007f9e3

@end
