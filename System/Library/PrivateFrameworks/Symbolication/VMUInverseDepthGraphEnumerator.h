//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VMUDepthGraph;

@interface VMUInverseDepthGraphEnumerator
{
    VMUDepthGraph *_depthGraph;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003214b
- (id)statusDisplayDescription;	// IMP=0x000000000003213e
- (void)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031fe3
- (id)initWithGraph:(id)arg1 depthGraph:(id)arg2;	// IMP=0x0000000000031f54

@end

