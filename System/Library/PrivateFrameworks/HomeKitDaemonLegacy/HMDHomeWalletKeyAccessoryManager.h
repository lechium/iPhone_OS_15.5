//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDDevice, HMDHome, HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation, HMFMessageDispatcher, NSMutableDictionary, NSNotificationCenter, NSNumber, NSObject, NSString, NSUUID;
@protocol HMDHomeWalletDataSource, HMDHomeWalletKeyAccessoryManagerDelegate, OS_dispatch_queue;

@interface HMDHomeWalletKeyAccessoryManager : HMFObject <HMFLogging, HMFMessageReceiver>
{
    _Bool _currentDevicePrimaryResident;	// 8 = 0x8
    _Bool _canConfigureAccessories;	// 9 = 0x9
    id <HMDHomeWalletKeyAccessoryManagerDelegate> _delegate;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    HMFMessageDispatcher *_messageDispatcher;	// 48 = 0x30
    NSNotificationCenter *_notificationCenter;	// 56 = 0x38
    id <HMDHomeWalletDataSource> _dataSource;	// 64 = 0x40
    NSMutableDictionary *_pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID;	// 72 = 0x48
    HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation *_pendingPrimaryResidentDeviceCredentialKeyOperation;	// 80 = 0x50
    NSMutableDictionary *_accessoriesUUIDsByDeviceCredentialKey;	// 88 = 0x58
    NSMutableDictionary *_nfcReaderKeyConfigureStateByAccessoryUUID;	// 96 = 0x60
    NSNumber *_walletKeyColor;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x00000000008ce1b4
- (void).cxx_destruct;	// IMP=0x00000000008c8cbb
@property(readonly, copy) NSNumber *walletKeyColor; // @synthesize walletKeyColor=_walletKeyColor;
@property(readonly, copy) NSMutableDictionary *nfcReaderKeyConfigureStateByAccessoryUUID; // @synthesize nfcReaderKeyConfigureStateByAccessoryUUID=_nfcReaderKeyConfigureStateByAccessoryUUID;
@property(readonly) NSMutableDictionary *accessoriesUUIDsByDeviceCredentialKey; // @synthesize accessoriesUUIDsByDeviceCredentialKey=_accessoriesUUIDsByDeviceCredentialKey;
@property(copy) HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation *pendingPrimaryResidentDeviceCredentialKeyOperation; // @synthesize pendingPrimaryResidentDeviceCredentialKeyOperation=_pendingPrimaryResidentDeviceCredentialKeyOperation;
@property(readonly, copy) NSMutableDictionary *pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID; // @synthesize pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID=_pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID;
@property _Bool canConfigureAccessories; // @synthesize canConfigureAccessories=_canConfigureAccessories;
@property(getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident; // @synthesize currentDevicePrimaryResident=_currentDevicePrimaryResident;
@property(readonly) id <HMDHomeWalletDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak HMDHome *home; // @synthesize home=_home;
@property __weak id <HMDHomeWalletKeyAccessoryManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000008c8aab
- (void)fetchWalletKeyColorForAccessories:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008c8663
- (id)walletKeyColorWithCharacteristicValue:(id)arg1;	// IMP=0x00000000008c8313
- (void)fetchWalletKeyColorWithAccessory:(id)arg1;	// IMP=0x00000000008c81e6
- (id)writeRequestsWithAccessories:(id)arg1 home:(id)arg2 deviceCredentialKey:(id)arg3 user:(id)arg4;	// IMP=0x00000000008c7861
- (void)configureAccessories:(id)arg1 withDeviceCredentialKey:(id)arg2 forDeviceWithUUID:(id)arg3 user:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000008c712d
- (void)unregisterForNotificationsWithReason:(id)arg1;	// IMP=0x00000000008c6ed1
- (void)handlePendingDeviceCredentialKeysSyncForAccessories:(id)arg1 withReason:(id)arg2;	// IMP=0x00000000008c69dc
- (void)handlePendingDeviceCredentialKeysSyncForAccessory:(id)arg1 withReason:(id)arg2;	// IMP=0x00000000008c68e4
- (void)registerForNotificationsWithReason:(id)arg1;	// IMP=0x00000000008c65ca
- (void)configureNotificationsWithReason:(id)arg1;	// IMP=0x00000000008c64ad
- (void)configureAccessoryWithNfcReaderKey:(id)arg1 accessory:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008c57cf
- (void)removeNfcReaderKeyWithIdentifier:(id)arg1 accessory:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008c4b77
- (void)fetchIsAccessoryConfiguredWithReaderKey:(id)arg1 accessory:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008c3f18
- (void)fetchOrConfigureNFCReaderKeyForAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008c3da9
- (void)configureNFCReaderKeyForAccessory:(id)arg1;	// IMP=0x00000000008c392f
- (void)configureNFCReaderKeyForAllAccessories;	// IMP=0x00000000008c37a0
- (void)requestPrimaryResident:(id)arg1 toConfigureAccessories:(id)arg2 withDeviceCredentialKey:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008c334a
- (void)configureAccessories:(id)arg1 withDeviceCredentialKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008c2e09
@property(readonly) HMDDevice *primaryResidentDevice;
@property(readonly, copy) NSString *walletKeyColorPreferenceKey;
- (void)handleWalletKeySupportDidChange:(id)arg1;	// IMP=0x00000000008c2a08
- (void)handleAccessoryConnected:(id)arg1;	// IMP=0x00000000008c2917
- (void)handleHomeAccessoryRemovedNotification:(id)arg1;	// IMP=0x00000000008c2529
- (void)handleHomeAddedAccessoryNotification:(id)arg1;	// IMP=0x00000000008c240e
- (void)handleHomeDidDisableCharacteristicNotification:(id)arg1;	// IMP=0x00000000008c235d
- (void)handleHomeDidEnableCharacteristicNotification:(id)arg1;	// IMP=0x00000000008c22ac
- (void)handleHomeNFCReaderKeyKeychainItemAvailableNotification:(id)arg1;	// IMP=0x00000000008c223b
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x00000000008c218a
- (void)handleAccessoryCharacteristicsChangedNotification:(id)arg1;	// IMP=0x00000000008c1df1
- (void)handleConfigureAccessoriesWithDeviceCredentialKeyMessage:(id)arg1;	// IMP=0x00000000008c15b7
- (void)createAccessoryDeviceCredentialKeyPendingOperationWithAccessories:(id)arg1 deviceCredentialKey:(id)arg2 user:(id)arg3 deviceUUID:(id)arg4;	// IMP=0x00000000008c133d
- (void)createAccessoryDeviceCredentialKeyPendingOperationWithAccessoriesUUIDs:(id)arg1 deviceCredentialKey:(id)arg2 user:(id)arg3 deviceUUID:(id)arg4;	// IMP=0x00000000008c11a9
- (void)handleWalletKeyRemoved;	// IMP=0x00000000008c1056
- (void)fetchWalletKeyColorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000008c0e91
- (void)configureAllAccessoriesWithDeviceCredentialKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008c0db1
- (void)configureAccessory:(id)arg1 withDeviceCredentialKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008c0ca9
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000008c0820
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 dataSource:(id)arg3 notificationCenter:(id)arg4;	// IMP=0x00000000008c068f
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000008c05dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

