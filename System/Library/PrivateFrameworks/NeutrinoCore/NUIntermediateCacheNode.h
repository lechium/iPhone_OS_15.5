//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUIntermediateCacheNode
{
}

- (id)_evaluateVideoComposition:(out id *)arg1;	// IMP=0x0000000000112ba6
- (id)_evaluateVideo:(out id *)arg1;	// IMP=0x0000000000112b47
- (id)_evaluateImage:(out id *)arg1;	// IMP=0x0000000000112ac2
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000112a39
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;	// IMP=0x0000000000112842

@end
