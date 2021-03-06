//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateInterval, NSSet, PGGraphLocationNode, PGGraphLocationNodeCollection;

@interface PGPotentialPastSupersetMemory
{
    PGGraphLocationNode *_supersetLocationNode;	// 8 = 0x8
    NSDateInterval *_supersetDateInterval;	// 16 = 0x10
    NSSet *_interestingMomentNodes;	// 24 = 0x18
    PGGraphLocationNodeCollection *_supersetLocationNodes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004244ec
@property(retain) PGGraphLocationNodeCollection *supersetLocationNodes; // @synthesize supersetLocationNodes=_supersetLocationNodes;
@property(readonly) NSSet *interestingMomentNodes; // @synthesize interestingMomentNodes=_interestingMomentNodes;
@property(readonly) NSDateInterval *supersetDateInterval; // @synthesize supersetDateInterval=_supersetDateInterval;
@property(readonly) PGGraphLocationNode *supersetLocationNode; // @synthesize supersetLocationNode=_supersetLocationNode;
- (id)memoryFeatureNodesInGraph:(id)arg1;	// IMP=0x00000000004242d7
- (unsigned long long)memoryCategorySubcategory;	// IMP=0x00000000004242cc
- (unsigned long long)memoryCategory;	// IMP=0x00000000004242c1
- (id)initWithSupersetLocationNode:(id)arg1 supersetDateInterval:(id)arg2 interestingMomentNodes:(id)arg3 momentNodes:(id)arg4;	// IMP=0x00000000004241dd

@end

