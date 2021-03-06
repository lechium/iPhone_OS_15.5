//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableArray
{
    struct objc_ivar *_ivar;	// 24 = 0x18
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000000a5c4e
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000000a5c0b
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000000a5bd7
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a5ba3
- (void)removeLastObject;	// IMP=0x00000000000a5b75
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000000a597f
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000a588d
- (void)addObject:(id)arg1;	// IMP=0x00000000000a57d1
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000000a579d
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a5769
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000a5721
- (id)_nonNilMutableArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000000a56cc
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000000a5656
- (unsigned long long)count;	// IMP=0x00000000000a561e
- (void)_proxyNonGCFinalize;	// IMP=0x00000000000a55bb
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000000a5537

@end

