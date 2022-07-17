//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPRequest;

__attribute__((visibility("hidden")))
@interface VNHumanPoseDetector
{
    VCPRequest *_humanPoseDetector;	// 8 = 0x8
}

+ (Class)recognizedPointsObservationClass;	// IMP=0x00000000000d8cf9
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00000000000d8c96
- (void).cxx_destruct;	// IMP=0x00000000000d99ca
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d922f
- (id)vcpPoseRequestRuntimeOptionsForDetectorOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d8f99
- (id)vcpPoseRequestSetupOptionsForDetectorOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d8df7

@end
