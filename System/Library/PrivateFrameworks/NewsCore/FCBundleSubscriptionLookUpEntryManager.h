//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCBundleSubscriptionLookUpEntry, FCKeyValueStore, NFUnfairLock;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject
{
    FCBundleSubscriptionLookUpEntry *__bundleSubscriptionLookUpEntry;	// 8 = 0x8
    FCKeyValueStore *_localStore;	// 16 = 0x10
    NFUnfairLock *_lock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010ba7d
@property(readonly, nonatomic) NFUnfairLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) FCBundleSubscriptionLookUpEntry *_bundleSubscriptionLookUpEntry; // @synthesize _bundleSubscriptionLookUpEntry=__bundleSubscriptionLookUpEntry;
- (void)setBundleSubscriptionLookUpEntry:(id)arg1;	// IMP=0x000000000010b961
@property(readonly, nonatomic) FCBundleSubscriptionLookUpEntry *bundleSubscriptionLookUpEntry;
- (void)cleanupStaleExpiredEntry;	// IMP=0x000000000010b653
- (void)updateEntry:(id)arg1;	// IMP=0x000000000010b573
- (void)addBundleChannelIDs:(id)arg1 bundleChannelIDsVersion:(id)arg2 purchaseID:(id)arg3 inTrialPeriod:(_Bool)arg4 isPurchaser:(_Bool)arg5 servicesBundlePurchaseID:(id)arg6 isAmplifyUser:(_Bool)arg7;	// IMP=0x000000000010b220
- (id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1;	// IMP=0x000000000010b1f1
- (void)loadLocalCachesFromStore;	// IMP=0x000000000010ae13
- (id)initWithLocalStore:(id)arg1;	// IMP=0x000000000010ad6a

@end

