//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUImageTransform3D;

@interface NUTransform3DNode
{
    NUImageTransform3D *_transform;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001dec5c
- (id)_transformWithError:(out id *)arg1;	// IMP=0x00000000001de907
- (id)debugQuickLookObject;	// IMP=0x00000000001de891
- (id)_evaluateImage:(out id *)arg1;	// IMP=0x00000000001ddc63
- (id)_evaluateImageGeometry:(out id *)arg1;	// IMP=0x00000000001dd904
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;	// IMP=0x00000000001dd8a2
- (id)initWithTransform3D:(id)arg1 input:(id)arg2;	// IMP=0x00000000001dd768
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;	// IMP=0x00000000001dd3e2

@end

