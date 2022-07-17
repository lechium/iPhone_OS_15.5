//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAsset, NSArray, NSDictionary, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface NUVideoSourceNode
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _loaded;	// 16 = 0x10
    NSURL *_URL;	// 24 = 0x18
    AVAsset *_asset;	// 32 = 0x20
    CDStruct_1b6d18a9 _duration;	// 40 = 0x28
    CDStruct_d58201db _size;	// 64 = 0x40
    CDStruct_996ac03c _cleanAperture;	// 80 = 0x50
    long long _orientation;	// 112 = 0x70
    CDStruct_d58201db _disparitySize;	// 120 = 0x78
    NSArray *_metadata;	// 136 = 0x88
    NSDictionary *_colorProperties;	// 144 = 0x90
    CDStruct_1b6d18a9 _livePhotoKeyFrameTime;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000001b959
- (_Bool)requiresAudioMix;	// IMP=0x000000000001b951
- (_Bool)requiresVideoComposition;	// IMP=0x000000000001b930
- (id)_evaluateTimedMetadataSampleWithIdentifier:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 error:(out id *)arg3;	// IMP=0x000000000001b6d1
- (id)_evaluateVideoAttributes:(out id *)arg1;	// IMP=0x000000000001b654
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000001b3ca
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000001ae19
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;	// IMP=0x000000000001aa80
- (id)_settingsForPipelineState:(id)arg1 ownedFrame:(_Bool)arg2;	// IMP=0x000000000001a70f
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;	// IMP=0x0000000000019d06
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id *)arg5;	// IMP=0x0000000000019878
- (_Bool)supportsPipelineState:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000019405
- (id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000018e63
- (id)_evaluateVideo:(out id *)arg1;	// IMP=0x0000000000018245
@property(readonly) CDStruct_996ac03c cleanAperture;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;	// IMP=0x00000000000179b9
@property(readonly) _Bool isHDR;
@property(readonly) CDStruct_1b6d18a9 duration;
- (id)asset:(out id *)arg1;	// IMP=0x00000000000175b1
- (_Bool)load:(out id *)arg1;	// IMP=0x000000000001750a
- (_Bool)_load:(out id *)arg1;	// IMP=0x00000000000169ca
- (id)sourceOptionsForSettings:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000167f0
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;	// IMP=0x00000000000167e8
- (long long)sourceOrientation;	// IMP=0x000000000001648f
- (id)initWithSettings:(id)arg1;	// IMP=0x0000000000016113
- (id)initWithURL:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000000159be

@end
