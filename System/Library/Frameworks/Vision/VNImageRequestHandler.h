//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNImageBuffer, VNObservationsCache, VNRequestPerformer, VNSession;

@interface VNImageRequestHandler : NSObject
{
    VNSession *_session;	// 8 = 0x8
    VNImageBuffer *_imageBuffer;	// 16 = 0x10
    VNRequestPerformer *_requestPerformer;	// 24 = 0x18
    VNObservationsCache *_observationsCache;	// 32 = 0x20
}

+ (void)forcedCleanupWithOptions:(id)arg1;	// IMP=0x0000000000258096
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000258004
+ (void)requestForcedCleanupWithOptions:(id)arg1;	// IMP=0x0000000000257f8e
+ (void)forcedCleanup;	// IMP=0x0000000000257f4a
+ (void)requestForcedCleanup;	// IMP=0x0000000000257f06
- (void).cxx_destruct;	// IMP=0x0000000000257ec8
- (_Bool)prepareForPerformingRequests:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000257eb2
- (_Bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000257e9c
- (void)cancelAllRequests;	// IMP=0x0000000000257e86
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;	// IMP=0x0000000000257db2
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 options:(id)arg2 session:(id)arg3;	// IMP=0x0000000000257d98
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;	// IMP=0x0000000000257cb4
- (id)initWithData:(id)arg1 options:(id)arg2 session:(id)arg3;	// IMP=0x0000000000257c9a
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;	// IMP=0x0000000000257bb6
- (id)initWithURL:(id)arg1 options:(id)arg2 session:(id)arg3;	// IMP=0x0000000000257b9c
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;	// IMP=0x0000000000257ab8
- (id)initWithCIImage:(id)arg1 options:(id)arg2 session:(id)arg3;	// IMP=0x0000000000257a9e
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;	// IMP=0x00000000002579ca
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2 session:(id)arg3;	// IMP=0x00000000002579b0
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;	// IMP=0x00000000002578dc
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 session:(id)arg3;	// IMP=0x00000000002578c2
- (_Bool)performRequests:(id)arg1 gatheredForensics:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000257798
- (_Bool)performRequests:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000257781
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x00000000002576f7
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 options:(id)arg2;	// IMP=0x00000000002576e0
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x0000000000257641
- (id)initWithData:(id)arg1 options:(id)arg2;	// IMP=0x000000000025762a
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x000000000025758b
- (id)initWithURL:(id)arg1 options:(id)arg2;	// IMP=0x0000000000257574
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x00000000002574d5
- (id)initWithCIImage:(id)arg1 options:(id)arg2;	// IMP=0x00000000002574be
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x0000000000257434
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;	// IMP=0x000000000025741d
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x0000000000257393
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;	// IMP=0x000000000025737c
- (id)initWithSession:(id)arg1 imageBuffer:(id)arg2;	// IMP=0x00000000002572ae

@end

