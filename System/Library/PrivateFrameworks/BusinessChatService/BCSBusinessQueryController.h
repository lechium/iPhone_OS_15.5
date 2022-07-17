//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSLinkQueryChopperDelegate-Protocol.h>
#import <BusinessChatService/BCSXPCDaemonProtocol-Protocol.h>

@class NSString;
@protocol BCSCacheClearing, BCSChatSuggestControllerProtocol, BCSConfigCacheSkipping, BCSConfigCaching, BCSConfigResolving, BCSEntitlementVerifying, BCSFetchTrigger, BCSHousekeeping, BCSIconControllerProtocol, BCSIdentityServiceProtocol, BCSItemResolving, BCSMetricFactoryProtocol, BCSQueryChopperProtocol, BCSShardCacheQueryable, BCSShardCacheSkipping, BCSShardResolving, BCSURLPatternControllerProtocol, OS_dispatch_queue;

@interface BCSBusinessQueryController : NSObject <BCSLinkQueryChopperDelegate, BCSXPCDaemonProtocol>
{
    id <BCSIdentityServiceProtocol> _identityService;	// 8 = 0x8
    id <BCSIconControllerProtocol> _iconController;	// 16 = 0x10
    id <BCSCacheClearing> _cacheClearer;	// 24 = 0x18
    id <BCSChatSuggestControllerProtocol> _chatSuggestController;	// 32 = 0x20
    id <BCSItemResolving> _chatSuggestItemResolver;	// 40 = 0x28
    id <BCSConfigResolving> _chatSuggestConfigResolver;	// 48 = 0x30
    id <BCSShardResolving> _chatSuggestShardResolver;	// 56 = 0x38
    id <BCSItemResolving> _linkItemResolver;	// 64 = 0x40
    id <BCSConfigResolving> _linkConfigResolver;	// 72 = 0x48
    id <BCSShardResolving> _linkShardResolver;	// 80 = 0x50
    id <BCSFetchTrigger> _chatSuggestMegashardFetchTrigger;	// 88 = 0x58
    id <BCSFetchTrigger> _businessLinkMegashardFetchTrigger;	// 96 = 0x60
    id <BCSEntitlementVerifying> _entitlementVerifier;	// 104 = 0x68
    id <BCSQueryChopperProtocol> _queryChopper;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;	// 120 = 0x78
    id <BCSMetricFactoryProtocol> _metricFactory;	// 128 = 0x80
    id <BCSShardCacheQueryable> _shardCache;	// 136 = 0x88
    id <BCSConfigCaching> _configCache;	// 144 = 0x90
    id <BCSConfigCacheSkipping> _configCacheSkip;	// 152 = 0x98
    id <BCSShardCacheSkipping> _shardCacheSkip;	// 160 = 0xa0
    id <BCSURLPatternControllerProtocol> _patternController;	// 168 = 0xa8
    id <BCSHousekeeping> _housekeeper;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000024d0e
- (void)_deleteInMemoryCache;	// IMP=0x0000000000024cda
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024a96
- (void)clearExpiredCachesForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002486f
- (void)clearCachesForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024648
- (void)prefetchMegashardsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023ec4
- (void)_itemWithIdentifier:(id)arg1 forClientBundleID:(id)arg2 skipFilterCheck:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002315d
- (void)_isBusinessRegisteredWithItemIdentifier:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022655
- (void)fetchLinkItemModelWithHash:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000218fb
- (void)isBusinessRegisteredForURL:(id)arg1 chopURL:(_Bool)arg2 forClientBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000209bf
- (void)fetchLinkItemModelWithURL:(id)arg1 chopURL:(_Bool)arg2 forClientBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001f9d9
- (void)fetchBusinessItemWithPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f667
- (void)fetchSquareIconDataForBusinessItem:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f4fa
- (void)fetchIsBusinessPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f195
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001efc8
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1 forClientBundleID:(id)arg2;	// IMP=0x000000000001ede6
- (id)initWithChatSuggestMegashardFetchTrigger:(id)arg1 businessLinkMegashardFetchTrigger:(id)arg2 entitlementVerifier:(id)arg3 identityService:(id)arg4 chatSuggestController:(id)arg5 iconController:(id)arg6 cacheClearer:(id)arg7 shardCache:(id)arg8 configCache:(id)arg9 configCacheSkip:(id)arg10 shardCacheSkip:(id)arg11 chatSuggestConfigResolver:(id)arg12 linkConfigResolver:(id)arg13 chatSuggestShardResolver:(id)arg14 linkShardResolver:(id)arg15 chatSuggestItemResolver:(id)arg16 linkItemResolver:(id)arg17 queryChopper:(id)arg18 patternController:(id)arg19 metricFactory:(id)arg20 housekeeper:(id)arg21;	// IMP=0x000000000001ea7e
- (id)initWithChatSuggestMegashardFetcher:(id)arg1 businessLinkMegashardFetcher:(id)arg2 shardCache:(id)arg3 cacheManager:(id)arg4 chatSuggestRemoteFetcher:(id)arg5 businessLinkRemoteFetcher:(id)arg6 userDefaults:(id)arg7 metricFactory:(id)arg8;	// IMP=0x000000000001e66a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
