//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HUEditOutgoingInvitationItemManager;

@interface HUEditOutgoingInvitationViewController
{
    HUEditOutgoingInvitationItemManager *_editOutgoingInvitationItemManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000036c049
@property(readonly, nonatomic) HUEditOutgoingInvitationItemManager *editOutgoingInvitationItemManager; // @synthesize editOutgoingInvitationItemManager=_editOutgoingInvitationItemManager;
- (id)_messageForInvitationState:(long long)arg1;	// IMP=0x000000000036be12
- (void)_cancelOutgoingInvitation:(_Bool)arg1;	// IMP=0x000000000036b86d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000036b714
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;	// IMP=0x000000000036b5ed
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000036b4e0
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;	// IMP=0x000000000036b417
- (id)user;	// IMP=0x000000000036b39d
- (id)initWithItem:(id)arg1 home:(id)arg2;	// IMP=0x000000000036b2b8

@end
