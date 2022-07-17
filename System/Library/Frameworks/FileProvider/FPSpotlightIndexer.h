//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProvider/CSSearchableIndexDelegate-Protocol.h>

@class CSSearchableIndex, FPProviderDomain, FPSpotlightFetchClientStateOperation, FPXDomainContext, NSData, NSFileProviderDomain, NSOperation, NSOperationQueue, NSString;
@protocol FPSpotlightIndexerDelegate, NSFileProviderEnumerator, OS_dispatch_semaphore, OS_dispatch_workloop, OS_os_log;

@interface FPSpotlightIndexer : NSObject <CSSearchableIndexDelegate>
{
    NSString *_indexName;	// 8 = 0x8
    NSString *_domainID;	// 16 = 0x10
    NSString *_providerIdentifier;	// 24 = 0x18
    CSSearchableIndex *_index;	// 32 = 0x20
    NSObject<OS_dispatch_workloop> *_workloop;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    NSOperation *_currentOperation;	// 56 = 0x38
    NSData *_lastIndexState;	// 64 = 0x40
    unsigned long long _clientState;	// 72 = 0x48
    FPSpotlightFetchClientStateOperation *_fetchStateOperation;	// 80 = 0x50
    _Bool _isCanceled;	// 88 = 0x58
    id <NSFileProviderEnumerator> _vendorEnumerator;	// 96 = 0x60
    NSObject<OS_dispatch_semaphore> *_clientStateSemaphore;	// 104 = 0x68
    _Bool _indexing;	// 112 = 0x70
    NSFileProviderDomain *_domain;	// 120 = 0x78
    FPProviderDomain *_providerDomain;	// 128 = 0x80
    NSObject<OS_os_log> *_log;	// 136 = 0x88
    FPXDomainContext *_domainContext;	// 144 = 0x90
    id <FPSpotlightIndexerDelegate> _delegate;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000004af7a
@property(nonatomic, getter=isIndexing) _Bool indexing; // @synthesize indexing=_indexing;
@property(readonly, nonatomic) NSData *lastIndexState; // @synthesize lastIndexState=_lastIndexState;
@property(readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
@property(readonly, nonatomic) NSObject<OS_dispatch_workloop> *workloop; // @synthesize workloop=_workloop;
@property(nonatomic) __weak id <FPSpotlightIndexerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak FPXDomainContext *domainContext; // @synthesize domainContext=_domainContext;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) FPProviderDomain *providerDomain; // @synthesize providerDomain=_providerDomain;
@property(retain, nonatomic) NSFileProviderDomain *domain; // @synthesize domain=_domain;
@property(readonly) id <NSFileProviderEnumerator> vendorEnumerator; // @synthesize vendorEnumerator=_vendorEnumerator;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004ac4a
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a8b1
- (void)dumpStateTo:(id)arg1;	// IMP=0x000000000004a42b
- (void)dropIndexAndInvalidateWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a342
- (void)dropIndexWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a326
- (void)dropIndexInQueue:(id)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a0c0
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049eb8
- (void)invalidateAsync;	// IMP=0x0000000000049e57
- (void)invalidate;	// IMP=0x0000000000049df6
- (void)_invalidate;	// IMP=0x0000000000049bce
- (void)fetchCurrentIndexingAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049afe
- (void)_fetchCurrentIndexingAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004968e
- (void)indexOutOfBandUpdatedItems:(id)arg1 deletedItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000049514
- (void)_indexOutOfBandUpdatedItems:(id)arg1 deletedItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000049093
- (void)indexOneBatchFromAnchor:(id)arg1 toAnchor:(id)arg2 updatedItems:(id)arg3 deletedItems:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000048e94
- (void)_indexOneBatchFromAnchor:(id)arg1 toAnchor:(id)arg2 updatedItems:(id)arg3 deletedItems:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000485ab
- (void)indexOneBatchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004849a
- (void)_indexOneBatchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047722
- (id)_fetchClientStateIfNeeded;	// IMP=0x0000000000047434
- (void)learnNewIndexState:(id)arg1;	// IMP=0x00000000000473b7
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000047267
- (id)initWithDomain:(id)arg1 providerDomain:(id)arg2 log:(id)arg3;	// IMP=0x0000000000046ed0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
