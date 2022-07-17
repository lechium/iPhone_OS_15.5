//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNSupportedImageSize;

@interface VNNOPRequest
{
}

+ (Class)configurationClass;	// IMP=0x000000000010cb7d
- (id)supportedImageSizeSet;	// IMP=0x000000000010c935
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010c6ba
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x000000000010c648
- (_Bool)hasCancellationHook;	// IMP=0x000000000010c640
@property(nonatomic) double detectorExecutionTimeInterval;
@property(nonatomic) _Bool detectorWantsAnisotropicScaling;
@property(copy, nonatomic) VNSupportedImageSize *detectorPreferredImageSize;
- (_Bool)_performNOPForRevision:(unsigned long long)arg1 inContext:(id)arg2 detectorCompletionSemaphore:(id)arg3 error:(id *)arg4;	// IMP=0x000000000010c0a4
- (struct __CVBuffer *)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 inPixelFormat:(unsigned int)arg2 forDetectorInputImageSize:(struct CGSize)arg3 usingAnisotropicScaling:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000010bdeb
- (struct __CVBuffer *)_createScaledImagePixelBufferFromCropRect:(struct CGRect)arg1 ofImageBuffer:(id)arg2 inPixelFormat:(unsigned int)arg3 forDetectorInputImageSize:(struct CGSize)arg4 usingAnisotropicScaling:(_Bool)arg5 error:(id *)arg6;	// IMP=0x000000000010bb53
- (struct CGSize)_actualSizeForDesiredSize:(id)arg1 ofSourceImageWidth:(unsigned long long)arg2 height:(unsigned long long)arg3;	// IMP=0x000000000010b859

@end
