//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSArray;

@interface REPriorityQueue : NSObject <NSCopying>
{
    struct __CFBinaryHeap *_binaryHeap;	// 8 = 0x8
    CDUnknownBlockType _comparator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000df7e8
@property(readonly, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
- (void)enumerateObjects:(CDUnknownBlockType)arg1;	// IMP=0x00000000000df799
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000000df782
- (void)removeMinimumObject;	// IMP=0x00000000000df774
- (void)removeAllObjects;	// IMP=0x00000000000df766
- (void)insertObject:(id)arg1;	// IMP=0x00000000000df755
@property(readonly, nonatomic) id minimumObject;
@property(readonly, copy, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000000000df600
- (void)dealloc;	// IMP=0x00000000000df5c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000df50b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000df369
- (unsigned long long)hash;	// IMP=0x00000000000df357
- (id)initWithComparator:(CDUnknownBlockType)arg1;	// IMP=0x00000000000df29c
- (id)init;	// IMP=0x00000000000df26e

@end

