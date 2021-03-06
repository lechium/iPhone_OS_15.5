//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKInboxDataSourceDelegate-Protocol.h>
#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPaymentPassTableCellDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKSubcredentialProvisioningFlowControllerDelegate-Protocol.h>
#import <PassKitUI/PKSwitchSpinnerTableCellDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, PKAccountService, PKContactAvatarManager, PKContactFormatValidator, PKExpressPassController, PKExpressPassesViewController, PKInboxDataSource, PKPaymentPreference, PKPaymentPreferenceCard, PKPaymentPreferencesListViewController, PKPaymentService, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentAccountResolutionController, PKPeerPaymentAssociatedAccountsController, PKPeerPaymentWebService, PKUserNotificationAuthorizationExplanationViewController, PSSpecifier;
@protocol PKPassLibraryDataProvider, PKPassbookPeerPaymentSettingsDelegate, PKPassbookSettingsDataSource, PKPassbookSettingsDelegate, PKPaymentDataProvider, PKPaymentOptionsProtocol;

@interface PKPassbookSettingsController : NSObject <PKPaymentServiceDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPaymentDataProviderDelegate, PKSwitchSpinnerTableCellDelegate, PKSubcredentialProvisioningFlowControllerDelegate, PKInboxDataSourceDelegate, PKPaymentPassTableCellDelegate>
{
    id <PKPassbookSettingsDataSource> _dataSource;	// 8 = 0x8
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;	// 16 = 0x10
    id <PKPaymentDataProvider> _paymentDataProvider;	// 24 = 0x18
    id <PKPaymentOptionsProtocol> _optionsDelegate;	// 32 = 0x20
    long long _context;	// 40 = 0x28
    PKPaymentService *_paymentService;	// 48 = 0x30
    PKPaymentPreferencesListViewController *_defaultCardsController;	// 56 = 0x38
    PKPaymentPreference *_availableCards;	// 64 = 0x40
    PKPaymentPreferenceCard *_unavailableCards;	// 72 = 0x48
    PKPaymentWebService *_webService;	// 80 = 0x50
    PKContactAvatarManager *_avatarManager;	// 88 = 0x58
    PKPeerPaymentAssociatedAccountsController *_associatedAccountController;	// 96 = 0x60
    PKInboxDataSource *_inboxDataSource;	// 104 = 0x68
    NSString *_defaultCardIdentifier;	// 112 = 0x70
    NSString *_provisioningPassIdentifier;	// 120 = 0x78
    NSArray *_paymentPasses;	// 128 = 0x80
    NSArray *_otherPasses;	// 136 = 0x88
    NSArray *_paymentPassSpecifiers;	// 144 = 0x90
    NSArray *_otherPassSpecifiers;	// 152 = 0x98
    NSArray *_companionPasses;	// 160 = 0xa0
    NSArray *_hiddenCompanionPasses;	// 168 = 0xa8
    NSArray *_pendingCompanionPasses;	// 176 = 0xb0
    NSArray *_companionPassSpecifiers;	// 184 = 0xb8
    NSArray *_pendingCompanionPassSpecifiers;	// 192 = 0xc0
    NSArray *_lockscreenSwitchSpecifiers;	// 200 = 0xc8
    NSArray *_handoffSwitchSpecifiers;	// 208 = 0xd0
    NSArray *_expiredPassesSwitchSpecifiers;	// 216 = 0xd8
    PSSpecifier *_addCardButtonSpecifier;	// 224 = 0xe0
    PSSpecifier *_paymentCardsGroupSpecifier;	// 232 = 0xe8
    PSSpecifier *_otherCardsGroupSpecifier;	// 240 = 0xf0
    PSSpecifier *_companionCardsGroupSpecifier;	// 248 = 0xf8
    PSSpecifier *_pendingCompanionCardsGroupSpecifier;	// 256 = 0x100
    PSSpecifier *_defaultPaymentSpecifier;	// 264 = 0x108
    PSSpecifier *_defaultShippingAddressSpecifier;	// 272 = 0x110
    PSSpecifier *_defaultContactEmailSpecifier;	// 280 = 0x118
    PSSpecifier *_defaultContactPhoneSpecifier;	// 288 = 0x120
    id <PKPassbookPeerPaymentSettingsDelegate> _peerPaymentDelegate;	// 296 = 0x128
    PKPeerPaymentWebService *_peerPaymentWebService;	// 304 = 0x130
    PSSpecifier *_peerPaymentSwitchSpecifier;	// 312 = 0x138
    PSSpecifier *_peerPaymentTinkerSetupButton;	// 320 = 0x140
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;	// 328 = 0x148
    PKPeerPaymentAccount *_peerPaymentAccount;	// 336 = 0x150
    _Bool _registeringForPeerPayment;	// 344 = 0x158
    PKExpressPassController *_expressPassController;	// 352 = 0x160
    PKAccountService *_accountService;	// 360 = 0x168
    NSMutableDictionary *_pairedDeviceSupportsFeatureByAccountID;	// 368 = 0x170
    _Bool _hasExpressCapablePass;	// 376 = 0x178
    NSString *_expressTransitSubtitleText;	// 384 = 0x180
    NSString *_expressTransitSectionFooterText;	// 392 = 0x188
    PSSpecifier *_defaultExpressTransitSpecifier;	// 400 = 0x190
    PKExpressPassesViewController *_expressPassesViewController;	// 408 = 0x198
    NSMutableDictionary *_latestTransitBalanceModel;	// 416 = 0x1a0
    id <PKPaymentDataProvider> _companionPaymentDataProvider;	// 424 = 0x1a8
    int _notifyToken;	// 432 = 0x1b0
    PKContactFormatValidator *_contactFormatValidator;	// 440 = 0x1b8
    _Bool _ownerCredentialSharingAllowed;	// 448 = 0x1c0
    _Bool _canAcceptCredentialInvitations;	// 449 = 0x1c1
    _Bool _viewDidAppearLaunchPromptsShownOnce;	// 450 = 0x1c2
    unsigned long long _shouldShowLaunchPrompts;	// 456 = 0x1c8
    PKUserNotificationAuthorizationExplanationViewController *_userNotificationAuthorizationViewController;	// 464 = 0x1d0
    id <PKPassbookSettingsDelegate> _delegate;	// 472 = 0x1d8
}

