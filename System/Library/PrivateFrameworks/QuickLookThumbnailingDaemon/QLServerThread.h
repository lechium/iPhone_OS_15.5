//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, NSURL, _QLCacheThread;
@protocol OS_dispatch_queue;

@interface QLServerThread : NSObject
{
    NSOperationQueue *_downloadsOperationQueue;	// 8 = 0x8
    NSMutableDictionary *_queuedDownloadRequests;	// 16 = 0x10
    NSMutableDictionary *_currentFetchThumbnailsOperations;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_externalThumbnailCacheQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableDictionary *_externalThumbnailCaches;	// 48 = 0x30
    NSMutableDictionary *_externalThumbnailCacheInboxURLs;	// 56 = 0x38
    NSMutableDictionary *_externalThumbnailCacheThumbnailURLs;	// 64 = 0x40
    NSMutableDictionary *_externalThumbnailCacheAvailablePendingBlocks;	// 72 = 0x48
    NSMutableSet *_knownDomainsWithoutExternalThumbnailCaches;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_completionBlocksQueue;	// 88 = 0x58
    NSMutableDictionary *_pendingRequests;	// 96 = 0x60
    NSOperationQueue *_uncachedThumbnailRetrievalQueue;	// 104 = 0x68
    NSOperationQueue *_downscaledThumbnailGenerationQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_previewThumbnailGeneratorQueue;	// 120 = 0x78
    NSURL *_overrideBasePersonaVolumesURLForTesting;	// 128 = 0x80
    _QLCacheThread *_cacheThread;	// 136 = 0x88
    NSMutableDictionary *_domainsToCaches;	// 144 = 0x90
    NSMutableDictionary *_volumesToCaches;	// 152 = 0x98
    NSMutableDictionary *_fsidsToCaches;	// 160 = 0xa0
}

