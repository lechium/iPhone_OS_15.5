//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUIFoundation/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

@interface SRUIFTreeNode : NSObject <NSFastEnumeration>
{
    id _item;	// 8 = 0x8
    SRUIFTreeNode *_parentNode;	// 16 = 0x10
    NSMutableArray *_childNodes;	// 24 = 0x18
}

+ (id)absoluteIndexPathsForTreeNodes:(id)arg1;	// IMP=0x00000000000123b5
- (void).cxx_destruct;	// IMP=0x0000000000013916
@property(readonly, nonatomic, getter=_childNodes) NSMutableArray *childNodes; // @synthesize childNodes=_childNodes;
@property(nonatomic, setter=_setParentNode:) __weak SRUIFTreeNode *parentNode; // @synthesize parentNode=_parentNode;
@property(retain, nonatomic) id item; // @synthesize item=_item;
- (void)enumerateDescendentNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001377b
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000013714
- (void)enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000136fd
- (void)enumerateChildNodesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001362b
- (void)replaceChildNodeAtIndex:(long long)arg1 withNode:(id)arg2;	// IMP=0x00000000000135c7
- (void)removeChildNode:(id)arg1;	// IMP=0x000000000001353c
- (void)removeChildNodeAtIndex:(long long)arg1;	// IMP=0x000000000001348e
- (void)addChildNode:(id)arg1;	// IMP=0x000000000001340c
- (void)insertChildNode:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000132bd
- (id)lastChildNode;	// IMP=0x000000000001326d
- (id)childNodeAtIndex:(long long)arg1;	// IMP=0x000000000001320e
- (long long)indexOfChildNode:(id)arg1;	// IMP=0x0000000000013197
- (long long)numberOfChildNodes;	// IMP=0x0000000000013153
- (void)removeFromParentNode;	// IMP=0x0000000000013107
- (id)indexPathOfNodeWithItem:(id)arg1;	// IMP=0x0000000000012dc1
- (id)nodeAtIndexPath:(id)arg1;	// IMP=0x0000000000012ce6
- (_Bool)containsNodeAtIndexPath:(id)arg1;	// IMP=0x0000000000012bca
- (id)absoluteIndexPath;	// IMP=0x0000000000012adf
- (id)indexPathFromAncestorNode:(id)arg1;	// IMP=0x0000000000012954
- (id)description;	// IMP=0x00000000000128fb
- (void)_appendDescriptionToString:(id)arg1 withIndentation:(id)arg2;	// IMP=0x00000000000125e9
- (id)init;	// IMP=0x0000000000012583

@end

