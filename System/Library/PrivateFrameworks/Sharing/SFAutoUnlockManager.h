//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/SFUnlockClientProtocol-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, SFAutoUnlockManagerDelegate;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol>
{
    id <SFAutoUnlockManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
}

+ (long long)mockedPhoneAutoUnlockSimulateErrorCode;	// IMP=0x000000000002b75c
+ (float)mockedPhoneAutoUnlockSimulateManualReLock;	// IMP=0x000000000002b68d
+ (_Bool)mockedPhoneAutoUnlockSimulateMagnetBreak;	// IMP=0x000000000002b61f
+ (_Bool)mockedPhoneAutoUnlockSimulatePhoneMissedFinalConfirmationToUnlock;	// IMP=0x000000000002b5b1
+ (_Bool)mockedPhoneAutoUnlockSimulateDevicesOutOfRange;	// IMP=0x000000000002b543
+ (float)mockedPhoneAutoUnlockSimulateLatency;	// IMP=0x000000000002b474
+ (_Bool)mockedPhoneAutoUnlockWatchNoMotion;	// IMP=0x000000000002b3ee
+ (_Bool)mockedPhoneAutoUnlockWatchSleepModeOn;	// IMP=0x000000000002b368
+ (_Bool)mockedPhoneAutoUnlockWatchAWDLUnavailable;	// IMP=0x000000000002b2e2
+ (_Bool)mockedPhoneAutoUnlockWatchWiFiOff;	// IMP=0x000000000002b25c
+ (_Bool)mockedPhoneAutoUnlockWatchOffWrist;	// IMP=0x000000000002b1d6
+ (_Bool)mockedPhoneAutoUnlockWatchLocked;	// IMP=0x000000000002b150
+ (_Bool)mockedPhoneAutoUnlockWatchWristDetectionDisabled;	// IMP=0x000000000002b0ca
+ (_Bool)mockedPhoneAutoUnlockWatchHasWeakPasscode;	// IMP=0x000000000002b044
+ (_Bool)mockedPhoneAutoUnlockNoPairedWatch;	// IMP=0x000000000002afbe
+ (_Bool)mockedPhoneAutoUnlockNoWatch;	// IMP=0x000000000002af50
+ (_Bool)mockedPhoneAutoUnlockAWDLUnavailable;	// IMP=0x000000000002aee2
+ (_Bool)mockedPhoneAutoUnlockWiFiOff;	// IMP=0x000000000002ae74
+ (_Bool)mockedPhoneAutoUnlockNoMask;	// IMP=0x000000000002ae06
+ (_Bool)mockedPhoneAutoUnlockMaskUnlikely;	// IMP=0x000000000002ad98
+ (_Bool)mockedPhoneAutoUnlockNeverUnlocked;	// IMP=0x000000000002ad2a
+ (_Bool)mockedPhoneAutoUnlockFaceIDDisabled;	// IMP=0x000000000002acbc
+ (_Bool)mockedPhoneAutoUnlockInBioLockout;	// IMP=0x000000000002ac4e
+ (_Bool)mockedPhoneAutoUnlockEnabled;	// IMP=0x000000000002abd8
+ (id)userDefaults;	// IMP=0x000000000002ab6c
+ (void)enableBluetoothAndWiFi;	// IMP=0x0000000000026626
+ (void)mockedEnableBluetoothAndWiFi;	// IMP=0x00000000000265d9
+ (_Bool)bluetoothAndWiFiEnabled;	// IMP=0x00000000000265c0
+ (_Bool)mockedBluetoothAndWiFiEnabled;	// IMP=0x00000000000265a4
+ (_Bool)autoUnlockEnabled:(unsigned int)arg1;	// IMP=0x0000000000026348
+ (_Bool)autoUnlockEnabled;	// IMP=0x0000000000026135
+ (_Bool)mockedAutoUnlockEnabled;	// IMP=0x0000000000026119
+ (_Bool)autoUnlockSupported;	// IMP=0x000000000002610f
- (void).cxx_destruct;	// IMP=0x000000000002c8e3
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <SFAutoUnlockManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authPromptInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c565
- (void)autoUnlockStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c1e8
- (void)deviceRequestedRelock:(id)arg1;	// IMP=0x000000000002c08d
- (void)failedUnlockWithError:(id)arg1;	// IMP=0x000000000002bfbf
- (void)completedUnlockWithDevice:(id)arg1;	// IMP=0x000000000002be64
- (void)beganAttemptWithDevice:(id)arg1;	// IMP=0x000000000002bd09
- (void)failedToEnableDevice:(id)arg1 error:(id)arg2;	// IMP=0x000000000002bc0c
- (void)enabledDevice:(id)arg1;	// IMP=0x000000000002bab1
- (void)keyDeviceLocked:(id)arg1;	// IMP=0x000000000002b956
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1;	// IMP=0x000000000002b8ac
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2;	// IMP=0x000000000002b7cd
- (void)requestRelock;	// IMP=0x000000000002ab66
- (void)cancelAutoUnlock;	// IMP=0x000000000002aa9f
- (void)mockedCancelUnlock;	// IMP=0x000000000002a86e
- (void)attemptAutoUnlockForSiri;	// IMP=0x000000000002a47b
- (void)attemptAutoUnlockWithoutNotifyingWatch;	// IMP=0x000000000002a088
- (void)attemptAutoUnlock;	// IMP=0x0000000000029c51
- (void)clearPhoneAutoUnlockBehaviorChangeNotification;	// IMP=0x0000000000029ba6
- (void)declinedToEnablePhoneAutoUnlock;	// IMP=0x0000000000029af8
- (void)donateDeviceUnlockedWithMask:(_Bool)arg1;	// IMP=0x00000000000299fe
- (void)completeAutoUnlockWithNotification:(_Bool)arg1;	// IMP=0x0000000000029915
- (void)prewarmAutoUnlock;	// IMP=0x000000000002987d
- (void)mockedAttemptAutoUnlock;	// IMP=0x0000000000028915
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000281b5
- (void)mockedDisableAutoUnlockForDevice:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027fcc
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;	// IMP=0x0000000000027cfb
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2;	// IMP=0x0000000000027613
- (void)mockedEnableAutoUnlockWithDevice:(id)arg1;	// IMP=0x00000000000270d8
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002693a
- (void)mockedEligibleAutoUnlockDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026658
- (void)repairCloudPairing;	// IMP=0x000000000002663f
@property(readonly, nonatomic) double spinnerDelay;
- (id)init;	// IMP=0x00000000000264fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

