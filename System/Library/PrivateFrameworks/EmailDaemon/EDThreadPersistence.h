//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDAccountChangeHookResponder-Protocol.h>
#import <EmailDaemon/EDDatabaseChangeHookResponder-Protocol.h>
#import <EmailDaemon/EDMailboxChangeHookResponder-Protocol.h>
#import <EmailDaemon/EDMessageChangeHookResponder-Protocol.h>
#import <EmailDaemon/EDPersistenceDatabaseSchemaProvider-Protocol.h>
#import <EmailDaemon/EDProtectedDataReconciliationHookResponder-Protocol.h>
#import <EmailDaemon/EDThreadScopeManagerDataSource-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EFSignpostable-Protocol.h>

@class EDMessagePersistence, EDPersistenceDatabase, EDPersistenceHookRegistry, EDThreadScopeManager, EFDebouncer, EMBlockedSenderManager, NSMutableArray, NSMutableSet, NSString;
@protocol EFScheduler, EMVIPManager;

@interface EDThreadPersistence : NSObject <EDDatabaseChangeHookResponder, EDAccountChangeHookResponder, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EDProtectedDataReconciliationHookResponder, EDThreadScopeManagerDataSource, EFSignpostable, EDPersistenceDatabaseSchemaProvider, EFLoggable>
{
    NSMutableSet *_threadObjectIDsToRecompute;	// 8 = 0x8
    struct os_unfair_lock_s _threadRecomputationLock;	// 16 = 0x10
    NSMutableArray *_migratingThreadScopes;	// 24 = 0x18
    struct os_unfair_lock_s _migratingThreadScopesLock;	// 32 = 0x20
    EDMessagePersistence *_messagePersistence;	// 40 = 0x28
    EDPersistenceDatabase *_database;	// 48 = 0x30
    EDPersistenceHookRegistry *_hookRegistry;	// 56 = 0x38
    id <EMVIPManager> _vipManager;	// 64 = 0x40
    EMBlockedSenderManager *_blockedSenderManager;	// 72 = 0x48
    EDThreadScopeManager *_threadScopeManager;	// 80 = 0x50
    id <EFScheduler> _consistencyCheckScheduler;	// 88 = 0x58
    id <EFScheduler> _threadRecomputationScheduler;	// 96 = 0x60
    EFDebouncer *_threadRecomputationDebouncer;	// 104 = 0x68
}

