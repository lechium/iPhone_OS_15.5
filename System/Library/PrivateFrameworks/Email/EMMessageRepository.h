//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/EFFutureDelegate-Protocol.h>
#import <Email/EFLoggable-Protocol.h>

@class EFPromise, EMBlockedSenderManager, EMMailboxRepository, EMRemoteConnection, EMRemoteConnectionRecoveryAssertion, EMRemoteContentURLCache, NSArray, NSCache, NSHashTable, NSMapTable, NSString, NSURL;
@protocol EMVIPManager;

@interface EMMessageRepository <EFFutureDelegate, EFLoggable>
{
    NSMapTable *_observedMessageListItemCache;	// 8 = 0x8
    NSMapTable *_unobservedMessageListItemCache;	// 16 = 0x10
    NSMapTable *_wrappedObserversByActualObserver;	// 24 = 0x18
    NSHashTable *_recoverableObservers;	// 32 = 0x20
    struct os_unfair_lock_s _messageListItemCacheLock;	// 40 = 0x28
    struct os_unfair_lock_s _observersLock;	// 44 = 0x2c
    EMRemoteConnectionRecoveryAssertion *_connectionRecoveryAssertion;	// 48 = 0x30
    EMRemoteConnection *_connection;	// 56 = 0x38
    id <EMVIPManager> _vipManager;	// 64 = 0x40
    EMBlockedSenderManager *_blockedSenderManager;	// 72 = 0x48
    NSCache *_queryCountCache;	// 80 = 0x50
    NSURL *_cacheURL;	// 88 = 0x58
    EFPromise *_remoteContentCachePromise;	// 96 = 0x60
    EMMailboxRepository *_mailboxRepository;	// 104 = 0x68
}

