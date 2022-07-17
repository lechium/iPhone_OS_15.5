//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICEnvironmentMonitorObserver-Protocol.h>
#import <iTunesCloud/ICInAppMessageManagerProtocol-Protocol.h>
#import <iTunesCloud/NSXPCListenerDelegate-Protocol.h>

@class ICInAppMessageStore, ICUserIdentityStore, NSMutableSet, NSOperationQueue, NSString, NSXPCConnection, NSXPCListener;
@protocol NSCopying, OS_dispatch_queue;

@interface ICInAppMessageManager : NSObject <NSXPCListenerDelegate, ICInAppMessageManagerProtocol, ICEnvironmentMonitorObserver>
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    NSOperationQueue *_downloadOperationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
    ICInAppMessageStore *_messageStore;	// 40 = 0x28
    ICUserIdentityStore *_identityStore;	// 48 = 0x30
    _Bool _isSystemService;	// 56 = 0x38
    NSString *_foregroundApplicationIdentifier;	// 64 = 0x40
    id <NSCopying> _privacyObserverToken;	// 72 = 0x48
    NSXPCListener *_xpcServiceListener;	// 80 = 0x50
    NSMutableSet *_xpcConnections;	// 88 = 0x58
    NSXPCConnection *_xpcClientConnection;	// 96 = 0x60
}

+ (id)sharedManager;	// IMP=0x000000000003996b
- (void).cxx_destruct;	// IMP=0x000000000002c8fa
@property(readonly, nonatomic) ICInAppMessageStore *_unsafeMessageStore; // @synthesize _unsafeMessageStore=_messageStore;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x000000000002c878
- (void)_removeConnection:(id)arg1;	// IMP=0x000000000002c7eb
- (void)_addConnection:(id)arg1;	// IMP=0x000000000002c75e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000002c329
- (_Bool)_privacyAcknowledgementRequired;	// IMP=0x000000000002c1cd
- (void)_performCacheConsistencyCheck;	// IMP=0x000000000002c130
- (void)_loadConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c04e
- (id)_resourceCacheDirectoryPath;	// IMP=0x000000000002bfb8
- (void)_downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002bd34
- (void)_checkForMessageResourcesNeedingDownloadForcingIfNecessary:(_Bool)arg1;	// IMP=0x000000000002bbfd
- (void)_updateShouldDownloadResources:(_Bool)arg1 onMessageWithIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002babc
- (void)_performSyncRetryIfPending:(_Bool)arg1;	// IMP=0x000000000002ba18
- (void)_handleICInAppMessagesDidChangeDistributedNotification:(id)arg1;	// IMP=0x000000000002b9be
- (void)_removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b8f4
- (void)_removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b7ff
- (void)_addMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b6a0
- (void)_processSyncResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b5cf
- (void)_performSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b52b
- (id)_storeRequestContext;	// IMP=0x000000000002b4c4
- (void)_schedulePeriodicUpdate;	// IMP=0x000000000002b478
- (id)_xpcClientConnection;	// IMP=0x000000000002b192
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x000000000002b0f5
- (void)removeApplicationBadgeForBundleIdentifier:(id)arg1 fromPresentedMessageEntry:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002afa5
- (void)setProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002ad5c
- (void)getPropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ab49
- (void)setGlobalProperty:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a936
- (void)getGlobalPropertyForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a754
- (void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a4ee
- (void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002a266
- (void)getAllMetadataForBundleIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a084
- (void)getAllMetadataForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a003
- (void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029df0
- (void)clearCachedResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029b62
- (void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029890
- (void)flushEventsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029570
- (void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 flushImmediately:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000029257
- (void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002923c
- (void)resetMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028fd5
- (void)syncMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028d6e
- (void)addMessageEntryFromAMSDialogRequest:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028074
- (void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027dc2
- (void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027aba
- (void)updateMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027808
- (void)addMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027556
- (void)messageEntryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002729b
- (void)messageEntriesForBundleIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027010
- (void)messageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026f8f
- (void)allMessageEntriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026d69
- (void)stopSystemService;	// IMP=0x0000000000026c2a
- (void)startSystemService;	// IMP=0x000000000002697d
- (id)initWithMessageStore:(id)arg1 identityStore:(id)arg2;	// IMP=0x00000000000267ae
- (id)_init;	// IMP=0x0000000000026739

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
