//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSMutableCopying-Protocol.h>

@class NSHashTable;

@interface BSIntegerSet : NSObject <NSCopying, NSMutableCopying>
{
    NSHashTable *_hashTable;	// 8 = 0x8
    _Bool _hasZeroValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000763dc
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000076360
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000076355
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007628c
- (unsigned long long)hash;	// IMP=0x0000000000076264
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007602b
- (_Bool)containsValue:(long long)arg1;	// IMP=0x0000000000076006
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000075ed5
- (id)init;	// IMP=0x0000000000075ebe

@end
