//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EMUserProfileProvider-Protocol.h>

@class CNContactStore, NSDictionary, NSMutableArray, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface EMUserProfileProvider : NSObject <EMUserProfileProvider>
{
    struct os_unfair_lock_s _cacheLock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 16 = 0x10
    int _outstandingCacheRefreshes;	// 24 = 0x18
    _Bool _hasAccountsConfigured;	// 28 = 0x1c
    NSDictionary *_cache;	// 32 = 0x20
    NSMutableArray *_knownToBeMyEmail;	// 40 = 0x28
    NSMutableArray *_knownToNotBeMyEmail;	// 48 = 0x30
    CNContactStore *_contactStore;	// 56 = 0x38
}

+ (_Bool)doesAddressList:(id)arg1 containAddressInSet:(id)arg2;	// IMP=0x0000000000088e88
- (void).cxx_destruct;	// IMP=0x000000000008a13b
@property(readonly, nonatomic) _Bool hasAccountsConfigured; // @synthesize hasAccountsConfigured=_hasAccountsConfigured;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) NSMutableArray *knownToNotBeMyEmail; // @synthesize knownToNotBeMyEmail=_knownToNotBeMyEmail;
@property(readonly, nonatomic) NSMutableArray *knownToBeMyEmail; // @synthesize knownToBeMyEmail=_knownToBeMyEmail;
@property(retain, nonatomic) NSDictionary *cache; // @synthesize cache=_cache;
- (id)_contactEmailAddresses;	// IMP=0x0000000000089fd4
- (_Bool)hasAccountConfigured;	// IMP=0x0000000000089fa1
- (id)_accountsEmailAddresses;	// IMP=0x0000000000089f6e
- (void)_contactsChanged:(id)arg1;	// IMP=0x0000000000089f20
- (void)_accountsChanged:(id)arg1;	// IMP=0x0000000000089f0d
- (void)waitForOutstandingCacheRefreshes;	// IMP=0x0000000000089ef2
- (void)refreshCachedValues;	// IMP=0x0000000000089bf1
- (_Bool)_isMyEmailAddressContainedInAddressStrings:(id)arg1;	// IMP=0x0000000000089586
- (_Bool)isMyEmailAddressContainedInAddressList:(id)arg1;	// IMP=0x000000000008946d
@property(readonly, copy) NSSet *allEmailAddresses;
- (id)contactWithKeysToFetch:(id)arg1;	// IMP=0x0000000000089330
- (id)contact;	// IMP=0x000000000008927a
@property(readonly, copy) NSSet *contactEmailAddresses;
@property(readonly, copy) NSSet *accountsEmailAddresses;
- (id)init;	// IMP=0x0000000000088c97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
