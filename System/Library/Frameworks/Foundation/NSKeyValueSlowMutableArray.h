//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableArray
{
    NSKeyValueGetter *_valueGetter;	// 24 = 0x18
    NSKeyValueSetter *_valueSetter;	// 32 = 0x20
    _Bool _treatNilValuesLikeEmptyArrays;	// 40 = 0x28
    char _padding[3];	// 41 = 0x29
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000000a54c1
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000000a544b
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000000a53e4
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a537d
- (void)removeLastObject;	// IMP=0x00000000000a531b
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000000a52bb
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000000a509c
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000a4f84
- (void)addObject:(id)arg1;	// IMP=0x00000000000a4e82
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000000a4e4e
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a4e1a
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000a4dd2
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000000a4d7e
- (unsigned long long)count;	// IMP=0x00000000000a4d11
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000000a4c7c
- (void)_proxyNonGCFinalize;	// IMP=0x00000000000a4bef
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000000a4b1d

@end

