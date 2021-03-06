//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/NSCopying-Protocol.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBInt32Array : NSObject <NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    int *_values;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    unsigned long long _capacity;	// 32 = 0x20
}

+ (id)arrayWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000007e655
+ (id)arrayWithValueArray:(id)arg1;	// IMP=0x000000000007e626
+ (id)arrayWithValue:(int)arg1;	// IMP=0x000000000007e5ee
+ (id)array;	// IMP=0x000000000007e5dc
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;	// IMP=0x000000000007ed79
- (void)removeAll;	// IMP=0x000000000007ed51
- (void)removeValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007eca7
- (void)addValuesFromArray:(id)arg1;	// IMP=0x000000000007ec8a
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(int)arg2;	// IMP=0x000000000007ec31
- (void)insertValue:(int)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007eb59
- (void)addValues:(const int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000007eac6
- (void)addValue:(int)arg1;	// IMP=0x000000000007ea9d
- (void)internalResizeToCapacity:(unsigned long long)arg1;	// IMP=0x000000000007ea30
- (int)valueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007e9e4
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000007e955
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007e93e
- (id)description;	// IMP=0x000000000007e892
- (unsigned long long)hash;	// IMP=0x000000000007e888
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007e82e
- (void)dealloc;	// IMP=0x000000000007e7f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007e7b7
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000007e774
- (id)initWithValues:(const int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000007e6d0
- (id)initWithValueArray:(id)arg1;	// IMP=0x000000000007e6b3
- (id)init;	// IMP=0x000000000007e684

@end

