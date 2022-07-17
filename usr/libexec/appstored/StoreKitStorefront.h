//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface StoreKitStorefront : NSObject
{
    NSObject<OS_dispatch_queue> *_storefrontQueue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    NSString *_storefront;	// 32 = 0x20
    NSString *_storefrontCountry;	// 40 = 0x28
}

+ (id)sandboxManager;	// IMP=0x004000000020f420
+ (id)octaneManager;	// IMP=0x001000000020f3b6
+ (id)defaultManager;	// IMP=0x001000000020f34c
- (void).cxx_destruct;	// IMP=0x00200000002102c1
@property(retain, nonatomic) NSString *storefrontCountry; // @synthesize storefrontCountry=_storefrontCountry;
@property(retain, nonatomic) NSString *storefront; // @synthesize storefront=_storefront;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void)_updateStorefrontNotify:(_Bool)arg1;	// IMP=0x001000000020fb01
- (id)_storefrontIdentifierForClientType:(long long)arg1;	// IMP=0x001000000020f991
- (void)_bagChanged:(id)arg1;	// IMP=0x001000000020f8e9
- (void)removeStorefrontObserver:(id)arg1;	// IMP=0x001000000020f837
- (void)currentStorefrontWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000020f737
- (void)addStorefrontObserver:(id)arg1;	// IMP=0x001000000020f685
- (id)description;	// IMP=0x001000000020f626
- (void)dealloc;	// IMP=0x001000000020f5a4
- (id)initWithClientType:(long long)arg1;	// IMP=0x001000000020f48a

@end
