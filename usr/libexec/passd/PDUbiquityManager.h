//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSCountedSet, NSOperationQueue, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, PDUbiquityManagerDelegate;

@interface PDUbiquityManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    NSCountedSet *_filesModified;	// 32 = 0x20
    NSCountedSet *_filesToWrite;	// 40 = 0x28
    NSCountedSet *_filesToDelete;	// 48 = 0x30
    _Atomic _Bool _canStart;	// 56 = 0x38
    _Atomic int _ubiquityState;	// 60 = 0x3c
    _Atomic unsigned int _ubiquityStartToken;	// 64 = 0x40
    _Bool _addedToFilePresenter;	// 68 = 0x44
    id <PDUbiquityManagerDelegate> _delegate;	// 72 = 0x48
    NSURL *_ubiquitousURL;	// 80 = 0x50
}

+ (void)removeLastEventIdentifier;	// IMP=0x002000000016d9fe
- (void).cxx_destruct;	// IMP=0x0020000000174940
@property(retain) NSURL *ubiquitousURL; // @synthesize ubiquitousURL=_ubiquitousURL;
@property(nonatomic) __weak id <PDUbiquityManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)lastPresentedItemEventIdentifier;	// IMP=0x00100000001748ec
- (void)setLastPresentedItemEventIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000174896
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000174767
- (void)presentedSubitemDidAppearAtURL:(id)arg1;	// IMP=0x0010000000174584
- (void)presentedSubitemDidChangeAtURL:(id)arg1;	// IMP=0x0010000000173ef0
- (void)presentedItemDidMoveToURL:(id)arg1;	// IMP=0x0010000000173e22
- (void)presentedItemDidGainVersion:(id)arg1;	// IMP=0x0010000000173d00
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)_queue_resolveURLIfNecessary:(id)arg1 fileCoordinator:(id)arg2;	// IMP=0x0010000000173666
- (void)_queue_resolveURLIfNecessary:(id)arg1;	// IMP=0x00100000001735f3
- (void)_queue_addedToFilePresenter;	// IMP=0x001000000017318a
- (void)_queue_removeFromFilePresenter;	// IMP=0x0010000000173159
- (void)_queue_addToFilePresenter;	// IMP=0x00100000001730b8
- (void)_queue_copyCatalogToUbiquity:(id)arg1;	// IMP=0x0010000000172ead
- (void)_queue_copyCatalogToLocalStore:(id)arg1;	// IMP=0x0010000000172d3e
- (void)_queue_handleCatalogUpdate;	// IMP=0x0010000000172bb5
- (void)_queue_handlePassUpdate:(id)arg1;	// IMP=0x0010000000172332
- (void)_queue_compareCatalogsAndTakeNewerVersion;	// IMP=0x0010000000171edb
- (void)_queue_comparePassesAndTakeNewerVersion:(id)arg1;	// IMP=0x0010000000171762
- (void)_queue_copyPassesFromLocalStoreToUbiquity:(id)arg1;	// IMP=0x0010000000171366
- (void)_queue_copyPassesFromUbiquityToLocalStore:(id)arg1;	// IMP=0x0010000000170e01
- (MISSING_TYPE *)_queue_passUniqueIDs;	// IMP=0x00100000001707db
- (void)_queue_mergeUbiquityWithLocalStore;	// IMP=0x001000000017051f
- (void)_queue_startWithTokenFinishedWithFinalState:(int)arg1;	// IMP=0x00100000001703a4
- (_Bool)_queue_startNotYetUbiquitousWithDestinationURL:(id)arg1;	// IMP=0x001000000016ff8c
- (void)_queue_startAlreadyUbiquitous;	// IMP=0x001000000016fa19
- (void)_attemptCoordinatedReadWithoutChangesAtURL:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;	// IMP=0x001000000016f768
- (id)_urlForCatalogRelativeToDirectoryURL:(id)arg1;	// IMP=0x001000000016f74a
- (id)_urlForCardWithUniqueID:(id)arg1 relativeToDirectoryURL:(id)arg2;	// IMP=0x001000000016f6e2
- (void)_handleUbiquityIdentityChanged:(id)arg1;	// IMP=0x001000000016f667
- (void)updateUbiquitousCatalog:(id)arg1;	// IMP=0x001000000016f35d
- (void)removeUbiquitousPassWithUniqueID:(id)arg1 completed:(_Bool)arg2;	// IMP=0x001000000016ee43
- (void)prepareToRemoveUbiquitousPassWithUniqueID:(id)arg1;	// IMP=0x001000000016ed98
- (_Bool)passWillBeDeleted:(id)arg1;	// IMP=0x001000000016ec92
- (void)updateUbiquitousPass:(id)arg1;	// IMP=0x001000000016e224
- (void)restart;	// IMP=0x001000000016e18e
- (void)_startWithToken:(unsigned int)arg1;	// IMP=0x001000000016da91
- (void)start;	// IMP=0x001000000016da6e
- (void)dealloc;	// IMP=0x001000000016d95a
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000016d7a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

