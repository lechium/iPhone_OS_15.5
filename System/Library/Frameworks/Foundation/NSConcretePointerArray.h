//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSConcretePointerArray
{
    struct NSSlice slice;	// 8 = 0x8
    unsigned long long count;	// 120 = 0x78
    unsigned long long capacity;	// 128 = 0x80
    unsigned long long options;	// 136 = 0x88
    unsigned long long mutations;	// 144 = 0x90
    _Bool needsCompaction;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fb686
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fc953
- (void)removePointer:(void *)arg1;	// IMP=0x00000000000fc89e
- (unsigned long long)indexOfPointer:(void *)arg1;	// IMP=0x00000000000fc824
- (void)setCount:(unsigned long long)arg1;	// IMP=0x00000000000fc768
- (unsigned long long)count;	// IMP=0x00000000000fc757
- (void)compact;	// IMP=0x00000000000fc662
- (void)_markNeedsCompaction;	// IMP=0x00000000000fc651
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void *)arg2;	// IMP=0x00000000000fc52a
- (void)insertPointer:(void *)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000fc39e
- (void)removePointerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000fc250
- (void)addPointer:(void *)arg1;	// IMP=0x00000000000fc1ae
- (void *)pointerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000fc0d8
- (void)arrayGrow:(unsigned long long)arg1;	// IMP=0x00000000000fc02b
- (id)pointerFunctions;	// IMP=0x00000000000fbfae
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000fbf21
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fbb7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fba66
- (unsigned long long)hash;	// IMP=0x00000000000fba44
- (void)dealloc;	// IMP=0x00000000000fb954
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fb68e
- (id)initWithPointerFunctions:(id)arg1;	// IMP=0x00000000000fb537
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000fb42e
- (id)init;	// IMP=0x00000000000fb41a

@end
