//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRTree, CRWeakReference, NSArray;

@interface CRTreeNode
{
    CRTree *_tree;	// 8 = 0x8
    NSArray *_children;	// 16 = 0x10
}

+ (id)CRProperties;	// IMP=0x000000000005079d
- (void).cxx_destruct;	// IMP=0x0000000000050fb1
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic) __weak CRTree *tree; // @synthesize tree=_tree;
- (void)removeNode:(id)arg1;	// IMP=0x0000000000050ecb
- (void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x0000000000050e50
- (id)insertNodeWithValue:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000050dc4
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000050cdd
- (_Bool)isLoopNode;	// IMP=0x0000000000050aed
- (_Bool)isInLoop;	// IMP=0x0000000000050a5e
@property(nonatomic) __weak CRTreeNode *parent;
- (id)parentReference;	// IMP=0x000000000005088b
- (id)initWithValue:(id)arg1 parent:(id)arg2 tree:(id)arg3;	// IMP=0x0000000000050681

// Remaining properties
@property(retain, nonatomic) CRWeakReference *parentRef; // @dynamic parentRef;
@property(retain, nonatomic) id value; // @dynamic value;

@end