+ (id)threadRecipientsTableSchema;	// IMP=0x0000000000140f2b
+ (id)threadSendersTableSchema;	// IMP=0x0000000000140bef
+ (id)threadMailboxesTableSchema;	// IMP=0x0000000000140a40
+ (id)threadsTableSchema;	// IMP=0x000000000013fea1
+ (id)threadScopesTableSchema;	// IMP=0x000000000013ee67
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;	// IMP=0x000000000013e4c6
+ (id)signpostLog;	// IMP=0x000000000013e3a0
+ (id)log;	// IMP=0x000000000013e2c3
- (void).cxx_destruct;	// IMP=0x00000000001625a8
@property(retain, nonatomic) EFDebouncer *threadRecomputationDebouncer; // @synthesize threadRecomputationDebouncer=_threadRecomputationDebouncer;
@property(retain, nonatomic) id <EFScheduler> threadRecomputationScheduler; // @synthesize threadRecomputationScheduler=_threadRecomputationScheduler;
@property(readonly, nonatomic) id <EFScheduler> consistencyCheckScheduler; // @synthesize consistencyCheckScheduler=_consistencyCheckScheduler;
@property(readonly, nonatomic) EDThreadScopeManager *threadScopeManager; // @synthesize threadScopeManager=_threadScopeManager;
@property(readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager; // @synthesize blockedSenderManager=_blockedSenderManager;
@property(readonly, nonatomic) id <EMVIPManager> vipManager; // @synthesize vipManager=_vipManager;
@property(readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
- (_Bool)threadScopeManager:(id)arg1 evictThreadScopesWithDatabaseIDs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000162279
- (void)threadScopeManager:(id)arg1 gatherStatisticsForThreadScopesWithDatabaseIDs:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000001619ad
- (void)threadScopeManager:(id)arg1 populateThreadScopesWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001613d4
- (_Bool)threadScopeManager:(id)arg1 isValidMailboxObjectID:(id)arg2;	// IMP=0x00000000001612f2
- (_Bool)threadScopeManager:(id)arg1 mailboxScopeExists:(id)arg2;	// IMP=0x00000000001611b5
- (id)statisticsForThreadScopesWithDatabaseIDs:(id)arg1;	// IMP=0x0000000000160f7c
- (_Bool)addThreadScopeToDatabase:(id)arg1 needsUpdate:(_Bool)arg2 lastViewedDate:(id)arg3;	// IMP=0x0000000000160f66
- (_Bool)_addThreadScopeToDatabase:(id)arg1 withMailboxDatabaseID:(long long)arg2 needsUpdate:(_Bool)arg3 lastViewedDate:(id)arg4 updateThreadScopeManager:(_Bool)arg5 connection:(id)arg6;	// IMP=0x0000000000160d4b
- (_Bool)_addThreadScopeToDatabaseWithMailboxType:(id)arg1 needsUpdate:(_Bool)arg2 lastViewedDate:(id)arg3 connection:(id)arg4;	// IMP=0x0000000000160be3
- (_Bool)_addThreadScopeToDatabase:(id)arg1 needsUpdate:(_Bool)arg2 lastViewedDate:(id)arg3 updateThreadScopeManager:(_Bool)arg4;	// IMP=0x000000000016069c
- (void)verifyConsistencyOfThreadScope:(id)arg1;	// IMP=0x000000000015f387
- (id)_statementForOldestThreadInMailbox:(id)arg1 threadScope:(id)arg2 createMailboxDatabaseIDIfNecessary:(_Bool)arg3;	// IMP=0x000000000015ee16
- (id)oldestThreadObjectIDForMailbox:(id)arg1 threadScope:(id)arg2;	// IMP=0x000000000015e6d8
- (_Bool)deleteThreadsWithObjectIDs:(id)arg1;	// IMP=0x000000000015e1b4
- (_Bool)addThreads:(id)arg1;	// IMP=0x000000000015db71
- (_Bool)endMigratingThreadScope:(id)arg1;	// IMP=0x000000000015d6cc
- (_Bool)beginMigratingThreadScope:(id)arg1;	// IMP=0x000000000015d375
- (id)_threadQueryForThreadScope:(id)arg1;	// IMP=0x000000000015d238
- (id)_messageFilterExpressionForFilterPredicate:(id)arg1;	// IMP=0x000000000015d230
- (id)_recipientAddressesExpressionForRecipientType:(unsigned long long)arg1 messages:(id)arg2;	// IMP=0x000000000015cfd0
- (id)_senderAddressesExpressionForMessages:(id)arg1;	// IMP=0x000000000015cf0f
- (id)_messageMailboxesExpressionForMailboxScope:(id)arg1;	// IMP=0x000000000015ccc5
- (id)_expressionForThreadScope:(id)arg1;	// IMP=0x000000000015cb00
- (id)_messageThreadExpressionForThreadScope:(id)arg1 conversationExpression:(id)arg2;	// IMP=0x000000000015c7ec
- (id)_messageThreadExpressionForThreadScope:(id)arg1 objectIDs:(id)arg2;	// IMP=0x000000000015c65e
- (id)_messageThreadExpressionForThreadObjectID:(id)arg1;	// IMP=0x000000000015c504
- (id)_countMessagesForExpression:(id)arg1;	// IMP=0x000000000015c306
- (id)_upsertForThreadsWithThreadScopeDatabaseID:(long long)arg1 conversation:(long long)arg2;	// IMP=0x000000000015c110
- (id)_threadExpressionForThreadScopeDatabaseID:(long long)arg1 conversation:(long long)arg2;	// IMP=0x000000000015bee9
- (id)_threadDatabaseIDExpressionForThreadScopeDatabaseID:(long long)arg1 conversation:(long long)arg2;	// IMP=0x000000000015be17
- (_Bool)setPriorityForDisplayMessageSenderForThreadObjectID:(id)arg1;	// IMP=0x000000000015b211
- (id)_recalculateDisplayMessageForThreadObjectID:(id)arg1 threadScopeDatabaseID:(long long)arg2;	// IMP=0x000000000015a9e3
- (_Bool)_recalculateNewestReadMessageForThreadObjectID:(id)arg1 threadScopeDatabaseID:(long long)arg2;	// IMP=0x000000000015a476
- (_Bool)_updateNewestReadMessageWithWrappedMessage:(id)arg1 threadExpression:(id)arg2;	// IMP=0x0000000000159ddc
- (void)_addKeyPathsForDisplayMessageChangeToKeyPaths:(id)arg1;	// IMP=0x0000000000159cfc
- (void)_addKeyPathsForBasicPropertiesChangeToKeyPaths:(id)arg1;	// IMP=0x0000000000159bf2
- (id)_mailboxDatabaseIDsForWrappedMessages:(id)arg1;	// IMP=0x00000000001598f1
- (id)_threadForWrappedMessages:(id)arg1 objectID:(id)arg2;	// IMP=0x0000000000159736
- (id)_wrappedMessageForPersistedMessages:(id)arg1 threadScope:(id)arg2;	// IMP=0x0000000000158fbf
- (id)_persistedMessagesByPossibleThreadScopeForPersistedMessages:(id)arg1;	// IMP=0x00000000001587d4
- (id)_wrappedMessagesByThreadScopeForPersistedMessages:(id)arg1;	// IMP=0x000000000015860d
- (void)_iterateWrappedMessagesByConversationForPersistedMessages:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000157fd8
- (void)_iterateWrappedMessagesByConversationForPersistedMessages:(id)arg1 writeBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001576fb
- (id)_filteredPersistedMessagesForPersistedMessages:(id)arg1;	// IMP=0x0000000000157632
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;	// IMP=0x0000000000156fbc
- (_Bool)_messagesAreJournaledForThreadWithObjectID:(id)arg1;	// IMP=0x0000000000156bea
- (void)persistenceDidChangeGlobalMessageID:(long long)arg1 orConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;	// IMP=0x0000000000156b2b
- (void)persistenceIsChangingConversationID:(long long)arg1 messages:(id)arg2 generationWindow:(id)arg3;	// IMP=0x0000000000156446
- (void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)arg1 generationWindow:(id)arg2;	// IMP=0x00000000001562d1
- (void)_resetThreadScope:(id)arg1 withDatabaseID:(id)arg2;	// IMP=0x0000000000156023
- (void)persistenceIsDeletingAllMessagesInMailboxWithURL:(id)arg1 generationWindow:(id)arg2;	// IMP=0x0000000000155df6
- (_Bool)_deleteRecipientsOfType:(unsigned long long)arg1 fromThreadWithDatabaseID:(id)arg2 messageThreadExpression:(id)arg3;	// IMP=0x000000000015592f
- (_Bool)_deleteSendersFromThreadWithDatabaseID:(id)arg1 messageThreadExpression:(id)arg2;	// IMP=0x0000000000155535
- (_Bool)_deleteMailboxesFromWrappedMessages:(id)arg1 fromThreadWithDatabaseID:(id)arg2 messageThreadExpression:(id)arg3;	// IMP=0x0000000000154fcd
- (id)_updateBasicPropertiesAfterDeleteForThreadObjectID:(id)arg1 threadScopeDatabaseID:(long long)arg2;	// IMP=0x00000000001530cf
- (id)_updateThreadForDeleteWithObjectID:(id)arg1 threadScopeDatabaseID:(long long)arg2 generationWindow:(id)arg3;	// IMP=0x0000000000152900
- (id)_deleteWrappedMessages:(id)arg1 fromThreadWithObjectID:(id)arg2 threadScopeDatabaseID:(long long)arg3 generationWindow:(id)arg4;	// IMP=0x000000000015275c
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;	// IMP=0x000000000015263b
- (void)_persistenceIsDeletingMessages:(id)arg1 generationWindow:(id)arg2;	// IMP=0x0000000000152395
- (void)persistenceIsDeletingMessages:(id)arg1 generationWindow:(id)arg2;	// IMP=0x0000000000152245
- (id)_persistenceIsChangingFlags:(id)arg1 wrappedMessages:(id)arg2 threadObjectID:(id)arg3 threadScopeDatabaseID:(long long)arg4;	// IMP=0x000000000014ec1d
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;	// IMP=0x000000000014eafc
- (void)_persistenceIsChangingFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;	// IMP=0x000000000014e7f0
- (void)persistenceIsChangingFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;	// IMP=0x000000000014e538
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;	// IMP=0x000000000014e364
- (void)_addPersistedMessages:(id)arg1 journaled:(_Bool)arg2 generationWindow:(id)arg3;	// IMP=0x000000000014deda
- (void)persistenceIsAddingMessages:(id)arg1 journaled:(_Bool)arg2 generationWindow:(id)arg3;	// IMP=0x000000000014ddab
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(id)arg2 generationWindow:(id)arg3;	// IMP=0x000000000014da1b
- (id)_inactiveMailboxDatabaseIDsForMailboxScope:(id)arg1 forThreadScopeDatabaseID:(id)arg2;	// IMP=0x000000000014d424
- (void)_getIndividualMailboxScopes:(id *)arg1 unifiedMailboxThreadScopes:(id *)arg2 forAccount:(id)arg3;	// IMP=0x000000000014cfbd
- (id)resetThreadScopesForDeactivatedAccount:(id)arg1;	// IMP=0x000000000014cd6b
- (id)_addedMailboxObjectIDsForActivatedAccount:(id)arg1;	// IMP=0x000000000014ca03
- (CDUnknownBlockType)threadScopeMatcherForActivatedAccount:(id)arg1;	// IMP=0x000000000014c61d
- (id)_threadScopedToResetForActivatedAccount:(id)arg1;	// IMP=0x000000000014c4f3
- (void)resetThreadScopedForActivatedAccount:(id)arg1;	// IMP=0x000000000014c2d5
- (void)setNeedsUpdateForThreadScope:(id)arg1;	// IMP=0x000000000014c248
- (void)persistenceIsInitializingDatabaseWithConnection:(id)arg1;	// IMP=0x000000000014c0c3
- (id)_persistedMessagesForMailboxScope:(id)arg1 messageExpression:(id)arg2;	// IMP=0x000000000014bcac
- (void)_recomputeThreads;	// IMP=0x000000000014b5b1
- (void)_scheduleRecomputationForThread:(id)arg1 reason:(id)arg2;	// IMP=0x000000000014b400
- (long long)_databaseIDForThreadObjectID:(id)arg1;	// IMP=0x000000000014affd
- (id)_recipientDatabaseIDsAndDatesForMessages:(id)arg1 recipientType:(unsigned long long)arg2;	// IMP=0x000000000014ac02
- (id)_recipientDatabaseIDsAndDatesForWrappedMessages:(id)arg1 recipientType:(unsigned long long)arg2;	// IMP=0x000000000014aa40
- (id)_recipientDatabaseIDsAndDatesForThreadWithObjectID:(id)arg1 recipientType:(unsigned long long)arg2;	// IMP=0x000000000014a9c8
- (id)_senderDatabaseIDsAndDatesForMessages:(id)arg1;	// IMP=0x000000000014a5c1
- (id)_senderDatabaseIDsAndDatesForWrappedMessages:(id)arg1;	// IMP=0x000000000014a413
- (id)_senderDatabaseIDsAndDatesForThreadWithObjectID:(id)arg1;	// IMP=0x000000000014a3a0
- (id)_comparisonExpressionForSortDescriptors:(id)arg1 conversationID:(long long)arg2 threadExpression:(id)arg3 threadScopeDatabaseID:(long long)arg4 connection:(id)arg5;	// IMP=0x0000000000149b49
- (void)_addOrderByToThreadSelect:(id)arg1 forSortDescriptors:(id)arg2;	// IMP=0x00000000001498a8
- (id)threadObjectIDsByNextExistingForThreadObjectIDs:(id)arg1 forSortDescriptors:(id)arg2 excluding:(id)arg3;	// IMP=0x0000000000148a02
- (id)nextExistingThreadObjectIDForThreadObjectID:(id)arg1 forSortDescriptors:(id)arg2 excluding:(id)arg3;	// IMP=0x00000000001480c7
- (id)_addressesFromSelectStatement:(id)arg1;	// IMP=0x0000000000147d26
- (id)_addressesFromMessageAddressesStatement:(id)arg1;	// IMP=0x0000000000147b6a
- (id)_recipientsOfType:(unsigned long long)arg1 fromMessagesForThreadObjectID:(id)arg2;	// IMP=0x0000000000147ab9
- (id)_recipientsOfType:(unsigned long long)arg1 forThreadDatabaseID:(id)arg2;	// IMP=0x000000000014778c
- (id)_sendersFromMessagesForThreadObjectID:(id)arg1;	// IMP=0x00000000001476e4
- (id)_sendersForThreadDatabaseID:(id)arg1;	// IMP=0x0000000000147509
- (id)_mailboxesForThreadDatabaseID:(id)arg1;	// IMP=0x0000000000146fa2
- (id)_flagColorsFromRow:(id)arg1;	// IMP=0x0000000000146c99
- (id)changeForThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2;	// IMP=0x0000000000145713
- (id)_nonJournaledSubjectForThreadWithObjectID:(id)arg1 connection:(id)arg2;	// IMP=0x000000000014525b
- (id)threadForObjectID:(id)arg1 originatingQuery:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000143275
- (_Bool)_enumerateThreadObjectIDsForThreadScope:(id)arg1 filterClause:(id)arg2 sortDescriptors:(id)arg3 batchBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000142c13
- (void)threadObjectIDsForThreadScope:(id)arg1 sortDescriptors:(id)arg2 initialBatchSize:(unsigned long long)arg3 journaledObjectIDs:(id)arg4 batchBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000014259d
- (id)threadScopesByDatabaseID;	// IMP=0x0000000000142539
- (void)resetThreadScopesForMailboxScope:(id)arg1;	// IMP=0x0000000000141f0a
- (void)updateLastViewedDateForThreadScope:(id)arg1;	// IMP=0x0000000000141b3a
- (_Bool)_isThreadScopePrecomputed:(id)arg1 shouldMigrate:(_Bool *)arg2;	// IMP=0x0000000000141a86
- (unsigned long long)persistenceStateForThreadScope:(id)arg1;	// IMP=0x00000000001418c9
- (void)test_tearDown;	// IMP=0x00000000001417db
- (void)_enumerateThreadScopesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000014161d
- (id)initWithMessagePersistence:(id)arg1 database:(id)arg2 hookRegistry:(id)arg3 vipManager:(id)arg4 blockedSenderManager:(id)arg5;	// IMP=0x000000000014129b
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

