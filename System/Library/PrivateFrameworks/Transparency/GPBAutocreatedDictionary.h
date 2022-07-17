//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBAutocreatedDictionary : NSMutableDictionary
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002e1f6
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e1d9
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000002e166
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000002e149
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e0f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e09f
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000002e082
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002e00f
- (id)keyEnumerator;	// IMP=0x000000000002dfd1
- (id)objectForKey:(id)arg1;	// IMP=0x000000000002dfb4
- (unsigned long long)count;	// IMP=0x000000000002df97
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002df16
- (void)dealloc;	// IMP=0x000000000002ded4

@end
