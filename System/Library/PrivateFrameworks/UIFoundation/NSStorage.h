//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSStorage : NSObject
{
    id _storage;	// 8 = 0x8
    long long _hintCapacity;	// 16 = 0x10
    unsigned long long _reserved[4];	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x000000000008eae4
- (void)enumerateElementsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008ed30
- (id)description;	// IMP=0x000000000008ed12
- (void)addElement:(void *)arg1;	// IMP=0x000000000008eccd
- (void)insertElement:(void *)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000008ecb3
- (void *)pointerToElement:(unsigned long long)arg1 directlyAccessibleElements:(struct _NSRange *)arg2;	// IMP=0x000000000008ec9f
- (void)removeElementsInRange:(struct _NSRange)arg1;	// IMP=0x000000000008ec8b
- (void)replaceElementAtIndex:(unsigned long long)arg1 withElement:(void *)arg2;	// IMP=0x000000000008ec75
- (void)removeElementAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008ec5f
- (void)insertElements:(void *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000008ec11
- (void *)elementAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008ebfe
- (unsigned long long)elementSize;	// IMP=0x000000000008ebf0
- (unsigned long long)hintCapacity;	// IMP=0x000000000008ebe6
- (void)setHintCapacity:(unsigned long long)arg1;	// IMP=0x000000000008ebdc
- (unsigned long long)capacity;	// IMP=0x000000000008ebce
- (unsigned long long)count;	// IMP=0x000000000008ebc0
- (void)dealloc;	// IMP=0x000000000008eb85
- (id)init;	// IMP=0x000000000008eb6c
- (id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000000008eb20

@end