+ (void)updateThumbnailRequestThumbnailVersionWithThirdPartyGeneratorInformationIfNeeded:(id)arg1;	// IMP=0x0000000000027197
+ (id)sharedInstance;	// IMP=0x000000000001d977
- (void).cxx_destruct;	// IMP=0x00000000000279f1
@property(retain) NSObject<OS_dispatch_queue> *externalThumbnailCacheQueue; // @synthesize externalThumbnailCacheQueue=_externalThumbnailCacheQueue;
@property(retain) NSMutableSet *knownDomainsWithoutExternalThumbnailCaches; // @synthesize knownDomainsWithoutExternalThumbnailCaches=_knownDomainsWithoutExternalThumbnailCaches;
@property(retain) NSMutableDictionary *externalThumbnailCacheAvailablePendingBlocks; // @synthesize externalThumbnailCacheAvailablePendingBlocks=_externalThumbnailCacheAvailablePendingBlocks;
@property(retain) NSMutableDictionary *externalThumbnailCacheThumbnailURLs; // @synthesize externalThumbnailCacheThumbnailURLs=_externalThumbnailCacheThumbnailURLs;
@property(retain) NSMutableDictionary *externalThumbnailCacheInboxURLs; // @synthesize externalThumbnailCacheInboxURLs=_externalThumbnailCacheInboxURLs;
@property(retain) NSMutableDictionary *fsidsToCaches; // @synthesize fsidsToCaches=_fsidsToCaches;
@property(retain) NSMutableDictionary *volumesToCaches; // @synthesize volumesToCaches=_volumesToCaches;
@property(retain) NSMutableDictionary *domainsToCaches; // @synthesize domainsToCaches=_domainsToCaches;
@property(retain) _QLCacheThread *cacheThread; // @synthesize cacheThread=_cacheThread;
@property(retain) NSObject<OS_dispatch_queue> *completionBlocksQueue; // @synthesize completionBlocksQueue=_completionBlocksQueue;
@property(retain) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(copy) NSURL *overrideBasePersonaVolumesURLForTesting; // @synthesize overrideBasePersonaVolumesURLForTesting=_overrideBasePersonaVolumesURLForTesting;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *currentFetchThumbnailsOperations; // @synthesize currentFetchThumbnailsOperations=_currentFetchThumbnailsOperations;
@property(retain) NSMutableDictionary *queuedDownloadRequests; // @synthesize queuedDownloadRequests=_queuedDownloadRequests;
@property(retain) NSMutableDictionary *externalThumbnailCaches; // @synthesize externalThumbnailCaches=_externalThumbnailCaches;
- (id)allKnownDataSeparatedVolumes;	// IMP=0x00000000000277a8
- (id)cacheThreadForFileIdentifier:(id)arg1 atURL:(id)arg2;	// IMP=0x00000000000276c9
- (id)cacheThreadForVolume:(id)arg1;	// IMP=0x00000000000276b0
- (void)forEachCacheThread:(CDUnknownBlockType)arg1;	// IMP=0x000000000002746f
- (void)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg1;	// IMP=0x0000000000027456
- (void)reset;	// IMP=0x00000000000273d8
- (_Bool)_canUseAdditionToProvideThumbnail:(id)arg1 forThumbnailRequest:(id)arg2 taggedLogicalURL:(id)arg3;	// IMP=0x0000000000026ffa
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026c66
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000268d2
- (void)_removeRequestFromPendingRequests:(id)arg1;	// IMP=0x00000000000267cc
- (void)_completeHandledThumbnailRequest:(id)arg1;	// IMP=0x00000000000265e1
- (_Bool)_saveResultForThumbnailRequest:(id)arg1 withBitmapData:(id)arg2 format:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000025c8d
- (void)_notifyGenerationHandlerOfThumbnailGenerationForRequest:(id)arg1 bitmapData:(id)arg2 format:(id)arg3 metadata:(id)arg4 contentRect:(struct CGRect)arg5 iconFlavor:(int)arg6 thumbnailRepresentation:(long long)arg7 clientShouldTakeOwnership:(_Bool)arg8 error:(id)arg9;	// IMP=0x00000000000259c0
- (void)sendResultForThumbnailRequest:(id)arg1 bitmapData:(id)arg2 format:(id)arg3 metadata:(id)arg4 contentRect:(struct CGRect)arg5 iconFlavor:(int)arg6 thumbnailRepresentation:(long long)arg7 clientShouldTakeOwnership:(_Bool)arg8 reenqueueRequest:(_Bool)arg9 error:(id)arg10;	// IMP=0x0000000000025446
- (void)failedToCompleteThumbnailRequest:(id)arg1 error:(id)arg2;	// IMP=0x0000000000025318
- (void)didNotFindLowQualityEntryInCachedForThumbnailRequest:(id)arg1 error:(id)arg2;	// IMP=0x00000000000251f2
- (void)thumbnailRequestWasCancelled:(id)arg1;	// IMP=0x0000000000025111
- (void)completeThumbnailRequest:(id)arg1 bitmapData:(id)arg2 metadata:(id)arg3 contentRect:(struct CGRect)arg4 thumbnailRepresentation:(long long)arg5 iconFlavor:(int)arg6 format:(id)arg7 clientShouldTakeOwnership:(_Bool)arg8;	// IMP=0x0000000000024fa0
- (void)completeThumbnailRequest:(id)arg1 thumbnailData:(id)arg2 updatedMetadata:(id)arg3;	// IMP=0x0000000000024dda
- (id)imageDataForImage:(struct CGImage *)arg1;	// IMP=0x0000000000024db1
- (void)addImageData:(id)arg1 withBitmapFormat:(id)arg2 contentRect:(struct CGRect)arg3 hasIconModeApplied:(_Bool)arg4 flavor:(int)arg5 extensionBadge:(id)arg6 metadata:(id)arg7 toCacheAndCompleteRequest:(id)arg8;	// IMP=0x0000000000024b2a
- (void)addImageData:(id)arg1 toCacheForRequest:(id)arg2 withBitmapFormat:(id)arg3 contentRect:(struct CGRect)arg4 flavor:(int)arg5 metadata:(id)arg6;	// IMP=0x000000000002471b
- (void)findUncachedThumbnailForThumbnailRequest:(id)arg1 downloadedItem:(id)arg2 atTaggedLogicalURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000024500
- (void)findUncachedThumbnailForThumbnailRequest:(id)arg1 downloadedFileAtTaggedLogicalURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024178
- (void)findUncachedThumbnailForFileThumbnailRequest:(id)arg1 taggedLogicalPromisedURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023c28
- (void)findThumbnailInAddition:(id)arg1 request:(id)arg2 url:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000023a84
- (void)generateThumbnailForThumbnailRequest:(id)arg1 item:(id)arg2 atTaggedLogicalURL:(id)arg3 shouldUpdateGenstore:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000022821
- (void)findUncachedThumbnailForFileThumbnailRequest:(id)arg1 taggedLogicalURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022586
- (void)findUncachedThumbnailForFileThumbnailRequest:(id)arg1;	// IMP=0x0000000000022171
- (void)_addAllThumbnailsSizesToCacheForRequest:(id)arg1 withImageSource:(struct CGImageSource *)arg2 imageSize:(struct CGSize)arg3 alreadyCachedSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000021a72
- (void)_saveLargeThumbnailForDocumentAtURL:(id)arg1 toGenstoreWithImage:(struct CGImage *)arg2 automaticallyGenerated:(_Bool)arg3;	// IMP=0x00000000000219b2
- (void)_saveLargeThumbnailToGenstoreWithData:(id)arg1 url:(id)arg2;	// IMP=0x0000000000021686
- (void)processLargeThumbnailData:(id)arg1 withContentType:(id)arg2 precacheThumbnails:(_Bool)arg3 forRequest:(id)arg4 url:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000208d7
- (id)genStoreThumbnailForItemAtURL:(id)arg1 request:(id)arg2;	// IMP=0x000000000002069c
- (void)findUncachedThumbnailInGenStoreAndExternalThumbnailCacheForRequest:(id)arg1 item:(id)arg2 URL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000202f9
- (void)queueThumbnailRequest:(id)arg1 tryCache:(_Bool)arg2 tryAdditionsFirst:(_Bool)arg3;	// IMP=0x000000000001f939
- (void)cancelThumbnailRequests:(id)arg1;	// IMP=0x000000000001f60b
- (void)_callCompletionHandler:(CDUnknownBlockType)arg1 ofThumbnailRequestBatch:(id)arg2;	// IMP=0x000000000001f504
- (void)_addThumbnailRequestBatchToQueue:(id)arg1 generationHandler:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001efaf
- (void)generateSuccessiveThumbnailRepresentationsForRequests:(id)arg1 generationHandler:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001eaec
- (id)cacheThreadForRequest:(id)arg1;	// IMP=0x000000000001e9a6
- (id)cacheThreadForProviderDomainID:(id)arg1;	// IMP=0x000000000001e911
- (id)uncachedCacheThreadForItem:(id)arg1;	// IMP=0x000000000001e8af
- (id)uncachedCacheThreadForFileAtURL:(id)arg1;	// IMP=0x000000000001e154
- (id)uncachedCacheThreadForProviderDomainID:(id)arg1;	// IMP=0x000000000001de98
- (id)makeCacheThreadForPersonaString:(id)arg1 containerURL:(id *)arg2;	// IMP=0x000000000001daa8
- (void)perform:(CDUnknownBlockType)arg1 afterDelay:(long long)arg2;	// IMP=0x000000000001da60
- (void)perform:(CDUnknownBlockType)arg1;	// IMP=0x000000000001da4f
- (id)initWithCacheSize:(long long)arg1 location:(id)arg2;	// IMP=0x000000000001d4dc
- (id)init;	// IMP=0x000000000001d46c
- (void)storeImage:(struct CGImage *)arg1 inExternalThumbnailCacheForItem:(id)arg2 atURL:(id)arg3;	// IMP=0x00000000000142f7
- (void)getExternalThumbnailCacheConnectionForItem:(id)arg1 atURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013a29
- (void)_updateInformationForProviderAndCallPendingBlocksForProviderDomainID:(id)arg1 withConnection:(id)arg2 inboxURL:(id)arg3 thumbnailsURL:(id)arg4;	// IMP=0x00000000000134f4
- (void)receivedExternalCacheConnection:(id)arg1 error:(id)arg2 forProviderDomainID:(id)arg3;	// IMP=0x0000000000013109
- (void)findUncachedThumbnailInExternalThumbnailCacheForRequest:(id)arg1 item:(id)arg2 URL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001255d
- (struct CGImage *)_createUndecoratedAppIconForData:(id)arg1 ofSize:(struct CGSize)arg2 scale:(double)arg3;	// IMP=0x00000000000457b3
- (id)processedPNGAppIconDataForData:(id)arg1 ofType:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4;	// IMP=0x0000000000045665
- (void)findUncachedThumbnailForUbiquitousThumbnailRequest:(id)arg1 atURL:(id)arg2;	// IMP=0x000000000004543c
- (void)drainDownloadsQueueIfNeeded;	// IMP=0x0000000000045341
- (_Bool)downloadThumbnails:(id)arg1 forProvider:(id)arg2;	// IMP=0x0000000000043075
- (void)findUncachedThumbnailForUbiquitousThumbnailRequest:(id)arg1;	// IMP=0x0000000000042d2f
- (void)downloadUncachedThumbnailForUbiquitousThumbnailRequest:(id)arg1;	// IMP=0x000000000004271f
- (void)findUncachedThumbnailForUndownloadedItemAtURL:(id)arg1 ubiquitousRequest:(id)arg2;	// IMP=0x000000000004251c

@end

