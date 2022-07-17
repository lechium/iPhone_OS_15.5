//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDFitnessMachineStateTimer;
@protocol HDFitnessMachineStateTimersDelegate, OS_dispatch_queue;

@interface HDFitnessMachineStateTimers : NSObject
{
    id <HDFitnessMachineStateTimersDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HDFitnessMachineStateTimer *_fieldDetectTimer;	// 24 = 0x18
    HDFitnessMachineStateTimer *_tagReadTimer;	// 32 = 0x20
    HDFitnessMachineStateTimer *_machineIdentityVerificationTimer;	// 40 = 0x28
    HDFitnessMachineStateTimer *_userAcceptanceTimer;	// 48 = 0x30
    HDFitnessMachineStateTimer *_waitForMachineStartTimer;	// 56 = 0x38
    HDFitnessMachineStateTimer *_pauseTimer;	// 64 = 0x40
    HDFitnessMachineStateTimer *_disconnectTimer;	// 72 = 0x48
    HDFitnessMachineStateTimer *_retryConnectionTimer;	// 80 = 0x50
    HDFitnessMachineStateTimer *_mfaTimer;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000688e3b
@property(nonatomic) __weak id <HDFitnessMachineStateTimersDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isMfaTimerValid;	// IMP=0x0000000000688dda
- (void)cancelMfaTimeout;	// IMP=0x0000000000688da4
- (void)beginMfaTimeout;	// IMP=0x0000000000688ae4
- (_Bool)isRetryConnectionTimerValid;	// IMP=0x0000000000688aaa
- (void)cancelRetryConnectionTimeout;	// IMP=0x0000000000688a74
- (void)beginRetryConnectionTimeout;	// IMP=0x000000000068889a
- (_Bool)isDisconnectTimerValid;	// IMP=0x0000000000688860
- (void)cancelDisconnectTimeout;	// IMP=0x000000000068882a
- (void)beginDisconnectTimeout;	// IMP=0x0000000000688650
- (_Bool)isPauseTimerValid;	// IMP=0x0000000000688616
- (void)cancelPauseTimeout;	// IMP=0x00000000006885e0
- (void)beginPauseTimeout;	// IMP=0x0000000000688406
- (_Bool)isWaitForMachineStartTimerValid;	// IMP=0x00000000006883cc
- (void)cancelWaitForMachineStartTimeout;	// IMP=0x0000000000688396
- (void)beginWaitForMachineStartTimeout;	// IMP=0x00000000006881bc
- (_Bool)isUserAcceptanceTimerValid;	// IMP=0x0000000000688182
- (void)cancelUserAcceptanceTimeout;	// IMP=0x000000000068814c
- (void)beginUserAcceptanceTimeout;	// IMP=0x0000000000687f72
- (_Bool)isMachineIdentityVerificationTimerValid;	// IMP=0x0000000000687f38
- (void)cancelMachineIdentityVerificationTimeout;	// IMP=0x0000000000687f02
- (void)beginMachineIdentityVerificationTimeout;	// IMP=0x0000000000687d28
- (_Bool)isTagReadTimerValid;	// IMP=0x0000000000687cee
- (void)cancelTagReadTimeout;	// IMP=0x0000000000687cb8
- (void)beginTagReadTimeout;	// IMP=0x0000000000687ade
- (_Bool)isFieldDetectTimerValid;	// IMP=0x0000000000687aa4
- (void)cancelFieldDetectTimeout;	// IMP=0x0000000000687a6e
- (void)beginFieldDetectTimeout;	// IMP=0x0000000000687894
- (void)cancelAllTimers;	// IMP=0x000000000068780b
- (void)dealloc;	// IMP=0x00000000006877cd
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000687734

@end
