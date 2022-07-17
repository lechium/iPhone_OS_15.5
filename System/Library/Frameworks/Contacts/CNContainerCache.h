//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CNCache, CNContactStore, CNContainer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CNContainerCache : NSObject
{
    CNContainer *_primaryiCloudContainer;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
    ACAccountStore *_accountStore;	// 24 = 0x18
    CNCache *_cachedAccounts;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

+ (id)os_log;	// IMP=0x00000000001095c8
- (void).cxx_destruct;	// IMP=0x000000000010a1b1
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) CNCache *cachedAccounts; // @synthesize cachedAccounts=_cachedAccounts;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) __weak CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContainer *primaryiCloudContainer; // @synthesize primaryiCloudContainer=_primaryiCloudContainer;
- (void)resetPrimaryiCloudContainer;	// IMP=0x000000000010a11e
- (void)resetAccountCache;	// IMP=0x000000000010a10a
- (id)cnAccountForContainer:(id)arg1;	// IMP=0x0000000000109fae
- (id)accountForContainer:(id)arg1;	// IMP=0x0000000000109d1a
- (id)onWorkQueue_findPrimaryiCloudContainer;	// IMP=0x0000000000109ac7
- (void)dealloc;	// IMP=0x000000000010989f
- (void)contactStoreDidChange;	// IMP=0x0000000000109818
- (void)accountStoreDidChange;	// IMP=0x0000000000109791
- (id)initWithContactStore:(id)arg1;	// IMP=0x0000000000109624

@end
