//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/CADDatabaseInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADDatabaseOperationGroup <CADDatabaseInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;	// IMP=0x00000000000107d4
+ (_Bool)requiresReminderAccess;	// IMP=0x00000000000107cc
+ (_Bool)requiresEventAccess;	// IMP=0x00000000000107c4
- (void)CADDatabaseMigrateSubscribedCalendar:(id)arg1 toSource:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000140f0
- (void)CADDatabaseRollbackWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014096
- (int)_updatePropertiesAndRelations:(id)arg1 database:(struct CalDatabase *)arg2 insertedObjectMap:(id)arg3;	// IMP=0x0000000000013bad
- (int)_deleteObjects:(id)arg1 database:(struct CalDatabase *)arg2;	// IMP=0x0000000000013a00
- (id)_insertObjectsWithTemporaryObjectIDs:(id)arg1 database:(struct CalDatabase *)arg2 error:(int *)arg3;	// IMP=0x0000000000013435
- (id)_insert:(id)arg1 delete:(id)arg2 update:(id)arg3 database:(struct CalDatabase *)arg4 error:(int *)arg5;	// IMP=0x0000000000013333
- (int)preflightObjectID:(id)arg1;	// IMP=0x00000000000131d6
- (int)preflightAccessForDeletes:(id)arg1 updates:(id)arg2;	// IMP=0x0000000000012d7d
- (void)CADDatabaseInsert:(id)arg1 delete:(id)arg2 update:(id)arg3 andCommit:(CDUnknownBlockType)arg4;	// IMP=0x00000000000128bc
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000001270f
- (void)CADDatabaseSetShowsDeclinedEvents:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000126dc
- (void)CADDatabaseExportICSDataForCalendar:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000125d9
- (void)CADDatabaseExportICSDataForCalendarItems:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000123b9
- (id)_importEvents:(id)arg1 data:(id)arg2 intoCalendarWithID:(int)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 outError:(int *)arg6;	// IMP=0x0000000000012064
- (void)CADDatabaseImportEvents:(id)arg1 fromICSData:(id)arg2 intoCalendarsWithIDs:(id)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000000001177d
- (void)CADDatabaseLastConfirmedSplashScreenVersion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011630
- (_Bool)_CADDatabaseCanModifyCalendarDatabase;	// IMP=0x00000000000115d4
- (void)CADDatabaseCanModifyCalendarDatabase:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011586
- (void)CADDatabaseGetNextAssignableColorWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000001151a
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011497
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011426
- (void)CADDatabaseGetSequenceNumber:(CDUnknownBlockType)arg1;	// IMP=0x00000000000113ca
- (struct __CFSet *)_copyToIntCFSetRef:(id)arg1;	// IMP=0x000000000001125b
- (struct __CFArray *)_copyToIntCFArrayRef:(id)arg1;	// IMP=0x00000000000110ec
- (void)CADDatabaseMarkIndividualChangesConsumed:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010df4
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010d58
- (void)CADDatabaseFetchObjectChangesForEntityTypes:(id)arg1 insideObject:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010bf7
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010ac0
- (void)CADDatabaseUnregisterForDetailedChangeTracking:(CDUnknownBlockType)arg1;	// IMP=0x00000000000109da
- (void)CADDatabaseRegisterForDetailedChangeTrackingInSource:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010854
- (void)CADDatabaseGetUUID:(CDUnknownBlockType)arg1;	// IMP=0x00000000000107dc

@end
