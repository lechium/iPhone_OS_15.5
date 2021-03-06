//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableSet, NSOperationQueue, NSPersistentContainer, NSURLSession;
@protocol OS_dispatch_queue;

@interface STAppInfoCache : NSObject
{
    NSPersistentContainer *_persistentContainer;	// 8 = 0x8
    NSCache *_appInfoByBundleIdentifier;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_lookupQueue;	// 24 = 0x18
    NSURLSession *_urlSession;	// 32 = 0x20
    NSMutableSet *_bundleIdentifiersWithPendingRequests;	// 40 = 0x28
    NSOperationQueue *_completionHandlerQueue;	// 48 = 0x30
}

+ (id)sharedCache;	// IMP=0x0000000000002626
- (void).cxx_destruct;	// IMP=0x0000000000005dd2
@property(readonly, nonatomic) NSOperationQueue *completionHandlerQueue; // @synthesize completionHandlerQueue=_completionHandlerQueue;
@property(readonly, nonatomic) NSMutableSet *bundleIdentifiersWithPendingRequests; // @synthesize bundleIdentifiersWithPendingRequests=_bundleIdentifiersWithPendingRequests;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue; // @synthesize lookupQueue=_lookupQueue;
@property(readonly, nonatomic) NSCache *appInfoByBundleIdentifier; // @synthesize appInfoByBundleIdentifier=_appInfoByBundleIdentifier;
@property(retain) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (id)_localAppNameForBundleIdentifier:(id)arg1;	// IMP=0x0000000000005b3b
- (id)_placeholderAppInfoWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000005ab3
- (id)_preloadedAppInfoWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000005979
- (void)_finishedFetchingAppInfoByBundleIdentifier:(id)arg1;	// IMP=0x0000000000005738
- (id)_fetchSyncedInstalledAppInfoForBundleIdentifier:(id)arg1;	// IMP=0x0000000000004ee1
- (void)_handleiTunesResponseForBundleIdentifiers:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000040c3
- (void)_fetchAppStoreInfoAndNotifyWithBundleIdentifiers:(id)arg1 timeoutInterval:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003afd
- (void)_fetchAppStoreInfoAndNotifyWithBundleIdentifiers:(id)arg1;	// IMP=0x0000000000003a1f
- (id)_fetchAppInfoFromLaunchServicesWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000003576
- (id)_appInfoForBundleIdentifier:(id)arg1;	// IMP=0x0000000000003406
- (void)removeObserver:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000000003340
- (void)addObserver:(id)arg1 selector:(SEL)arg2 bundleIdentifier:(id)arg3;	// IMP=0x000000000000326e
- (void)fetchAppInfoForBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002ca3
- (void)fetchAppInfoForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002b49
- (id)appInfoForBundleIdentifier:(id)arg1;	// IMP=0x0000000000002b35
- (id)appInfoForBundleIdentifier:(id)arg1 localOnly:(_Bool)arg2;	// IMP=0x0000000000002902
- (void)dealloc;	// IMP=0x00000000000028c0
- (id)init;	// IMP=0x000000000000267b

@end

