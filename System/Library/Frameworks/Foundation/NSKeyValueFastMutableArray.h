//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueMutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray
{
    NSKeyValueMutatingArrayMethodSet *_mutatingMethods;	// 24 = 0x18
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000000a4509
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000000a438f
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000000a42fd
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a425e
- (void)removeLastObject;	// IMP=0x00000000000a422c
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000000a419a
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000a407c
- (void)addObject:(id)arg1;	// IMP=0x00000000000a403c
- (void)_proxyNonGCFinalize;	// IMP=0x00000000000a3fcb
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000000a3f3e

@end

