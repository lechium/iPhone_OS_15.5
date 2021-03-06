//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSMutableCopying-Protocol.h>

@class NSMapTable;

@interface BSIntegerMap : NSObject <NSCopying, NSMutableCopying>
{
    NSMapTable *_mapTable;	// 8 = 0x8
    id _zeroIndexValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003816c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000380f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000380e6
- (id)description;	// IMP=0x0000000000037fc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000037f0e
- (unsigned long long)hash;	// IMP=0x0000000000037ecf
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000037c5f
- (void)enumerateKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000037a1d
- (_Bool)containsObjectForKey:(long long)arg1;	// IMP=0x00000000000378df
- (id)objectForKey:(long long)arg1;	// IMP=0x00000000000377a5
- (id)allKeys;	// IMP=0x0000000000037628
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000373c4
- (id)init;	// IMP=0x00000000000373ad

@end

