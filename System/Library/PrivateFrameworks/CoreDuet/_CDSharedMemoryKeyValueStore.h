//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDStringKeyDataValueStoring-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log;

@interface _CDSharedMemoryKeyValueStore : NSObject <_CDStringKeyDataValueStoring>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_archivingQueue;	// 16 = 0x10
    _Bool _needToPersist;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    NSMutableDictionary *_dictionary;	// 40 = 0x28
    void *_mappedMem;	// 48 = 0x30
    unsigned long long _size;	// 56 = 0x38
}

+ (id)keyValueStoreWithName:(id)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000004302c
+ (id)sharedInstance;	// IMP=0x0000000000042c43
+ (id)defaultName;	// IMP=0x0000000000042b93
+ (unsigned long long)defaultSize;	// IMP=0x0000000000042b88
- (void).cxx_destruct;	// IMP=0x0000000000045110
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (id)description;	// IMP=0x0000000000044e9f
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000044e28
- (id)valueForKey:(id)arg1;	// IMP=0x0000000000044e16
- (id)allKeys;	// IMP=0x0000000000044d12
- (id)dataForKey:(id)arg1;	// IMP=0x0000000000044b59
- (_Bool)removeDataForKeys:(id)arg1;	// IMP=0x0000000000044a23
- (_Bool)removeDataForKey:(id)arg1;	// IMP=0x0000000000044973
- (_Bool)setData:(id)arg1 forKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004448d
- (_Bool)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000044475
- (void *)memoryPointer;	// IMP=0x0000000000043693

@end
