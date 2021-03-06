//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRDocument, CROrderedSet, CRTreeNode;

@interface CRTree
{
}

+ (id)CRProperties;	// IMP=0x000000000005132a
- (void)computeChildren;	// IMP=0x0000000000051d0e
- (void)invalidateChildren;	// IMP=0x0000000000051cb3
- (void)mergeWith:(id)arg1;	// IMP=0x0000000000051c72
- (void)setDocument:(id)arg1;	// IMP=0x0000000000051bb7
@property(readonly, nonatomic) CRDocument *document;
- (void)removeNode:(id)arg1;	// IMP=0x00000000000519c3
- (void)moveNode:(id)arg1 toParent:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000051845
- (void)setNodeTree:(id)arg1 insertAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000051611
- (void)insertNode:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000005156b
- (id)insertNodeWithValue:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000514ce
- (unsigned long long)insertIndexForNode:(id)arg1 childIndex:(unsigned long long)arg2;	// IMP=0x00000000000513bd
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) CRTreeNode *root;
@property(readonly, nonatomic) CROrderedSet *nodes;
- (id)initWithCRCoder:(id)arg1;	// IMP=0x0000000000051094
- (id)init;	// IMP=0x0000000000050fe0

@end

