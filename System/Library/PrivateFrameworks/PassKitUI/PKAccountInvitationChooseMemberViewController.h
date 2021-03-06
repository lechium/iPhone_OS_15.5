//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKAccountInvitationControllerObserver-Protocol.h>
#import <PassKitUI/PKDeviceSharingCapabilitiesManagerObserver-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>
#import <PassKitUI/UITableViewDelegatePrivate-Protocol.h>
#import <PassKitUI/_PKUIKVisibilityBackdropViewDelegate-Protocol.h>

@class FACircleStateController, NSArray, NSDictionary, NSIndexPath, NSNumberFormatter, NSPersonNameComponentsFormatter, NSString, PKAccountInvitationController, PKOSVersionRequirementRange, PKPaymentSetupDockView, PKTableHeaderView, PKTableViewDiffableDataSource, UITableView, _PKUIKVisibilityBackdropView;

@interface PKAccountInvitationChooseMemberViewController : UIViewController <UITableViewDelegate, UITableViewDelegatePrivate, PKDeviceSharingCapabilitiesManagerObserver, PKAccountInvitationControllerObserver, _PKUIKVisibilityBackdropViewDelegate, PKViewControllerPreflightable>
{
    PKAccountInvitationController *_controller;	// 8 = 0x8
    NSDictionary *_familyMemberPhotosByAltDSID;	// 16 = 0x10
    NSDictionary *_pendingFamilyMemberImagesByEmail;	// 24 = 0x18
    NSPersonNameComponentsFormatter *_nameFormatter;	// 32 = 0x20
    NSNumberFormatter *_ageFormatter;	// 40 = 0x28
    PKTableHeaderView *_headerView;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
    double _previousHeaderHeight;	// 64 = 0x40
    NSIndexPath *_loadingInvitationIndexPath;	// 72 = 0x48
    NSArray *_totalFamilyMembers;	// 80 = 0x50
    NSArray *_pendingFamilyMembers;	// 88 = 0x58
    PKOSVersionRequirementRange *_requiredOSVersionRange;	// 96 = 0x60
    long long _minimumParticipantAge;	// 104 = 0x68
    NSNumberFormatter *_maximumAccountUsersFormatter;	// 112 = 0x70
    PKTableViewDiffableDataSource *_diffableDataSource;	// 120 = 0x78
    FACircleStateController *_stateController;	// 128 = 0x80
    PKPaymentSetupDockView *_dockView;	// 136 = 0x88
    _PKUIKVisibilityBackdropView *_backdropView;	// 144 = 0x90
    double _backdropWeight;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000002b1b02
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;	// IMP=0x00000000002b1a80
- (void)_reloadFamilyCollectionWithForceReload:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b1797
- (void)_filterAvailableFamilyMembersFromMembers:(id)arg1;	// IMP=0x00000000002b15bc
- (void)_updateSnapshotAnimated:(_Bool)arg1;	// IMP=0x00000000002b0c8e
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b0c77
- (void)_openFamilyMemberSettings;	// IMP=0x00000000002b0bf6
- (void)_handleAddPersonTapped;	// IMP=0x00000000002b03c0
- (void)_reportAnalyticsViewDidAppear:(_Bool)arg1;	// IMP=0x00000000002b0042
- (void)_setLoadingIndexPath:(id)arg1;	// IMP=0x00000000002afef1
- (void)_updateHeaderFooterText;	// IMP=0x00000000002afbf5
- (void)didUpdateInvitationControllerFamilyCircle;	// IMP=0x00000000002afb07
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000002afaa4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002af857
- (void)tableViewDidFinishReload:(id)arg1;	// IMP=0x00000000002af81a
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000002af56d
- (void)deviceSharingCapabilitiesUpdated:(id)arg1 maximumPossibleDevices:(long long)arg2 forAppleID:(id)arg3;	// IMP=0x00000000002af567
- (void)deviceSharingCapabilitiesUpdated:(id)arg1 newSharingCapabilties:(id)arg2 forAppleID:(id)arg3;	// IMP=0x00000000002af4e8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000002af4a5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002af45f
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002aee69
- (void)viewDidLoad;	// IMP=0x00000000002aea08
- (void)dealloc;	// IMP=0x00000000002ae977
- (id)initWithController:(id)arg1;	// IMP=0x00000000002ae691

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

