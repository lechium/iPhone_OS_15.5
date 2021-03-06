//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKit/HMCache-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol HMCacheDelegate;

@interface HMCache : HMFObject <HMCache>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_cachedItems;	// 16 = 0x10
    id <HMCacheDelegate> _delegate;	// 24 = 0x18
    NSString *_cacheName;	// 32 = 0x20
}

+ (id)shortDescription;	// IMP=0x0000000000271d35
- (void).cxx_destruct;	// IMP=0x0000000000271cf5
@property(readonly, copy) NSString *cacheName; // @synthesize cacheName=_cacheName;
@property __weak id <HMCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000271be0
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000271b6b
- (void)setNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000271a99
- (id)numberForKey:(id)arg1;	// IMP=0x0000000000271a24
- (void)_setData:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002718a2
- (void)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000271800
- (id)dataForKey:(id)arg1;	// IMP=0x00000000002716cd
@property(readonly, copy) NSDictionary *cachedObjects;
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000271374
@property(readonly, copy) NSString *name;
- (id)initWithCachedObjects:(id)arg1 name:(id)arg2;	// IMP=0x00000000002712a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