+ (id)remoteInterface;	// IMP=0x0000000000056e2f
+ (id)signpostLog;	// IMP=0x0000000000056525
+ (id)log;	// IMP=0x0000000000056448
- (void).cxx_destruct;	// IMP=0x000000000005fab3
@property(readonly, nonatomic) EMMailboxRepository *mailboxRepository; // @synthesize mailboxRepository=_mailboxRepository;
@property(retain, nonatomic) EFPromise *remoteContentCachePromise; // @synthesize remoteContentCachePromise=_remoteContentCachePromise;
@property(retain, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(retain, nonatomic) NSCache *queryCountCache; // @synthesize queryCountCache=_queryCountCache;
@property(readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager; // @synthesize blockedSenderManager=_blockedSenderManager;
@property(readonly, nonatomic) id <EMVIPManager> vipManager; // @synthesize vipManager=_vipManager;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (void)_broadcastMessageListItemChangesToObservers:(CDUnknownBlockType)arg1;	// IMP=0x000000000005f4a5
- (void)_vipsDidChange:(id)arg1;	// IMP=0x000000000005f00b
- (void)_blockedSendersDidChange:(id)arg1;	// IMP=0x000000000005ec5d
- (void)_detectChangesForMatchedAddedObjectIDs:(id)arg1 observerationIdentifier:(id)arg2 matchedChangesHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005e3e0
- (void)_applyChangesToCachedObjects:(id)arg1;	// IMP=0x000000000005e230
- (id)messageObjectIDsForSearchableItemIdentifiers:(id)arg1;	// IMP=0x000000000005e0e7
- (id)messageForSearchableItemIdentifier:(id)arg1;	// IMP=0x000000000005dec5
- (id)messageObjectIDForURL:(id)arg1;	// IMP=0x000000000005dc7d
- (void)loadOlderMessagesForMailboxes:(id)arg1;	// IMP=0x000000000005dbc7
- (id)predictMailboxForMovingMessagesWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d996
- (id)predictMailboxForMovingMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d8f1
- (void)parseRemoteContentURLsFromMessageWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d7f9
- (void)getRemoteContentURLInfoOrderedBy:(long long)arg1 inReverseOrder:(_Bool)arg2 limit:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005d71c
- (void)noteViewOfRemoteContentLinks:(id)arg1;	// IMP=0x000000000005d666
- (void)setUpURLCacheWithMemoryCapacity:(unsigned long long)arg1;	// IMP=0x000000000005d28a
@property(readonly, nonatomic) EMRemoteContentURLCache *remoteContentURLCache;
- (id)cachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2;	// IMP=0x000000000005cf35
- (void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;	// IMP=0x000000000005ce18
- (void)resetAllPrecomputedThreadScopes;	// IMP=0x000000000005cd89
- (void)resetPrecomputedThreadScopesForMailboxObjectID:(id)arg1;	// IMP=0x000000000005cc2c
- (void)resetPrecomputedThreadScopesForMailboxType:(long long)arg1;	// IMP=0x000000000005cb60
- (void)_updateObserversForDeletedObjectIDs:(id)arg1;	// IMP=0x000000000005c8f1
- (void)_updateObserversForFlagChangeAction:(id)arg1;	// IMP=0x000000000005c19e
- (void)_updateObserversForAction:(id)arg1;	// IMP=0x000000000005c031
- (id)_undoActionForConversationAction:(id)arg1;	// IMP=0x000000000005bf83
- (id)performMessageChangeActionReturningUndoAction:(id)arg1;	// IMP=0x000000000005b987
- (void)performMessageChangeAction:(id)arg1;	// IMP=0x000000000005b5b9
- (id)requestRepresentationForMessageWithID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005aefa
- (id)requestRepresentationForMessageWithID:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005ae16
- (void)setQueryCount:(id)arg1 forQueryIdentifier:(id)arg2;	// IMP=0x000000000005ad6e
- (id)startCountingQuery:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 withObserver:(id)arg3;	// IMP=0x000000000005aa46
- (void)_removeItemsFromObservedItemsCacheIfNotObservedByObservers:(id)arg1;	// IMP=0x000000000005a661
- (void)refreshQueryWithObserver:(id)arg1;	// IMP=0x000000000005a4ea
- (id)performQuery:(id)arg1 withObserver:(id)arg2;	// IMP=0x000000000005a1f2
@property(readonly, copy) NSArray *currentObservers;
- (_Bool)_anyObserver:(id)arg1 containsObjectID:(id)arg2;	// IMP=0x000000000005a081
- (id)_existingObservedItemForObjectID:(id)arg1;	// IMP=0x0000000000059ff1
- (id)_cachedItemForItem:(id)arg1 observers:(id)arg2 validationBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000059b19
- (id)messageForObjectID:(id)arg1;	// IMP=0x00000000000593a3
- (id)_messageListItemsForObjectIDs:(id)arg1 observationIdentifier:(id)arg2 checkCache:(_Bool)arg3;	// IMP=0x00000000000581fc
- (id)messageListItemsForObjectIDs:(id)arg1 observationIdentifier:(id)arg2;	// IMP=0x00000000000581d4
- (id)messageListItemsForObjectIDs:(id)arg1;	// IMP=0x00000000000581b0
- (void)performCountQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000580cf
- (void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057efb
- (void)didFinishBlockingMainThreadForFuture:(id)arg1;	// IMP=0x0000000000057ec3
- (void)didStartBlockingMainThreadForFuture:(id)arg1;	// IMP=0x0000000000057e47
- (void)isDataAccessible:(CDUnknownBlockType)arg1;	// IMP=0x0000000000057c5a
- (void)_notifyRecoverableObservers;	// IMP=0x0000000000057b84
- (void)dealloc;	// IMP=0x0000000000056db4
- (id)initWithRemoteConnection:(id)arg1 mailboxRepository:(id)arg2 vipManager:(id)arg3 blockedSenderManager:(id)arg4;	// IMP=0x000000000005669a
- (id)initInternal;	// IMP=0x000000000005664b
- (unsigned long long)signpostID;	// IMP=0x0000000000056602

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

