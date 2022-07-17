//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPeerPaymentAssociatedAccountSetupDelegate-Protocol.h>

@class NSString, PKContactAvatarManager, PKFamilyMemberCollection, PKPaymentService, PKPeerPaymentAccount, PKPeerPaymentAssociatedAccountControllerDoneTapHelper, PKPeerPaymentAssociatedAccountPresentationContext, PKPeerPaymentService, UINavigationController;
@protocol PKPassLibraryDataProvider;

@interface PKPeerPaymentAssociatedAccountsController : NSObject <PKPeerPaymentAssociatedAccountSetupDelegate>
{
    long long _context;	// 8 = 0x8
    PKPaymentService *_paymentService;	// 16 = 0x10
    PKPeerPaymentService *_peerPaymentService;	// 24 = 0x18
    PKPeerPaymentAccount *_account;	// 32 = 0x20
    PKFamilyMemberCollection *_familyCollection;	// 40 = 0x28
    PKContactAvatarManager *_avatarManager;	// 48 = 0x30
    UINavigationController *_navigationController;	// 56 = 0x38
    PKPeerPaymentAssociatedAccountPresentationContext *_presentationContext;	// 64 = 0x40
    PKPeerPaymentAssociatedAccountControllerDoneTapHelper *_doneTapHelper;	// 72 = 0x48
    NSString *_viewerFamilyMemberTypeAnalyticsKey;	// 80 = 0x50
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;	// 88 = 0x58
    _Bool _didBeginReporter;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000019fdce
- (void)_peerPaymentAccountChanged:(id)arg1;	// IMP=0x000000000019fcc1
- (void)_begingReportingIfNecessary;	// IMP=0x000000000019fc49
- (void)_endReportingSessionIfNecessary;	// IMP=0x000000000019fc1e
- (void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg1;	// IMP=0x000000000019fc18
- (void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(_Bool)arg1 updatedAccount:(id)arg2 forFamilyMember:(id)arg3;	// IMP=0x000000000019f969
- (void)presentAssociatedAccountsFlowWithPresentationContext:(id)arg1 fromNavigationController:(id)arg2;	// IMP=0x000000000019ec35
- (id)initWithFamilyCollection:(id)arg1 avatarManager:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4;	// IMP=0x000000000019ea5f
- (id)initWithFamilyCollection:(id)arg1 avatarManager:(id)arg2 passLibraryDataProvider:(id)arg3;	// IMP=0x000000000019ea4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
