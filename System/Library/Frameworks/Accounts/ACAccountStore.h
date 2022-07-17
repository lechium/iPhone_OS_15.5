//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACRemoteAccountStoreSession, ACTimedExpirer, NSArray, NSMutableDictionary, NSString, NSXPCListenerEndpoint;
@protocol ACRemoteAccountStoreSessionDelegate, OS_dispatch_queue;

@interface ACAccountStore : NSObject
{
    id _daemonAccountStoreDidChangeObserver;	// 8 = 0x8
    NSMutableDictionary *_accountCache;	// 16 = 0x10
    NSMutableDictionary *_accountsWithAccountTypeCache;	// 24 = 0x18
    NSXPCListenerEndpoint *_endpoint;	// 32 = 0x20
    ACRemoteAccountStoreSession *_remoteAccountStoreSession;	// 40 = 0x28
    struct os_unfair_lock_s _remoteAccountStoreSessionLock;	// 48 = 0x30
    ACTimedExpirer *_remoteAccountStoreSessionExpirer;	// 56 = 0x38
    ACRemoteAccountStoreSession *_longLivedRemoteAccountStoreSession;	// 64 = 0x40
    struct os_unfair_lock_s _longLivedRemoteAccountStoreSessionLock;	// 72 = 0x48
    ACTimedExpirer *_longLivedRemoteAccountStoreSessionExpirer;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_replyQueue;	// 88 = 0x58
    NSString *_effectiveBundleID;	// 96 = 0x60
}

