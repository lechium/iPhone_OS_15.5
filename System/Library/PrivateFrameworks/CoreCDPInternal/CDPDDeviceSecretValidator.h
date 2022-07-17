//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPRemoteDeviceSecretValidatorProtocolInternal-Protocol.h>

@class CDPContext, CDPDevice, NSMutableDictionary, NSMutableSet, NSString;
@protocol CDPDDeviceSecretValidatorDelegate;

@interface CDPDDeviceSecretValidator : NSObject <CDPRemoteDeviceSecretValidatorProtocolInternal>
{
    _Bool _isAttemptingRecovery;	// 8 = 0x8
    unsigned long long _failedAttempts;	// 16 = 0x10
    NSMutableDictionary *_failedSecrets;	// 24 = 0x18
    NSMutableSet *_failedRecoveryKeys;	// 32 = 0x20
    NSMutableSet *_failedSingleICSCs;	// 40 = 0x28
    NSMutableDictionary *_recoveryErrors;	// 48 = 0x30
    _Bool _depletedRemainingAttempts;	// 56 = 0x38
    CDPContext *_context;	// 64 = 0x40
    CDPDevice *_currentDevice;	// 72 = 0x48
    _Bool _isUsingMultipleICSC;	// 80 = 0x50
    unsigned long long supportedEscapeOfferMask;	// 88 = 0x58
    CDUnknownBlockType _validSecretHandler;	// 96 = 0x60
    id <CDPDDeviceSecretValidatorDelegate> _delegate;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000001959b
@property(nonatomic) __weak id <CDPDDeviceSecretValidatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType validSecretHandler; // @synthesize validSecretHandler=_validSecretHandler;
@property(nonatomic) _Bool isUsingMultipleICSC; // @synthesize isUsingMultipleICSC=_isUsingMultipleICSC;
@property(nonatomic) unsigned long long supportedEscapeOfferMask; // @synthesize supportedEscapeOfferMask;
- (unsigned long long)failedAttempts;	// IMP=0x000000000001952b
- (_Bool)isAttemptingRecovery;	// IMP=0x0000000000019522
- (_Bool)_isInvalidICSCError:(id)arg1;	// IMP=0x0000000000019470
- (void)validateCustodianRecoveryInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019458
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019440
- (void)supportedEscapeOfferMaskCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000193e8
- (void)cancelApproveFromAnotherDevice;	// IMP=0x00000000000193e2
- (void)resetAccountCDPState;	// IMP=0x00000000000193dc
- (void)_performSingleiCSCRecoveryWithSecret:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018f6c
- (void)_handleMultiCSCRecoveryResults:(id)arg1 clique:(id)arg2 type:(unsigned long long)arg3 secret:(id)arg4 device:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000018de4
- (_Bool)_isFailedSecret:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000000018ced
- (id)_failedSingleICSCs;	// IMP=0x0000000000018ca2
- (id)_failedSecretsForDevice:(id)arg1;	// IMP=0x0000000000018bfc
- (id)_handleMultiCSCRecoveryFailureForDevice:(id)arg1 recoveryError:(id)arg2 secret:(id)arg3;	// IMP=0x00000000000189d7
- (void)_handleDelegateValidationError:(id)arg1;	// IMP=0x00000000000187f3
- (void)cancelValidationWithError:(id)arg1;	// IMP=0x0000000000018623
- (void)_handleRecoveryFailureForFinalDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017f84
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000017a6a
- (void)validateRecoveryKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001790b
- (void)_attemptToRecoverWithRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017616
- (void)_attemptToRecoverDevice:(id)arg1 withSecret:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000172ea
- (id)initWithContext:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000017262
- (id)init;	// IMP=0x00000000000171a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
