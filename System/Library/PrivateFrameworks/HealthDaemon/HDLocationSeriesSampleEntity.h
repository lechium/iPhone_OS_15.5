//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDSeriesEntity-Protocol.h>

@class NSString;

@interface HDLocationSeriesSampleEntity <HDSeriesEntity>
{
}

+ (_Bool)validateEntityWithProfile:(id)arg1 error:(id *)arg2 validationErrorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003da31f
+ (_Bool)migrateDataToSQLFromStore:(const void *)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003d8a3a
+ (_Bool)migrateDataFromDataStore:(const void *)arg1 to:(void *)arg2 transaction:(id)arg3 recoveryAnalytics:(id)arg4 error:(id *)arg5;	// IMP=0x00000000003d806f
+ (id)hasSeriesDataForHFDKey:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003d7e12
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;	// IMP=0x00000000003d7d8f
+ (id)codableObjectsFromObjectCollection:(id)arg1;	// IMP=0x00000000003d7d5c
+ (_Bool)enumerateLocationDataInDatabase:(id)arg1 HFDKey:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003d76a0
+ (_Bool)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003d6681
+ (_Bool)insertLocationData:(id)arg1 seriesIdentifier:(id)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000632eb
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id *)arg5 insertHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000003d6285
+ (_Bool)supportsObjectMerging;	// IMP=0x00000000003d627d
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;	// IMP=0x000000000005b927
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;	// IMP=0x00000000003d5fe6
+ (id)createTableSQL;	// IMP=0x00000000003d5fde
+ (id)privateSubEntities;	// IMP=0x00000000003d5f72
+ (_Bool)isConcreteEntity;	// IMP=0x00000000003d5f6a
+ (_Bool)participatesInInsertion;	// IMP=0x000000000005b91e
+ (_Bool)isBackedByTable;	// IMP=0x00000000003d5f62
- (id)freezeWithTransaction:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003d8f19
- (void)willDeleteFromDatabase:(id)arg1;	// IMP=0x00000000003d78be
- (_Bool)deleteFromDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003d783e
- (_Bool)enumerateLocationDataInDatabase:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003d75d0
- (_Bool)enumerateLocationDataFromTimestamp:(double)arg1 toTimestamp:(double)arg2 database:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000000003d735f
- (id)dateIntervalForSeriesInDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003d6f17
- (id)sampleCountForSeriesInDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003d6c16
- (_Bool)insertLocationData:(id)arg1 database:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006378a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
