//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PDCloudStoreStateConfiguration;

@interface PDPassCloudStoreContainer
{
    _Bool _canInitializeContainer;	// 8 = 0x8
    PDCloudStoreStateConfiguration *_stateConfiguration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000194caf
@property(nonatomic) _Bool canInitializeContainer; // @synthesize canInitializeContainer=_canInitializeContainer;
@property(retain, nonatomic) PDCloudStoreStateConfiguration *stateConfiguration; // @synthesize stateConfiguration=_stateConfiguration;
- (id)cloudStoreZonesForItemType:(unsigned long long)arg1 configuration:(id)arg2 action:(unsigned long long)arg3 inContainerDatabase:(id)arg4;	// IMP=0x0010000000194ba8
- (id)cloudStoreZonesForItem:(id)arg1 action:(unsigned long long)arg2 inContainerDatabase:(id)arg3;	// IMP=0x0010000000194b31
- (id)zoneIDForSubscription:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x00100000001949e7
- (id)subscriptionForZone:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x001000000019487a
- (id)possibleDatabaseSubscriptionForContainerDatabase:(id)arg1;	// IMP=0x0010000000194862
- (id)allPossibleZoneSubscriptionsForContainerDatabase:(id)arg1;	// IMP=0x0010000000194760
- (id)allPossibleZoneNamesForContainerDatabase:(id)arg1;	// IMP=0x0010000000194713
- (id)recordTypeFromRecordName:(id)arg1;	// IMP=0x00100000001946c0
- (id)identifierFromRecord:(id)arg1;	// IMP=0x001000000019466d
- (unsigned long long)cloudStoreItemTypeForRecordType:(id)arg1;	// IMP=0x00100000001945e5
- (id)recordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x0010000000194571
- (void)processFetchedCloudStoreDataWithModifiedRecordsByDatabaseIdentifier:(id)arg1 deletedRecordsByDatabaseIdentifier:(id)arg2 carriedOverRecordsByDatabaseIdentifier:(id)arg3 conflictingRecordsByDatabaseIdentifier:(id)arg4 request:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000194075
- (void)onWorkQueue:(CDUnknownBlockType)arg1;	// IMP=0x0010000000194015
- (void)checkAccountState;	// IMP=0x0010000000193e21
- (void)passOnHandlingStateChange;	// IMP=0x0010000000193d40
- (void)advanceToNextState:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x0010000000193c43
- (void)advanceToNextState:(unsigned long long)arg1;	// IMP=0x0010000000193b6c
- (void)eraseStateConfiguration;	// IMP=0x0010000000193b58
- (id)invalidCloudStoreStateChangeError;	// IMP=0x0010000000193b38
- (void)finishInvalidStateChange;	// IMP=0x00100000001939e7
- (void)_queue_setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000193855
- (_Bool)_queue_shouldFetchAndStoreCloudDataAtStartup;	// IMP=0x001000000019384d
- (_Bool)_queue_canInitializeContainer;	// IMP=0x001000000019383d
- (void)_setupContainerManager;	// IMP=0x001000000019372e
- (id)initWithDataSource:(id)arg1;	// IMP=0x00100000001935d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
