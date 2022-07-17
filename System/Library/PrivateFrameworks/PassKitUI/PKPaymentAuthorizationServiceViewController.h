//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/AKAppleIDAuthenticationInAppContextDelegate-Protocol.h>
#import <PassKitUI/AKSignInViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKAuthenticatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationServiceProtocol-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationStateMachineDelegate-Protocol.h>
#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class CNContact, NSLayoutConstraint, NSMutableSet, NSString, PKAuthenticator, PKContactFormatValidator, PKPaymentAuthorizationCouponCodeEntryViewController, PKPaymentAuthorizationFooterView, PKPaymentAuthorizationLayout, PKPaymentAuthorizationPasswordButtonView, PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationSummaryItemsView, PKPaymentAuthorizationTotalView, PKPaymentPreferencesViewController, PKPeerPaymentAccount, UIBarButtonItem, UITableView, UIView;
@protocol PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol;

@interface PKPaymentAuthorizationServiceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, PKPaymentAuthorizationFooterViewDelegate, PKAuthenticatorDelegate, PKPaymentAuthorizationStateMachineDelegate, PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate, AKSignInViewControllerDelegate, AKAppleIDAuthenticationInAppContextDelegate, PKPaymentAuthorizationServiceProtocol>
{
    PKPaymentAuthorizationLayout *_layout;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    UITableView *_detailTableView;	// 24 = 0x18
    PKPaymentAuthorizationSummaryItemsView *_summaryItemsView;	// 32 = 0x20
    NSLayoutConstraint *_summaryHeightConstraint;	// 40 = 0x28
    PKPaymentAuthorizationTotalView *_totalView;	// 48 = 0x30
    PKPaymentAuthorizationFooterView *_footerView;	// 56 = 0x38
    PKPaymentAuthorizationPasswordButtonView *_passwordButtonView;	// 64 = 0x40
    NSLayoutConstraint *_passphraseBottomConstraint;	// 72 = 0x48
    _Bool _needsToAccommodateKeyboard;	// 80 = 0x50
    UIBarButtonItem *_cancelBarButtonItem;	// 88 = 0x58
    _Bool _cancelButtonDisabled;	// 96 = 0x60
    _Bool _scrollIndicatorShown;	// 97 = 0x61
    UIView *_passphraseSeparatorView;	// 104 = 0x68
    NSLayoutConstraint *_contentViewRightConstraint;	// 112 = 0x70
    PKPaymentPreferencesViewController *_shippingMethodPreferencesController;	// 120 = 0x78
    PKPaymentPreferencesViewController *_shippingAddressPreferencesController;	// 128 = 0x80
    PKPaymentPreferencesViewController *_shippingContactPreferencesController;	// 136 = 0x88
    PKPaymentPreferencesViewController *_paymentCardPreferencesController;	// 144 = 0x90
    PKPaymentPreferencesViewController *_bankAccountPreferencesController;	// 152 = 0x98
    PKPaymentAuthorizationCouponCodeEntryViewController *_couponCodeEntryViewController;	// 160 = 0xa0
    _Bool _viewAppeared;	// 168 = 0xa8
    _Bool _visible;	// 169 = 0xa9
    _Bool _authenticating;	// 170 = 0xaa
    _Bool _allowCompactProcessing;	// 171 = 0xab
    _Bool _allowBiometricPhysicalButtonInstruction;	// 172 = 0xac
    _Bool _useBiometricPhysicalButtonInstruction;	// 173 = 0xad
    _Bool _physicalButtonVisibleOnce;	// 174 = 0xae
    unsigned char _visibility;	// 175 = 0xaf
    _Bool _keyboardVisible;	// 176 = 0xb0
    struct CGRect _keyboardFrame;	// 184 = 0xb8
    struct CGRect _lastKeyboardFrame;	// 216 = 0xd8
    unsigned short _layoutRecursionCounter;	// 248 = 0xf8
    long long _userIntentStyle;	// 256 = 0x100
    long long _internalAuthenticationEvaluationState;	// 264 = 0x108
    _Bool _idleStateIsPasscode;	// 272 = 0x110
    unsigned int _faceIDCameraEdge;	// 276 = 0x114
    _Bool _showPoseOutOfRangeDownCoaching;	// 280 = 0x118
    long long _internalCoachingState;	// 288 = 0x120
    UIViewController *_passcodeViewController;	// 296 = 0x128
    UIViewController *_passphraseViewController;	// 304 = 0x130
    _Bool _hostApplicationResignedActive;	// 312 = 0x138
    _Bool _hostApplicationEnteredBackground;	// 313 = 0x139
    _Bool _treatingHostAsBackgrounded;	// 314 = 0x13a
    _Bool _bypassAuthenticator;	// 315 = 0x13b
    _Bool _isPad;	// 316 = 0x13c
    _Bool _isAMPPayment;	// 317 = 0x13d
    _Bool _isInstallment;	// 318 = 0x13e
    _Bool _isPaymentSummaryPinned;	// 319 = 0x13f
    _Bool _needsFinalCallback;	// 320 = 0x140
    long long _preferencesStyle;	// 328 = 0x148
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 336 = 0x150
    unsigned long long _biometryAttempts;	// 344 = 0x158
    PKPeerPaymentAccount *_peerPaymentAccount;	// 352 = 0x160
    _Bool _peerPaymentBalanceIsInsufficient;	// 360 = 0x168
    NSMutableSet *_completionHandlers;	// 368 = 0x170
    CNContact *_lastUnserviceableAddress;	// 376 = 0x178
    double _authenticatorFingerOnTime;	// 384 = 0x180
    PKContactFormatValidator *_contactFormatValidator;	// 392 = 0x188
    _Bool _blockingHardwareCancels;	// 400 = 0x190
    PKPaymentAuthorizationStateMachine *_stateMachine;	// 408 = 0x198
    PKAuthenticator *_authenticator;	// 416 = 0x1a0
    long long _physicalButtonState;	// 424 = 0x1a8
    long long _physicalButtonAnimationStyle;	// 432 = 0x1b0
    NSString *_physicalButtonInstruction;	// 440 = 0x1b8
    long long _coachingState;	// 448 = 0x1c0
    id <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> _delegate;	// 456 = 0x1c8
}

