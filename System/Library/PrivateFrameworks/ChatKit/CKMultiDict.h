//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKMultiDict : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    NSMutableDictionary *_dictionary;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000045f914
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
- (id)allKeys;	// IMP=0x000000000045f6e0
- (unsigned long long)count;	// IMP=0x000000000045f63a
- (void)removeAllObjects;	// IMP=0x000000000045f5a2
- (void)removeObjectsForKey:(id)arg1;	// IMP=0x000000000045f481
- (id)objectsForKey:(id)arg1;	// IMP=0x000000000045f2b2
- (id)dequeueObjectForKey:(id)arg1;	// IMP=0x000000000045f0fd
- (id)headObjectForKey:(id)arg1;	// IMP=0x000000000045ef5c
- (void)enqueueObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000045ef4a
- (id)popObjectForKey:(id)arg1;	// IMP=0x000000000045ed83
- (id)peekObjectForKey:(id)arg1;	// IMP=0x000000000045ebfb
- (void)pushObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000045ea84
- (id)description;	// IMP=0x000000000045e939
- (id)init;	// IMP=0x000000000045e8b2

@end
