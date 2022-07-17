//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDAccountChangeHookResponder-Protocol.h>
#import <EmailDaemon/EDReconciliationQueryProvider-Protocol.h>
#import <EmailDaemon/EDThreadQueryHandlerDelegate-Protocol.h>
#import <EmailDaemon/EFContentProtectionObserver-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EMMessageRepositoryInterface-Protocol.h>

@class EDConversationPersistence, EDFetchController, EDMailboxPersistence, EDMailboxPredictionController, EDMessageChangeManager, EDMessagePersistence, EDPersistenceHookRegistry, EDRemoteContentCacheConfiguration, EDRemoteContentManager, EDRemoteContentPersistence, EDThreadPersistence, EDVIPManager, NSConditionLock, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol EDRemoteSearchProvider, EDResumable, EFScheduler, EMUserProfileProvider, OS_dispatch_queue;

@interface EDMessageRepository : NSObject <EDAccountChangeHookResponder, EDThreadQueryHandlerDelegate, EFContentProtectionObserver, EMMessageRepositoryInterface, EDReconciliationQueryProvider, EFLoggable>
{
    EDMailboxPredictionController *_mailboxPredictionController;	// 8 = 0x8
    struct os_unfair_lock_s _mailboxPredictionControllerLock;	// 16 = 0x10
    struct os_unfair_lock_s _handlersLock;	// 20 = 0x14
    NSMutableDictionary *_queryHandlers;	// 24 = 0x18
    NSMutableDictionary *_threadQueryHandlers;	// 32 = 0x20
    NSMutableSet *_handlerTokens;	// 40 = 0x28
    EDPersistenceHookRegistry *_hookRegistry;	// 48 = 0x30
    EDMessagePersistence *_messagePersistence;	// 56 = 0x38
    EDConversationPersistence *_conversationPersistence;	// 64 = 0x40
    EDThreadPersistence *_threadPersistence;	// 72 = 0x48
    EDRemoteContentPersistence *_remoteContentPersistence;	// 80 = 0x50
    EDMessageChangeManager *_messageChangeManager;	// 88 = 0x58
    NSConditionLock *_performQueryOnSerializationQueue;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_serializationQueue;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_contentProtectionQueue;	// 112 = 0x70
    EDMailboxPersistence *_mailboxPersistence;	// 120 = 0x78
    id <EMUserProfileProvider> _userProfileProvider;	// 128 = 0x80
    EDVIPManager *_vipManager;	// 136 = 0x88
    id <EDRemoteSearchProvider> _remoteSearchProvider;	// 144 = 0x90
    EDFetchController *_fetchController;	// 152 = 0x98
    id <EDResumable> _observerResumer;	// 160 = 0xa0
    EDRemoteContentManager *_remoteContentManager;	// 168 = 0xa8
    EDRemoteContentCacheConfiguration *_remoteContentCacheConfiguration;	// 176 = 0xb0
    id <EFScheduler> _updateThrottlerResetScheduler;	// 184 = 0xb8
    CDUnknownBlockType _updateThrottlerResetBlock;	// 192 = 0xc0
}

