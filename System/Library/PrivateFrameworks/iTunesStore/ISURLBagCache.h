//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSLRUCache;
@protocol OS_dispatch_queue;

@interface ISURLBagCache : NSObject
{
    SSLRUCache *_cachedBags;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (id)URLWithBagContext:(id)arg1;	// IMP=0x0000000000060f36
+ (id)sharedCache;	// IMP=0x0000000000060eb1
- (void).cxx_destruct;	// IMP=0x0000000000062334
- (id)_newRequestWithURLBagContext:(id)arg1;	// IMP=0x0000000000061fa3
- (void)_storeFrontChangedNotification:(id)arg1;	// IMP=0x0000000000061e00
- (id)URLBagForContext:(id)arg1 withOptions:(long long)arg2;	// IMP=0x0000000000061dee
- (id)URLBagForContext:(id)arg1;	// IMP=0x0000000000061a72
- (void)invalidateURLBagForContext:(id)arg1;	// IMP=0x00000000000618ae
- (void)invalidateAllURLBags;	// IMP=0x0000000000061743
- (void)addURLBag:(id)arg1;	// IMP=0x00000000000614b2
- (void)dealloc;	// IMP=0x0000000000060e13
- (id)init;	// IMP=0x0000000000060b79

@end

