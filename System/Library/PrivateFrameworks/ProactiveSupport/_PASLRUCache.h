//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface _PASLRUCache : NSObject
{
    _PASLock *_lock;	// 8 = 0x8
    unsigned long long _countLimit;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000401ca
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ff12
- (void)removeAllObjects;	// IMP=0x000000000003fef5
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000003fe61
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003fd96
- (id)objectForKey:(id)arg1;	// IMP=0x000000000003fc84
- (id)initWithCountLimit:(unsigned long long)arg1;	// IMP=0x000000000003fbdf

@end
