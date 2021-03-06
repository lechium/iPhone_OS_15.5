//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKAccountServiceAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKDiscoveryArticleViewControllerPresenter-Protocol.h>
#import <PassKitUI/PKDiscoveryDataSourceDelegate-Protocol.h>
#import <PassKitUI/PKExpiredPassesViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKGroupsControllerDelegate-Protocol.h>
#import <PassKitUI/PKInboxDataSourceDelegate-Protocol.h>
#import <PassKitUI/PKPGSVFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKPGSVSectionHeaderViewDelegate-Protocol.h>
#import <PassKitUI/PKPGSVSectionSubheaderDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDatasource-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDelegate-Protocol.h>
#import <PassKitUI/PKPassPersonalizationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKSubcredentialProvisioningFlowControllerDelegate-Protocol.h>
#import <PassKitUI/UIScrollViewDelegate-Protocol.h>
#import <PassKitUI/_PKUIKVisibilityBackdropViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSTimer, PKAccountServiceAccountResolutionController, PKContactAvatarManager, PKDiscoveryDataSource, PKDiscoveryGalleryView, PKGroupsController, PKInboxDataSource, PKPassGroupStackView, PKPaymentService, PKPeerPaymentAccountResolutionController, PKPeerPaymentAssociatedAccountsController, PKPeerPaymentService, _PKUIKVisibilityBackdropView;
@protocol PKPassLibraryDataProvider;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, PKExpiredPassesViewControllerDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPaymentServiceDelegate, PKPaymentSetupDelegate, PKPerformActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryDataSourceDelegate, PKSubcredentialProvisioningFlowControllerDelegate, _PKUIKVisibilityBackdropViewDelegate, PKPGSVFooterViewDelegate, PKPGSVSectionSubheaderDelegate, PKPGSVSectionHeaderViewDelegate, PKInboxDataSourceDelegate, PKPassPersonalizationViewControllerDelegate, PKDiscoveryArticleViewControllerPresenter>
{
    long long _invalidationStatus;	// 8 = 0x8
    PKPassGroupStackView *_groupStackView;	// 16 = 0x10
    _PKUIKVisibilityBackdropView *_headerBackground;	// 24 = 0x18
    _PKUIKVisibilityBackdropView *_footerBackground;	// 32 = 0x20
    double _headerBackgroundVisibility;	// 40 = 0x28
    double _footerBackgroundVisibility;	// 48 = 0x30
    PKPaymentService *_paymentService;	// 56 = 0x38
    unsigned long long _modalCardIndex;	// 64 = 0x40
    long long _presentationState;	// 72 = 0x48
    NSTimer *_allowDimmingTimer;	// 80 = 0x50
    NSTimer *_passViewedNotificationTimer;	// 88 = 0x58
    NSMutableArray *_blocksQueuedForUpdateCompletion;	// 96 = 0x60
    NSArray *_passUniqueIDsToExcludeFromFiltering;	// 104 = 0x68
    _Bool _persistentCardEmulationQueued;	// 112 = 0x70
    _Bool _viewAppeared;	// 113 = 0x71
    _Bool _viewAppearedBefore;	// 114 = 0x72
    _Bool _reloadingPasses;	// 115 = 0x73
    _Bool _backgroundMode;	// 116 = 0x74
    _Bool _inFailForward;	// 117 = 0x75
    _Bool _canAddCards;	// 118 = 0x76
    unsigned long long _instanceFooterSuppressionCounter;	// 120 = 0x78
    int _expressTransactionNotificationObserver;	// 128 = 0x80
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;	// 136 = 0x88
    PKPeerPaymentService *_peerPaymentService;	// 144 = 0x90
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;	// 152 = 0x98
    PKPeerPaymentAssociatedAccountsController *_associatedAccountsController;	// 160 = 0xa0
    PKInboxDataSource *_inboxDataSource;	// 168 = 0xa8
    PKAccountServiceAccountResolutionController *_accountServiceAccountResolutionController;	// 176 = 0xb0
    PKDiscoveryDataSource *_discoveryDataSource;	// 184 = 0xb8
    PKContactAvatarManager *_avatarManager;	// 192 = 0xc0
    _Bool _inField;	// 200 = 0xc8
    _Bool _passesAreOutdated;	// 201 = 0xc9
    _Bool _handleFieldDetection;	// 202 = 0xca
    _Bool _welcomeStateEnabled;	// 203 = 0xcb
    _Bool _externalModalPresentationAllowed;	// 204 = 0xcc
    long long _style;	// 208 = 0xd0
    PKGroupsController *_groupsController;	// 216 = 0xd8
    unsigned long long _suppressedContent;	// 224 = 0xe0
    PKDiscoveryGalleryView *_discoveryGalleryView;	// 232 = 0xe8
}

