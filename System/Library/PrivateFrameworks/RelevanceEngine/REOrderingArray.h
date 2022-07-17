//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, REDependencyGraph;

@interface REOrderingArray : NSObject
{
    NSArray *_orderedObjects;	// 8 = 0x8
    REDependencyGraph *_dependencyGraph;	// 16 = 0x10
    _Bool _needsUpdate;	// 24 = 0x18
    unsigned long long _batchCount;	// 32 = 0x20
    NSArray *_comparators;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002dba7
@property(readonly, nonatomic) NSArray *comparators; // @synthesize comparators=_comparators;
- (void)_updateContentOrder;	// IMP=0x000000000002dac4
- (void)_performOrMarkUpdate;	// IMP=0x000000000002daa5
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;	// IMP=0x000000000002da48
- (void)sortAllObjects;	// IMP=0x000000000002da36
- (void)updateObject:(id)arg1;	// IMP=0x000000000002d9b3
- (void)removeObject:(id)arg1;	// IMP=0x000000000002d981
- (void)addObject:(id)arg1;	// IMP=0x000000000002d910
- (void)_createDependenciesForObject:(id)arg1;	// IMP=0x000000000002d730
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000002d71a
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002d704
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000002d6ee
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000002d6d8
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithComparators:(id)arg1;	// IMP=0x000000000002d615

@end
