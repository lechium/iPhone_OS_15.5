//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDHealthEntitySchema-Protocol.h>

@class NSString;

@interface HDObjectAuthorizationEntity <HDHealthEntitySchema>
{
}

+ (id)pruneWithProfile:(id)arg1 nowDate:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000466fe7
+ (id)authorizationRecordsBySourceForSampleWithUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000466c05
+ (id)authorizationRecordsForSamples:(id)arg1 sourceEntity:(id)arg2 sessionIdentifier:(id)arg3 profile:(id)arg4 error:(id *)arg5;	// IMP=0x00000000004662bf
+ (id)authorizationStatusForSamplesOfType:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000465d26
+ (_Bool)resetAuthorizationForObjects:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000465b17
+ (_Bool)resetAllObjectAuthorizationRecordsForProfile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004659b0
+ (_Bool)resetObjectAuthorizationRecordsForSource:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000465717
+ (_Bool)setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000465029
+ (id)propertyForSyncProvenance;	// IMP=0x000000000046501c
+ (id)uniquedColumns;	// IMP=0x0000000000464f9f
+ (id)foreignKeys;	// IMP=0x0000000000464ed5
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x0000000000464ec1
+ (id)databaseTable;	// IMP=0x0000000000464eb4
+ (long long)protectionClass;	// IMP=0x000000000003404f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
