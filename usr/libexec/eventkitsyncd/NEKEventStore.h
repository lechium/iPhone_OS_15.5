//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEKRecordMap, NEKSeenMap, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NEKEventStore
{
    NSMutableArray *_createdEntities;	// 16 = 0x10
    struct os_unfair_lock_s _createdEntitiesLock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_idleBlockQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_pipeQueue;	// 48 = 0x30
    NSMutableDictionary *_syncedEntityUniqueIdentifiers;	// 56 = 0x38
    NSMutableDictionary *_alertSupressionCache;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000022d98
- (void)_flushQueue;	// IMP=0x0010000000022d76
- (void)_sendChangesIfAvailable;	// IMP=0x0010000000022d39
- (id)_ICSLogTestForWrapper:(id)arg1;	// IMP=0x0010000000022cad
- (id)_createCalendarForWrapper:(id)arg1 store:(id)arg2;	// IMP=0x001000000002273c
- (_Bool)_updateCalendar:(id)arg1 withCalendarWrapper:(id)arg2;	// IMP=0x0010000000022456
- (_Bool)_checkAndSetDefaultCalendar:(id)arg1 calendarWrapper:(id)arg2 store:(id)arg3;	// IMP=0x001000000002244e
- (id)_createSourceForWrapper:(id)arg1 store:(id)arg2;	// IMP=0x001000000002238c
- (_Bool)_updateSource:(id)arg1 withSourceWrapper:(id)arg2 store:(id)arg3;	// IMP=0x00100000000222f5
- (void)_deleteReminderWithIdentifier:(id)arg1 calendarIdentifier:(id)arg2 store:(id)arg3;	// IMP=0x001000000002207a
- (void)_deleteEventWithIdentifier:(id)arg1 calendarIdentifier:(id)arg2 store:(id)arg3;	// IMP=0x0010000000021dbc
- (void)_deleteAndLogEvent:(id)arg1 identifier:(id)arg2 store:(id)arg3;	// IMP=0x0010000000021b96
- (void)_deleteCalendarWithIdentifier:(id)arg1 store:(id)arg2;	// IMP=0x00100000000219eb
- (void)_deleteSourceWithIdentifier:(id)arg1 store:(id)arg2;	// IMP=0x0010000000021843
- (void)_didCreateEntity:(id)arg1;	// IMP=0x00100000000217e2
- (void)sweepSeenMap;	// IMP=0x00100000000217a5
- (void)_commitPendingRecordMapChanges;	// IMP=0x0010000000021632
- (void)removeIdentifiersForDeletedRecordIDs:(id)arg1;	// IMP=0x00100000000214ad
- (void)_removeIdentifierForDeletedEntity:(id)arg1;	// IMP=0x0010000000021435
- (_Bool)hasRowMappingForEntity:(id)arg1;	// IMP=0x00100000000212fe
- (void)updateRowMappingForEntity:(id)arg1;	// IMP=0x0010000000021149
- (id)calendarIdentifierInRowMappingForRecordIDRef:(id)arg1;	// IMP=0x001000000002102c
- (id)identifierInRowMappingForRecordIDRef:(id)arg1;	// IMP=0x0010000000020f2b
- (id)calendarIdentifierInRowMappingForEventOrTask:(id)arg1;	// IMP=0x0010000000020e24
- (id)identifierInRowMappingForEventOrTask:(id)arg1;	// IMP=0x0010000000020d33
- (id)_identifierInRowMapping:(id)arg1;	// IMP=0x0010000000020ca4
- (id)wrapperForCalendarItem:(id)arg1;	// IMP=0x0010000000020c41
- (id)wrapperForCalendar:(id)arg1;	// IMP=0x0010000000020c2a
- (id)wrapperForCalendar:(id)arg1 useAttributes:(_Bool)arg2;	// IMP=0x0010000000020bc8
- (id)wrapperForSource:(id)arg1;	// IMP=0x0010000000020b6d
- (id)wrapperForCalEntity:(id)arg1;	// IMP=0x0010000000020a66
- (void)deletionWrappersForSourceAggregator:(id)arg1 pipe:(id)arg2;	// IMP=0x001000000002084a
- (void)deletionWrappersForChangeSet:(id)arg1 skipSourceDeletions:(_Bool)arg2 pipe:(id)arg3;	// IMP=0x0010000000020544
- (void)ICSWrappersForChangeSet:(id)arg1 pipe:(id)arg2;	// IMP=0x001000000001f89e
- (void)calendarWrappersForChangeSet:(id)arg1 pipe:(id)arg2;	// IMP=0x001000000001ed08
- (void)storeWrappersForSourceAggregator:(id)arg1 pipe:(id)arg2;	// IMP=0x001000000001e878
- (void)addAttendeeEvents:(id)arg1;	// IMP=0x001000000001e49b
- (void)updateInvitationStatusForCalendarItem:(id)arg1 identifier:(id)arg2 withWrapper:(id)arg3 session:(id)arg4;	// IMP=0x001000000001de68
- (void)updateSelfAttendeeForCalendarItem:(id)arg1 identifier:(id)arg2 withWrapper:(id)arg3;	// IMP=0x001000000001d427
- (void)applySidePropertiesToEntity:(id)arg1 withWrapper:(id)arg2 session:(id)arg3;	// IMP=0x001000000001ca65
- (void)_deleteCalendarItemsMovedToCalendar:(id)arg1 inICSWrapper:(id)arg2;	// IMP=0x001000000001c44f
- (void)_deleteCalendarItemsInICSWrapperFromOldCalendar:(id)arg1 store:(id)arg2;	// IMP=0x001000000001be51
- (void)_deleteDetachedCalendarItemsFromOldCalendar:(id)arg1 deletedEvents:(id)arg2;	// IMP=0x001000000001ba76
- (void)performUpdateWithICSWrappers:(id)arg1 store:(id)arg2 session:(id)arg3;	// IMP=0x001000000001b2c3
- (void)_processArrayOfArrayOfICSWrappers:(id)arg1 batchWrappers:(id)arg2 session:(id)arg3;	// IMP=0x001000000001ac50
- (void)_processUpdateWithICS:(id)arg1 store:(id)arg2 calendar:(id)arg3 resultWrappers:(id)arg4 resultCalendars:(id)arg5;	// IMP=0x001000000001a232
- (void)_processUpdateFromWatch:(id)arg1 calendar:(id)arg2 store:(id)arg3;	// IMP=0x0010000000019a25
- (id)_filterOutInvalidICSWrappers:(id)arg1 store:(id)arg2 calendars:(id *)arg3;	// IMP=0x00100000000193f1
- (void)handleCalendarTaskWithUniqueIdentifierFromGizmo:(id)arg1 calendar:(id)arg2 wrapper:(id)arg3;	// IMP=0x00100000000191aa
- (void)handleCalendarEventWithUniqueIdentifierFromGizmo:(id)arg1 calendar:(id)arg2 wrapper:(id)arg3 detachedEventMap:(id)arg4;	// IMP=0x0010000000018d35
- (id)detacheesForIdentifierCreatingIfNeeded:(id)arg1 detachedEventMap:(id)arg2;	// IMP=0x0010000000018c92
- (_Bool)updateMasterEvent:(id)arg1 masterIdentifier:(id)arg2 calendarIdentifier:(id)arg3 masterParticipationStatus:(long long)arg4 detachedEvents:(id)arg5;	// IMP=0x0010000000017dfe
- (_Bool)updateEvent:(id)arg1 identifier:(id)arg2 eventStore:(id)arg3 occurrenceDate:(id)arg4 participationStatus:(long long)arg5 masterIdentifier:(id)arg6 isMaster:(_Bool)arg7;	// IMP=0x0010000000017ab9
- (void)handleUpdatedItemFromGizmo:(id)arg1 type:(long long)arg2 withWrapper:(id)arg3 identifier:(id)arg4;	// IMP=0x001000000001747d
- (void)handleNewEntity:(id)arg1 withWrapper:(id)arg2 session:(id)arg3;	// IMP=0x0010000000017260
- (void)deleteItem:(id)arg1 store:(id)arg2;	// IMP=0x0010000000016ff3
- (void)deleteItemWithIdentifier:(id)arg1 store:(id)arg2;	// IMP=0x0010000000016e2e
- (void)updateICS:(id)arg1 store:(id)arg2 session:(id)arg3;	// IMP=0x0010000000016c78
- (void)updateCalendar:(id)arg1 store:(id)arg2;	// IMP=0x00100000000167bd
- (void)updateSource:(id)arg1 store:(id)arg2;	// IMP=0x0010000000015c26
- (void)endMappingEntities;	// IMP=0x0010000000015c05
- (void)startMappingEntities;	// IMP=0x0010000000015bc5
- (_Bool)shouldSendEntity:(id)arg1;	// IMP=0x0010000000015b39
- (_Bool)_shouldSendReminder:(id)arg1;	// IMP=0x0010000000015a65
- (_Bool)_shouldSendEvent:(id)arg1;	// IMP=0x0010000000015395
- (void)getDefaultTaskCalendar:(id *)arg1 defaultEventCalendar:(id *)arg2 store:(id)arg3;	// IMP=0x00100000000151b4
- (void)purgeRecordMap;	// IMP=0x0010000000015177
- (void)saveEventStore:(id)arg1;	// IMP=0x0010000000014ee5
- (id)freshEventStoreFor:(id)arg1;	// IMP=0x0010000000014e0f
@property(readonly, nonatomic) NEKSeenMap *seenMap;
@property(readonly, nonatomic) NEKRecordMap *recordMap;
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0010000000014bee

@end

