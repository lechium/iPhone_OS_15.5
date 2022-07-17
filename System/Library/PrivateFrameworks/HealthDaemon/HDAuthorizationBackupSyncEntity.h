//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDAuthorizationBackupSyncEntity
{
}

+ (_Bool)supportsSyncStore:(id)arg1;	// IMP=0x000000000070dc49
+ (id)excludedSyncStoresForSession:(id)arg1;	// IMP=0x000000000070dc30
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x000000000070d7f7
+ (void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg1;	// IMP=0x000000000070d762
+ (_Bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id *)arg5;	// IMP=0x000000000070d6b3
+ (id)syncEntityIdentifier;	// IMP=0x000000000070d693
+ (id)backupInfoUserDefaultsKey;	// IMP=0x000000000070d689
+ (void)resetAuthorizationBackupIdentifiers;	// IMP=0x000000000070d67d
+ (id)authorizationBackupPushIdentifierWithSyncStore:(id)arg1;	// IMP=0x000000000070d5f4
+ (id)authorizationBackupPullIdentifierWithSyncStore:(id)arg1;	// IMP=0x000000000070d56b
+ (void)setAuthorizationBackupPushIdentifier:(id)arg1 syncStore:(id)arg2;	// IMP=0x000000000070d154
+ (id)createCodableSourceAuthorizationWithSource:(id)arg1 syncSession:(id)arg2;	// IMP=0x000000000070d05a

@end
