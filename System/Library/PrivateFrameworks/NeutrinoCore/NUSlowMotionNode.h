//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUGeometryTransform;

@interface NUSlowMotionNode
{
    float _rate;	// 8 = 0x8
    NUGeometryTransform *_geomTransform;	// 16 = 0x10
    CDStruct_e83c9415 _range;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006ebf1
@property(readonly) float rate; // @synthesize rate=_rate;
@property(readonly) CDStruct_e83c9415 range; // @synthesize range=_range;
@property(readonly) NUGeometryTransform *geomTransform; // @synthesize geomTransform=_geomTransform;
- (id)_evaluateAudioMix:(out id *)arg1;	// IMP=0x000000000006e76f
- (_Bool)requiresAudioMix;	// IMP=0x000000000006e767
- (id)_evaluateVideo:(out id *)arg1;	// IMP=0x000000000006e339
- (id)_evaluateVideoComposition:(out id *)arg1;	// IMP=0x000000000006dd6e
- (_Bool)requiresVideoComposition;	// IMP=0x000000000006dd20
- (id)_evaluateImage:(out id *)arg1;	// IMP=0x000000000006dcb7
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;	// IMP=0x000000000006dc3e
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;	// IMP=0x000000000006dc1f
- (id)_transformWithError:(out id *)arg1;	// IMP=0x000000000006d9d6
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2 input:(id)arg3;	// IMP=0x000000000006d745
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;	// IMP=0x000000000006d3bf

@end

