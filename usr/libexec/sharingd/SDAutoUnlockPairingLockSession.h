//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSError, NSObject, NSString, SDUnlockSetupSessionCreated;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockPairingLockSession
{
    _Bool _canceled;	// 8 = 0x8
    _Bool _upsellDevice;	// 9 = 0x9
    _Bool _setupRetryDevice;	// 10 = 0xa
    _Bool _placeholder;	// 11 = 0xb
    _Bool _waitingForCloudPairing;	// 12 = 0xc
    _Bool _keyDeviceLocked;	// 13 = 0xd
    _Bool _unlockEnabled;	// 14 = 0xe
    _Bool _receivedSetupACK;	// 15 = 0xf
    _Bool _receivedTokenACK;	// 16 = 0x10
    unsigned int _errorType;	// 20 = 0x14
    int _watchOldLTKSyncStatus;	// 24 = 0x18
    int _watchNewLTKSyncStatus;	// 28 = 0x1c
    NSString *_passcode;	// 32 = 0x20
    long long _sendState;	// 40 = 0x28
    NSString *_keyDeviceModel;	// 48 = 0x30
    NSString *_watchBuildVersion;	// 56 = 0x38
    NSString *_watchOSVersion;	// 64 = 0x40
    NSString *_companionDeviceModel;	// 72 = 0x48
    NSError *_setupError;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_ltkTimer;	// 88 = 0x58
    SDUnlockSetupSessionCreated *_sessionCreatedMessage;	// 96 = 0x60
    long long _responseTimeout;	// 104 = 0x68
    long long _responseTimeoutFromServer;	// 112 = 0x70
    long long _messageTimeout;	// 120 = 0x78
    long long _messageTimeoutFromServer;	// 128 = 0x80
    long long _ltkTimerRetryCount;	// 136 = 0x88
    NSDate *_keyExchangeDate;	// 144 = 0x90
    NSDate *_tokenExchangeDate;	// 152 = 0x98
    double _keyExchangeInterval;	// 160 = 0xa0
    double _tokenExchangeInterval;	// 168 = 0xa8
    NSData *_remoteLTKHash;	// 176 = 0xb0
    NSString *_setupMessageIdentifier;	// 184 = 0xb8
    NSString *_tokenMessageIdentifier;	// 192 = 0xc0
}

