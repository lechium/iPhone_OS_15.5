//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/AAUISpecifierProvider-Protocol.h>
#import <FamilyCircleUI/FAFamilySettingsViewControllerDelegate-Protocol.h>
#import <FamilyCircleUI/FASetupDelegate-Protocol.h>
#import <FamilyCircleUI/RemoteUIControllerDelegate-Protocol.h>

@class AAFamilyEligibilityResponse, AAGrandSlamSigner, AIDAAccountManager, FACircleContext, FAFamilyCircle, FAFamilyNotificationObserver, FAProfilePictureStore, FARequestConfigurator, FATableViewDecorator, NSArray, NSDictionary, NSMutableArray, NSOperationQueue, NSString, PSListController, PSSpecifier;
@protocol AAUISpecifierProviderDelegate;

@interface FASettingsSpecifierProvider : NSObject <FASetupDelegate, FAFamilySettingsViewControllerDelegate, RemoteUIControllerDelegate, AAUISpecifierProvider>
{
    FATableViewDecorator *_remoteUIDecorator;	// 8 = 0x8
    FAFamilyNotificationObserver *_familyNotificationObserver;	// 16 = 0x10
    PSListController *_presenter;	// 24 = 0x18
    PSSpecifier *_familyCellSpecifier;	// 32 = 0x20
    PSSpecifier *_invitationsCellSpecifier;	// 40 = 0x28
    _Bool _isLoadingFamilyDetails;	// 48 = 0x30
    _Bool _didFailToGetFamilyDetails;	// 49 = 0x31
    NSMutableArray *_pendingFamilyDetailsCompletionBlocks;	// 56 = 0x38
    FAFamilyCircle *_familyCircle;	// 64 = 0x40
    AAFamilyEligibilityResponse *_familyEligibilityResponse;	// 72 = 0x48
    NSMutableArray *_pendingInvites;	// 80 = 0x50
    NSString *_familyStatusSummary;	// 88 = 0x58
    NSString *_invitationSummary;	// 96 = 0x60
    long long _familyEligibilityStatus;	// 104 = 0x68
    _Bool _isHandlingURLForInvite;	// 112 = 0x70
    NSOperationQueue *_networkActivityQueue;	// 120 = 0x78
    AIDAAccountManager *_accountManager;	// 128 = 0x80
    AAGrandSlamSigner *_grandSlamSigner;	// 136 = 0x88
    FARequestConfigurator *_requestConfigurator;	// 144 = 0x90
    FACircleContext *_context;	// 152 = 0x98
    _Bool _delayedEnterInitiateFlow;	// 160 = 0xa0
    FAProfilePictureStore *_familyPictureStore;	// 168 = 0xa8
    NSDictionary *_cachedResourceDictionary;	// 176 = 0xb0
    id <AAUISpecifierProviderDelegate> _delegate;	// 184 = 0xb8
    NSArray *_specifiers;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000024c64
@property(nonatomic) __weak id <AAUISpecifierProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0000000000024b7a
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(_Bool)arg3;	// IMP=0x00000000000246de
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;	// IMP=0x0000000000024657
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;	// IMP=0x00000000000245dd
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x00000000000244b1
- (void)_handleStartFamilySetupActionURL:(id)arg1;	// IMP=0x00000000000243fb
- (void)_handleShowInviteActionURL:(id)arg1 isChildTransfer:(_Bool)arg2;	// IMP=0x0000000000023b50
- (void)_handleShowFamilyInviteActionURL:(id)arg1;	// IMP=0x0000000000023b3c
- (void)_handleShowChildTransferActionURL:(id)arg1;	// IMP=0x0000000000023b25
- (id)_acuPresenter;	// IMP=0x0000000000023b0f
- (void)_handleShowFamilySettingsURL:(id)arg1;	// IMP=0x000000000002384d
- (void)_handleShowInvitesActionURL:(id)arg1;	// IMP=0x00000000000233ec
- (_Bool)handleURL:(id)arg1;	// IMP=0x0000000000023231
- (void)_clearFamilyState;	// IMP=0x00000000000231c9
- (void)familySettingsViewControllerDidUpdateFamily:(id)arg1;	// IMP=0x0000000000023199
- (void)familySettingsViewControllerDidDeleteFamily:(id)arg1;	// IMP=0x00000000000230f9
- (void)_reloadFamilySpecifiersAnimated:(_Bool)arg1;	// IMP=0x000000000002306e
- (void)_reloadFamilySpecifiers;	// IMP=0x0000000000023057
- (void)reloadSpecifiers;	// IMP=0x0000000000023043
- (void)_handleFamilyEligibilityResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022e6a
- (void)_loadFamilyEligibilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022656
- (void)_viewFamilyWithResourceDictionary:(id)arg1;	// IMP=0x0000000000021fe0
- (void)_viewFamilySpecifierWasTapped;	// IMP=0x0000000000021fa5
- (id)_valueForFamilySpecifier:(id)arg1;	// IMP=0x0000000000021ed0
- (void)_presentPendingInvitesRemoteUI;	// IMP=0x0000000000021c2e
- (void)_pendingInvitationsSpecifierWasTapped:(id)arg1;	// IMP=0x0000000000021ae1
- (id)_valueForInvitiationsSpecifier:(id)arg1;	// IMP=0x0000000000021ad3
- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2;	// IMP=0x0000000000021970
- (void)_showUnderageAlertWithEligibilityResponse:(id)arg1;	// IMP=0x000000000002176d
- (id)_configureContextWithType:(id)arg1 resourceDictionary:(id)arg2;	// IMP=0x0000000000021667
- (void)_initiateFamilyWithResources:(id)arg1;	// IMP=0x0000000000021298
- (void)_initiateFamily;	// IMP=0x0000000000021284
- (void)_reloadFamily;	// IMP=0x0000000000021251
- (void)_setUpFamilySpecifierWasTapped:(id)arg1;	// IMP=0x00000000000210c0
- (void)_handleFamilyDetailsResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020664
- (void)_loadFamilyDetailsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020160
- (id)_familyBaseSpecifierWithState:(unsigned long long)arg1;	// IMP=0x000000000001ffb8
- (id)_familySpecifier;	// IMP=0x000000000001fbc2
- (id)_invitationsCellSpecifier;	// IMP=0x000000000001fa40
- (unsigned long long)_familyState;	// IMP=0x000000000001f8a9
@property(copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (_Bool)_isEnabled;	// IMP=0x000000000001f470
- (id)_requestConfigurator;	// IMP=0x000000000001f3e6
- (id)_grandSlamSigner;	// IMP=0x000000000001f312
- (id)_appleAccount;	// IMP=0x000000000001f2b1
- (id)_accountStore;	// IMP=0x000000000001f298
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2;	// IMP=0x000000000001f098
- (id)initWithAccountManager:(id)arg1;	// IMP=0x000000000001f084

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
