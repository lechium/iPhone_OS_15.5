//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDDomainBackend-Protocol.h>

@class FPDDomain, NSArray, NSData, NSFileProviderDomainVersion, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface FPDDomainExtensionBackend : NSObject <FPDDomainBackend>
{
    FPDDomain *_domain;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _invalidated;	// 24 = 0x18
    NSMutableDictionary *_provideFileCompletionsByURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000157b3
- (void)workingSetDidChangeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000156e5
- (void)movingItemAtURL:(id)arg1 requiresProvidingWithDestinationURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015520
- (void)trashItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000153eb
- (void)bulkItemChanges:(id)arg1 changedFields:(unsigned long long)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001514e
- (id)createIndexerWithExtension:(id)arg1 enabled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000150ec
- (void)reimportItemsBelowItemWithID:(id)arg1 removeCachedItems:(_Bool)arg2 markItemDataless:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001509a
- (_Bool)updateRootAfterDomainChangeWithError:(id *)arg1;	// IMP=0x0000000000015092
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015082
- (void)enumeratePendingSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015054
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015044
- (void)enumerateMaterializedSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015016
- (void)fetchFSItemsForItemIdentifiers:(id)arg1 materializingIfNeeded:(_Bool)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015004
- (void)fetchVendorEndpointWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014eff
- (void)fetchServicesForItemID:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014dca
- (void)fetchOperationServiceOrEndpointWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014c63
- (void)valuesForAttributes:(id)arg1 forURL:(id)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000014837
- (void)enumerateWithSettings:(id)arg1 lifetimeExtender:(id)arg2 observer:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001425e
- (void)waitForStabilizationForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014159
- (void)copyDatabaseToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014107
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(_Bool)arg2;	// IMP=0x0000000000014101
- (void)didIndexOneBatchWithError:(id)arg1 updatedItems:(id)arg2 deletedIDs:(id)arg3 anchor:(id)arg4;	// IMP=0x00000000000140fb
- (void)itemForItemID:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013dfc
- (void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 request:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000013ae0
- (void)itemChangedAtURL:(id)arg1 request:(id)arg2;	// IMP=0x00000000000138d4
- (void)materializeItemWithID:(id)arg1 requestedRange:(struct _NSRange)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000013881
- (void)evictItemWithID:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013583
- (id)evictItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000132b4
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(_Bool)arg5 request:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000012f23
- (id)startProvidingItemAtURL:(id)arg1 readerID:(id)arg2 readingOptions:(unsigned long long)arg3 request:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000120ec
- (void)_cancelProvidingItemAtURL:(id)arg1 withKey:(id)arg2 request:(id)arg3;	// IMP=0x0000000000011dd1
- (void)itemIDForURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011b0a
- (void)itemForURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011898
- (id)nsfpRequest:(id)arg1;	// IMP=0x00000000000117fe
- (id)newFileProviderProxyWithRequest:(id)arg1;	// IMP=0x00000000000117e4
- (id)newFileProviderProxyWithTimeout:(_Bool)arg1 request:(id)arg2;	// IMP=0x00000000000116e9
- (_Bool)needsRootsCreation;	// IMP=0x00000000000116e1
- (id)createRootByImportingURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000116b2
- (_Bool)isProviderForURL:(id)arg1;	// IMP=0x000000000001137d
@property(readonly, nonatomic) NSData *backingStoreIdentity;
@property(readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property(readonly, copy) NSArray *rootURLs;
- (void)invalidate;	// IMP=0x0000000000010fd8
- (_Bool)start;	// IMP=0x0000000000010fd0
- (id)initWithDomain:(id)arg1;	// IMP=0x0000000000010e85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSURL *temporaryDirectoryURL;

@end
