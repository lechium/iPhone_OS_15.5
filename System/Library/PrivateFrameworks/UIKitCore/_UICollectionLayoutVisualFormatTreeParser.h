//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, _UICollectionLayoutVisualTreeNode;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisualFormatTreeParser : NSObject
{
    _UICollectionLayoutVisualTreeNode *_root;	// 8 = 0x8
    NSArray *_visualFormats;	// 16 = 0x10
}

+ (id)treeParserWithVisualFormats:(id)arg1;	// IMP=0x00000000002923c4
- (void).cxx_destruct;	// IMP=0x00000000002932f8
@property(copy, nonatomic) NSArray *visualFormats; // @synthesize visualFormats=_visualFormats;
@property(retain, nonatomic) _UICollectionLayoutVisualTreeNode *root; // @synthesize root=_root;
- (id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)arg1;	// IMP=0x0000000000292f01
- (id)_nodeForParser:(id)arg1 withParserDict:(id)arg2 size:(id)arg3;	// IMP=0x0000000000292a0f
- (id)_parse;	// IMP=0x0000000000292632
- (void)_visitChildrenOfNodeDepthFirst:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002924a3
- (void)enumerateTreeNodesDepthFirstUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000029248a
- (id)description;	// IMP=0x000000000029240d
- (id)initWithVisualFormats:(id)arg1;	// IMP=0x00000000002922a8

@end

