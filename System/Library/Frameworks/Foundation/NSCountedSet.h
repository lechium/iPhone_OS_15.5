//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableSet.h>

@interface NSCountedSet : NSMutableSet
{
    id _table;	// 8 = 0x8
    void *_reserved;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000077b22
- (void)dealloc;	// IMP=0x0000000000078911
- (id)initWithSet:(id)arg1;	// IMP=0x00000000000788bf
- (id)initWithArray:(id)arg1;	// IMP=0x000000000007886d
- (id)initWithSet:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x0000000000078763
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000786d9
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000007869f
- (id)init;	// IMP=0x000000000007868b
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x00000000000785d3
- (Class)classForCoder;	// IMP=0x00000000000785c9
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x0000000000078265
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000077b2a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000077835
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000077738
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000007766c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007763b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007760a
- (void)removeAllObjects;	// IMP=0x00000000000775ba
- (void)removeObject:(id)arg1;	// IMP=0x0000000000077488
- (void)addObject:(id)arg1;	// IMP=0x0000000000077354
- (id)objectEnumerator;	// IMP=0x00000000000772e7
- (id)member:(id)arg1;	// IMP=0x0000000000077232
- (unsigned long long)count;	// IMP=0x00000000000771e2

@end

