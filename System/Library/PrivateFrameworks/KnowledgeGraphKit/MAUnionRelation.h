//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MAUnionRelation
{
    NSArray *_relations;	// 8 = 0x8
}

+ (id)scanRelationWithScanner:(id)arg1;	// IMP=0x00000000000c5fce
- (void).cxx_destruct;	// IMP=0x00000000000c5fbb
@property(readonly, nonatomic) NSArray *relations; // @synthesize relations=_relations;
- (unsigned long long)hash;	// IMP=0x00000000000c5e4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c5db0
- (id)visualString;	// IMP=0x00000000000c5ba9
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 graph:(id)arg2;	// IMP=0x00000000000c59c1
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graph:(id)arg3;	// IMP=0x00000000000c5820
- (id)inverse;	// IMP=0x00000000000c5656
- (id)initWithRelations:(id)arg1;	// IMP=0x00000000000c55e8

@end
