//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, SSDatabaseCache;
@protocol OS_dispatch_queue;

@interface SSCacheObjectStore : NSObject
{
    SSDatabaseCache *_databaseCache;	// 8 = 0x8
    NSMutableSet *_factories;	// 16 = 0x10
    NSString *_sessionIdentifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
}

- (void)removeCacheObjectFactory:(id)arg1;	// IMP=0x00000000001606f4
- (void)addCacheObjectFactory:(id)arg1;	// IMP=0x0000000000160682
- (id)cacheObjectWithItemIdentifier:(id)arg1;	// IMP=0x00000000001601a1
- (_Bool)removeObjectWithItemIdentifier:(id)arg1;	// IMP=0x000000000015ffcb
- (_Bool)addObject:(id)arg1 withItemIdentifier:(id)arg2;	// IMP=0x000000000015fd32
- (void)clearSession;	// IMP=0x000000000015fba8
- (id)_factoryForTypeIdentifier:(id)arg1;	// IMP=0x000000000015f956
- (id)description;	// IMP=0x000000000015f8d7
- (void)dealloc;	// IMP=0x000000000015f87d
- (id)initWithSessionIdentifier:(id)arg1;	// IMP=0x000000000015f63a

@end
