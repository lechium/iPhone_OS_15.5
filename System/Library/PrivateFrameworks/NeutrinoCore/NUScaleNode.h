//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUScaleNode
{
    long long _sampleMode;	// 8 = 0x8
    CDStruct_1e2b2e48 _targetScale;	// 16 = 0x10
    CDStruct_1e2b2e48 _effectiveScale;	// 32 = 0x20
}

@property(readonly) CDStruct_912cb5d2 effectiveScale; // @synthesize effectiveScale=_effectiveScale;
@property(readonly) CDStruct_912cb5d2 targetScale; // @synthesize targetScale=_targetScale;
- (id)_evaluateImageGeometry:(out id *)arg1;	// IMP=0x00000000000e4381
- (id)_evaluateImage:(out id *)arg1;	// IMP=0x00000000000e3e2f
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;	// IMP=0x00000000000e34e9
- (id)_settingsWithTargetScale:(CDStruct_912cb5d2)arg1 effectiveScale:(CDStruct_912cb5d2)arg2 sampleMode:(long long)arg3;	// IMP=0x00000000000e324b
- (id)initWithPipelineState:(id)arg1 input:(id)arg2;	// IMP=0x00000000000e31a6
- (id)initWithTargetScale:(CDStruct_912cb5d2)arg1 effectiveScale:(CDStruct_912cb5d2)arg2 sampleMode:(long long)arg3 input:(id)arg4;	// IMP=0x00000000000e2a6c
- (id)initWithScale:(CDStruct_912cb5d2)arg1 sampleMode:(long long)arg2 input:(id)arg3;	// IMP=0x00000000000e2a3e
- (id)initWithInput:(id)arg1 settings:(id)arg2;	// IMP=0x00000000000e26b8

@end

