//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface FMDFMIPManager : NSObject
{
    NSURL *_managedLostModeFileURL;	// 8 = 0x8
    NSURL *_needsLocateAckLostModeFileURL;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000000287a
- (void).cxx_destruct;	// IMP=0x000000000000c1ff
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSURL *needsLocateAckLostModeFileURL; // @synthesize needsLocateAckLostModeFileURL=_needsLocateAckLostModeFileURL;
@property(retain, nonatomic) NSURL *managedLostModeFileURL; // @synthesize managedLostModeFileURL=_managedLostModeFileURL;
- (void)stopLocationMonitoringWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c0b8
- (void)startLocationMonitoringWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bfc2
- (void)stopLocationMonitoringWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bd5d
- (void)startLocationMonitoringWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000baf8
- (void)updatedConfigReceived:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b8bf
- (void)stopLocationMonitoring:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b6a3
- (void)startLocationMonitoring:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b487
- (void)fetchAPNSTokenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b269
- (void)activationLockAuthInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b04b
- (void)clearOfflineFindingInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ae7b
- (void)fetchOfflineFindingInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ac5d
- (void)storeOfflineFindingInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000aa64
- (void)activationLockInfoFromDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a846
- (void)activationLockInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a834
- (void)stopSoundMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a501
- (void)playSoundWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a176
- (id)getNeedsLocateAckLostModeFileURL;	// IMP=0x0000000000009fae
- (id)getManagedLostModeFileURL;	// IMP=0x0000000000009de6
- (void)_disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009cf9
- (void)_initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009c89
- (void)_updateNeedsLocateAckLostModeWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000997e
- (void)_updateManagedLostModeWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009673
- (_Bool)_isRunningAsMobileUser;	// IMP=0x000000000000966b
- (id)newErrorForCode:(int)arg1 message:(id)arg2;	// IMP=0x00000000000095b7
- (void)_stopAlarm;	// IMP=0x000000000000953a
- (void)_forceFMWUpgradeAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000946f
- (void)_getAccessoriesWithFilter:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009338
- (void)pairingCheckWith:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000902f
- (void)updatePairingLockInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008d28
- (void)registerDeviceForPairingLock:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008a1f
- (void)getConnectedAccessoriesDiscoveryIds:(CDUnknownBlockType)arg1;	// IMP=0x000000000000871d
- (void)setPhoneNumber:(id)arg1 toAccessoryWithDiscoveryId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000083df
- (void)removeAccessoryWithDiscoveryId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000080c4
- (void)fetchAccessoryConfigurations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007dc9
- (void)getAccessoriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007da5
- (void)audioAccessorySerialNumbersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007c6a
- (void)clearData:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007a0b
- (void)soundStoppedForAccessoryIdentifier:(id)arg1;	// IMP=0x0000000000007834
- (void)waitForRoutableAccessory:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007474
- (void)stopPlayingSoundForAccessory:(id)arg1 rampDownDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007135
- (void)startPlayingSoundForAccessory:(id)arg1 duration:(double)arg2 rampUpDuration:(double)arg3 channels:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000006d47
- (void)signatureHeadersWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006c26
- (id)pathsToPreserveAcrossWipe;	// IMP=0x0000000000006b8e
- (void)userNotifiedOfActivationLockForPairedDevices:(id)arg1;	// IMP=0x0000000000006ab8
- (void)userNotifiedOfActivationLockForAllPairedDevices;	// IMP=0x0000000000006a0b
- (void)setLowBatteryLocateEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000068de
- (void)lowBatteryLocateEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000067d6
- (void)initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000066e1
- (void)initiateLostModeExitAuthWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006605
- (void)didReceiveLostModeExitAuthToken:(id)arg1;	// IMP=0x00000000000064be
- (_Bool)needsLostModeExitAuth;	// IMP=0x00000000000063bf
- (void)enableActivationLockWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000062b9
- (void)isActivationLockedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000061b1
- (void)isActivationLockEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000060a9
- (void)isActivationLockAllowedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005fa1
- (void)markPairedDeviceWithUDID:(id)arg1 asMissingUsingToken:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005de5
- (void)markAsMissingSupportedForPairedDeviceWithUDID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005cb9
- (void)disableFMIPForAccount:(id)arg1 pairedDeviceWithUDID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005ad5
- (void)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005919
- (void)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000580e
- (id)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2;	// IMP=0x00000000000054de
- (id)enableFMIPInContext:(unsigned long long)arg1;	// IMP=0x000000000000539f
- (void)didChangeFMIPAccountInfo:(id)arg1;	// IMP=0x00000000000052df
- (id)fmipAccount;	// IMP=0x0000000000005181
- (void)fmipAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005077
- (void)fmipStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004f6c
- (_Bool)_checkLostModeInSharedContainer;	// IMP=0x0000000000004f64
- (_Bool)lockdownShouldDisableDevicePairing;	// IMP=0x0000000000004e1f
- (_Bool)lockdownShouldDisableDeviceRestore;	// IMP=0x0000000000004d03
- (void)deviceActivationDidSucceed;	// IMP=0x0000000000004c61
- (void)playSoundWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004b87
- (void)userDidAckManagedLostModeLocateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000487c
- (void)disableManagedLostModeWithLocatedMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004244
- (void)enableManagedLostModeWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003f30
- (void)disableLostMode;	// IMP=0x0000000000003e8e
- (id)enableLostModeWithInfo:(id)arg1;	// IMP=0x0000000000003d15
- (id)lostModeInfo;	// IMP=0x000000000000339c
- (unsigned long long)_needsAckLostModeType;	// IMP=0x000000000000310d
- (unsigned long long)_managedLostModeType;	// IMP=0x0000000000002e68
- (_Bool)isLostModeActive;	// IMP=0x0000000000002d23
- (_Bool)isManagedLostModeActive;	// IMP=0x0000000000002c56
- (_Bool)lostModeIsActive;	// IMP=0x0000000000002927
- (id)init;	// IMP=0x00000000000028cf
- (void)clearMaskedAppleIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000142d7
- (void)updateMaskedAppleIDWith:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001412a
- (void)activationLockVersionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013f8c
- (void)removeNotificationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013e55
- (void)addNotificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013d1e
- (void)showDailyLocateReport;	// IMP=0x0000000000013b6b
- (void)setDailyLocateReportEnabled:(_Bool)arg1;	// IMP=0x00000000000139b1
- (void)disableBiometricIDForLostModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001385a
- (id)_postWipePrefPath;	// IMP=0x0000000000013760
- (_Bool)_quickFetchFMIPEnabledstate;	// IMP=0x00000000000136ff

@end

