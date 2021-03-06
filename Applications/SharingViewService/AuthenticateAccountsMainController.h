//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AuthenticateAccountsAuthViewController, AuthenticateAccountsDoneViewController, AuthenticateAccountsProgressViewController, AuthenticateAccountsStartViewController, SFAuthenticateAccountsSession, SVSCommonNavController, UIStoryboard;

__attribute__((visibility("hidden")))
@interface AuthenticateAccountsMainController
{
    _Bool _dismissed;	// 24 = 0x18
    int _dismissNotifyToken;	// 28 = 0x1c
    _Bool _homePressed;	// 32 = 0x20
    _Bool _loggedUsageStart;	// 33 = 0x21
    _Bool _loggedUsageDone;	// 34 = 0x22
    SFAuthenticateAccountsSession *_setupSession;	// 40 = 0x28
    UIStoryboard *_storyboard;	// 48 = 0x30
    SVSCommonNavController *_vcNav;	// 56 = 0x38
    AuthenticateAccountsStartViewController *_vcStart;	// 64 = 0x40
    AuthenticateAccountsAuthViewController *_vcAuth;	// 72 = 0x48
    AuthenticateAccountsProgressViewController *_vcProgress;	// 80 = 0x50
    AuthenticateAccountsDoneViewController *_vcDone;	// 88 = 0x58
    unsigned long long _viewAppearedTicks;	// 96 = 0x60
    _Bool _placeholderUI;	// 104 = 0x68
    unsigned int _badPINCount;	// 108 = 0x6c
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x00400000001a15c0
- (void).cxx_destruct;	// IMP=0x00200000001a1458
@property(nonatomic) _Bool placeholderUI; // @synthesize placeholderUI=_placeholderUI;
@property(nonatomic) unsigned int badPINCount; // @synthesize badPINCount=_badPINCount;
- (void)_pairSetupTryPIN:(id)arg1;	// IMP=0x00100000001a137d
- (void)showProgressUI;	// IMP=0x00100000001a12ae
- (void)showDoneUI:(int)arg1 error:(id)arg2;	// IMP=0x00100000001a110e
- (void)showDoneUI:(int)arg1;	// IMP=0x00100000001a10fa
- (void)showAuthUIWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x00100000001a1014
- (void)_sessionHandleProgress:(unsigned int)arg1 info:(id)arg2;	// IMP=0x00100000001a0695
- (void)_sessionStart;	// IMP=0x00100000001a03e8
- (void)logUsageDone:(int)arg1;	// IMP=0x00100000001a00f2
- (void)logUsageStart:(int)arg1;	// IMP=0x001000000019fe3d
- (void)_handleHomeButtonPressed;	// IMP=0x001000000019fdd1
- (void)handleButtonActions:(id)arg1;	// IMP=0x001000000019fc32
- (void)dismiss:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000019fb17
- (void)dismiss:(int)arg1;	// IMP=0x001000000019fb03
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000019f8d5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000019f62c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x001000000019f564

@end

