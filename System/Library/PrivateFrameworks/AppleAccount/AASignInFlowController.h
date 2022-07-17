//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CDPContext, CUMessageSession, NSDictionary;
@protocol AASignInFlowControllerDelegate, CDPStateUIProvider;

@interface AASignInFlowController : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    CDPContext *_cdpContextForAccount;	// 16 = 0x10
    NSDictionary *_authResults;	// 24 = 0x18
    _Bool _pendingSignIn;	// 32 = 0x20
    _Bool _existingAccount;	// 33 = 0x21
    _Bool _shouldAutomaticallySaveSignInResults;	// 34 = 0x22
    _Bool _ignoreLockAssertErrors;	// 35 = 0x23
    id <AASignInFlowControllerDelegate> _delegate;	// 40 = 0x28
    id <CDPStateUIProvider> _cdpUIProvider;	// 48 = 0x30
    CUMessageSession *_messageSession;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000065680
@property(retain, nonatomic) CUMessageSession *messageSession; // @synthesize messageSession=_messageSession;
@property(nonatomic) _Bool ignoreLockAssertErrors; // @synthesize ignoreLockAssertErrors=_ignoreLockAssertErrors;
@property(nonatomic) _Bool shouldAutomaticallySaveSignInResults; // @synthesize shouldAutomaticallySaveSignInResults=_shouldAutomaticallySaveSignInResults;
@property(nonatomic) __weak id <CDPStateUIProvider> cdpUIProvider; // @synthesize cdpUIProvider=_cdpUIProvider;
@property(nonatomic) __weak id <AASignInFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prewarmOperationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065219
- (id)_userPersonaUniqueString;	// IMP=0x0000000000065211
- (void)_stashLoginResponseWithAuthenticationResults:(id)arg1 appleAccount:(id)arg2;	// IMP=0x0000000000064e86
- (_Bool)_shouldStashLoginResponse;	// IMP=0x0000000000064d5c
- (_Bool)_shouldEnableDataclassesForAccount:(id)arg1;	// IMP=0x0000000000064d06
- (unsigned long long)_findMyActivationAction;	// IMP=0x0000000000064bec
- (_Bool)_delegateRequiresTerms;	// IMP=0x0000000000064b35
- (_Bool)_delegateWantsToBackgroundDataclassEnablement;	// IMP=0x0000000000064a00
- (_Bool)_delegateWantsToSkipDataclassEnablement;	// IMP=0x00000000000648d6
- (_Bool)_isDuplicateAccountError:(long long)arg1;	// IMP=0x00000000000648b5
- (id)_aaMessageForErrorCode:(long long)arg1;	// IMP=0x0000000000064842
- (id)_aaErrorForErrorCode:(long long)arg1 withUnderlyingError:(id)arg2;	// IMP=0x0000000000064744
- (id)_aaErrorForErrorCode:(long long)arg1;	// IMP=0x0000000000064730
- (id)_titleForVerificationFailureAlert;	// IMP=0x000000000006471f
- (id)_titleForSignInFailureAlert;	// IMP=0x000000000006470e
- (id)_nameForCloudService;	// IMP=0x00000000000646fd
- (void)_delegate_enableFindMyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006454d
- (void)_delegate_presentValidationAlertForError:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000064142
- (void)_delegate_presentGenericTermsUIforAccount:(id)arg1 serverError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000063d11
- (void)_delegate_presentAccountCreationError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000638e6
- (void)_saveAccount:(id)arg1 withDataclassEnablement:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000637e2
- (void)_delegate_saveAccount:(id)arg1 withDataclassEnablement:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000636eb
- (void)_backgroundSaveAccount:(id)arg1 withDataclassEnablement:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000635e8
- (void)_saveAccount:(id)arg1 withAllDataclassesEnabledIfPossibleWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000062cc2
- (void)_enableFindMyIfPossibleWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000062cb2
- (void)_enrollCDPStateForAccount:(id)arg1 withCDPContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000625b2
- (void)_addKeysAndEnrollCDPStateForAccount:(id)arg1 withCDPContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000621a1
- (void)_validateAndEnrollCDPStateForAccount:(id)arg1 withCDPContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061aff
- (void)_verifyLoginResponseForiCloudAccount:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006155d
- (void)_registerAndVerifyLoginForiCloudAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000060e29
- (void)_updateAppleAccountIfNecessary:(id)arg1 withAltDSID:(id)arg2 rawPassword:(id)arg3;	// IMP=0x0000000000060bbd
- (void)_updateAppleAccount:(id)arg1 withAuthenticationResults:(id)arg2;	// IMP=0x0000000000060ac4
- (void)_createCDPContextForPrimaryAccount:(id)arg1 withAuthResults:(id)arg2;	// IMP=0x0000000000060a68
- (id)_createNewAppleAccountWithAuthResults:(id)arg1 accountCreationError:(id *)arg2;	// IMP=0x000000000006072c
- (void)_saveTermsWithAuthResults:(id)arg1 account:(id)arg2;	// IMP=0x000000000006069c
- (void)_prepareExistingAppleAccountForSignIn:(id)arg1 withAuthResults:(id)arg2 accountCreationError:(id *)arg3;	// IMP=0x00000000000602fb
- (id)_updateOrCreateAppleAccountForAuthResults:(id)arg1 accountCreationError:(id *)arg2;	// IMP=0x000000000006010e
- (void)signInWithIDMSAuthenticationResults:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005f7e6
- (id)init;	// IMP=0x000000000005f790

@end
