//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCTPNR, IDSPhoneNumberValidationModeArbiter, IDSPreflightStack, IDSPushHandler, IDSSystemAccountAdapter, IMSystemMonitor, IMTimer, MISSING_TYPE, NSDate, NSMutableArray, NSString;
@protocol IDSPhoneNumberValidationStateMachineLockdownManager, IDSPhoneNumberValidationStateMachineMessageDelivery, IDSPreflightStackStore;

@interface IDSPhoneNumberValidationStateMachine : NSObject
{
    IDSPushHandler *_pushHandler;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    NSMutableArray *_handlers;	// 24 = 0x18
    NSMutableArray *_requestors;	// 32 = 0x20
    NSMutableArray *_promises;	// 40 = 0x28
    unsigned int _numberOfSuccessfulSends;	// 48 = 0x30
    unsigned int _numberOfAttemptsWithoutSuccessfulSend;	// 52 = 0x34
    unsigned int _numberOfPreflights;	// 56 = 0x38
    _Bool _isSMSWarningUp;	// 60 = 0x3c
    _Bool _hasAcceptedSMSRequest;	// 61 = 0x3d
    NSDate *_phoneNumberValidationStartDate;	// 64 = 0x40
    NSDate *_smsSendDate;	// 72 = 0x48
    IMTimer *_lastSendSMSTimer;	// 80 = 0x50
    _Bool _commCenterDead;	// 88 = 0x58
    _Bool _needsToCheckPhoneNumberState;	// 89 = 0x59
    _Bool _didReceiveSIMSetupCompleteNotification;	// 90 = 0x5a
    long long _reason;	// 96 = 0x60
    id <IDSPhoneNumberValidationStateMachineMessageDelivery> _httpMessageDelivery;	// 104 = 0x68
    id <IDSPhoneNumberValidationStateMachineLockdownManager> _lockdownManager;	// 112 = 0x70
    IMSystemMonitor *_systemMonitor;	// 120 = 0x78
    IDSPhoneNumberValidationModeArbiter *_arbiter;	// 128 = 0x80
    IDSSystemAccountAdapter *_systemAccountAdapter;	// 136 = 0x88
    id <IDSPreflightStackStore> _preflighStackStore;	// 144 = 0x90
    CDUnknownBlockType _inFlightHeartbeatBlock;	// 152 = 0x98
    CDUnknownBlockType _inFlightSMSTimeoutBlock;	// 160 = 0xa0
    IDSCTPNR *_CTPNR;	// 168 = 0xa8
    NSMutableArray *_registrations;	// 176 = 0xb0
    NSDate *_nextSendSMSDate;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00200000003ed1e0
@property(retain, nonatomic) IMTimer *lastSendSMSTimer; // @synthesize lastSendSMSTimer=_lastSendSMSTimer;
@property(retain, nonatomic) NSDate *smsSendDate; // @synthesize smsSendDate=_smsSendDate;
@property(retain, nonatomic) NSDate *phoneNumberValidationStartDate; // @synthesize phoneNumberValidationStartDate=_phoneNumberValidationStartDate;
@property(retain, nonatomic) NSDate *nextSendSMSDate; // @synthesize nextSendSMSDate=_nextSendSMSDate;
@property(nonatomic) _Bool didReceiveSIMSetupCompleteNotification; // @synthesize didReceiveSIMSetupCompleteNotification=_didReceiveSIMSetupCompleteNotification;
@property(nonatomic) _Bool needsToCheckPhoneNumberState; // @synthesize needsToCheckPhoneNumberState=_needsToCheckPhoneNumberState;
@property(nonatomic) _Bool commCenterDead; // @synthesize commCenterDead=_commCenterDead;
@property(nonatomic) _Bool hasAcceptedSMSRequest; // @synthesize hasAcceptedSMSRequest=_hasAcceptedSMSRequest;
@property(nonatomic) _Bool isSMSWarningUp; // @synthesize isSMSWarningUp=_isSMSWarningUp;
@property(nonatomic) unsigned int numberOfPreflights; // @synthesize numberOfPreflights=_numberOfPreflights;
@property(nonatomic) unsigned int numberOfAttemptsWithoutSuccessfulSend; // @synthesize numberOfAttemptsWithoutSuccessfulSend=_numberOfAttemptsWithoutSuccessfulSend;
@property(nonatomic) unsigned int numberOfSuccessfulSends; // @synthesize numberOfSuccessfulSends=_numberOfSuccessfulSends;
@property(retain, nonatomic) NSMutableArray *registrations; // @synthesize registrations=_registrations;
@property(retain, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) IDSCTPNR *CTPNR; // @synthesize CTPNR=_CTPNR;
@property(copy, nonatomic) CDUnknownBlockType inFlightSMSTimeoutBlock; // @synthesize inFlightSMSTimeoutBlock=_inFlightSMSTimeoutBlock;
@property(copy, nonatomic) CDUnknownBlockType inFlightHeartbeatBlock; // @synthesize inFlightHeartbeatBlock=_inFlightHeartbeatBlock;
@property(retain, nonatomic) id <IDSPreflightStackStore> preflighStackStore; // @synthesize preflighStackStore=_preflighStackStore;
@property(retain, nonatomic) IDSSystemAccountAdapter *systemAccountAdapter; // @synthesize systemAccountAdapter=_systemAccountAdapter;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(retain, nonatomic) IDSPhoneNumberValidationModeArbiter *arbiter; // @synthesize arbiter=_arbiter;
@property(retain, nonatomic) IMSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(retain, nonatomic) id <IDSPhoneNumberValidationStateMachineLockdownManager> lockdownManager; // @synthesize lockdownManager=_lockdownManager;
@property(retain, nonatomic) id <IDSPhoneNumberValidationStateMachineMessageDelivery> httpMessageDelivery; // @synthesize httpMessageDelivery=_httpMessageDelivery;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)persistNumberOfPreflightAttempts:(unsigned int)arg1;	// IMP=0x00100000003ec9e0
- (unsigned int)loadNumberOfPreflightAttempts;	// IMP=0x00100000003ec9b0
- (void)persistNumberOfSuccessfulValidationSends:(unsigned int)arg1;	// IMP=0x00100000003ec980
- (unsigned int)loadNumberOfSuccessfulValidationSends;	// IMP=0x00100000003ec950
- (void)heartbeat;	// IMP=0x00100000003ebec0
- (void)removePhoneNumberValidationRequestor:(id)arg1;	// IMP=0x00100000003ebc70
- (id)identifyPhoneNumberForRequestor:(id)arg1 queue:(id)arg2;	// IMP=0x00100000003ebb60
- (void)addPhoneNumberValidationRequestor:(id)arg1;	// IMP=0x00100000003eb9d0
- (void)removeListener:(id)arg1;	// IMP=0x00100000003eb970
- (void)addListener:(id)arg1;	// IMP=0x00100000003eb8b0
- (void)timedOutWaitingForSMS;	// IMP=0x00100000003eb110
- (void)resetSMSCounter;	// IMP=0x00100000003eaf00
- (void)handleIncomingSMSForResponse:(id)arg1;	// IMP=0x00100000003e9ee0
- (void)handleRegistrationSMSSuccessfullyDeliveredWithTelephonyTimeout:(id)arg1;	// IMP=0x00100000003e9590
- (void)handleRegistrationSMSDeliveryFailedWithShouldBypassRetry:(_Bool)arg1;	// IMP=0x00100000003e8a80
- (void)handleRegistrationSMSDeliveryFailed;	// IMP=0x00100000003e8a50
- (void)_requestUserConsentForPhoneNumberValidationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e88f0
- (void)_tryToSendSMSIdentification;	// IMP=0x00100000003e7060
- (void)_sendPreflightVerificationWithIMSI:(id)arg1 PLMN:(id)arg2;	// IMP=0x00100000003e61b0
- (void)_performHighestPriorityPreflightVerification;	// IMP=0x00100000003e6150
- (void)_popHighestPriorityPreflightVerification;	// IMP=0x00100000003e6080
- (id)_getHighestPriorityMechanism;	// IMP=0x00100000003e5f90
- (void)_sendPreflightVerificationIfNeeded;	// IMP=0x00100000003e5c60
- (void)_issueAsyncCoreTelephonyPhoneNumberValidationRequestWithPushToken:(id)arg1 mechanism:(id)arg2;	// IMP=0x00100000003e5bf0
- (void)_sendSMSVerificationWithMechanism:(id)arg1;	// IMP=0x00100000003e5630
- (void)_setSMSDeliveryTimeout:(double)arg1;	// IMP=0x00100000003e53f0
- (_Bool)_canDeliverSMSNow;	// IMP=0x00100000003e53d0
- (void)_smsDeliveryClear;	// IMP=0x00100000003e5170
- (void)_clearSMSDeliveryTimeout;	// IMP=0x00100000003e5130
- (MISSING_TYPE *)_keychainMigrationComplete: /* Error: Ran out of types for this method. */;	// IMP=0x00100000003e4fd0
- (void)_SIMSetupDidComplete;	// IMP=0x00100000003e4ef0
- (void)systemRestoreStateDidChange;	// IMP=0x00100000003e4e00
- (void)systemDidStopBackup;	// IMP=0x00100000003e4d10
- (void)systemDidFinishMigration;	// IMP=0x00100000003e4b20
- (void)PNRResponseReceivedWithResponseData:(id)arg1;	// IMP=0x00100000003e4510
- (void)PNRRequestSentWithRequestData:(id)arg1;	// IMP=0x00100000003e4040
- (void)PNRReadyStateChanged:(_Bool)arg1;	// IMP=0x00100000003e3e90
- (void)_deviceIDChangedNotification:(id)arg1;	// IMP=0x00100000003e3cc0
- (void)_registerForLockdownNotifications;	// IMP=0x00100000003e3b80
- (void)_lockdownStateChanged:(id)arg1;	// IMP=0x00100000003e3970
- (_Bool)_validSIMStateForRegistration;	// IMP=0x00100000003e3850
- (_Bool)_deviceCanRegisterPresently;	// IMP=0x00100000003e35d0
- (long long)_errorCodeForRegistrationError:(long long)arg1;	// IMP=0x00100000003e34f0
- (void)_failPromisesWithError:(long long)arg1;	// IMP=0x00100000003e3270
- (void)_fulfillPromisesWithPhoneNumber:(id)arg1 token:(id)arg2;	// IMP=0x00100000003e2fb0
- (void)_notifySuccess:(id)arg1;	// IMP=0x00100000003e20e0
- (void)_notifyFailureWithError:(long long)arg1;	// IMP=0x00100000003e1330
- (_Bool)_isAwaitingUserSelectionDuringSetup;	// IMP=0x00100000003e1310
- (_Bool)_isUserSubscriptionSelectionStillPending;	// IMP=0x00100000003e10c0
- (_Bool)_userHasDisabledSMSRegistration;	// IMP=0x00100000003e10a0
- (long long)_registrationControlStatus;	// IMP=0x00100000003e1040
@property(copy, nonatomic) IDSPreflightStack *currentPreflightStack;
- (void)_registerForDeviceCenterNotifications;	// IMP=0x00100000003e0e60
- (void)dealloc;	// IMP=0x00100000003e0e10
- (void)invalidate;	// IMP=0x00100000003e0cd0
- (id)initWithCTPNR:(id)arg1 preflightStackStore:(id)arg2;	// IMP=0x00100000003e0a50
- (id)initWithCTPNR:(id)arg1 preflightStackStore:(id)arg2 HTTPDelivery:(id)arg3 pushHandler:(id)arg4 lockdownManager:(id)arg5 systemMonitor:(id)arg6 arbiter:(id)arg7 systemAccountAdapter:(id)arg8;	// IMP=0x00100000003e0240
- (void)_cancelScheduledSMSTimeout;	// IMP=0x00100000003e01a0
- (void)_scheduleSMSTimeout:(double)arg1;	// IMP=0x00100000003dffd0
- (void)_cancelScheduledHeartbeat;	// IMP=0x00100000003dff30
- (void)_scheduleHeartbeat:(double)arg1;	// IMP=0x00100000003dfcd0
@property(readonly, copy) NSString *description;
- (_Bool)_isPhoneNumberIdentificationSupported;	// IMP=0x00100000003dfa60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

