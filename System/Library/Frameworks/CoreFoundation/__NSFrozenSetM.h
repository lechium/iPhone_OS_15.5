//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSFrozenSetM
{
    CDStruct_af6d7307 storage;	// 8 = 0x8
    _Atomic struct __cow_state_t *cow;	// 24 = 0x18
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012bb4a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012bcc0
- (id)mutableCopy;	// IMP=0x000000000012bc18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012bc13
- (id)copy;	// IMP=0x000000000012bc0e
- (void)dealloc;	// IMP=0x000000000012bb4f
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000012bab5
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000012b939
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000012b88a
- (double)clumpingInterestingThreshold;	// IMP=0x000000000012b832
- (double)clumpingFactor;	// IMP=0x000000000012b624
- (id)objectEnumerator;	// IMP=0x000000000012b5ca
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x000000000012b4bb
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000012b3af
- (id)member:(id)arg1;	// IMP=0x000000000012b2a8
- (unsigned long long)count;	// IMP=0x000000000012b297

@end

