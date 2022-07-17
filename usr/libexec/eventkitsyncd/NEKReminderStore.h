//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface NEKReminderStore
{
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_pipeQueue;	// 24 = 0x18
    MISSING_TYPE *_saveRequestsNeedPurgeDeletedObjectsAfterSave;	// 32 = 0x20
    NSMapTable *_saveRequests;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000005f473
@property(nonatomic) _Bool saveRequestsNeedPurgeDeletedObjectsAfterSave; // @synthesize saveRequestsNeedPurgeDeletedObjectsAfterSave=_saveRequestsNeedPurgeDeletedObjectsAfterSave;
@property(retain, nonatomic) NSMapTable *saveRequests; // @synthesize saveRequests=_saveRequests;
- (void)deleteReminder:(id)arg1;	// IMP=0x001000000005f301
- (void)deleteList:(id)arg1;	// IMP=0x001000000005f241
- (void)deleteAccount:(id)arg1;	// IMP=0x001000000005f0d2
- (id)_createListForWrapper:(id)arg1 store:(id)arg2;	// IMP=0x001000000005ed02
- (_Bool)_updateList:(id)arg1 withCalendarWrapper:(id)arg2;	// IMP=0x001000000005ea84
- (_Bool)_checkAndSetDefaultList:(id)arg1 calendarWrapper:(id)arg2 store:(id)arg3;	// IMP=0x001000000005ea7c
- (void)_createAccountForWrapper:(id)arg1 store:(id)arg2;	// IMP=0x001000000005e9db
- (_Bool)_updateAccount:(id)arg1 withSourceWrapper:(id)arg2 store:(id)arg3;	// IMP=0x001000000005e8f2
- (void)_deleteReminderWithIdentifier:(id)arg1 store:(id)arg2;	// IMP=0x001000000005e7b8
- (void)_deleteListWithIdentifier:(id)arg1 store:(id)arg2;	// IMP=0x001000000005e5da
- (void)_deleteAccountWithIdentifier:(id)arg1 store:(id)arg2;	// IMP=0x001000000005e2bf
- (id)wrapperForReminder:(id)arg1 oldListIdentifier:(id)arg2;	// IMP=0x001000000005e23b
- (id)wrapperForList:(id)arg1;	// IMP=0x001000000005e224
- (id)wrapperForList:(id)arg1 useAttributes:(_Bool)arg2;	// IMP=0x001000000005e1c2
- (void)deletionWrappersForChangeSet:(id)arg1 deletedReminderAndListMapping:(id)arg2 skipAccountDeletions:(_Bool)arg3 pipe:(id)arg4;	// IMP=0x001000000005dd9e
- (void)ICSWrappersForChangeSet:(id)arg1 movedReminderAndListMapping:(id)arg2 pipe:(id)arg3;	// IMP=0x001000000005d78a
- (void)remindersWrappersForChangeSet:(id)arg1 skipAccountDeletions:(_Bool)arg2 pipe:(id)arg3;	// IMP=0x001000000005d64a
- (void)listWrappersForChangeSet:(id)arg1 pipe:(id)arg2;	// IMP=0x001000000005cf88
- (void)storeWrapperForCloudKitAccount:(id)arg1 pipe:(id)arg2;	// IMP=0x001000000005ccad
- (void)batchedEnumerateRemindersForStore:(id)arg1 changeSet:(id)arg2 changeType:(int)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000005ca0b
- (void)batchedEnumerateListsForStore:(id)arg1 changeSet:(id)arg2 changeType:(int)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000005c769
- (void)batchedEnumerateAccountsForStore:(id)arg1 changeSet:(id)arg2 changeType:(int)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000005c4c7
- (void)batchedEnumerateForChangeSet:(id)arg1 changeType:(int)arg2 forEntitiesOfClass:(Class)arg3 withFetchBlock:(CDUnknownBlockType)arg4 withBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000005bf36
- (void)applySidePropertiesToReminderChangeItem:(id)arg1 withWrapper:(id)arg2 session:(id)arg3;	// IMP=0x001000000005bdd2
- (void)_ensureReminderInList:(id)arg1 saveRequest:(id)arg2 inICSWrapper:(id)arg3;	// IMP=0x001000000005b91a
- (void)performUpdateWithICSWrappers:(id)arg1 store:(id)arg2 session:(id)arg3;	// IMP=0x001000000005a19c
- (id)reminderCacheForStore:(id)arg1 wrappers:(id)arg2;	// IMP=0x0010000000059d7b
- (id)listCacheForStore:(id)arg1 wrappers:(id)arg2;	// IMP=0x0010000000059902
- (id)deduplicateICSWrappers:(id)arg1;	// IMP=0x0010000000059611
- (void)handleReminderWithUniqueIdentifierFromGizmo:(id)arg1 saveRequest:(id)arg2 list:(id)arg3 wrapper:(id)arg4;	// IMP=0x00100000000594b5
- (void)handleUpdatedReminderFromGizmo:(id)arg1 withSaveRequest:(id)arg2 withWrapper:(id)arg3;	// IMP=0x001000000005920e
- (void)handleNewReminderChangeItem:(id)arg1 withWrapper:(id)arg2 session:(id)arg3;	// IMP=0x00100000000591fc
- (void)deleteItem:(id)arg1 store:(id)arg2;	// IMP=0x00100000000590fa
- (void)deleteItemWithIdentifier:(id)arg1 store:(id)arg2;	// IMP=0x0010000000058fb5
- (void)updateICS:(id)arg1 store:(id)arg2 session:(id)arg3;	// IMP=0x0010000000058e73
- (void)updateCalendar:(id)arg1 store:(id)arg2;	// IMP=0x0010000000058909
- (void)updateSource:(id)arg1 store:(id)arg2;	// IMP=0x001000000005827e
- (_Bool)shouldSendReminder:(id)arg1;	// IMP=0x0010000000058162
- (id)getDefaultListForStore:(id)arg1;	// IMP=0x001000000005807a
- (id)_deletableListsForStore:(id)arg1;	// IMP=0x0010000000057b13
- (void)removeAllRemindersInList:(id)arg1;	// IMP=0x00100000000578e0
- (void)removeDeletableLists:(id)arg1;	// IMP=0x0010000000057716
- (id)_deletableAccountsForStore:(id)arg1;	// IMP=0x00100000000575c4
- (void)removeDeletableAccounts:(id)arg1;	// IMP=0x001000000005748f
- (void)removeAllItems;	// IMP=0x00100000000572a6
- (id)saveRequestForStore:(id)arg1 needsPurgeDeletedObjectsAfterSave:(_Bool)arg2;	// IMP=0x00100000000570d5
- (id)saveRequestForStore:(id)arg1;	// IMP=0x00100000000570c1
- (_Bool)_saveEventStore:(id)arg1;	// IMP=0x0010000000056b32
- (void)saveEventStore:(id)arg1;	// IMP=0x0010000000056a4b
- (id)freshEventStoreFor:(id)arg1;	// IMP=0x00100000000569b0
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0010000000056880

@end
