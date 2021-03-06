//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDDaemon-Protocol.h>

@class FPDServer, NSHashTable, NSXPCConnection;
@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface FPDXPCServicer : NSObject <FPDDaemon>
{
    NSHashTable *_providerServicers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_os_log> *_log;	// 24 = 0x18
    FPDServer *_server;	// 32 = 0x20
    NSXPCConnection *_connection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000079ff6
@property(nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak FPDServer *server; // @synthesize server=_server;
- (void)_test_resetCounters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000079cd2
- (void)_test_getCountersArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000079954
- (void)_test_simulateUninstallOfBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000079528
- (void)_test_simulateInstallOfBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000079003
- (void)_test_callRemoveTrashedItemsOlderThanDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000078a6e
- (void)_test_callFileProviderManagerAPIs:(CDUnknownBlockType)arg1;	// IMP=0x000000000007858e
- (void)_test_retrieveItemWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000077def
- (void)_test_setDocIDResolutionPolicy:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000077a58
- (void)preventDiskImportSchedulerFromRunning:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000077513
- (void)forceIndexingInForeground:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000771d7
- (void)startAccessingServiceWithName:(id)arg1 itemURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000764a0
- (void)startAccessingServiceForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000076360
- (void)startAccessingOperationServiceForProviderDomainID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000075c00
- (void)startAccessingExtensionForProviderDomainID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000754e8
- (void)fetchDaemonOperationWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000074e41
- (void)fetchDaemonOperationIDsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000749b3
- (void)scheduleActionOperationWithInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000074428
- (void)reindexAllSearchableItemsForBundleIDs:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000073f2d
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007397b
- (void)waitForStabilizationOfDomainWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000732f0
- (void)waitForChangesOnItemsBelowItemWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000072a86
- (void)getSyncedRootsURLs:(CDUnknownBlockType)arg1;	// IMP=0x00000000000725ec
- (void)copyDatabaseForFPCKStartingAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000071ba8
- (void)createDatabaseCopyOutputPathForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007165b
- (void)getPersonaForProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000712ca
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(_Bool)arg2 providerFilter:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000070760
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006fd77
- (void)fetchAlternateContentsURLForDocumentURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006f53b
- (void)setAlternateContentsURL:(id)arg1 onDocumentURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006e991
- (void)reimportItemsBelowItemWithID:(id)arg1 removeCachedItems:(_Bool)arg2 markItemDataless:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000006e379
- (void)setEnabled:(_Bool)arg1 forDomainIdentifier:(id)arg2 providerIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000006df23
- (void)getDomainsForProviderIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006da8c
- (void)removeAllDomainsForProviderIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d5e1
- (void)removeDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d46a
- (void)removeDomain:(id)arg1 mode:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006ceef
- (void)removeDomainWithID:(id)arg1 mode:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006cd77
- (void)removeDomainAndPreserveDataWithID:(id)arg1 mode:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006c7cf
- (void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 byImportingDirectoryAtURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000006b3c1
- (void)restoreUserURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b30e
- (void)backUpUserURL:(id)arg1 outputUserURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006b236
- (void)updateBlockedProcessNamesForProvider:(id)arg1 processNames:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006ae7d
- (void)getURLForContainerWithItemID:(id)arg1 inDataScopeDomainWithIdentifier:(id)arg2 documentsScopeDomainIdentifier:(id)arg3 documentsFolderItemIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000006a09e
- (void)makeTopologicallySortedItemsOnDisk:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067e6b
- (_Bool)writeMetadata:(id)arg1 onURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000067b32
- (id)stageLocation;	// IMP=0x0000000000067992
- (void)noteURLBecameFrontmost:(id)arg1 inWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067362
- (void)materializeURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066f2e
- (void)startOperation:(id)arg1 toFetchIconsForAppBundleIDs:(id)arg2 requestedSize:(struct CGSize)arg3 scale:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000066373
- (void)fetchListOfMonitoredApps:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065eae
- (void)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000656d2
- (void)updateLastUsedDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064dad
- (void)trashItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000645cd
- (void)fetchIndexPropertiesForItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000063c70
- (void)fetchFSItemsForItemIdentifiers:(id)arg1 providerIdentifier:(id)arg2 domainIdentifier:(id)arg3 materializingIfNeeded:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000063690
- (void)itemForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000062eef
- (void)fetchAccessServicer:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062a47
- (void)fetchDomainServicerForProviderDomainID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006277e
- (void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000619f5
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000061217
- (void)forceIngestionForItemIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000060b7c
- (void)forceIngestionForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006086c
- (void)_forceIngestionForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000606cc
- (void)documentURLFromItemID:(id)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005fab8
- (void)documentURLFromBookmarkableString:(id)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005f01e
- (void)providerDomainForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005e98d
- (void)providerDomainForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005e572
- (void)providerDomainsCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005e0d6
- (void)unpinItemWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d89c
- (void)pinItemWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d062
- (void)evictItemWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005ca16
- (id)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(_Bool)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005be79
- (void)startDownloadingItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005b2bf
- (void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005a444
- (void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000059946
- (void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000058eac
- (void)extendBookmarkForItemID:(id)arg1 consumerID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000587e5
- (void)wakeUpForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005852d
- (void)startAccessingServiceWithName:(id)arg1 itemID:(id)arg2 connection:(id)arg3 enumerateEntitlementRequired:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000057849
- (id)createDomainServicerForProviderDomainID:(id)arg1 enumerateEntitlementRequired:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000576a6
- (id)_providerForIdentifier:(id)arg1 enumerateEntitlementRequired:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000057121
- (id)providerForIdentifier:(id)arg1 enumerateEntitlementRequired:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000056ec8
- (id)providersForCurrentConnection;	// IMP=0x0000000000056bb6
- (id)defaultProviderForCurrentConnection:(id *)arg1;	// IMP=0x00000000000564f3
- (_Bool)clientHasSandboxAccessToFile:(id)arg1;	// IMP=0x00000000000561ff
- (_Bool)_isNonSandboxedConnection;	// IMP=0x00000000000561bb
- (void)invalidate;	// IMP=0x0000000000056045
- (int)pid;	// IMP=0x0000000000056001
- (id)init;	// IMP=0x0000000000055f67
- (id)description;	// IMP=0x0000000000055e8d

@end

