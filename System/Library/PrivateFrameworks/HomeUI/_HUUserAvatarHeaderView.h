//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class ACAccountStore, HUContactView, HUMultiUserTokenFixTableView, HUSplitAccountHeaderTableView, NAFuture, NSArray, NSAttributedString;
@protocol HUMediaAccountDelegate;

@interface _HUUserAvatarHeaderView : UITableViewHeaderFooterView
{
    HUContactView *_contactView;	// 8 = 0x8
    HUSplitAccountHeaderTableView *_splitAccountHeaderView;	// 16 = 0x10
    HUMultiUserTokenFixTableView *_multiUserTokenFixHeaderView;	// 24 = 0x18
    ACAccountStore *_accountStore;	// 32 = 0x20
    NSArray *_layoutConstraints;	// 40 = 0x28
    id <HUMediaAccountDelegate> _mediaAccountDelegate;	// 48 = 0x30
    NAFuture *_mediaAccountFuture;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001fdaed
@property(retain, nonatomic) NAFuture *mediaAccountFuture; // @synthesize mediaAccountFuture=_mediaAccountFuture;
@property(nonatomic) __weak id <HUMediaAccountDelegate> mediaAccountDelegate; // @synthesize mediaAccountDelegate=_mediaAccountDelegate;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) HUMultiUserTokenFixTableView *multiUserTokenFixHeaderView; // @synthesize multiUserTokenFixHeaderView=_multiUserTokenFixHeaderView;
@property(retain, nonatomic) HUSplitAccountHeaderTableView *splitAccountHeaderView; // @synthesize splitAccountHeaderView=_splitAccountHeaderView;
@property(readonly, nonatomic) HUContactView *contactView; // @synthesize contactView=_contactView;
- (id)_keyDescriptors;	// IMP=0x00000000001fd939
@property(retain, nonatomic) NSAttributedString *message;
- (void)dismissSplitAccountView;	// IMP=0x00000000001fd514
- (void)showSplitAccountViewIfNeeded;	// IMP=0x00000000001fd37d
- (void)setAccounts:(id)arg1 forHome:(id)arg2;	// IMP=0x00000000001fc3f5
- (void)dismissMultiUserTokenFixUI;	// IMP=0x00000000001fc09a
- (void)presentMultiUserTokenFixUIForMediaAccount:(id)arg1 inHome:(id)arg2;	// IMP=0x00000000001fb4cc
- (void)dealloc;	// IMP=0x00000000001fb461
- (id)initWithUser:(id)arg1 home:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000001fa8d0

@end
