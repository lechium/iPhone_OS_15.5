//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class InstallAttributionDatabaseStore, NSMutableDictionary, NSString, TaskQueue;
@protocol OS_dispatch_queue, StoreKitBagContract;

@interface InstallAttributionManager : NSObject
{
    id <StoreKitBagContract> _bagContract;	// 8 = 0x8
    InstallAttributionDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    TaskQueue *_taskQueue;	// 32 = 0x20
    NSMutableDictionary *_logKeyDict;	// 40 = 0x28
    NSMutableDictionary *_paramsDict;	// 48 = 0x30
}

+ (void)registerInstallAttributionDatabaseCleanTask;	// IMP=0x0020000000238ef9
+ (void)registerInstallAttributionPingbackRetryTask;	// IMP=0x0010000000236103
+ (id)sharedManager;	// IMP=0x001000000022f7db
- (void).cxx_destruct;	// IMP=0x002000000023aa6c
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000023a946
- (id)sanitizedError:(id)arg1;	// IMP=0x001000000023a888
- (_Bool)_installAttributionShouldSendDevPingback;	// IMP=0x001000000023a7a7
- (_Bool)_installAttributionShouldUseProxy;	// IMP=0x001000000023a6b9
- (id)_getMescalSignedAuthValueForUrl:(id)arg1;	// IMP=0x001000000023a1e0
- (id)_getProxyHeaderForURL:(id)arg1;	// IMP=0x001000000023a086
- (id)_createConnectProxyConfig;	// IMP=0x0010000000239dd2
- (void)_removeUnregisteredInstallAttributionPingbacksBeforeDate:(id)arg1;	// IMP=0x0010000000239c4e
- (void)_removeInstallAttributionParamsBeforeDate:(id)arg1 isLowFidelity:(_Bool)arg2;	// IMP=0x0010000000239abf
- (void)_removeInstallAttributionImpressionsBeforeDate:(id)arg1;	// IMP=0x0010000000239978
- (void)_cleanDatabase;	// IMP=0x00100000002392a1
- (void)_registerInstallAttributionDatabaseCleanTaskIfNeeded;	// IMP=0x00100000002391bb
- (void)_sendMaturePingbacksWithXPCActivity:(id)arg1;	// IMP=0x0010000000237ab6
- (void)sendTestPingbacksForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023647f
- (void)_registerInstallAttributionPingbackRetryTaskIfNeeded;	// IMP=0x0010000000235fda
- (void)_incrementRetryCountForPingback:(id)arg1;	// IMP=0x0010000000235da9
- (void)_removePingback:(id)arg1;	// IMP=0x0010000000235b6d
- (void)kickPingbackTask;	// IMP=0x0010000000235b5b
- (_Bool)cleanTestPingbacksForApp:(id)arg1;	// IMP=0x001000000023598e
- (id)retrieveTestPingbacksForApp:(id)arg1;	// IMP=0x00100000002356b6
- (_Bool)addMockPingback:(id)arg1;	// IMP=0x00100000002354e9
- (void)setDeveloperPingbackURL:(id)arg1 forApp:(id)arg2;	// IMP=0x00100000002351ad
- (void)updatePingbackWithConversionValue:(id)arg1 forApp:(id)arg2 withDeveloperPingbackURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000234ce7
- (void)setPingbackRegisteredForApp:(id)arg1 withDeveloperPingbackURL:(id)arg2;	// IMP=0x0010000000234a98
- (void)addPingbacks:(id)arg1;	// IMP=0x0010000000234502
- (void)addPingback:(id)arg1;	// IMP=0x0010000000234075
- (void)cacheInstallAttributionParams:(id)arg1 forFetchPostbackURL:(id)arg2;	// IMP=0x001000000023405f
- (void)sendImpressionSentAnalyticsEventWithDicts:(id)arg1;	// IMP=0x0010000000233c03
- (void)sendDifferingImpressionAnalyticsEventWithDict:(id)arg1 sourceIsCache:(_Bool)arg2;	// IMP=0x0010000000233a06
- (id)getParamsForFetchingPostbacksForApp:(id)arg1 andFetchPostbackURL:(id)arg2;	// IMP=0x0010000000233328
- (void)fetchPingbackInfoFor:(id)arg1 withLogKey:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000232ac3
- (void)retryFetchingPingbackFor:(id)arg1;	// IMP=0x00100000002323bb
- (void)removeFetchedPingbackInfoForApp:(id)arg1 andFetchPostbackURL:(id)arg2;	// IMP=0x001000000023213d
- (void)addPingbackFetchInfo:(id)arg1 withLogKey:(id)arg2;	// IMP=0x0010000000231be4
- (void)removeParamsForApp:(id)arg1;	// IMP=0x0010000000231985
- (id)campaignIdWithinPermissibleRange:(long long)arg1;	// IMP=0x001000000023172f
- (id);	// IMP=0x0010000000231083
- (id)getMultiParamsForApp:(id)arg1;	// IMP=0x0010000000230f2d
- (void)purgeImpressionsFromProcessName:(id)arg1;	// IMP=0x0010000000230d58
- (void)finalizeImpression:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000230418
- (void)addImpression:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000022f9c9
- (id)init;	// IMP=0x001000000022f860

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

