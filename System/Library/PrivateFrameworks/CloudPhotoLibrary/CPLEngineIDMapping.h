//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineIDMapping-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineIDMapping <CPLAbstractObject, CPLEngineIDMapping>
{
}

- (_Bool)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006619b
- (_Bool)addAddEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000066119
- (_Bool)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000066097
- (_Bool)removeMappingForCloudScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006601a
- (_Bool)hasPendingIdentifiers;	// IMP=0x0000000000065fd6
- (_Bool)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg1 asFinalWithError:(id *)arg2;	// IMP=0x0000000000065efe
- (_Bool)setFinalCloudScopedIdentifier:(id)arg1 forPendingCloudScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000065dd5
- (id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)arg1;	// IMP=0x0000000000065bde
- (id)setupCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000065987
- (_Bool)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000065829
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg1;	// IMP=0x00000000000656c1
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;	// IMP=0x0000000000065638
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;	// IMP=0x000000000006548c
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x000000000006541d
- (unsigned long long)scopeType;	// IMP=0x0000000000065412

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end
