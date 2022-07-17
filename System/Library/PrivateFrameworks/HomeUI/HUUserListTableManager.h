//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HMHomeDelegatePrivate-Protocol.h>
#import <HomeUI/HUAddPeopleViewControllerDelegate-Protocol.h>
#import <HomeUI/UITableViewDataSource-Protocol.h>
#import <HomeUI/UITableViewDelegate-Protocol.h>

@class CNContactStore, HMHome, NSArray, NSIndexPath, NSString, UITableView, UIViewController;
@protocol HUUserListManagerTableDelegate;

@interface HUUserListTableManager : NSObject <HUAddPeopleViewControllerDelegate, HMHomeDelegatePrivate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _editing;	// 8 = 0x8
    _Bool _allowsEditing;	// 9 = 0x9
    id <HUUserListManagerTableDelegate> _delegate;	// 16 = 0x10
    NSArray *_users;	// 24 = 0x18
    NSArray *_invitations;	// 32 = 0x20
    HMHome *_home;	// 40 = 0x28
    UIViewController *_viewController;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
    NSIndexPath *_selectedIndexPath;	// 64 = 0x40
    CNContactStore *_contactStore;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000018d817
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSArray *invitations; // @synthesize invitations=_invitations;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(nonatomic) __weak id <HUUserListManagerTableDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateEditingRows;	// IMP=0x000000000018d6ec
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000018d24c
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000018d026
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000018cb34
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000000018caf8
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000018cadf
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000018cac6
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000018cab8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000018ca76
- (_Bool)_indexPathIsInviteUser:(id)arg1;	// IMP=0x000000000018ca34
- (long long)numberOfDataRows;	// IMP=0x000000000018c9a7
- (long long)sectionForPeople;	// IMP=0x000000000018c99f
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;	// IMP=0x000000000018c25a
- (void)home:(id)arg1 didRemoveUser:(id)arg2;	// IMP=0x000000000018c0d8
- (void)home:(id)arg1 didAddUser:(id)arg2;	// IMP=0x000000000018bf56
- (void)addPeopleViewController:(id)arg1 didSendInvitations:(id)arg2;	// IMP=0x000000000018bda7
- (void)addPeopleViewControllerDidCancel:(id)arg1;	// IMP=0x000000000018bd2c
- (void)_configurePersonViewController:(id)arg1 invitation:(id)arg2 isRemovable:(_Bool)arg3;	// IMP=0x000000000018bab2
- (id)_personViewControllerForUser:(id)arg1 invitation:(id)arg2;	// IMP=0x000000000018b796
- (id)_monogramForUser:(id)arg1;	// IMP=0x000000000018b6ac
- (id)_stringForInvitationState:(long long)arg1;	// IMP=0x000000000018b62e
- (id)_displayNameForUser:(id)arg1;	// IMP=0x000000000018b544
- (id)_contactForUser:(id)arg1;	// IMP=0x000000000018b0b4
- (void)_didReloadAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018afc7
- (void)_didRemoveAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018aeda
- (void)_didInsertAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018aded
- (void)_didRemoveInvitation:(id)arg1;	// IMP=0x000000000018acc8
- (void)_didRemoveUser:(id)arg1;	// IMP=0x000000000018abd6
- (void)_didAddUser:(id)arg1;	// IMP=0x000000000018aa10
- (void)_removeInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018a84b
- (void)_removeUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018a64e
- (void)_stopSharingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000018a1e0
- (void)_stopSharing;	// IMP=0x000000000018a1cc
- (void)_reinvite;	// IMP=0x0000000000189fa5
- (id)sortedInvitations;	// IMP=0x0000000000189e47
- (id)sortedUsers;	// IMP=0x0000000000189d27
- (id)initWithTableView:(id)arg1 viewController:(id)arg2;	// IMP=0x00000000001899e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
