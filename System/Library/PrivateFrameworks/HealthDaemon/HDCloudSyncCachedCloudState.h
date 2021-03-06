//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDAssertion, HDCloudSyncRepository, HDProfile;

@interface HDCloudSyncCachedCloudState : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    HDCloudSyncRepository *_repository;	// 16 = 0x10
    long long _changedZonesCount;	// 24 = 0x18
    long long _deletedZonesCount;	// 32 = 0x20
    long long _changedRecordsCount;	// 40 = 0x28
    long long _deletedRecordsCount;	// 48 = 0x30
    long long _operationCountForAnalytics;	// 56 = 0x38
    HDAssertion *_accessibilityAssertion;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000a79cd
@property(nonatomic) long long operationCountForAnalytics; // @synthesize operationCountForAnalytics=_operationCountForAnalytics;
@property(nonatomic) long long deletedRecordsCount; // @synthesize deletedRecordsCount=_deletedRecordsCount;
@property(nonatomic) long long changedRecordsCount; // @synthesize changedRecordsCount=_changedRecordsCount;
@property(nonatomic) long long deletedZonesCount; // @synthesize deletedZonesCount=_deletedZonesCount;
@property(nonatomic) long long changedZonesCount; // @synthesize changedZonesCount=_changedZonesCount;
@property(readonly, nonatomic) HDCloudSyncRepository *repository; // @synthesize repository=_repository;
@property(readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
- (_Bool)unitTest_deleteDatabaseWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000000a78a7
- (id)detailedDescription;	// IMP=0x00000000000a6e98
- (id)zonesForContainerID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a6cce
- (id)zoneForRecordID:(id)arg1 containerIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a6ae3
- (id)attachmentZoneForContainerID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a6ad4
- (id)privateMetadataZoneForContainerID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a6ac5
- (id)unifiedSyncZoneForContainerID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a6ab6
- (id)masterZoneForContainerID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a6aaa
- (id)zonesByIdentifierWithError:(id *)arg1 filter:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a5a1e
- (id)zonesByIdentifierWithError:(id *)arg1;	// IMP=0x00000000000a59fd
- (id)zoneIdentifiersWithIdentityLossForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000000a582a
- (id)zoneIdentifiersRequiringFetchForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000000a552e
- (id)zoneIdentifiersForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000000a523a
- (_Bool)addZoneWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a4ee3
- (id)serverChangeTokenForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000000a4e4b
- (_Bool)resetServerChangeTokenForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000000a46c1
- (_Bool)setServerChangeToken:(id)arg1 containerIdentifier:(id)arg2 databaseScope:(long long)arg3 error:(id *)arg4;	// IMP=0x00000000000a45eb
- (_Bool)addDatabaseWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000000a4531
- (id)initWithRepository:(id)arg1 accessibilityAssertion:(id)arg2;	// IMP=0x00000000000a426f
- (id)init;	// IMP=0x00000000000a41f5

@end

