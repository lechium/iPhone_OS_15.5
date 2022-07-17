//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SecureBackupDaemon : NSObject
{
    _Bool _needInitialBackup;	// 8 = 0x8
    _Bool _pendingNotification;	// 9 = 0x9
    int _cachedPassphraseFD;	// 12 = 0xc
    int _cachedRecordIDPassphraseFD;	// 16 = 0x10
    int _cachedRecoveryKeyFD;	// 20 = 0x14
    NSURL *_cacheDirURL;	// 24 = 0x18
    NSData *_iCDPKeybag;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_backupQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_kvsQueue;	// 56 = 0x38
    NSString *_cachedRecordID;	// 64 = 0x40
    NSString *_iCloudEnvironment;	// 72 = 0x48
    NSMutableDictionary *_ignoredNotifications;	// 80 = 0x50
    NSMutableDictionary *_handledNotifications;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x001000000003ffb1
@property(retain, nonatomic) NSMutableDictionary *handledNotifications; // @synthesize handledNotifications=_handledNotifications;
@property(retain, nonatomic) NSMutableDictionary *ignoredNotifications; // @synthesize ignoredNotifications=_ignoredNotifications;
@property _Bool pendingNotification; // @synthesize pendingNotification=_pendingNotification;
@property(copy, nonatomic) NSString *iCloudEnvironment; // @synthesize iCloudEnvironment=_iCloudEnvironment;
@property int cachedRecoveryKeyFD; // @synthesize cachedRecoveryKeyFD=_cachedRecoveryKeyFD;
@property int cachedRecordIDPassphraseFD; // @synthesize cachedRecordIDPassphraseFD=_cachedRecordIDPassphraseFD;
@property int cachedPassphraseFD; // @synthesize cachedPassphraseFD=_cachedPassphraseFD;
@property(copy, nonatomic) NSString *cachedRecordID; // @synthesize cachedRecordID=_cachedRecordID;
@property _Bool needInitialBackup; // @synthesize needInitialBackup=_needInitialBackup;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *kvsQueue; // @synthesize kvsQueue=_kvsQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *backupQueue; // @synthesize backupQueue=_backupQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(readonly, nonatomic) NSData *iCDPKeybag; // @synthesize iCDPKeybag=_iCDPKeybag;
@property(retain, nonatomic) NSURL *cacheDirURL; // @synthesize cacheDirURL=_cacheDirURL;
- (void)knownICDPFederations:(CDUnknownBlockType)arg1;	// IMP=0x001000000003fdcb
- (void)moveToFederationAllowed:(id)arg1 altDSID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003fd1a
- (void)getAcceptedTermsForAltDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003fc3a
- (void)saveTermsAcceptance:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003fa38
- (void)getCertificatesWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003f819
- (void)daemonPasscodeRequestOpinion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003f48f
- (id)fetchPRK:(id *)arg1;	// IMP=0x001000000003f38e
- (void)prepareHSA2EscrowRecordContents:(id)arg1 usesComplexPassphrase:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e4f3
- (int)getPasscodeRequestFlag:(unsigned long long *)arg1;	// IMP=0x001000000003e4a6
- (int)setPasscodeRequestFlag:(unsigned long long)arg1;	// IMP=0x001000000003e459
- (void)clearNotifyToken;	// IMP=0x001000000003e3ff
- (int)notifyToken;	// IMP=0x001000000003e2ef
- (void)beginHSA2PasscodeRequest:(id)arg1 desirePasscodeImmediately:(_Bool)arg2 uuid:(id)arg3 reason:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000003dca8
- (id)getPendingEscrowRequest:(id *)arg1;	// IMP=0x001000000003dc42
- (void)stateCaptureWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000003dbdb
- (void)notificationInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000003daa5
- (void)changeSMSTargetWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003ceac
- (void)getCountrySMSCodesWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c876
- (void)startSMSChallengeWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c1d0
- (void)uncachePassphraseWithRequestAsync:(id)arg1;	// IMP=0x001000000003c1bc
- (void)uncacheRecoveryKeyWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003bf23
- (void)cacheRecoveryKeyWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003bcc3
- (void)uncachePassphraseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003ba2a
- (void)cachePassphraseWithRequestAsync:(id)arg1;	// IMP=0x001000000003ba16
- (void)cachePassphraseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b7b6
- (void)uncacheRecordIDPassphrase;	// IMP=0x001000000003b678
- (id)cachedRecoveryKey;	// IMP=0x001000000003b648
@property(copy, nonatomic) NSString *cachedRecordIDPassphrase;
@property(copy, nonatomic) NSString *cachedPassphrase;
- (id)cachedPassphraseForFD:(int)arg1;	// IMP=0x001000000003b283
- (void)setCachedRecoveryKey:(id)arg1;	// IMP=0x001000000003b253
- (int)storeCachedPassphrase:(id)arg1;	// IMP=0x001000000003ac4c
- (void)updateMetadataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a108
- (void)disableWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039843
- (void)setBackOffDateWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038f2a
- (void)backOffDateWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038be1
- (void)deleteAlliCDPRecordsWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038447
- (void)createICDPRecordWithRequest:(id)arg1 recordContents:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037af0
- (void)recoverRecordContentsWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037794
- (void)restoreKeychainAsyncWithPasswordInDaemon:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000375e0
- (void)recoverSilentWithCDPContextInDaemon:(id)arg1 allRecords:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000374e9
- (void)recoverWithCDPContextInDaemon:(id)arg1 escrowRecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000373f2
- (void)recoverWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037312
- (void)_recoverWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003498a
- (void)_restoreKeychainAsyncWithPassword:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000345c0
- (void)_recoverWithCDPContext:(id)arg1 escrowRecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000033f9c
- (void)_recoverSilentWithCDPContext:(id)arg1 allRecords:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032be7
- (void)sortForMatchingPassphraseLengthAndPlatform:(id)arg1 secureBackups:(id)arg2 passphraseLength:(unsigned long long)arg3 platform:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000320ff
- (long long)compare:(id)arg1 with:(id)arg2 backups:(id)arg3;	// IMP=0x001000000003199b
- (id)keysOfEntriesContainingObject:(id)arg1 backups:(id)arg2;	// IMP=0x00100000000318df
- (void)recoverEscrowWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003036e
- (id)restoreEMCSBackup:(id)arg1 withPassword:(id)arg2;	// IMP=0x001000000002fe94
- (id)restoreEMCSBackup:(id)arg1 keybag:(id)arg2 password:(id)arg3;	// IMP=0x001000000002fd1b
- (void)recordIDAndMetadataForSilentAttempt:(id)arg1 passphraseLength:(unsigned long long)arg2 platform:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002f669
- (id)secureBackups;	// IMP=0x001000000002f3bb
- (id)_restoreKeychainWithBackupBag:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 haveBottledPeer:(_Bool)arg4;	// IMP=0x001000000002ee71
- (void)_restoreKeychainAsyncWithBackupBag:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 haveBottledPeer:(_Bool)arg4 restoredViews:(id)arg5 viewsNotToBeRestored:(id)arg6;	// IMP=0x001000000002e4f5
- (_Bool)restoreView:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 restoredViews:(id)arg4;	// IMP=0x001000000002e20a
- (id)encodedStatsForViews:(id)arg1;	// IMP=0x001000000002df50
- (id)restoreBackup:(id)arg1 withName:(id)arg2 keybagDigest:(id)arg3 keybag:(id)arg4 password:(id)arg5;	// IMP=0x001000000002d7bf
- (void)backupWithInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d7a8
- (void)backupWithInfo:(id)arg1 garbageCollect:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d6dc
@property(nonatomic) _Bool backupAllowed;
- (void)handleEscrowStoreResults:(id)arg1 escrowError:(id)arg2 request:(id)arg3 sosPeerID:(id)arg4 newRecordMetadata:(id)arg5 backupKeybag:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000002d23a
- (void);	// IMP=0x001000000002af5b
- (void)stashRecoveryDataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ae7b
- (void)_stashRecoveryDataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ab88
- (id)massageOutgoingMetadataFromRequest:(id)arg1;	// IMP=0x001000000002a9b8
- (void)getAccountInfoWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a610
- (void)synchronizeKVSWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002a02d
- (void)doSynchronize;	// IMP=0x0010000000029e58
- (id)sortRecordsByBottleID:(id)arg1;	// IMP=0x00100000000290ac
- (id)tagStaleBottleRecords:(id)arg1 suggestedBottles:(id)arg2;	// IMP=0x0010000000028d44
- (void)_getAccountInfoWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000267d1
- (id)_recordIDFromLabel:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3;	// IMP=0x00100000000266ea
- (void)getStingrayMetadataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000026091
- (_Bool)hasRecoveryKey;	// IMP=0x0010000000025df4
- (id)filteriCDPRecords:(id)arg1;	// IMP=0x0010000000025718
- (id)massageIncomingMetadataFromInfo:(id)arg1;	// IMP=0x00100000000253a7
- (void)notificationOccurred:(id)arg1;	// IMP=0x0010000000025007
- (void)handleNotification:(id)arg1;	// IMP=0x0010000000024c11
- (void)recordNotification:(id)arg1 handled:(_Bool)arg2;	// IMP=0x0010000000024b35
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000024700
@property(readonly, nonatomic) _Bool forceICDP;
@property(readonly, retain, nonatomic) NSURL *cachedManifestURL;
@property(readonly, retain, nonatomic) NSURL *cachedKeychainURL;
- (struct os_state_data_s *)_stateCapture;	// IMP=0x00100000000241d0
- (id)copyKVSState;	// IMP=0x0010000000023c5e
- (void)setupNotifyEvents;	// IMP=0x0010000000023ad7
- (id)init;	// IMP=0x001000000002388d
- (id)normalizeSMSTarget:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000235ff
- (id)_gestaltValueForKey:(struct __CFString *)arg1;	// IMP=0x001000000002349c
- (void)unregisterForNotifyEvent:(id)arg1;	// IMP=0x0010000000023467
- (void)registerForNotifyEvent:(id)arg1;	// IMP=0x00100000000233fc
- (void)disableiCDPBackup;	// IMP=0x00100000000233ba
- (void)_disableBackup;	// IMP=0x001000000002333e
- (id)_consumeBackupJournal;	// IMP=0x00100000000221e5
- (id)_consumeFullBackupForRecordID:(id)arg1;	// IMP=0x0010000000021e4f
- (id)_consumeViewBackup:(id)arg1 recordID:(id)arg2;	// IMP=0x0010000000020aea
- (void)_backupCloudIdentityKeychainViewAndPushToKVS;	// IMP=0x0010000000020508
- (void)_backupKeychainFully:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ff77
- (void)_backupKeychain;	// IMP=0x001000000001ff61
- (void)_backupFullKeychain;	// IMP=0x001000000001ff48
- (void)_backupFullKeychainWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ff2e
- (void)_setAutobackupEnabled;	// IMP=0x001000000001ff1a
- (void)_setAutobackupEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001feb0
- (int)_checkEscrowTrust;	// IMP=0x001000000001fb2d
- (void)_removeKVSKeybag;	// IMP=0x001000000001f9fb
- (void)garbageCollectEMCSBackupsExcluding:(id)arg1;	// IMP=0x001000000001f776
- (id)_EMCSBackupDictForKeybagDigest:(id)arg1;	// IMP=0x001000000001f331
- (id)_EMCSBackup;	// IMP=0x001000000001f2da
- (void)_setEMCSBackup:(id)arg1 keybag:(id)arg2;	// IMP=0x001000000001efc0
- (id)_KVSKeybag;	// IMP=0x001000000001ef69
- (void)_setKVSKeybag:(id)arg1;	// IMP=0x001000000001eda0
- (void)_removeMetadata;	// IMP=0x001000000001ec85
- (id)_metadata;	// IMP=0x001000000001ec2b
- (void)_setMetadata:(id)arg1;	// IMP=0x001000000001eae8
- (void)_removeUsesEscrow;	// IMP=0x001000000001ea8b
- (_Bool)_usesEscrow;	// IMP=0x001000000001ea40
- (void)_setUsesEscrow:(_Bool)arg1;	// IMP=0x001000000001e92f
- (_Bool)_iCDPBackupEnabled;	// IMP=0x001000000001e8e4
- (_Bool)_backupEnabled;	// IMP=0x001000000001e878
- (void)_setBackupEnabled:(_Bool)arg1 iCDP:(_Bool)arg2;	// IMP=0x001000000001e70c
- (id)_getLastBackupTimestamp;	// IMP=0x001000000001e684
- (id)_getDERBackupFromKVS;	// IMP=0x001000000001e551
- (void)_removeVeeTwoBackup;	// IMP=0x001000000001e41d
- (void)_enumerateICDPBackupsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e069
- (id)_getICDPBackupFromKVSForView:(id)arg1;	// IMP=0x001000000001dfb1
- (id)_getProtectedKeychainAndKeybagDigestFromKVS:(id *)arg1;	// IMP=0x001000000001de3d
- (void)_removeProtectedKeychain;	// IMP=0x001000000001dcfc
- (id)_pushCachedKeychainToKVS;	// IMP=0x001000000001d72c
- (id)_pushCachedKeychainToKVSForView:(id)arg1 recordID:(id)arg2;	// IMP=0x001000000001d22f
- (void)storeDERBackupInKVS:(id)arg1;	// IMP=0x001000000001d068
- (id)derDataFromDict:(id)arg1;	// IMP=0x001000000001ce5d
- (void)_removeCachedKeychain;	// IMP=0x001000000001ccfb
- (void)_storeVeeTwoBackupInKVS:(id)arg1 forViewName:(id)arg2 withKeyStore:(id)arg3 manifestDigest:(id)arg4 keybagDigest:(id)arg5;	// IMP=0x001000000001c825
- (void)_storeProtectedKeychainInKVS:(id)arg1 keybagDigest:(id)arg2;	// IMP=0x001000000001c628
- (id)_getKeychainItemForKey:(id)arg1 status:(int *)arg2;	// IMP=0x001000000001c48a
- (void)_removeKeychainItemForKey:(id)arg1;	// IMP=0x001000000001c32d
- (void)_saveKeychainItem:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000001c174
- (id)_createBackupKeybagWithPassword:(id)arg1;	// IMP=0x001000000001c16c
- (id)createiCloudRecoveryPasswordWithError:(id *)arg1;	// IMP=0x001000000004f591
- (id)createPlistFromDERData:(id)arg1;	// IMP=0x001000000004f51d
- (id)createDERDataFromPlist:(id)arg1;	// IMP=0x001000000004f4a6
- (_Bool)backupSliceKeybagHasRecoveryKey:(id)arg1;	// IMP=0x001000000004f45e
- (id)createEncodedDirectBackupSliceKeybagFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f2fe
- (id)circleChangedNotification;	// IMP=0x001000000004f2db
- (id)currentViews;	// IMP=0x001000000004f275
- (id)allViews;	// IMP=0x001000000004f1ff
- (id)copyOSVersion:(id)arg1;	// IMP=0x001000000004f1d8
- (id)copySerialNumber:(id)arg1;	// IMP=0x001000000004f1c1
- (id)createPeerInfoFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f178
- (_Bool)registerRecoveryPublicKey:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f135
- (_Bool)registerSingleRecoverySecret:(id)arg1 iCDP:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000004f0ec
- (id)copyEncodedData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f0a4
- (id)copyMyPeerWithNewDeviceRecoverySecret:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f05e
- (id)copyBackupKeyForNewDeviceRecoverySecret:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f018
- (id)copyBackupKey:(id)arg1;	// IMP=0x001000000004f00b
- (id)copyMyPeerIDWithError:(id *)arg1;	// IMP=0x001000000004ef7f
- (id)copyMyPeerID;	// IMP=0x001000000004eec7
- (id)copyPeerID:(id)arg1;	// IMP=0x001000000004eea7
- (id)copyMyPeerInfo:(id *)arg1;	// IMP=0x001000000004ee64
- (_Bool)backupWithChanges:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004eda1
- (_Bool)backupSetConfirmedManifest:(id)arg1 digest:(id)arg2 manifest:(id)arg3 error:(id *)arg4;	// IMP=0x001000000004ec02
- (_Bool)backupWithRegisteredBackupViewWithError:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004eadd
- (_Bool)backupWithRegisteredBackupsWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ea24
- (void)restoreBackupName:(id)arg1 peerID:(id)arg2 keybag:(id)arg3 password:(id)arg4 backup:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004e974
- (id)kvs;	// IMP=0x001000000004e8fa
- (id)makeRecordCandidate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000518f8
- (void)setPasscodeMetadata:(id)arg1 passphraseType:(int)arg2;	// IMP=0x0010000000051795
- (void)doEnableEscrowMultiICSCWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004f848

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
