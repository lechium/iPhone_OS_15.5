//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@class TRIPBMessage;

@interface TRIPBAutocreatedDictionary : NSMutableDictionary
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c2b7
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c29a
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000004c227
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000004c20a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004c1b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004c160
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000004c143
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000004c0d0
- (id)keyEnumerator;	// IMP=0x000000000004c092
- (id)objectForKey:(id)arg1;	// IMP=0x000000000004c075
- (unsigned long long)count;	// IMP=0x000000000004c058
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000004bfd7
- (void)dealloc;	// IMP=0x000000000004bf10

@end