+ (long long)setupRequestVersion;	// IMP=0x0040000000026895
- (void).cxx_destruct;	// IMP=0x002000000002c3bf
@property(retain, nonatomic) NSString *tokenMessageIdentifier; // @synthesize tokenMessageIdentifier=_tokenMessageIdentifier;
@property(retain, nonatomic) NSString *setupMessageIdentifier; // @synthesize setupMessageIdentifier=_setupMessageIdentifier;
@property(nonatomic) _Bool receivedTokenACK; // @synthesize receivedTokenACK=_receivedTokenACK;
@property(nonatomic) _Bool receivedSetupACK; // @synthesize receivedSetupACK=_receivedSetupACK;
@property(nonatomic) int watchNewLTKSyncStatus; // @synthesize watchNewLTKSyncStatus=_watchNewLTKSyncStatus;
@property(nonatomic) int watchOldLTKSyncStatus; // @synthesize watchOldLTKSyncStatus=_watchOldLTKSyncStatus;
@property(retain, nonatomic) NSData *remoteLTKHash; // @synthesize remoteLTKHash=_remoteLTKHash;
@property(nonatomic) double tokenExchangeInterval; // @synthesize tokenExchangeInterval=_tokenExchangeInterval;
@property(nonatomic) double keyExchangeInterval; // @synthesize keyExchangeInterval=_keyExchangeInterval;
@property(retain, nonatomic) NSDate *tokenExchangeDate; // @synthesize tokenExchangeDate=_tokenExchangeDate;
@property(retain, nonatomic) NSDate *keyExchangeDate; // @synthesize keyExchangeDate=_keyExchangeDate;
@property(nonatomic) long long ltkTimerRetryCount; // @synthesize ltkTimerRetryCount=_ltkTimerRetryCount;
@property(nonatomic) long long messageTimeoutFromServer; // @synthesize messageTimeoutFromServer=_messageTimeoutFromServer;
- (void)setMessageTimeout:(long long)arg1;	// IMP=0x001000000002c1e9
- (long long)messageTimeout;	// IMP=0x001000000002c1d8
@property(nonatomic) long long responseTimeoutFromServer; // @synthesize responseTimeoutFromServer=_responseTimeoutFromServer;
@property(nonatomic) long long responseTimeout; // @synthesize responseTimeout=_responseTimeout;
@property(retain, nonatomic) SDUnlockSetupSessionCreated *sessionCreatedMessage; // @synthesize sessionCreatedMessage=_sessionCreatedMessage;
@property(nonatomic) unsigned int errorType; // @synthesize errorType=_errorType;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *ltkTimer; // @synthesize ltkTimer=_ltkTimer;
@property(nonatomic) _Bool unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(nonatomic) _Bool keyDeviceLocked; // @synthesize keyDeviceLocked=_keyDeviceLocked;
@property(retain, nonatomic) NSError *setupError; // @synthesize setupError=_setupError;
@property(retain, nonatomic) NSString *companionDeviceModel; // @synthesize companionDeviceModel=_companionDeviceModel;
@property(retain, nonatomic) NSString *watchOSVersion; // @synthesize watchOSVersion=_watchOSVersion;
@property(retain, nonatomic) NSString *watchBuildVersion; // @synthesize watchBuildVersion=_watchBuildVersion;
@property(retain, nonatomic) NSString *keyDeviceModel; // @synthesize keyDeviceModel=_keyDeviceModel;
@property(nonatomic) long long sendState; // @synthesize sendState=_sendState;
@property(nonatomic) _Bool waitingForCloudPairing; // @synthesize waitingForCloudPairing=_waitingForCloudPairing;
@property(nonatomic) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool setupRetryDevice; // @synthesize setupRetryDevice=_setupRetryDevice;
@property(nonatomic) _Bool upsellDevice; // @synthesize upsellDevice=_upsellDevice;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(copy, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
- (id)userInfoForNewProtocol;	// IMP=0x001000000002be65
- (id)userInfoForOldProtocol;	// IMP=0x001000000002bd7d
- (id)userInfoForNoCommunincation;	// IMP=0x001000000002bc95
- (id)userInfoForNoPasscode;	// IMP=0x001000000002bbad
- (id)userInfoForNoWristDetection;	// IMP=0x001000000002bac5
- (id)userInfoForNoWristDetectionNoPasscode;	// IMP=0x001000000002b9dd
- (id)userInfoCompanionViewNotSyncing;	// IMP=0x001000000002b8f5
- (id)userInfoForWatchLocked;	// IMP=0x001000000002b80d
- (id)userInfoForNotCloudPaired;	// IMP=0x001000000002b769
- (id)userInfoForMacNotSignedIn;	// IMP=0x001000000002b681
- (id)userInfoForWatchNotSignedIn;	// IMP=0x001000000002b599
- (id)userInfoForMissingLTK;	// IMP=0x001000000002b4b1
- (id)userInfoForInternetSharing;	// IMP=0x001000000002b3c9
- (id)userInfoForKeychainMismatch;	// IMP=0x001000000002b2e1
- (id)userInfoForiPhoneNeedsUnlock;	// IMP=0x001000000002b1f9
- (void)transport:(id)arg1 didReceiveMessageACKForIdentifier:(id)arg2;	// IMP=0x001000000002aff4
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x001000000002aee7
- (void)sendCreateSecretWithStepData:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x001000000002ab33
- (void)sendSetupRequest;	// IMP=0x001000000002a622
- (void)handleSuccessfulPairing;	// IMP=0x0010000000029ed6
- (void)handleSetupCreateRecord:(id)arg1;	// IMP=0x0010000000029755
- (void)handleDeviceAuthenticationSetupRequest;	// IMP=0x00100000000290ec
- (void)handleEscrowSessionRequest;	// IMP=0x0010000000028698
- (void)handleSetupSessionCreated:(id)arg1 fromDeviceID:(id)arg2;	// IMP=0x0010000000027b74
- (void)handleKeyDeviceLocked;	// IMP=0x0010000000027a78
- (void)handleMessage:(id)arg1 fromDeviceID:(id)arg2 type:(unsigned short)arg3;	// IMP=0x001000000002776f
- (_Bool)ltkHashMatches;	// IMP=0x001000000002764f
- (void)handleLTKTimerFired;	// IMP=0x00100000000273be
- (void)invalidateLTKTimer;	// IMP=0x00100000000272e8
- (void)restartLTKTimer;	// IMP=0x00100000000270e0
- (void)notifyDelegateKeyDeviceIsLocked;	// IMP=0x0010000000027043
- (void)notifyDelegateWithError:(id)arg1;	// IMP=0x00100000000268ad
- (_Bool)useAttestedProtocol;	// IMP=0x00100000000268a5
- (_Bool)validatePasscode:(id)arg1;	// IMP=0x001000000002688d
- (void)handleTimerFired;	// IMP=0x00100000000266bc
- (id)generatedError;	// IMP=0x00100000000265ab
- (void)invalidate;	// IMP=0x00100000000264b2
- (void)onqueue_updateForCloudPairing;	// IMP=0x0010000000026453
- (void)updateForCloudPairing;	// IMP=0x00100000000263cc
- (void)onqueue_cancel;	// IMP=0x00100000000262b3
- (void)cancel;	// IMP=0x001000000002622c
- (void)onqueue_start;	// IMP=0x00100000000259d4
- (void)start;	// IMP=0x001000000002594d
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2;	// IMP=0x0010000000025574

@end