- (void).cxx_destruct;	// IMP=0x0000000000134098
@property(nonatomic) __weak id <PKPassbookSettingsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)willHandleURL;	// IMP=0x0000000000134059
- (void)_resetLaunchPromptsForNextSession;	// IMP=0x0000000000134028
- (void)_disableLaunchPromptsForSession;	// IMP=0x0000000000133ff7
- (void)_enableLaunchPromptsForSession;	// IMP=0x0000000000133fbc
- (void)_presentLaunchPromptsIfNeeded;	// IMP=0x0000000000133a6b
- (void)userCanceledPairingWithSubcredentialProvisioningFlowController:(id)arg1;	// IMP=0x00000000001339dc
- (void)subcredentialProvisioningFlowController:(id)arg1 didFinishWithPass:(id)arg2 error:(id)arg3;	// IMP=0x0000000000133934
- (void)_updateCardSpecifier:(id)arg1 withAccountStateForPaymentPass:(id)arg2;	// IMP=0x0000000000133552
- (id)_subtitleTextForActiveAccount:(id)arg1;	// IMP=0x0000000000132fb7
- (void)_updateBalancesWithServerBalances:(id)arg1 transitPassProperties:(id)arg2 forPassWithUniqueIdentifier:(id)arg3;	// IMP=0x0000000000132df2
- (void)_fetchBalancesAndTransitPassPropertiesForPass:(id)arg1 withDataProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001329a8
- (long long)_paymentSetupContextForSettingsContext:(long long)arg1;	// IMP=0x0000000000132929
- (void)_transitPropertiesForPaymentPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000132608
- (void)_performPhoneToWatchProvisioningForPaymentPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000131058
- (void)_setCardAddProvisioningButtonEnabled:(_Bool)arg1 forPaymentPass:(id)arg2;	// IMP=0x0000000000130f52
- (void)_requestDelegatePresentViewController:(id)arg1;	// IMP=0x0000000000130ee4
- (void)_handleProvisioningError:(id)arg1 viewController:(id)arg2;	// IMP=0x0000000000130e6f
- (void)_presentCredentialSetupViewControllerForPaymentPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001309ec
- (void)_credentialPairingContextForPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012fc95
- (id)_matchingInvitationForPass:(id)arg1 withInvitations:(id)arg2;	// IMP=0x000000000012f833
- (id)_invitationFromCredential:(id)arg1;	// IMP=0x000000000012f68e
- (void)_presentPaymentSetupViewController:(id)arg1 paymentPass:(id)arg2;	// IMP=0x000000000012f096
- (void)requestPresentationOfViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000012f084
- (void)addButtonPressedForPaymentPass:(id)arg1;	// IMP=0x000000000012f070
- (void)openExpressTransitSettings:(id)arg1 withPassUniqueIdentifier:(id)arg2;	// IMP=0x000000000012ef58
- (void)_openExpressTransitSettings:(id)arg1;	// IMP=0x000000000012ef44
- (id)_defaultExpressTransitPassDescription;	// IMP=0x000000000012ef33
- (id)_defaultExpressTransitSpecifier;	// IMP=0x000000000012edce
- (id)_transitDefaultsGroupSpecifiers;	// IMP=0x000000000012ecb8
- (void)switchSpinnerCell:(id)arg1 hasToggledSwitch:(_Bool)arg2;	// IMP=0x000000000012e93b
- (id)_peerPaymentSwitchSpecifier;	// IMP=0x000000000012e79a
- (void)_checkPairedDeviceSupportOfHiddenPassesAndRefreshUIIfNecessary;	// IMP=0x000000000012dc0d
- (void)_accountServiceAccountDidChangeNotification:(id)arg1;	// IMP=0x000000000012db98
- (void)setupPeerPaymentTinkerButtonTapped;	// IMP=0x000000000012d876
- (id)_peerPaymentTinkerGroupSpecifiers;	// IMP=0x000000000012d699
- (id)_peerPaymentGroupSpecifiers;	// IMP=0x000000000012d583
- (void)_unregisterForPeerPaymentWithSpecifier:(id)arg1;	// IMP=0x000000000012cbc2
- (void)_presentPeerPaymentSetupFlowWithAmount:(id)arg1 flowState:(unsigned long long)arg2 senderAddress:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000012ca9a
- (void)_presentPeerPaymentSetupFlowForSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012ca37
- (void)_presentPeerPaymentSetupFlowForSpecifier:(id)arg1;	// IMP=0x000000000012ca23
- (void)_presentPeerPaymentReOpenCardFlowForSpecifier:(id)arg1;	// IMP=0x000000000012c9dd
- (void)_presentFeatureNotEnabledForDemoForSpecifier:(id)arg1;	// IMP=0x000000000012c967
- (void)_registerForPeerPaymentWithSpecifier:(id)arg1;	// IMP=0x000000000012b947
- (_Bool)_isPeerPaymentRegistered;	// IMP=0x000000000012b8ca
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;	// IMP=0x000000000012b8c4
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000012b85d
- (void)_peerPaymentAccountDidChangeNotification:(id)arg1;	// IMP=0x000000000012b77a
- (void)_peerPaymentWebServiceDidChangeNotification:(id)arg1;	// IMP=0x000000000012b705
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;	// IMP=0x000000000012b55a
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;	// IMP=0x000000000012b46a
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000012b34a
- (id)_getDefaultContactPhone;	// IMP=0x000000000012b24a
- (id)_getDefaultContactEmail;	// IMP=0x000000000012b168
- (id)_getDefaultShippingAddress;	// IMP=0x000000000012b0b9
- (void)_showDefaultContactPhoneOptions:(id)arg1;	// IMP=0x000000000012ab82
- (void)_showDefaultContactEmailOptions:(id)arg1;	// IMP=0x000000000012a64b
- (void)_showDefaultShippingAddressOptions:(id)arg1;	// IMP=0x000000000012a178
- (id)_defaultContactPhoneSpecifier;	// IMP=0x000000000012a04c
- (id)_defaultContactEmailSpecifier;	// IMP=0x0000000000129f20
- (id)_defaultShippingAddressSpecifier;	// IMP=0x0000000000129df4
- (id)_getDefaultPaymentCard;	// IMP=0x0000000000129d12
- (id)_defaultPaymentSpecifier;	// IMP=0x0000000000129aa3
- (void)_openPrivacyLink;	// IMP=0x000000000012998f
- (void)_handleDefaultPaymentPassChangedTo:(id)arg1 withSender:(id)arg2 optionsController:(id)arg3 canPrompt:(_Bool)arg4;	// IMP=0x00000000001295f0
- (void)_showDefaultPaymentOptions:(id)arg1;	// IMP=0x00000000001291bc
- (void)_updateDefaultCardsPreferences;	// IMP=0x0000000000128b91
- (id)_currentDefaultPaymentPass;	// IMP=0x0000000000128831
- (id)_defaultsGroupSpecifiers;	// IMP=0x00000000001284d0
- (void)_showCardDetails:(id)arg1;	// IMP=0x0000000000128451
- (id)_doubleClickSwitchSettingForSpecifier:(id)arg1;	// IMP=0x0000000000128426
- (void)_setDoubleClickSwitchSetting:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x0000000000128409
- (id)_lockscreenSwitchGroupSpecifiers;	// IMP=0x00000000001281e2
- (id)_handoffSwitchSettingForSpecifier:(id)arg1;	// IMP=0x0000000000128157
- (void)_setHandoffSwitchSetting:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x00000000001280ba
- (id)_handoffSwitchGroupSpecifiers;	// IMP=0x0000000000127e6f
- (id)_expiredPassesSwitchSettingForSpecifier:(id)arg1;	// IMP=0x0000000000127e42
- (void)_setExpiredPassesSwitchSetting:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x0000000000127e23
- (id)_expiredPassesSwitchGroupSpecifiers;	// IMP=0x0000000000127cf5
- (id)_specifierForPassUniqueID:(id)arg1;	// IMP=0x000000000012767f
- (id)_companionPassSpecifiers;	// IMP=0x0000000000126c70
- (id)_pendingCompanionPassSpecifiers;	// IMP=0x000000000012690c
- (id)_otherPassSpecifiers;	// IMP=0x00000000001268a9
- (id)_paymentPassSpecifiers;	// IMP=0x00000000001266b6
- (id)_passSpecifiersForPasses:(id)arg1 peerPaymentPassUniqueID:(id)arg2 showPeerPaymentSetup:(_Bool)arg3;	// IMP=0x0000000000125676
- (id)_passSpecifiersForPasses:(id)arg1;	// IMP=0x000000000012565f
- (void)openPaymentSetupWithMode:(long long)arg1 referrerIdentifier:(id)arg2 allowedFeatureIdentifiers:(id)arg3;	// IMP=0x0000000000124f8b
- (_Bool)canShareCompanionPass:(id)arg1;	// IMP=0x0000000000124ec7
- (id)watchPassReaderIdentifiers;	// IMP=0x0000000000124bbd
- (long long)_paymentPreferencesStyle;	// IMP=0x0000000000124baa
- (void)openPeerPaymentSetupWithCurrencyAmount:(id)arg1 state:(unsigned long long)arg2 senderAddress:(id)arg3;	// IMP=0x0000000000124b2d
- (void)addCardTappedForPaymentPassWithUniqueID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000124726
- (void)addCardTappedForPaymentPassWithUniqueID:(id)arg1;	// IMP=0x0000000000124712
- (void)addCardTappedForPaymentPassWithSpecifier:(id)arg1;	// IMP=0x00000000001246b4
- (void)addCardTapped;	// IMP=0x0000000000124584
- (void)removeFooterForSpecifier:(id)arg1;	// IMP=0x000000000012457e
- (id)rendererStateForPaymentPass:(id)arg1;	// IMP=0x00000000001244ad
- (id)passWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000012418c
- (void)refreshPeerPaymentStatus;	// IMP=0x00000000001240b6
- (void)_updateTransitExpressPassIdentifiersWithReload:(_Bool)arg1;	// IMP=0x0000000000123781
- (id)_fallbackExpressTransitFooterText;	// IMP=0x000000000012369f
- (void)refreshExpressTransitCard;	// IMP=0x0000000000123688
- (void)refreshDefaultCard;	// IMP=0x00000000001235da
- (void)_refreshPasses;	// IMP=0x0000000000123491
- (void)refreshPasses;	// IMP=0x000000000012341f
- (void)_reloadPassData;	// IMP=0x000000000012260b
- (id)specifiers;	// IMP=0x0000000000122506
- (id)_restrictedModeSpecifier;	// IMP=0x0000000000122343
- (void)inboxDataSourceDidUpdateInboxMessages:(id)arg1;	// IMP=0x00000000001222ce
- (void)_reloadPendingInvitationSpecifiers;	// IMP=0x0000000000122295
- (void)_presentInboxMessage:(id)arg1;	// IMP=0x0000000000122213
- (id)_pendingInvitationsGroupSpecifiers;	// IMP=0x0000000000121f9a
- (id)_settingsSpecifiers;	// IMP=0x0000000000121984
- (_Bool)_supportsApplePay;	// IMP=0x0000000000121926
- (id)_bridgeSpecifiers;	// IMP=0x00000000001212ce
- (void)_refreshCompanionGroupSpecififiers;	// IMP=0x000000000012101e
- (void)_updatePendingCompanionGroupSpecifier;	// IMP=0x0000000000120f62
- (void)_updateCompanionGroupSpecifier;	// IMP=0x0000000000120e7c
- (void)_updateCardsGroupSpecifier;	// IMP=0x0000000000120c7d
- (void)_updateAddButtonSpecifier;	// IMP=0x0000000000120aae
- (void)_updateCompanionPassesAddButton;	// IMP=0x0000000000120762
- (void)_expressPassDidChange;	// IMP=0x0000000000120750
- (void)_regionConfigurationDidChangeNotification;	// IMP=0x00000000001206be
- (void)viewDidAppear;	// IMP=0x000000000012067b
- (void)applicationDidBecomeActive;	// IMP=0x0000000000120646
- (void)dealloc;	// IMP=0x0000000000120534
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 context:(long long)arg3;	// IMP=0x000000000011fc50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

