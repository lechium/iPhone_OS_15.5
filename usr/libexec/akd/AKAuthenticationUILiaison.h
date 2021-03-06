//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKAuthenticationSurrogateManager;
@protocol OS_dispatch_queue;

@interface AKAuthenticationUILiaison : NSObject
{
    AKAuthenticationSurrogateManager *_surrogateManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientUIWorkQueue;	// 16 = 0x10
    AKAccountManager *_accountManager;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00200000000656c1
- (void).cxx_destruct;	// IMP=0x00200000000697ab
- (void)promptForAppleIDSettingsRedirectWithContext:(id)arg1 client:(id)arg2 needFullUI:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000693e4
- (id)uiWorkQueue;	// IMP=0x00100000000693d6
- (_Bool)_isFullUICapabilityRequiredFor2FA;	// IMP=0x00100000000693ce
- (id)_stringByAppendingBlameIfNecessary:(id)arg1 withContext:(id)arg2 client:(id)arg3;	// IMP=0x0010000000069176
- (id)_optionsForCreatingUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 serviceType:(long long)arg5;	// IMP=0x0010000000069095
- (id)_notificationDictionaryForClient:(id)arg1 context:(id)arg2 needFullUI:(_Bool)arg3;	// IMP=0x001000000006868d
- (_Bool)_isBackgroundClient:(id)arg1 eligibleForForegroundAuthenticationWithContext:(id)arg2;	// IMP=0x00100000000683ac
- (void)_performBlockWithClient:(id)arg1 context:(id)arg2 requireFullUICapability:(_Bool)arg3 allowRedirectToSettings:(_Bool)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0010000000067d85
- (void)presentBiometricOrPasscodeValidationForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000067b8c
- (void)dismissNativeRecoveryUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000678dc
- (void)presentNativeRecoveryUIForContext:(id)arg1 recoveryContext:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000675da
- (void)dismissServerProvidedUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006732d
- (void);	// IMP=0x0010000000067004
- (void)presentSecondFactorAlertForContext:(id)arg1 client:(id)arg2 withError:(id)arg3 title:(id)arg4 message:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000066d1b
- (void)dismissSecondFactorUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000066af2
- (void)presentSecondFactorUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000668c6
- (void)presentLoginAlertForContext:(id)arg1 client:(id)arg2 withError:(id)arg3 title:(id)arg4 message:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000663d5
- (void)dismissBasicLoginUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006612c
- (void)presentBasicLoginUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065c1f
- (void)dismissKeepUsingUIForContext:(id)arg1 client:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065a29
- (void)presentKeepUsingUIForContext:(id)arg1 client:(id)arg2 appleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000065805
@property(readonly, nonatomic) AKAuthenticationSurrogateManager *surrogateManager;
- (id)init;	// IMP=0x0010000000065716

@end