+ (id)_obsoleteAccountTypeIDsToRemove;	// IMP=0x000000000002938a
+ (_Bool)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;	// IMP=0x00000000000139b8
+ (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;	// IMP=0x00000000000118c5
+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;	// IMP=0x0000000000011541
+ (void)_setConnectionTimeout:(unsigned long long)arg1;	// IMP=0x0000000000007c12
+ (void)_setDefaultStore:(id)arg1;	// IMP=0x0000000000007bfe
+ (id)defaultStore;	// IMP=0x0000000000007b9d
- (void).cxx_destruct;	// IMP=0x000000000002e831
@property(readonly) NSString *effectiveBundleID; // @synthesize effectiveBundleID=_effectiveBundleID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (id)_unsanitizeError:(id)arg1;	// IMP=0x000000000002e5d2
- (id)_sanitizeOptionsDictionary:(id)arg1;	// IMP=0x000000000002e511
- (void)shutdownAccountsD:(CDUnknownBlockType)arg1;	// IMP=0x000000000002df7a
- (void)resetDatabaseToVersion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d989
- (void)scheduleBackupIfNonexistent:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d2e9
- (void)reportTelemetryForLandmarkEvent:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d25b
- (void)handleURL:(id)arg1;	// IMP=0x000000000002cd9b
- (id)_createSMTPAccountForServerAccount:(id)arg1;	// IMP=0x000000000002c9ac
- (void)_removeObsoleteOSXServerAccountForiOS:(id)arg1;	// IMP=0x000000000002b936
- (id)_removeObsoleteOSXServerAccountForMacOS:(id)arg1;	// IMP=0x000000000002a4cb
- (void)_removeObsoleteAccountsInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029b0a
- (void)removeObsoleteAccounts:(CDUnknownBlockType)arg1;	// IMP=0x00000000000294a1
- (_Bool)triggerKeychainMigrationIfNecessary:(id *)arg1;	// IMP=0x0000000000028d7e
- (void)removeAccountFromPairedDevice:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000285ee
- (void)removeAccountFromPairedDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000285d7
- (void)removeAccountsFromPairedDeviceWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027ed6
- (void)removeAccountsFromPairedDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027ebf
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000276de
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026ec8
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1 withOptions:(id)arg2;	// IMP=0x0000000000026eb3
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1;	// IMP=0x0000000000026e9f
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026689
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withOptions:(id)arg2;	// IMP=0x0000000000026674
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1;	// IMP=0x000000000002665d
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000025de4
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000256bc
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024e4e
- (_Bool)addClientToken:(id)arg1 forAccount:(id)arg2;	// IMP=0x0000000000024860
- (id)clientTokenForAccount:(id)arg1;	// IMP=0x0000000000024298
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023bbd
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;	// IMP=0x000000000002372d
- (_Bool)isTetheredSyncingEnabledForDataclass:(id)arg1;	// IMP=0x00000000000232ba
- (_Bool)isPerformingDataclassActionsForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022c74
- (_Bool)isPerformingDataclassActionsForAccount:(id)arg1;	// IMP=0x0000000000022c60
- (id)dataclassActionsForAccountDeletion:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000225f6
- (id)dataclassActionsForAccountDeletion:(id)arg1;	// IMP=0x00000000000225e2
- (id)dataclassActionsForAccountSave:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000021f78
- (id)dataclassActionsForAccountSave:(id)arg1;	// IMP=0x0000000000021f64
- (void)preloadDataclassOwnersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000217b8
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;	// IMP=0x000000000002129b
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;	// IMP=0x0000000000020d7e
- (id)displayTypeForAccountWithIdentifier:(id)arg1;	// IMP=0x000000000002082e
- (id)syncableDataclassesForAccountType:(id)arg1;	// IMP=0x0000000000020311
- (id)supportedDataclassesForAccountType:(id)arg1;	// IMP=0x000000000001fdf4
- (id)provisionedDataclassesForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f739
- (id)provisionedDataclassesForAccount:(id)arg1;	// IMP=0x000000000001f725
- (id)enabledDataclassesForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f06a
- (id)enabledDataclassesForAccount:(id)arg1;	// IMP=0x000000000001f056
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;	// IMP=0x000000000001e8e4
- (id)childAccountsForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e0aa
- (id)childAccountsForAccount:(id)arg1;	// IMP=0x000000000001e096
- (id)parentAccountForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d96d
- (id)parentAccountForAccount:(id)arg1;	// IMP=0x000000000001d959
- (void)removeCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d311
- (void)saveCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001cb6a
- (void)insertCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c36d
- (id)credentialItemForAccount:(id)arg1 serviceName:(id)arg2;	// IMP=0x000000000001bd8f
- (id)allCredentialItems;	// IMP=0x000000000001b8d8
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000001b8c6
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001b1b9
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001aaaf
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2;	// IMP=0x000000000001aa9a
- (id)credentialForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a3d5
- (id)credentialForAccount:(id)arg1;	// IMP=0x000000000001a3c1
- (void)migrateCredentialForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019d02
- (void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019c48
- (void)renewCredentialsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019c2b
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019c0e
- (void)renewCredentialsForAccount:(id)arg1 force:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019b02
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018eb8
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000183af
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000182ab
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018291
- (void)clearGrantedPermissionsForAccountType:(id)arg1;	// IMP=0x0000000000017e24
- (id)grantedPermissionsForAccountType:(id)arg1;	// IMP=0x0000000000017907
- (_Bool)permissionForAccountType:(id)arg1;	// IMP=0x0000000000017443
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;	// IMP=0x0000000000016fd6
- (void)setPermissionGranted:(_Bool)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;	// IMP=0x00000000000169e1
- (id)appPermissionsForAccountType:(id)arg1;	// IMP=0x00000000000164c4
- (id)accessKeysForAccountType:(id)arg1;	// IMP=0x0000000000015fa7
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000157a0
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015789
- (void)_checkSaveRateLimitForAccountType:(id)arg1;	// IMP=0x0000000000015697
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;	// IMP=0x00000000000151c3
- (_Bool)saveVerifiedAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014892
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014878
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001485d
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014840
- (void)_saveAccount:(id)arg1 verify:(_Bool)arg2 dataclassActions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000013d51
- (void)saveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013d34
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013295
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012a8d
- (void)removeAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012a76
- (void)removeAccount:(id)arg1 withDeleteSync:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000129c4
- (void)removeAccountType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012387
- (void)insertAccountType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011c49
- (_Bool)isPushSupportedForAccount:(id)arg1;	// IMP=0x00000000000110f4
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000109a1
- (_Bool)hasAccountWithDescription:(id)arg1;	// IMP=0x0000000000010554
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fc19
- (id)allAccountTypes;	// IMP=0x000000000000f639
- (id)allDataclasses;	// IMP=0x000000000000f182
- (void)accountsOnPairedDeviceWithAccountTypes:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e8f2
- (void)accountsOnPairedDeviceWithAccountType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e84e
- (void)cachedAccountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e127
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000d892
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d87b
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000cf6d
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cf56
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c6d9
- (void)accountsWithAccountType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bebf
- (id)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000000b714
- (id)accountsWithAccountType:(id)arg1;	// IMP=0x000000000000b0b4
@property(readonly, nonatomic) __weak NSArray *accounts;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a32d
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009cae
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;	// IMP=0x0000000000009c9a
- (void)cachedAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000961f
- (void)accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008eb9
- (id)accountWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000873b
- (id)accountWithIdentifier:(id)arg1;	// IMP=0x0000000000008727
- (void)setNotificationsEnabled:(_Bool)arg1;	// IMP=0x000000000000869c
- (id)_connectionFailureError;	// IMP=0x0000000000008671
@property(readonly) id <ACRemoteAccountStoreSessionDelegate> connectionDelegate;
- (void)disconnectFromRemoteAccountStore;	// IMP=0x0000000000008663
@property(readonly, nonatomic) ACRemoteAccountStoreSession *longLivedRemoteAccountStoreSession;
@property(readonly, nonatomic) ACRemoteAccountStoreSession *remoteAccountStoreSession;
- (void)_clearAccountCaches;	// IMP=0x00000000000080e8
- (void)dealloc;	// IMP=0x0000000000008072
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;	// IMP=0x0000000000007c60
- (id)initWithEffectiveBundleID:(id)arg1;	// IMP=0x0000000000007c49
- (id)initWithRemoteEndpoint:(id)arg1;	// IMP=0x0000000000007c35
- (id)init;	// IMP=0x0000000000007c1f

@end