+ (void)endSuppressingFooter;	// IMP=0x00000000001a043d
+ (void)beginSuppressingFooter;	// IMP=0x00000000001a03ac
+ (void)endTrackingAction;	// IMP=0x00000000001a0331
+ (void)beginTrackingAction;	// IMP=0x00000000001a0323
+ (_Bool)isPerformingAction;	// IMP=0x00000000001a0310
- (void).cxx_destruct;	// IMP=0x00000000001b4095
@property(readonly, nonatomic) __weak PKDiscoveryGalleryView *discoveryGalleryView; // @synthesize discoveryGalleryView=_discoveryGalleryView;
@property(nonatomic, getter=isExternalModalPresentationAllowed) _Bool externalModalPresentationAllowed; // @synthesize externalModalPresentationAllowed=_externalModalPresentationAllowed;
@property(nonatomic, getter=isWelcomeStateEnabled) _Bool welcomeStateEnabled; // @synthesize welcomeStateEnabled=_welcomeStateEnabled;
@property _Bool handleFieldDetection; // @synthesize handleFieldDetection=_handleFieldDetection;
@property _Bool passesAreOutdated; // @synthesize passesAreOutdated=_passesAreOutdated;
@property(nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(readonly, nonatomic) PKGroupsController *groupsController; // @synthesize groupsController=_groupsController;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;	// IMP=0x00000000001b3f9c
- (unsigned long long)inboxBadgeCountForSectionHeaderView:(id)arg1;	// IMP=0x00000000001b3f7f
- (_Bool)inboxVisibleForSectionheaderView:(id)arg1;	// IMP=0x00000000001b3f62
- (void)presentInvitationsForHeaderView:(id)arg1;	// IMP=0x00000000001b3ec4
- (void)presentPassDetailsForHeaderView:(id)arg1;	// IMP=0x00000000001b3e01
- (id)passForSectionHeaderView:(id)arg1;	// IMP=0x00000000001b3d59
- (void)transitionToViewController:(id)arg1;	// IMP=0x00000000001b3d3f
- (void)shouldUpdateSectionSubheaderView:(id)arg1;	// IMP=0x00000000001b3d22
- (void)inboxDataSourceDidUpdateInboxMessages:(id)arg1;	// IMP=0x00000000001b3ca2
- (void)discoveryDataSource:(id)arg1 didUpdateArticleLayouts:(id)arg2;	// IMP=0x00000000001b3c06
- (void)paymentSetupDidFinish:(id)arg1;	// IMP=0x00000000001b3a74
- (void)userCanceledPairingWithSubcredentialProvisioningFlowController:(id)arg1;	// IMP=0x00000000001b39c4
- (void)subcredentialProvisioningFlowController:(id)arg1 didFinishWithPass:(id)arg2 error:(id)arg3;	// IMP=0x00000000001b38b3
- (void)invitationViewController:(id)arg1 didFinishWithPass:(id)arg2;	// IMP=0x00000000001b3836
- (_Bool)_canPerformExternalModalPresentation;	// IMP=0x00000000001b3803
- (void)updateRegionSupportIfNecessary;	// IMP=0x00000000001b36ec
- (void)_handleFooterSupressionChange:(id)arg1;	// IMP=0x00000000001b36d5
- (void)_regionConfigurationDidChangeNotification;	// IMP=0x00000000001b35ef
- (void)_localeDidChangeNotification:(id)arg1;	// IMP=0x00000000001b35d2
- (void)_handleChildViewControllerRequestingServiceMode:(id)arg1;	// IMP=0x00000000001b351c
- (void)_handleExpressNotification;	// IMP=0x00000000001b30b6
- (void)_registerForExpressTransactionNotifications:(_Bool)arg1;	// IMP=0x00000000001b2e1b
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;	// IMP=0x00000000001b2da6
- (void)_updatePeerPaymentAccount;	// IMP=0x00000000001b2d89
- (void)_warnFailForward;	// IMP=0x00000000001b2b7d
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1;	// IMP=0x00000000001b2aaa
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1;	// IMP=0x00000000001b28d8
- (id)_passFromGroupsControllerWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000001b280f
- (void)_updateFooterSuppressionWithContext:(id)arg1;	// IMP=0x00000000001b2785
- (void)_updateFooterSuppressionAnimated:(_Bool)arg1;	// IMP=0x00000000001b26a4
- (void)_endSuppressingInstanceFooterWithContext:(id)arg1;	// IMP=0x00000000001b25f8
- (void)_beginSuppressingInstanceFooter;	// IMP=0x00000000001b25c7
- (id)_appleCardUpsellAlertWithAccount:(id)arg1;	// IMP=0x00000000001b2385
- (void)_resetToRootAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b2044
- (void)dismissPresentedVCsWithRequirements:(unsigned long long)arg1 animated:(_Bool)arg2 performAction:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b1d26
- (void)_applyPresentationState;	// IMP=0x00000000001b1c66
- (void)_presentWithUpdatedPasses:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b1c54
- (void)_handleProvisioningError:(id)arg1;	// IMP=0x00000000001b1bf9
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;	// IMP=0x00000000001b1b6f
- (void)presentPaymentSetupController;	// IMP=0x00000000001b185b
- (void)_presentAddPassesControllerWithPasses:(id)arg1;	// IMP=0x00000000001b171f
- (void)dismissVerificationPageForPassWithDeviceAccountID:(id)arg1;	// IMP=0x00000000001b15b4
- (id)_passWithDeviceAssessmentEducationToPresent;	// IMP=0x00000000001b149f
- (id)_passPendingActivationToPresent;	// IMP=0x00000000001b13da
- (id)_passToPresent;	// IMP=0x00000000001b1373
- (id)_peerPaymentAccountResolutionController;	// IMP=0x00000000001b129c
- (void)dismissDiscoveryArticleViewController:(id)arg1 afterActionCompleted:(_Bool)arg2 withRelevantPassUniqueIdenitifer:(id)arg3;	// IMP=0x00000000001b11c0
- (void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1;	// IMP=0x00000000001b0f31
- (void)addSimulatorPassWithURL:(id)arg1;	// IMP=0x00000000001b0db0
- (void)addVASPassWithIdentifier:(id)arg1;	// IMP=0x00000000001b0b1f
- (void)startPaymentPreflight:(id)arg1 withPaymentSetupMode:(long long)arg2 referrerIdentifier:(id)arg3 paymentNetworks:(id)arg4 transitNetworkIdentifiers:(id)arg5 allowedFeatureIdentifiers:(id)arg6 productIdentifiers:(id)arg7;	// IMP=0x00000000001b0184
- (void)_invalidateForType:(long long)arg1;	// IMP=0x00000000001affbd
- (void)partiallyInvalidate;	// IMP=0x00000000001affa6
- (void)invalidate;	// IMP=0x00000000001aff8f
@property(readonly, retain, nonatomic) PKPassGroupStackView *groupStackView;
- (void)performActionViewControllerDidPerformAction:(id)arg1;	// IMP=0x00000000001afdaf
- (void)performActionViewControllerDidCancel:(id)arg1;	// IMP=0x00000000001afd36
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001afcbb
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;	// IMP=0x00000000001afc4f
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001afbd4
- (void)presentPeerPaymentPassAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001af950
- (void)presentShareableCredentialWithEncryptedProvisioningTargetsHexEncodedString:(id)arg1 passThumbnailImageData:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001af185
- (void)_presentSubcredentialPairingFlowWithConfig:(id)arg1 flowType:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001aeef3
- (_Bool)presentSubcredentialPairingFlowIfPossibleWithConfig:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001aeb5c
- (void)presentSubcredentialInvitationWithIdentifier:(id)arg1 remoteDeviceInvitationIdentifier:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001ae3ca
- (void)presentDiscoveryArticleForItemWithIdentifier:(id)arg1 referrerIdentifier:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001adca3
- (id)_cardTemplateInformationForArticleLayouts:(id)arg1;	// IMP=0x00000000001adb19
- (void)presentDailyCashForPassUniqueIdentifier:(id)arg1 dateComponents:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001ad8c9
- (void)showStatementForIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001ad202
- (void)presentBalanceDetailsForPassUniqueIdentifier:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ad005
- (void)presentSpendingSummaryForPassUniqueIdentifier:(id)arg1 type:(unsigned long long)arg2 categorization:(unsigned long long)arg3 unit:(unsigned long long)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000001acdbc
- (void)presentAccountServicePaymentWithReferenceIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;	// IMP=0x00000000001acd9f
- (void)presentPassDetailsAssociatedWithVirtualCardID:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001aca44
- (void)presentPassWithAssociatedAccountIdentifier:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ac756
- (void)presentCreditPassAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ac49c
- (void)presentActionViewControllerWithUniqueID:(id)arg1 actionType:(unsigned long long)arg2;	// IMP=0x00000000001abf4a
- (void)presentAccountServiceSchedulePayment:(id)arg1;	// IMP=0x00000000001ab611
- (void)presentPeerPaymentSetupWithCurrencyAmount:(id)arg1 flowState:(unsigned long long)arg2 senderAddress:(id)arg3;	// IMP=0x00000000001ab321
- (void)presentPeerPaymentTopUp;	// IMP=0x00000000001ab148
- (void)presentPeerPaymentVerifyIdentity;	// IMP=0x00000000001aaf7e
- (void)presentPeerPaymentTermsAcceptance;	// IMP=0x00000000001aac19
- (void)_presentTransactionDetailsForTransaction:(id)arg1 forPaymentPass:(id)arg2;	// IMP=0x00000000001aa72a
- (void)_presentTransactionDetailsForTransaction:(id)arg1 transactionSourceType:(unsigned long long)arg2;	// IMP=0x00000000001a99d5
- (void)presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2;	// IMP=0x00000000001a9262
- (void)presentTransactionDetailsForTransactionWithIdentifier:(id)arg1;	// IMP=0x00000000001a8f54
- (void)presentAppStorePageForItemWithIdentifier:(id)arg1;	// IMP=0x00000000001a8eb5
- (void)presentInvitationWithIdentifier:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a8c3f
- (void)presentCreateAccountUserInvitationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a8bb6
- (void)presentInvitationsInboxAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a887e
- (void)presentInstallmentPlanWithIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a8473
- (void)presentInstallmentPlansForFeature:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a70fe
- (void)presentFeatureSetupOrFeaturePass:(unsigned long long)arg1 referrerIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a6cb1
- (void)presentSearchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a6c30
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a656b
- (void)_setupItemForExpressUpgradeWithAsset:(id)arg1 hideDisableAction:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a62da
- (void)presentExpressUpgradeDetailForPassUniqueID:(id)arg1 assetIdentifier:(id)arg2 hideDisableAction:(unsigned long long)arg3 animated:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001a5b75
- (void)presentISO18013DetailsForPassUniqueIdentifier:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a5b5a
- (void)presentPassDetailsWithUniqueID:(id)arg1 animated:(_Bool)arg2 action:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a577e
- (void)presentPassDetailsWithUniqueID:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a5766
- (void)presentPassWithUniqueID:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a574c
- (void)setTableModalPresentationEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001a572f
- (void)presentGroupTableAnimated:(_Bool)arg1;	// IMP=0x00000000001a565b
- (void)presentGroupTable;	// IMP=0x00000000001a5647
- (void)presentPileOffscreen;	// IMP=0x00000000001a5601
- (void)presentOffscreenAnimated:(_Bool)arg1 split:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a550e
- (void)presentOffscreenAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a54f7
- (void)presentOnscreen:(_Bool)arg1 context:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a53b6
- (void)presentPaymentSetupInMode:(long long)arg1 referrerIdentifier:(id)arg2 paymentNetwork:(id)arg3 transitNetworkIdentifier:(id)arg4 allowedFeatureIdentifiers:(id)arg5 productIdentifiers:(id)arg6;	// IMP=0x00000000001a4fe3
- (void)presentInitialState:(_Bool *)arg1;	// IMP=0x00000000001a4ed1
- (void)queuePersistentCardEmulation;	// IMP=0x00000000001a4ec0
- (void)updatePassesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a4e14
- (void)reloadPasses;	// IMP=0x00000000001a4b05
- (void)reloadPassesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a4ae8
- (id)presentationContextForFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 passUniqueIdentifierToPresent:(id *)arg3;	// IMP=0x00000000001a44bd
- (void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a42c8
- (void)presentPassWithFieldProperties:(id)arg1 fieldMetadata:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a40f9
- (void)presentPassWithUpdateUserNotificationIdentifier:(id)arg1;	// IMP=0x00000000001a3ef1
- (void)presentDefaultPaymentPassInPaymentPresentationFromButton:(_Bool)arg1 withAnimated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a3e31
- (void)forcePaymentPresentationFromButton:(_Bool)arg1;	// IMP=0x00000000001a3d02
- (void)_presentGroupWithIndex:(unsigned long long)arg1 context:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a377a
- (id)presentedPass;	// IMP=0x00000000001a372e
@property(readonly, nonatomic) _Bool presentingPass;
- (void)paymentDeviceDidExitField;	// IMP=0x00000000001a35a0
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;	// IMP=0x00000000001a302d
- (id)groupsControllerShouldExcludePassesWithUniqueIDsFromFiltering:(id)arg1;	// IMP=0x00000000001a3018
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x00000000001a2eed
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001a2e3b
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001a2d73
- (void)scrollViewDidScrollToTop:(id)arg1;	// IMP=0x00000000001a2d51
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000001a2d09
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000001a2ce7
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000001a2cbf
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001a2ca0
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;	// IMP=0x00000000001a2bfa
- (void)groupStackViewDidChangeCoachingState:(id)arg1;	// IMP=0x00000000001a2b57
- (void)groupStackViewWantsPaymentPresentation:(id)arg1 fromButton:(_Bool)arg2;	// IMP=0x00000000001a2b43
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001a29a2
- (void)groupStackView:(id)arg1 wantsBottomContentSeparatorWithVisibility:(double)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001a2967
- (void)groupStackView:(id)arg1 wantsTopContentSeparatorWithVisibility:(double)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001a292c
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;	// IMP=0x00000000001a279e
- (void)_passViewedNotificationTimerFired;	// IMP=0x00000000001a26d0
- (void)_clearPassViewedNotificationTimer;	// IMP=0x00000000001a2698
- (void)_startPassViewedNotificationTimer;	// IMP=0x00000000001a2610
- (void)_handleStatusBarChange:(id)arg1;	// IMP=0x00000000001a255c
- (void)updateLockscreenIdleTimer;	// IMP=0x00000000001a240b
- (void)allowIdleTimer;	// IMP=0x00000000001a2390
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;	// IMP=0x00000000001a236d
- (void)groupStackViewDidEndReordering:(id)arg1;	// IMP=0x00000000001a2350
- (void)groupStackViewDidBeginReordering:(id)arg1;	// IMP=0x00000000001a232e
- (_Bool)groupStackViewShouldAllowReordering:(id)arg1;	// IMP=0x00000000001a2311
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;	// IMP=0x00000000001a22ba
- (void)reloadGroupsForGroupStackView:(id)arg1;	// IMP=0x00000000001a22a8
- (void)viewTapped:(id)arg1;	// IMP=0x00000000001a2206
- (_Bool)isInField;	// IMP=0x00000000001a21f6
- (_Bool)supportsExternalPresentation;	// IMP=0x00000000001a21e6
- (id)footerForGroupStackView:(id)arg1;	// IMP=0x00000000001a20c1
- (id)_makeDiscoveryGalleryView;	// IMP=0x00000000001a1f86
- (id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2;	// IMP=0x00000000001a1eb0
- (id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2;	// IMP=0x00000000001a1e60
- (_Bool)groupStackView:(id)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2;	// IMP=0x00000000001a1daf
- (_Bool)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2;	// IMP=0x00000000001a1d81
- (_Bool)groupStackViewShouldShowHeaderViews:(id)arg1;	// IMP=0x00000000001a1d71
- (id)featuredGroup;	// IMP=0x00000000001a1bde
- (id)itemIdentifierForFrontmostDiscoveryCard;	// IMP=0x00000000001a1b64
- (_Bool)hasDiscoveryContent;	// IMP=0x00000000001a1b11
- (unsigned long long)indexOfSeparationGroup;	// IMP=0x00000000001a1af4
- (unsigned long long)indexOfGroup:(id)arg1;	// IMP=0x00000000001a1ad7
- (unsigned long long)numberOfGroups;	// IMP=0x00000000001a1aba
- (id)groupAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001a1a68
- (void)finishedEditingExpiredPass;	// IMP=0x00000000001a1a25
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x00000000001a187c
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x00000000001a17c8
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001a14b3
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00000000001a1449
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000001a143e
- (_Bool)shouldAutorotate;	// IMP=0x00000000001a1436
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000001a12c1
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001a1129
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001a1028
- (long long)preferredStatusBarStyle;	// IMP=0x00000000001a1020
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000000001a1018
- (void)loadView;	// IMP=0x00000000001a0b29
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000001a0b21
- (void)dealloc;	// IMP=0x00000000001a09e1
- (id)initWithGroupsController:(id)arg1 style:(long long)arg2;	// IMP=0x00000000001a05fc
- (id)initWithGroupsController:(id)arg1;	// IMP=0x00000000001a05e8
- (id)init;	// IMP=0x00000000001a0589
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a0541
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001a052f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

