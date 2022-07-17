//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyPreferences/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CTXPCServiceSubscriptionContext, NSString;

@interface TPSSubscriberTelephonyController <CoreTelephonyClientSubscriberDelegate>
{
    _Bool _SIMPasscodeLockEnabled;	// 8 = 0x8
    long long _SIMPasscodeRemainingAttempts;	// 16 = 0x10
    NSString *_SIMStatus;	// 24 = 0x18
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000015659
@property(readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
- (void)simPinChangeRequestDidComplete:(id)arg1 success:(_Bool)arg2;	// IMP=0x00000000000151f4
- (void)simPukEntryErrorDidOccur:(id)arg1 status:(id)arg2;	// IMP=0x0000000000014e1f
- (void)simPinEntryErrorDidOccur:(id)arg1 status:(id)arg2;	// IMP=0x0000000000014a0b
- (void)simLockSaveRequestDidComplete:(id)arg1 success:(_Bool)arg2;	// IMP=0x000000000001457d
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;	// IMP=0x0000000000014390
- (void)fetchSIMStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014306
- (void)fetchSIMStatus;	// IMP=0x000000000001415d
- (id)getSIMStatusWithError:(id *)arg1;	// IMP=0x00000000000140d7
- (id)getSIMStatus;	// IMP=0x000000000001400d
- (void)fetchSIMPasscodeRemainingAttemptsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013f83
- (void)fetchSIMPasscodeRemainingAttempts;	// IMP=0x0000000000013dc9
- (id)getSIMPasscodeRemainingAttemptsValueWithError:(id *)arg1;	// IMP=0x0000000000013d43
- (id)getSIMPasscodeRemainingAttemptsValue;	// IMP=0x0000000000013c79
- (void)fetchSIMPasscodeLockEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013bef
- (void)fetchSIMPasscodeLockEnabled;	// IMP=0x0000000000013a35
- (id)getSIMPasscodeLockEnabledValueWithError:(id *)arg1;	// IMP=0x00000000000139af
- (id)getSIMPasscodeLockEnabledValue;	// IMP=0x000000000001383b
- (void)presentSIMPasscodeAlert;	// IMP=0x00000000000136f7
- (void)setSIMLockEnabled:(_Bool)arg1 pin:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013649
- (void)setSIMLockEnabled:(_Bool)arg1 pin:(id)arg2;	// IMP=0x00000000000134c7
- (void)changePIN:(id)arg1 newPin:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000133ee
- (void)changePIN:(id)arg1 newPin:(id)arg2;	// IMP=0x000000000001330e
@property(copy, nonatomic) NSString *SIMStatus; // @synthesize SIMStatus=_SIMStatus;
@property(nonatomic) long long SIMPasscodeRemainingAttempts; // @synthesize SIMPasscodeRemainingAttempts=_SIMPasscodeRemainingAttempts;
@property(nonatomic, getter=isSIMPasscodeLockEnabled) _Bool SIMPasscodeLockEnabled; // @synthesize SIMPasscodeLockEnabled=_SIMPasscodeLockEnabled;
- (id)initWithSubscriptionContext:(id)arg1;	// IMP=0x0000000000012505
- (id)init;	// IMP=0x00000000000124da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
