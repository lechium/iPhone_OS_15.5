//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSMutableArray, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UIUpdateVisibleCellsContext : NSObject
{
    NSMutableArray *_sizes;	// 8 = 0x8
    NSMutableArray *_attributes;	// 16 = 0x10
    NSMutableArray *_indexPaths;	// 24 = 0x18
    NSMutableIndexSet *_sectionIndexes;	// 32 = 0x20
    long long _visibleCellsRefCount;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003822ce
@property(readonly, nonatomic) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
@property(readonly, nonatomic) NSArray *sizes; // @synthesize sizes=_sizes;
@property(readonly, nonatomic) NSArray *attributes;
@property(readonly, nonatomic) _Bool hasLeftVisibleCellsPass;
- (void)didLeaveVisibleCellsPass;	// IMP=0x0000000000382294
- (void)didEnterVisibleCellsPass;	// IMP=0x000000000038228a
@property(readonly, nonatomic) NSIndexSet *sectionIndexes;
- (id)description;	// IMP=0x0000000000382023
- (_Bool)shouldInvalidate;	// IMP=0x0000000000381ff1
- (void)addPreferredAttributes:(id)arg1;	// IMP=0x0000000000381d3a
- (id)init;	// IMP=0x0000000000381c8f

@end
