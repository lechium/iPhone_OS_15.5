//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMappedObjectStore, NSString;

__attribute__((visibility("hidden")))
@interface NSPersistentStoreMap : NSObject
{
    NSMappedObjectStore *_store;	// 8 = 0x8
    NSString *_databaseUUID;	// 16 = 0x10
    NSDictionary *_storeMetadata;	// 24 = 0x18
    unsigned long long _nextPK64;	// 32 = 0x20
    NSDictionary *_mappings;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00000000001311e4
- (unsigned long long)nextPK64;	// IMP=0x00000000001314e8
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;	// IMP=0x00000000001314ba
- (id)handleFetchRequest:(id)arg1;	// IMP=0x000000000013148c
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;	// IMP=0x0000000000131461
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;	// IMP=0x0000000000131436
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;	// IMP=0x000000000013140b
- (id)dataForKey:(id)arg1;	// IMP=0x00000000001313dd
- (id)configurationName;	// IMP=0x00000000001313c7
- (void)dealloc;	// IMP=0x000000000013135f
- (id)initWithStore:(id)arg1;	// IMP=0x00000000001311f5

@end

