//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NUCacheNodeRegistry : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_registry;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000fa98
- (Class)classForCacheNodeType:(id)arg1;	// IMP=0x000000000000f68f
- (void)registerClass:(Class)arg1 forCacheNodeType:(id)arg2;	// IMP=0x000000000000ec90
- (id)init;	// IMP=0x000000000000eb69

@end

