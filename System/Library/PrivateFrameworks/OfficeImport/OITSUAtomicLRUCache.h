//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OITSUAtomicLRUCache
{
}

- (void)clearEvictionCallbackTarget;	// IMP=0x0000000000280fe3
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000000280f7e
- (id)allKeys;	// IMP=0x0000000000280f0b
- (id)allValues;	// IMP=0x0000000000280e98
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000280e26
- (void)removeAllObjects;	// IMP=0x0000000000280dd1
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000280d76
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000280d11

@end
