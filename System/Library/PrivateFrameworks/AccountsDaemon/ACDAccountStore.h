//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

#import <AccountsDaemon/ACRemoteAccountStoreProtocol-Protocol.h>

@class ACDAccessPluginManager, ACDAccountNotifier, ACDAuthenticationDialogManager, ACDAuthenticationPluginManager, ACDClient, ACDClientAuthorizationManager, ACDDatabaseBackupActivity, ACDDatabaseConnection, ACDDataclassOwnersManager, ACDFakeRemoteAccountStoreSession, ACRemoteDeviceProxy, NSMutableArray, NSString;
@protocol ACDAccountStoreDelegate;

@interface ACDAccountStore : ACAccountStore <ACRemoteAccountStoreProtocol>
{
    NSMutableArray *_accountChanges;	// 8 = 0x8
    ACDDatabaseConnection *_databaseConnection;	// 16 = 0x10
    ACDClientAuthorizationManager *_authorizationManager;	// 24 = 0x18
    ACDFakeRemoteAccountStoreSession *_fakeRemoteAccountStoreSession;	// 32 = 0x20
    _Bool _notificationsEnabled;	// 40 = 0x28
    _Bool _migrationInProgress;	// 41 = 0x29
    id <ACDAccountStoreDelegate> _delegate;	// 48 = 0x30
    ACDClient *_client;	// 56 = 0x38
    ACRemoteDeviceProxy *_remoteDeviceProxy;	// 64 = 0x40
    ACDAuthenticationPluginManager *_authenticationPluginManager;	// 72 = 0x48
    ACDAccessPluginManager *_accessPluginManager;	// 80 = 0x50
    ACDDataclassOwnersManager *_dataclassOwnersManager;	// 88 = 0x58
    ACDAuthenticationDialogManager *_authenticationDialogManager;	// 96 = 0x60
    ACDAccountNotifier *_accountNotifier;	// 104 = 0x68
    ACDDatabaseBackupActivity *_databaseBackupActivity;	// 112 = 0x70
}

