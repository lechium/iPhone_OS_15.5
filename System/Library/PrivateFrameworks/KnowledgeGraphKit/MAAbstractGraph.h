//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MAAbstractGraph : NSObject
{
    NSMutableArray *_nodes;	// 8 = 0x8
    NSMutableArray *_edges;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000013d6d6
- (id)insertEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 minimum:(unsigned long long)arg4 maximum:(unsigned long long)arg5 directed:(_Bool)arg6;	// IMP=0x000000000013d3c1
- (id)insertNodeWithLabel:(id)arg1;	// IMP=0x000000000013d161
- (id)init;	// IMP=0x000000000013d0ec

@end
