//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NPDCompanionPaymentPassDatabase, NSString;
@protocol NPDCompanionPassLibraryDataSource;

@interface NPDCompanionPassLibrary
{
    NPDCompanionPaymentPassDatabase *_companionPaymentPassDatabase;	// 8 = 0x8
    id <NPDCompanionPassLibraryDataSource> _dataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000046b4b
@property(nonatomic) __weak id <NPDCompanionPassLibraryDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NPDCompanionPaymentPassDatabase *companionPaymentPassDatabase; // @synthesize companionPaymentPassDatabase=_companionPaymentPassDatabase;
- (void)_handleCompanionPassDatabaseNotification:(id)arg1;	// IMP=0x0010000000046706
- (id)_filteredAndConfiguredPassForPaymentPass:(id)arg1 deviceName:(id)arg2;	// IMP=0x0010000000046399
- (id)_deviceName;	// IMP=0x001000000004630e
- (void)invalidateVehicleConnectionSessionIdentifier:(id)arg1;	// IMP=0x0010000000046251
- (void)startVehicleConnectionSessionWithPassUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004616d
- (void)sendRKEPassThroughMessage:(id)arg1 forSessionIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045fe9
- (void)recoverPassWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000045f07
- (void)usingSynchronousProxy:(_Bool)arg1 getPassForProvisioningCredentialHash:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045e23
- (void)getGroupsControllerSnapshotWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000045d3f
- (void)usingSynchronousProxy:(_Bool)arg1 getServiceProviderDataForUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045bb8
- (void)usingSynchronousProxy:(_Bool)arg1 passLocalizedStringForKey:(id)arg2 uniqueID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000045a53
- (void)supportsSearchForPassUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000045a3d
- (void)signData:(id)arg1 forPassUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045918
- (void)setBackupMetadata:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000045836
- (void)backupMetadataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045752
- (void)canAddSecureElementPassWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000045469
- (void)usingSynchronousProxy:(_Bool)arg1 canAddSecureElementPassWithConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045451
- (void)supportsDisbursements:(CDUnknownBlockType)arg1;	// IMP=0x001000000004532e
- (void)postUpgradedPassNotificationForMarket:(id)arg1 passUniqueID:(id)arg2;	// IMP=0x0010000000045271
- (void)checkForTransitNotification;	// IMP=0x00100000000451b4
- (void)transitMessageForRouteInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000450d5
- (void)supportedTransitPartnersForDigitalIssuance:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045065
- (void)sortedTransitPassesForAppletDataFormat:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000045050
- (void)migrateDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000004503d
- (void)passWithFPANIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000044d4f
- (void);	// IMP=0x001000000004496e
- (void)expressTransitPassWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044832
- (void)defaultPaymentPassWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000446f6
- (void)countPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004457c
- (void)canAddPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004449c
- (void)hasPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004431c
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPassWithUniqueID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000043eaa
- (void)isPaymentPassActivationAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043dfa
- (void)getArchivedObjectWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043c51
- (void)getDataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000439e7
- (void)getImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000436f1
- (void)getContentForUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000434b4
- (void)getPassWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004331b
- (void)getPassWithPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000042edd
- (void)getManifestHashAndSettingsForPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000042ceb
- (void)canAddFelicaPassWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000042cd2
- (void)peerPaymentPassUniqueIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000042cbc
- (void)sendUserEditedCatalog:(id)arg1;	// IMP=0x0010000000042b41
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 limitResults:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000429f3
- (void)getPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000428f2
- (void)getPassesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000426cc
- (void)removePassesWithUniqueIDs:(id)arg1 diagnosticReason:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000426b9
- (void)removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004250f
- (void)addPassesWithData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042009
- (void)replacePassWithPassData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000041d04
- (void)serviceSuspended;	// IMP=0x0010000000041c76
- (void)serviceResumed;	// IMP=0x0010000000041be8
- (void)dealloc;	// IMP=0x0010000000041acc
- (id)initWithConnection:(id)arg1 companionPaymentPassDatabase:(id)arg2 dataSource:(id)arg3;	// IMP=0x00100000000418ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