+ (id)accountCache;	// IMP=0x0000000000024dba
- (void).cxx_destruct;	// IMP=0x000000000003d45b
@property(nonatomic, getter=isMigrationInProgress) _Bool migrationInProgress; // @synthesize migrationInProgress=_migrationInProgress;
@property(nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(retain, nonatomic) ACDDatabaseBackupActivity *databaseBackupActivity; // @synthesize databaseBackupActivity=_databaseBackupActivity;
@property(retain, nonatomic) ACDAccountNotifier *accountNotifier; // @synthesize accountNotifier=_accountNotifier;
@property(retain, nonatomic) ACDAuthenticationDialogManager *authenticationDialogManager; // @synthesize authenticationDialogManager=_authenticationDialogManager;
@property(retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager; // @synthesize dataclassOwnersManager=_dataclassOwnersManager;
@property(retain, nonatomic) ACDAccessPluginManager *accessPluginManager; // @synthesize accessPluginManager=_accessPluginManager;
@property(retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager; // @synthesize authenticationPluginManager=_authenticationPluginManager;
@property(readonly, nonatomic) ACDDatabaseConnection *databaseConnection; // @synthesize databaseConnection=_databaseConnection;
@property(retain, nonatomic) ACRemoteDeviceProxy *remoteDeviceProxy; // @synthesize remoteDeviceProxy=_remoteDeviceProxy;
@property(readonly, nonatomic) ACDClientAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;
@property(nonatomic) __weak ACDClient *client; // @synthesize client=_client;
@property(nonatomic) __weak id <ACDAccountStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerMonitorForAccountsOfTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003cde3
- (void)shutdownAccountsD:(CDUnknownBlockType)arg1;	// IMP=0x000000000003cdcc
- (void)scheduleBackupIfNonexistent:(CDUnknownBlockType)arg1;	// IMP=0x000000000003cd4e
- (void)triggerKeychainMigrationIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ca3a
- (void)migrateCredentialForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c799
- (void)removeAccountFromPairedDevice:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003c661
- (void)removeAccountsFromPairedDeviceWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c543
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003c3f4
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003c28f
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2;	// IMP=0x000000000003c277
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003b266
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003aeda
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000003adf9
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003ad42
- (id)longLivedRemoteAccountStoreSession;	// IMP=0x000000000003ad30
- (id)remoteAccountStoreSession;	// IMP=0x000000000003acdc
- (void)handleURL:(id)arg1;	// IMP=0x000000000003a6e5
- (void)_removeClientTokenForAccountIdentifer:(id)arg1;	// IMP=0x000000000003a64d
- (id)_clientTokenForAccountIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x000000000003a57d
- (void)clientTokenForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a374
- (void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003a04c
- (id)_clientTokenQueue;	// IMP=0x0000000000039fcb
- (void)resetDatabaseToVersion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039e45
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039dae
- (void)isPushSupportedForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039d57
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039757
- (void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000396c4
- (void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039549
- (void)accountExistsWithDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003932a
- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039287
- (void)dataclassActionsForAccountDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038e58
- (void)dataclassActionsForAccountSave:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038848
- (void)preloadDataclassOwnersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000387ac
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003869b
- (void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003854e
- (void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003827d
- (void)grantedPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038187
- (void)permissionForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003801b
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037e3e
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000037bf2
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003793e
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000037923
- (void)_requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 allowUserInteraction:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000375ed
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000037005
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036dcc
- (void)_completeSave:(id)arg1 dataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000367d9
- (id)_lockForAccountType:(id)arg1;	// IMP=0x0000000000036665
- (_Bool)shouldPreventAccountCreationWithObsoleteAccountType;	// IMP=0x000000000003665d
- (void)saveAccount:(id)arg1 verify:(_Bool)arg2 dataclassActions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000035995
- (void)saveAccount:(id)arg1 pid:(id)arg2 verify:(_Bool)arg3 dataclassActions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000035976
- (void)saveAccount:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003595c
- (void)canSaveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003570a
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000035235
- (void)removeAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034c85
- (void)insertAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034642
- (void)accessKeysForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000340fb
- (id)_supportedDataclassesForManagedAccountType:(id)arg1;	// IMP=0x0000000000033f04
- (void)supportedDataclassesForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033cf2
- (id)_syncableDataclassesForManagedAccountType:(id)arg1;	// IMP=0x0000000000033afb
- (void)syncableDataclassesForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000338e9
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033511
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033139
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032c69
- (_Bool)_isManagedAccount:(id)arg1 enabledForManagedDataclass:(id)arg2;	// IMP=0x0000000000032a8b
- (_Bool)_canManagedAccountType:(id)arg1 syncManagedDataclass:(id)arg2;	// IMP=0x00000000000328ad
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000323bf
- (void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031f3f
- (id)_childAccountsForAccountWithID:(id)arg1;	// IMP=0x0000000000031a97
- (void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003165a
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000315f4
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031388
- (id)_predicateForFetchingAccountsWithManagedAccountTypeID:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000003132c
- (id)_accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000030c58
- (id)_accountsWithAcountType:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000030c3e
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030af7
- (void)accountsWithAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030add
- (void)dataclassesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000307bf
- (void)removeCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003046a
- (void)saveCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ffb9
- (void)insertCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f971
- (void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002f600
- (void)credentialItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f2f8
- (id)_legacyCredentialForAccount:(id)arg1 client:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002f043
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002e829
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e42c
- (void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002df06
- (id)masterCredentialForAccountIdentifier:(id)arg1;	// IMP=0x000000000002dc01
- (void)accountTypeWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d7f5
- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d5d2
- (void)accountTypesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d286
- (void)accountsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d225
- (id)_allAccounts_sync;	// IMP=0x000000000002ce3a
- (void)accountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cbbe
- (void)setClientBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cb3e
- (id)_credentialItemWithAccountIdentifier:(id)arg1 serviceName:(id)arg2;	// IMP=0x000000000002ca96
- (_Bool)_handleAccountAdd:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002c713
- (_Bool)_handleAccountMod:(id)arg1 withDataclassActions:(id)arg2 withError:(id *)arg3;	// IMP=0x000000000002c516
- (void)_delegate_accountStoreDidSaveAccount:(id)arg1 changeType:(int)arg2;	// IMP=0x000000000002c441
- (void)_setAccountManagedObjectRelationships:(id)arg1 withAccount:(id)arg2 oldAccount:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002adb8
- (_Bool)_canSaveAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002a61f
- (id)_dataclassWithName:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x000000000002a376
- (id)_accountTypeWithIdentifier:(id)arg1;	// IMP=0x000000000002a2d4
- (id)_displayAccountForAccount:(id)arg1;	// IMP=0x000000000002a245
- (id)_accountWithIdentifier:(id)arg1 prefetchKeypaths:(id)arg2;	// IMP=0x000000000002a176
- (id)_accountWithIdentifier:(id)arg1;	// IMP=0x000000000002a0e9
- (void)_deleteAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000029d3f
- (void)deleteAccountNoSave:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000029cd9
- (_Bool)_updateAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000028ebd
- (void)updateAccountNoSave:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000028df8
- (id)_addAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000028453
- (void)addAccountNoSave:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000028383
- (_Bool)_performDataclassActions:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000280c2
- (id)_commitOrRollbackDataclassActions:(id)arg1 forAccount:(id)arg2 originalEnabledDataclasses:(id)arg3;	// IMP=0x0000000000027eb7
- (_Bool)_shouldSendDidSaveNotificationForAccount:(id)arg1;	// IMP=0x0000000000027c10
- (_Bool)_saveWithError:(id *)arg1;	// IMP=0x0000000000026ad0
- (_Bool)_removeAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000000025d25
- (_Bool)accountsExistWithAccountTypeIdentifier:(id)arg1;	// IMP=0x0000000000025a75
- (void)accountsOnPairedDeviceWithAccountTypes:(id)arg1 withOptions:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025647
- (id)accountsWithAccountTypeIdentifier:(id)arg1;	// IMP=0x0000000000025276
- (id)accountTypeWithIdentifier:(id)arg1;	// IMP=0x0000000000024feb
- (id)initWithClient:(id)arg1 databaseConnection:(id)arg2;	// IMP=0x0000000000024e87
- (id)init;	// IMP=0x0000000000024e30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