+ (id)signpostLog;	// IMP=0x0000000000092237
+ (id)log;	// IMP=0x000000000009215a
- (void).cxx_destruct;	// IMP=0x000000000009c930
@property(nonatomic) __weak CDUnknownBlockType updateThrottlerResetBlock; // @synthesize updateThrottlerResetBlock=_updateThrottlerResetBlock;
@property(readonly, nonatomic) id <EFScheduler> updateThrottlerResetScheduler; // @synthesize updateThrottlerResetScheduler=_updateThrottlerResetScheduler;
@property(readonly, nonatomic) EDRemoteContentCacheConfiguration *remoteContentCacheConfiguration; // @synthesize remoteContentCacheConfiguration=_remoteContentCacheConfiguration;
@property(readonly, nonatomic) EDRemoteContentManager *remoteContentManager; // @synthesize remoteContentManager=_remoteContentManager;
@property(readonly, nonatomic) id <EDResumable> observerResumer; // @synthesize observerResumer=_observerResumer;
@property(readonly, nonatomic) EDFetchController *fetchController; // @synthesize fetchController=_fetchController;
@property(readonly, nonatomic) id <EDRemoteSearchProvider> remoteSearchProvider; // @synthesize remoteSearchProvider=_remoteSearchProvider;
@property(readonly, nonatomic) EDVIPManager *vipManager; // @synthesize vipManager=_vipManager;
@property(readonly, nonatomic) id <EMUserProfileProvider> userProfileProvider; // @synthesize userProfileProvider=_userProfileProvider;
@property(readonly, nonatomic) EDMailboxPersistence *mailboxPersistence; // @synthesize mailboxPersistence=_mailboxPersistence;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // @synthesize contentProtectionQueue=_contentProtectionQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serializationQueue; // @synthesize serializationQueue=_serializationQueue;
@property(readonly, nonatomic) NSConditionLock *performQueryOnSerializationQueue; // @synthesize performQueryOnSerializationQueue=_performQueryOnSerializationQueue;
@property(retain, nonatomic) EDMessageChangeManager *messageChangeManager; // @synthesize messageChangeManager=_messageChangeManager;
@property(readonly, nonatomic) EDRemoteContentPersistence *remoteContentPersistence; // @synthesize remoteContentPersistence=_remoteContentPersistence;
@property(retain, nonatomic) EDThreadPersistence *threadPersistence; // @synthesize threadPersistence=_threadPersistence;
@property(readonly, nonatomic) EDConversationPersistence *conversationPersistence; // @synthesize conversationPersistence=_conversationPersistence;
@property(retain, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(retain, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(retain, nonatomic) NSMutableSet *handlerTokens; // @synthesize handlerTokens=_handlerTokens;
@property(retain, nonatomic) NSMutableDictionary *threadQueryHandlers; // @synthesize threadQueryHandlers=_threadQueryHandlers;
@property(retain, nonatomic) NSMutableDictionary *queryHandlers; // @synthesize queryHandlers=_queryHandlers;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;	// IMP=0x000000000009c5cf
- (id)threadReconciliationQueries;	// IMP=0x000000000009c4c5
- (id)messageReconciliationQueries;	// IMP=0x000000000009c3bb
- (void)_resetUpdateThrottlersWithLogMessage:(id)arg1;	// IMP=0x000000000009c1bc
- (void)parseRemoteContentURLsFromMessageWithObjectID:(id)arg1 requestID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000009be68
- (void)getRemoteContentURLInfoOrderedBy:(long long)arg1 inReverseOrder:(_Bool)arg2 limit:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000009bce4
- (void)noteViewOfRemoteContentLinks:(id)arg1;	// IMP=0x000000000009bc5c
- (void)getURLCacheInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009baa0
- (void)messageObjectIDsForSearchableItemIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009b655
- (void)messageObjectIDForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009b531
- (void)loadOlderMessagesForMailboxes:(id)arg1;	// IMP=0x000000000009b414
- (id)mailboxPredictionController;	// IMP=0x000000000009b2ac
- (void)predictMailboxForMovingMessages:(id)arg1 withObserver:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000009b0e9
- (void)getCachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000009afdf
- (void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;	// IMP=0x000000000009ae29
- (void)resetPrecomputedThreadScopesForMailboxScope:(id)arg1;	// IMP=0x000000000009ac0f
- (id)requestRepresentationForMessageWithID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000009a320
- (id)_persistedObjectIDsForObjectIDs:(id)arg1;	// IMP=0x000000000009a085
- (id)_persistedMessagesForObjectIDs:(id)arg1;	// IMP=0x0000000000099fde
- (id)_persistedMessagesForMessageChangeAction:(id)arg1;	// IMP=0x0000000000099f68
- (void)_performMessageConversationFlagChangeAction:(id)arg1;	// IMP=0x0000000000099ebb
- (id)_performUndoAction:(id)arg1;	// IMP=0x0000000000099a36
- (id)_undoActionsForMovedMessages:(id)arg1;	// IMP=0x0000000000099641
- (void)_performMessageTransferAllActionToSpecialMailbox:(id)arg1;	// IMP=0x00000000000991db
- (id)_performMessageTransferActionToSpecialMailbox:(id)arg1 returnUndoAction:(_Bool)arg2;	// IMP=0x0000000000098b5b
- (void)_performMessageTransferAllAction:(id)arg1;	// IMP=0x00000000000989a4
- (id)_performMessageTransferAction:(id)arg1 returnUndoAction:(_Bool)arg2;	// IMP=0x0000000000098795
- (id)_changeFlagsForPersistedMessages:(id)arg1 flagChange:(id)arg2 returnUndoAction:(_Bool)arg3;	// IMP=0x0000000000097f96
- (void)_performMessageDeleteAction:(id)arg1;	// IMP=0x0000000000097f01
- (void)_performMessageDeleteAllAction:(id)arg1;	// IMP=0x0000000000097db2
- (void)_performMessageFlagChangeAllAction:(id)arg1;	// IMP=0x0000000000097c1e
- (id)_performMessageFlagChangeAction:(id)arg1 returnUndoAction:(_Bool)arg2;	// IMP=0x0000000000097b3e
- (void)performMessageChangeAction:(id)arg1 requestID:(unsigned long long)arg2 returnUndoAction:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000973e8
- (void)messageListItemsForObjectIDs:(id)arg1 requestID:(unsigned long long)arg2 observationIdentifier:(id)arg3 loadSummaryForAdditionalObjectIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000096049
- (void)_enumerateThreadsByThreadObjectIDsByScope:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000095a7f
- (id)_partitionObjectIDs:(id)arg1;	// IMP=0x00000000000956db
- (void)cancelAllHandlers;	// IMP=0x0000000000095613
@property(readonly, copy, nonatomic) NSSet *test_activeQueryCancelationTokens;
- (void)startCountingQuery:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 withObserver:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000095243
- (void)_triggerMigrationWithThreadScopesMatcher:(CDUnknownBlockType)arg1;	// IMP=0x0000000000094cee
- (void)threadQueryHandlerStateDidChange:(id)arg1;	// IMP=0x000000000009491d
- (void)_triggerMigrationForThreadScopes:(id)arg1;	// IMP=0x00000000000947b5
- (void)accountBecameInactive:(id)arg1;	// IMP=0x00000000000945fb
- (void)accountBecameActive:(id)arg1;	// IMP=0x00000000000943a7
- (void)_performQuery:(id)arg1 withObserver:(id)arg2 observationIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000093739
- (void)performQuery:(id)arg1 withObserver:(id)arg2 observationIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000934ad
- (void)performCountQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009333b
- (void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000092bce
- (void)isDataAccessible:(CDUnknownBlockType)arg1;	// IMP=0x0000000000092b87
- (void)test_tearDown;	// IMP=0x0000000000092975
- (void)dealloc;	// IMP=0x00000000000928fd
- (id)initWithMessagePersistence:(id)arg1 conversationPersistence:(id)arg2 threadPersistence:(id)arg3 remoteContentPersistence:(id)arg4 messageChangeManager:(id)arg5 hookRegistry:(id)arg6 mailboxPersistence:(id)arg7 remoteSearchProvider:(id)arg8 userProfileProvider:(id)arg9 vipManager:(id)arg10 fetchController:(id)arg11 observerResumer:(id)arg12 remoteContentManager:(id)arg13 remoteContentCacheConfiguration:(id)arg14;	// IMP=0x000000000009235d
- (unsigned long long)signpostID;	// IMP=0x0000000000092314

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
