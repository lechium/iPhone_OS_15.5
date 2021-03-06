//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSFastEnumeration-Protocol.h>

@class NSMapTable;

@interface BRCMinHeap : NSObject <NSFastEnumeration>
{
    id *_array;	// 8 = 0x8
    unsigned long long _size;	// 16 = 0x10
    CDUnknownBlockType _comparator;	// 24 = 0x18
    unsigned long long _mutation;	// 32 = 0x20
    NSMapTable *_objects;	// 40 = 0x28
    unsigned long long _count;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000005982c
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)objectWeightChanged:(id)arg1;	// IMP=0x0000000000059752
- (void)firstObjectWeightChanged;	// IMP=0x0000000000059728
- (void)removeAllObjects;	// IMP=0x00000000000596dd
- (void)removeFirstObject;	// IMP=0x0000000000059645
- (void)removeObject:(id)arg1;	// IMP=0x0000000000059504
- (void)addObject:(id)arg1;	// IMP=0x00000000000593f1
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000000593ba
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000005938f
- (id)firstObject;	// IMP=0x0000000000059373
- (void)_moveUpOrDown:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000000005926f
- (void)_moveDown:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000000000590aa
- (void)_moveUp:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000000058f20
- (_Bool)check;	// IMP=0x0000000000058e6e
- (void)_shrink;	// IMP=0x0000000000058e25
- (void)dealloc;	// IMP=0x0000000000058dde
- (id)description;	// IMP=0x0000000000058d1d
- (id)initWithComparator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000058c83
- (id)init;	// IMP=0x0000000000058bf7

@end

