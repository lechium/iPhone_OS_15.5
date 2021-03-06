//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppActivityObserving-Protocol.h>
#import <NewsCore/FCPurchaseProviderType-Protocol.h>
#import <NewsCore/FCUserInfoObserving-Protocol.h>

@class FCAsyncSerialQueue, FCCloudContext, FCEntitlementService, FCKeyValueStore, FCPurchaseLookUpEntriesManager, NSDate, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURLSession;
@protocol FCEntitlementsOverrideProviderType, OS_dispatch_queue;

@interface FCPurchaseController : NSObject <FCUserInfoObserving, FCAppActivityObserving, FCPurchaseProviderType>
{
    NSSet *_purchasesDiscoveredTagIDs;	// 8 = 0x8
    NSMutableDictionary *_webAccessEntriesByTagID;	// 16 = 0x10
    id <FCEntitlementsOverrideProviderType> _entitlementsOverrideProvider;	// 24 = 0x18
    FCCloudContext *_cloudContext;	// 32 = 0x20
    NSURLSession *_session;	// 40 = 0x28
    FCKeyValueStore *_localStore;	// 48 = 0x30
    FCPurchaseLookUpEntriesManager *_purchaseLookupEntriesManager;	// 56 = 0x38
    NSDictionary *_readOnlyPurchaseLookUpEntriesByTagID;	// 64 = 0x40
    NSDate *_lastEntitlementCheckTime;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_accessQueue;	// 80 = 0x50
    FCAsyncSerialQueue *_entitlementQueue;	// 88 = 0x58
    FCEntitlementService *_entitlementService;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000005a55e
@property(retain, nonatomic) id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; // @synthesize entitlementsOverrideProvider=_entitlementsOverrideProvider;
@property(readonly, nonatomic) NSMutableDictionary *webAccessEntriesByTagID;
@property(readonly, nonatomic) NSSet *purchasesDiscoveredTagIDs;
@property(readonly, copy, nonatomic) NSSet *purchasedTagIDs;
- (void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 serialCompletion:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000059938
- (void)verifyAccessTokenWithTagID:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 serialCompletion:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000056f6a
- (void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2;	// IMP=0x0000000000056127
- (void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0000000000055c52
- (void)activityObservingApplicationDidEnterBackground;	// IMP=0x0000000000055bd2
- (void)removeWebPurchaseForTagID:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x0000000000055950
- (void)removeFromPurchasesDiscoveredList:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005573f
- (void)removeFromPurchasedChannelsListWithTagIDs:(id)arg1;	// IMP=0x0000000000055522
- (void)updatePurchaseEntryToExpired:(id)arg1;	// IMP=0x00000000000550d5
- (void)updatePurchaseEntryToExpiredForTagIDs:(id)arg1;	// IMP=0x000000000005502f
- (void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)arg1;	// IMP=0x0000000000054e51
- (_Bool)isTagPurchased:(id)arg1;	// IMP=0x0000000000054be3
- (_Bool)isTagIDPurchased:(id)arg1;	// IMP=0x0000000000054b79
@property(readonly, nonatomic) NSSet *allPurchaseIDs;
@property(readonly, nonatomic) NSSet *allPurchasedTagIDs;
@property(readonly, nonatomic) NSSet *allTagIDs;
- (id)purchaseLookUpEntryForTagID:(id)arg1;	// IMP=0x0000000000054501
@property(readonly, nonatomic) NSDictionary *purchaseLookUpEntriesByTagID;
- (void)fetchChannelIDsForPurchaseIDs:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000542ab
- (void)performEntitlementCheckWithIgnoreCache:(_Bool)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000050caf
- (id)webAccessOptedInTagIDs;	// IMP=0x0000000000050c31
- (id)subscriptionNotSupportedChannelIDs;	// IMP=0x0000000000050ab7
- (id)expiredPurchaseChannelIDs;	// IMP=0x0000000000050929
- (void)silentExpireInAppSubscriptions;	// IMP=0x000000000005065c
- (void)forceExpireAllSubscriptionsIfNeeded;	// IMP=0x0000000000050446
- (_Bool)hasRenewalNoticeShownForTagID:(id)arg1;	// IMP=0x0000000000050277
- (_Bool)hasPurchaseTypeAppStore;	// IMP=0x000000000005011e
- (_Bool)isPaidSubscriberFromWeb;	// IMP=0x000000000004ffb1
- (_Bool)isPaidSubscriberFromAppStore;	// IMP=0x000000000004fe44
- (_Bool)isPaidSubscriberFromNews;	// IMP=0x000000000004fcd7
- (_Bool)isPaidSubscriber;	// IMP=0x000000000004fb80
- (void)addAppStorePurchaseWithTagID:(id)arg1 purchaseID:(id)arg2;	// IMP=0x000000000004fa46
@property(readonly, nonatomic) NSString *lastSignedInItunesAccountName;
- (void)clearAllAppStorePurchases;	// IMP=0x000000000004f700
- (void)shouldShowiTunesSignedOutAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(_Bool)arg3 isBundleSubscriber:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000004f5b5
- (void)shouldShowSignedInWithDifferentiTunesAccountAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(_Bool)arg3 isBundleSubscriber:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000004f2a5
- (void)addToWebAccessOptedInListWithTagID:(id)arg1;	// IMP=0x000000000004f1ed
- (void)dealloc;	// IMP=0x000000000004ea9e
- (id)initWithCloudContext:(id)arg1 entitlementService:(id)arg2;	// IMP=0x000000000004dd29
- (id)init;	// IMP=0x000000000004dbe4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

