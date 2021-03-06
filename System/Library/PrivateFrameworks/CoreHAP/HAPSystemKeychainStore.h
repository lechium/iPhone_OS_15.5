//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HAPKeyStore-Protocol.h>
#import <CoreHAP/HAPSystemKeychainStore-Protocol.h>
#import <CoreHAP/HMFDumpState-Protocol.h>
#import <CoreHAP/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HAPSystemKeychainStore : HMFObject <HAPKeyStore, HMFDumpState, HMFLogging, HAPSystemKeychainStore>
{
    int _keychainStoreUpdatedNotificationToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_activeControllerIdentifier;	// 24 = 0x18
}

+ (id)viewHintForType:(id)arg1;	// IMP=0x0000000000089195
+ (id)logCategory;	// IMP=0x0000000000089165
+ (id)serializeDictionary:(id)arg1;	// IMP=0x0000000000089003
+ (id)updateAccessoryPairingGenericData:(id)arg1 updatedControllerKeyIdentifier:(id)arg2;	// IMP=0x0000000000088f16
+ (id)getDictionaryFromGenericData:(id)arg1;	// IMP=0x0000000000088e9f
+ (id)systemStore;	// IMP=0x0000000000088e6f
- (void).cxx_destruct;	// IMP=0x0000000000084c2b
@property int keychainStoreUpdatedNotificationToken; // @synthesize keychainStoreUpdatedNotificationToken=_keychainStoreUpdatedNotificationToken;
@property(retain, nonatomic) NSString *activeControllerIdentifier; // @synthesize activeControllerIdentifier=_activeControllerIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)getAssociatedControllerKeyForAccessory:(id)arg1;	// IMP=0x00000000000843a8
- (id)getHH2ControllerKey;	// IMP=0x0000000000083ec9
- (_Bool)getOrCreateHH2ControllerKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4;	// IMP=0x00000000000839c7
- (int)createHH2ControllerKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4;	// IMP=0x0000000000083481
- (id)allAccessoryPairingKeys;	// IMP=0x00000000000833c5
- (id)allKeysForType:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000083205
- (_Bool)isAccessoryAssociatedWithControllerKey:(id)arg1 controllerID:(id *)arg2;	// IMP=0x0000000000082eb1
- (_Bool)deletePairingKeysForAccessory:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000082da5
- (_Bool)createAccessoryPairingKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000082c70
- (_Bool)updateAccessoryPairingKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000082b63
- (id)readAccessoryPairingKeyForAccessory:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000082a34
- (_Bool)updateKeychainItem:(id)arg1 createIfNeeded:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000826da
- (_Bool)deleteKeychainItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000082527
- (id)allKeychainItemsForType:(id)arg1 identifier:(id)arg2 syncable:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000821de
- (_Bool)_getFirstAvailableControllerKeyChainItemForAccount:(id)arg1 publicKey:(id *)arg2 secretKey:(id *)arg3 userName:(id *)arg4 keyPair:(id *)arg5 error:(id *)arg6;	// IMP=0x0000000000081bef
- (_Bool)_getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4 allowCreation:(_Bool)arg5 forAccessory:(id)arg6 error:(id *)arg7;	// IMP=0x00000000000812ba
- (_Bool)getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4 allowCreation:(_Bool)arg5 forAccessory:(id)arg6 error:(id *)arg7;	// IMP=0x00000000000812a8
- (_Bool)getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 username:(id *)arg3 allowCreation:(_Bool)arg4 forAccessory:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000081277
- (id)readControllerPairingKeyForAccessory:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000080e96
- (int)_deleteAllPeripheralIdentifiers;	// IMP=0x0000000000080cc5
- (_Bool)deleteAllPeripheralIdentifiers:(id *)arg1;	// IMP=0x0000000000080bf0
- (id)getPeripherialIdentifiersAndAccessoryNames;	// IMP=0x0000000000080abd
- (int)_getPeripheralIdentifier:(id *)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long *)arg3 resumeSessionID:(unsigned long long *)arg4;	// IMP=0x000000000008074b
- (id)readPeripheralIdentifierForAccessoryIdentifier:(id)arg1 protocolVersion:(unsigned long long *)arg2 resumeSessionID:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x00000000000805ed
- (int)_deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1;	// IMP=0x00000000000803f0
- (_Bool)deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000802dc
- (_Bool)updatePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 previousVersion:(unsigned long long *)arg4 resumeSessionID:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x0000000000080167
- (int)_savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 resumeSessionID:(unsigned long long)arg4;	// IMP=0x000000000007fe6e
- (_Bool)savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 resumeSessionID:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000000007fd09
- (int)_removeKeychainItem:(id)arg1 leaveTombstone:(_Bool)arg2;	// IMP=0x000000000007f94e
- (int)_addKeychainItem:(id)arg1 logDuplicateItemError:(_Bool)arg2;	// IMP=0x000000000007f396
- (id)_getKeychainItemsForAccessGroup:(id)arg1 type:(id)arg2 account:(id)arg3 shouldReturnData:(_Bool)arg4 error:(int *)arg5;	// IMP=0x000000000007edf6
- (_Bool)_updateKeychainItemWithPlatformIdentifier:(void *)arg1 keychainItem:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007eb31
- (void)_updateKeychainItemToInvisible:(id)arg1;	// IMP=0x000000000007e93b
- (id)_auditKeychainItems:(id)arg1 managedAccessories:(id)arg2;	// IMP=0x000000000007e095
- (id)auditKeysOfManagedAccessories:(id)arg1;	// IMP=0x000000000007df5b
- (int)_removeAccessoryKeyForName:(id)arg1;	// IMP=0x000000000007dd5e
- (_Bool)removeAllAccessoryKeys:(id *)arg1;	// IMP=0x000000000007dc89
- (_Bool)removeAccessoryKeyForName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007db75
- (_Bool)registerAccessoryWithHomeKit:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007da61
- (_Bool)establishRelationshipBetweenAccessoryAndControllerKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007d1e7
- (int)_savePublicKey:(id)arg1 forAccessoryName:(id)arg2;	// IMP=0x000000000007cf7d
- (_Bool)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007ce37
- (int)_getPublicKey:(id *)arg1 registeredWithHomeKit:(_Bool *)arg2 forAccessoryName:(id)arg3;	// IMP=0x000000000007c835
- (id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x000000000007c6e3
- (int)_removeControllerKeyPairForKeyType:(id)arg1 identifier:(id)arg2 leaveTombstone:(_Bool)arg3;	// IMP=0x000000000007c411
- (int)_removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(_Bool)arg2;	// IMP=0x000000000007c313
- (_Bool)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000007c102
- (_Bool)removeControllerKeyPairLeaveTombstone:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000007c01b
- (_Bool)removeControllerKeyPairWithError:(id *)arg1;	// IMP=0x000000000007c001
- (_Bool)getCurrentiCloudIdentifier:(id *)arg1 controllerPairingIdentifier:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000007bf11
- (int)_updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2;	// IMP=0x000000000007bcc8
- (_Bool)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007ba2d
@property(readonly, nonatomic) NSString *activeControllerPairingIdentifier;
- (_Bool)updateActiveControllerPairingIdentifier:(id)arg1;	// IMP=0x000000000007b82e
- (int)_getAllAvailableControllerPublicKeys:(id *)arg1 secretKeys:(id *)arg2 userNames:(id *)arg3;	// IMP=0x000000000007b181
- (_Bool)getAllAvailableControllerPublicKeys:(id *)arg1 secretKeys:(id *)arg2 userNames:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000007b07c
- (_Bool)deserializeKeyPair:(id)arg1 publicKey:(id *)arg2 secretKey:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000007af3b
- (int)_saveKeyPair:(id)arg1 username:(id)arg2 syncable:(_Bool)arg3 keyType:(id)arg4;	// IMP=0x000000000007ad30
- (_Bool)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000007abd4
- (int)_createControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4;	// IMP=0x000000000007a2c1
- (_Bool)saveHH2PairingIdentity:(id)arg1 syncable:(_Bool)arg2;	// IMP=0x0000000000079ecf
- (_Bool)saveLocalPairingIdentity:(id)arg1 syncable:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000079d1a
- (id)_getControllerKeychainItemForKeyType:(id)arg1 error:(int *)arg2;	// IMP=0x0000000000079a02
- (id)_getControllerKeychainItemError:(int *)arg1;	// IMP=0x000000000007974c
- (int)_getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4;	// IMP=0x000000000007955e
- (_Bool)getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4 allowCreation:(_Bool)arg5 error:(id *)arg6;	// IMP=0x000000000007944b
- (_Bool)getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 username:(id *)arg3 allowCreation:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000079427
- (id)_getLocalPairingIdentityAllowingCreation:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000007904f
- (id)getOrCreateLocalPairingIdentity:(id *)arg1;	// IMP=0x0000000000079035
- (id)getLocalPairingIdentity:(id *)arg1;	// IMP=0x000000000007901e
- (void)ensureControllerKeyExistsForAllViews;	// IMP=0x0000000000078e6f
- (id)dumpState;	// IMP=0x0000000000078b35
- (void)dealloc;	// IMP=0x0000000000078af0
- (void)configure;	// IMP=0x000000000007891d
- (id)init;	// IMP=0x0000000000078886

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

