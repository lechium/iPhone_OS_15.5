//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUSourceNode;

@interface NUSourceContainerNode
{
}

+ (id)sourceContainerNodeFromSource:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000008989c
- (_Bool)isEqualToRenderNode:(id)arg1;	// IMP=0x0000000000089839
- (unsigned long long)_hash;	// IMP=0x0000000000089827
- (id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(CDStruct_912cb5d2 *)arg2 error:(out id *)arg3;	// IMP=0x00000000000894d2
- (id)sourceNodeForPipelineState:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000008917d
- (id)preparedSourceNodeForPipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(out id *)arg4;	// IMP=0x0000000000088a73
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;	// IMP=0x00000000000886ed
- (id)initWithAssetIdentifier:(id)arg1;	// IMP=0x0000000000088319

// Remaining properties
@property(readonly) NUSourceNode *primarySourceNode; // @dynamic primarySourceNode;

@end

