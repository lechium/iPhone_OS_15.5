//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetectorRevision2
{
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x000000000023eb23
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x000000000023eb16
+ (unsigned char)landmarkDetectorDNNVersion;	// IMP=0x000000000023eb0b
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000023e6d2

@end

