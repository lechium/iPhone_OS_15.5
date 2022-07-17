//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VKCaptureTextAnalysisRequest;
@protocol OS_dispatch_queue;

@interface VKCaptureTextAnalyzer : NSObject
{
    _Bool _shouldCreateFeedbackProviders;	// 8 = 0x8
    _Bool __processing;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *__processingQueue;	// 16 = 0x10
    VKCaptureTextAnalysisRequest *__pendingRequest;	// 24 = 0x18
    VKCaptureTextAnalysisRequest *__processingRequest;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000022538
@property(nonatomic, getter=_isProcessing, setter=_setProcessing:) _Bool _processing; // @synthesize _processing=__processing;
@property(retain, nonatomic, setter=_setProcessingRequest:) VKCaptureTextAnalysisRequest *_processingRequest; // @synthesize _processingRequest=__processingRequest;
@property(retain, nonatomic, setter=_setPendingRequest:) VKCaptureTextAnalysisRequest *_pendingRequest; // @synthesize _pendingRequest=__pendingRequest;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_processingQueue; // @synthesize _processingQueue=__processingQueue;
@property(nonatomic) _Bool shouldCreateFeedbackProviders; // @synthesize shouldCreateFeedbackProviders=_shouldCreateFeedbackProviders;
- (id)_documentRecognitionRequestWithInputBlocks:(id)arg1;	// IMP=0x000000000002240c
- (id)_documentRecognitionRequestWithInputBlock:(id)arg1;	// IMP=0x0000000000022352
- (id)_documentDetectionRequest;	// IMP=0x00000000000222f9
- (id)_imageAnalysisForDocument:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x0000000000022250
- (id)_blocksIntersectingQuad:(id)arg1 inDocument:(id)arg2;	// IMP=0x0000000000021f05
- (void)_didProcessRequest:(id)arg1 withDetectionResult:(id)arg2 analysis:(id)arg3 error:(id)arg4;	// IMP=0x0000000000021ccd
- (void)_enqueueProcessingForRequest:(id)arg1;	// IMP=0x00000000000210e4
- (_Bool)_isCanceledRequest:(id)arg1;	// IMP=0x0000000000021041
- (void)cancelAllRequests;	// IMP=0x0000000000020f64
- (void)processRequest:(id)arg1;	// IMP=0x0000000000020e7c
- (void)dealloc;	// IMP=0x0000000000020e0a
- (id)init;	// IMP=0x0000000000020d7e

@end