- (void).cxx_destruct;	// IMP=0x000000000032a744
@property(readonly, nonatomic) _Bool blockingHardwareCancels; // @synthesize blockingHardwareCancels=_blockingHardwareCancels;
@property(nonatomic) __weak id <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long coachingState; // @synthesize coachingState=_coachingState;
@property(readonly, nonatomic) NSString *physicalButtonInstruction; // @synthesize physicalButtonInstruction=_physicalButtonInstruction;
@property(readonly, nonatomic) long long physicalButtonAnimationStyle; // @synthesize physicalButtonAnimationStyle=_physicalButtonAnimationStyle;
@property(readonly, nonatomic) long long physicalButtonState; // @synthesize physicalButtonState=_physicalButtonState;
@property(retain, nonatomic) PKAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(retain, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void)contextWillBeginPresentingSecondaryUI:(id)arg1;	// IMP=0x000000000032a662
- (void)_removeSimulatorHIDListener;	// IMP=0x000000000032a627
- (void)_startSimulatorHIDListener;	// IMP=0x000000000032a41c
- (void)_sendDidEncounterAuthorizationEventIfNecessary:(unsigned long long)arg1;	// IMP=0x000000000032a37e
- (_Bool)_passwordRequired;	// IMP=0x000000000032a272
- (_Bool)_passcodeAllowed;	// IMP=0x000000000032a1e3
- (void)_updateFooterStateIfAuthenticatingWithBiometricFailure:(_Bool)arg1;	// IMP=0x000000000032a152
- (void)_updateCoachingState;	// IMP=0x000000000032a040
- (void)_updatePhysicalButtonInstructionAndNotify:(_Bool)arg1;	// IMP=0x0000000000329e03
- (void)_updatePhysicalButtonState;	// IMP=0x0000000000329c24
- (void)_updateUserIntentStyle;	// IMP=0x0000000000329bce
- (void)_setPassphraseViewController:(id)arg1;	// IMP=0x0000000000329b5e
- (void)_setPasscodeViewController:(id)arg1;	// IMP=0x0000000000329aee
- (void)_setAuthenticating:(_Bool)arg1;	// IMP=0x0000000000329aac
- (void)_setVisible:(_Bool)arg1;	// IMP=0x0000000000329a58
- (id)_evaluationRequestWithHasInitialAuthenticatorState:(_Bool)arg1 initialAuthenticatorState:(unsigned long long)arg2;	// IMP=0x0000000000329655
- (long long)_authenticatorPolicy;	// IMP=0x0000000000329595
- (id)_compactNavigationController;	// IMP=0x0000000000329545
- (long long)_totalViewStyle;	// IMP=0x00000000003293f9
- (void)_updatePreferredContentSize;	// IMP=0x0000000000328e90
- (void)_updateCouponCodeEntry;	// IMP=0x0000000000328e73
- (void)_setupCouponCodeEntry;	// IMP=0x0000000000328db1
- (void)_showUnserviceableAddressAlertForErrors:(id)arg1;	// IMP=0x000000000032896f
- (void)_updatePreferencesWithErrors:(id)arg1;	// IMP=0x000000000032846d
- (void)_updateShippingMethods;	// IMP=0x0000000000327de0
- (id)_availabilityStringForPass:(id)arg1;	// IMP=0x0000000000327ab1
- (void)_setupPaymentPassAndBillingAddress;	// IMP=0x0000000000326369
- (void)_updateAvailableCardsPreferences;	// IMP=0x0000000000326115
- (id)_unavailablePasses;	// IMP=0x0000000000325e4a
- (long long)selectedPaymentApplicationIndexFromCardEntries:(id)arg1;	// IMP=0x0000000000325bd0
- (id)_addCardEntry;	// IMP=0x0000000000325a57
- (id)_availablePasses;	// IMP=0x0000000000324a94
- (void)_updateBankAccounts;	// IMP=0x00000000003238b7
- (void)_setupBankAccounts;	// IMP=0x0000000000323798
- (_Bool)_shouldShowUsePeerPaymentBalanceToggle;	// IMP=0x00000000003236ee
- (void)_setupShippingContact;	// IMP=0x0000000000321c3b
- (void)_setupShippingAddress;	// IMP=0x0000000000320d66
- (void)_setupShippingMethods;	// IMP=0x0000000000320b8f
- (void)_setupWithPaymentRequest:(id)arg1 relevantPassUniqueID:(id)arg2 fromAppWithLocalizedName:(id)arg3 applicationIdentifier:(id)arg4 bundleIdentifier:(id)arg5 teamIdentifier:(id)arg6;	// IMP=0x000000000031fda6
- (void)_handleModelUpdate;	// IMP=0x000000000031f780
- (Class)_viewPresenterClassForDataItem:(id)arg1;	// IMP=0x000000000031f6a4
- (Class)_tableViewClassForDataItem:(id)arg1;	// IMP=0x000000000031f661
- (void)_removePassphraseViewFromHierarchyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000031f3e2
- (void)_addPassphraseViewControllerToHierarchy:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000031ee46
- (void)resumeAndUpdateContentSize;	// IMP=0x000000000031ee0b
- (void)cancelPressed:(id)arg1;	// IMP=0x000000000031ec14
- (void)_payWithPasswordPressed:(id)arg1;	// IMP=0x000000000031e9a8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000031e583
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000031e528
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000031e50b
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000031e14b
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000031df85
- (_Bool)_shouldShowSeparatorForRowAtIndexPath:(id)arg1;	// IMP=0x000000000031debb
- (_Bool)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;	// IMP=0x000000000031deb3
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;	// IMP=0x000000000031db5d
- (void)paymentAuthorizationCouponCodeEntryViewControllerDidFinish:(id)arg1;	// IMP=0x000000000031da39
- (void)paymentAuthorizationCouponCodeEntryViewController:(id)arg1 didChangeCouponCode:(id)arg2;	// IMP=0x000000000031da19
- (id)dataItemForPaymentAuthorizationCouponCodeEntryViewController:(id)arg1;	// IMP=0x000000000031d9b9
- (void)authorizationFooterViewDidChangeConstraints:(id)arg1;	// IMP=0x000000000031d8c0
- (void)authorizationFooterViewWillChangeConstraints:(id)arg1;	// IMP=0x000000000031d871
- (void)authorizationFooterViewPasscodeButtonPressed:(id)arg1;	// IMP=0x000000000031d7c6
- (void)dismissPassphraseViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000031d76c
- (void)dismissPassphraseViewController;	// IMP=0x000000000031d758
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000031d746
- (void)dismissPasscodeViewController;	// IMP=0x000000000031d6ca
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000031d527
- (void)biometricAttemptFailed;	// IMP=0x000000000031d3fd
- (void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;	// IMP=0x000000000031d3d8
- (void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(CDStruct_2a40740a)arg2;	// IMP=0x000000000031d31c
- (long long)_progressStateForAuthenticationWithBiometricFailure:(_Bool)arg1;	// IMP=0x000000000031d25a
- (void)_updatePendingTransaction:(id)arg1 withAuthorizationStateParam:(id)arg2;	// IMP=0x000000000031d08d
- (void)_didSucceedWithAuthorizationStateParam:(id)arg1;	// IMP=0x000000000031cdbd
- (void)_didFailWithFatalError:(id)arg1;	// IMP=0x000000000031c238
- (void)_didFailWithError:(id)arg1;	// IMP=0x000000000031bb85
- (void)_didCancel:(_Bool)arg1;	// IMP=0x000000000031bb08
- (void)_executeCompletionHandlers;	// IMP=0x000000000031b9ca
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg1;	// IMP=0x000000000031b9ad
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;	// IMP=0x000000000031b990
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;	// IMP=0x000000000031b957
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;	// IMP=0x000000000031b93a
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1;	// IMP=0x000000000031b91d
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;	// IMP=0x000000000031b900
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;	// IMP=0x000000000031b8e3
- (void)authorizationDidAuthorizeCashDisbursementWithResult:(id)arg1;	// IMP=0x000000000031b8c6
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;	// IMP=0x000000000031b8a9
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;	// IMP=0x000000000031b849
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;	// IMP=0x000000000031b82c
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1;	// IMP=0x000000000031b80f
- (void)_updateBackgroundedState:(_Bool)arg1;	// IMP=0x000000000031b7a4
- (void)_hostApplicationDidEnterBackground;	// IMP=0x000000000031b785
- (void)_hostApplicationWillEnterForeground;	// IMP=0x000000000031b766
- (void)handleHostApplicationDidBecomeActive;	// IMP=0x000000000031b747
- (void)handleHostApplicationWillResignActive:(_Bool)arg1;	// IMP=0x000000000031b72a
- (void)handleDismissWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000031b6ec
- (void)handleHostApplicationDidCancel;	// IMP=0x000000000031b5f8
- (void)_showScrollIndicatorIfNeeded;	// IMP=0x000000000031b59b
- (void)setFooterState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000031b4e9
- (void)setFooterState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000031b4d4
- (void)_selectOptionsForDataItem:(id)arg1;	// IMP=0x000000000031b229
- (void)_startEvaluationWithHasInitialAuthenticatorState:(_Bool)arg1 initialAuthenticatorState:(unsigned long long)arg2;	// IMP=0x000000000031b1b6
- (void)_suspendAuthenticationAndForceReset:(_Bool)arg1;	// IMP=0x000000000031b15f
- (void)_suspendAuthentication;	// IMP=0x000000000031b148
- (void)_abandonPSD2StyleAMPBuy;	// IMP=0x000000000031b024
- (_Bool)_abandonActiveEnrollmentAttempts;	// IMP=0x000000000031af71
- (void)_resumeAuthenticationWithPreviousError:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000031af52
- (void)_invalidPaymentDataWithParam:(id)arg1;	// IMP=0x000000000031adec
- (void)_processClientCallback:(id)arg1;	// IMP=0x000000000031a9c7
- (void)_updateCancelButtonEnabledForState:(unsigned long long)arg1 param:(id)arg2;	// IMP=0x000000000031a874
- (_Bool)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;	// IMP=0x000000000031a73a
- (void)invalidate;	// IMP=0x000000000031a702
- (id)handlePaymentRequest:(id)arg1 relevantPassUniqueID:(id)arg2 fromAppWithLocalizedName:(id)arg3 applicationIdentifier:(id)arg4 bundleIdentifier:(id)arg5 teamIdentifier:(id)arg6;	// IMP=0x000000000031a505
- (id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;	// IMP=0x000000000031a4db
- (void)_updateLayoutForKeyboardAction:(CDUnknownBlockType)arg1;	// IMP=0x000000000031a389
- (void)keyboardWillHide:(id)arg1;	// IMP=0x000000000031a2b1
- (void)keyboardWillChange:(id)arg1;	// IMP=0x000000000031a11d
- (void)keyboardWillShow:(id)arg1;	// IMP=0x0000000000319f84
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000319ef5
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000319d34
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x0000000000319bff
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000319bb1
- (void)viewWillLayoutSubviews;	// IMP=0x000000000031987a
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000319777
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000319707
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000003195d8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000319550
- (void)_setVisibility:(unsigned char)arg1;	// IMP=0x00000000003194e1
- (void)_setNavigationItemLeftItemForAMP;	// IMP=0x0000000000319434
- (_Bool)_setNavigationItemLeftItemFromNavigationTitle;	// IMP=0x0000000000319222
- (void)viewDidLoad;	// IMP=0x0000000000317f67
- (void)_createSubviews;	// IMP=0x0000000000317b14
- (void)dealloc;	// IMP=0x00000000003179d2
- (id)initWithLayout:(id)arg1;	// IMP=0x0000000000317520

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
