//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NULivePhotoKeyFrameMetaDataNode
{
    CDStruct_1b6d18a9 _timeFromAdjustment;	// 8 = 0x8
}

- (id)_evaluateImage:(out id *)arg1;	// IMP=0x00000000000268e5
- (id)_evaluateVideoProperties:(out id *)arg1;	// IMP=0x00000000000264f8
- (id)_evaluateVideo:(out id *)arg1;	// IMP=0x0000000000026077
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;	// IMP=0x0000000000026019
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;	// IMP=0x0000000000025ffa
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;	// IMP=0x0000000000025c74
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 input:(id)arg2;	// IMP=0x0000000000025815

@end
