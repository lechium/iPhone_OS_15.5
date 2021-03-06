//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDHealthEntity.h>

#import <ActivityAchievementsDaemon/HDNanoSyncEntity-Protocol.h>
#import <ActivityAchievementsDaemon/HDSyncEntity-Protocol.h>

@class NSString;

@interface ACHTemplateEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>
{
}

+ (id)codableTemplateForTemplateInDatabase:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003ed21
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;	// IMP=0x000000000003ed0f
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003e730
+ (_Bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id *)arg5;	// IMP=0x000000000003e16e
+ (long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id *)arg5;	// IMP=0x000000000003e08f
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;	// IMP=0x000000000003e087
+ (id)propertyForSyncProvenance;	// IMP=0x000000000003e07a
+ (id)decodeSyncObjectWithData:(id)arg1;	// IMP=0x000000000003e02d
+ (id)syncEntityIdentifier;	// IMP=0x000000000003dff0
+ (_Bool)supportsSyncStore:(id)arg1;	// IMP=0x000000000003dfd3
+ (id)_templatesWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003dbc5
+ (_Bool)_removeTemplates:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003d639
+ (id)_insertTemplate:(id)arg1 provenance:(long long)arg2 database:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003cdc8
+ (_Bool)_insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id *)arg5;	// IMP=0x000000000003c727
+ (id)allTemplatesWithProfile:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003c680
+ (_Bool)removeTemplates:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003c66e
+ (_Bool)insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id *)arg5;	// IMP=0x000000000003c65c
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;	// IMP=0x000000000003c58a
+ (long long)protectionClass;	// IMP=0x000000000003c57f
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x000000000003c56b
+ (id)createTableSQL;	// IMP=0x000000000003c3ca
+ (id)databaseTable;	// IMP=0x000000000003c39e
+ (id)syncedTemplatesObserver;	// IMP=0x000000000003c365
+ (void)setSyncedTemplatesObserver:(id)arg1;	// IMP=0x000000000003c31f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

