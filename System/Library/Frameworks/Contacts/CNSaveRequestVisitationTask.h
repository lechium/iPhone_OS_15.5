//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/CNTask.h>

@class CNChangeHistoryEventFactory, CNSaveRequest;
@protocol CNChangeHistoryEventVisitorPrivate;

__attribute__((visibility("hidden")))
@interface CNSaveRequestVisitationTask : CNTask
{
    CNSaveRequest *_saveRequest;	// 24 = 0x18
    id <CNChangeHistoryEventVisitorPrivate> _visitor;	// 32 = 0x20
    CNChangeHistoryEventFactory *_factory;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000c6b33
@property(readonly) CNChangeHistoryEventFactory *factory; // @synthesize factory=_factory;
@property(readonly) id <CNChangeHistoryEventVisitorPrivate> visitor; // @synthesize visitor=_visitor;
@property(readonly) CNSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
- (void)sendDifferentMeCardEvent;	// IMP=0x00000000000c6a05
- (void)sendPreferredContactForImageEvents;	// IMP=0x00000000000c6921
- (void)sendPreferredContactForNameEvents;	// IMP=0x00000000000c6841
- (void)sendUnlinkContactEvents;	// IMP=0x00000000000c6760
- (void)sendLinkContactsEvents;	// IMP=0x00000000000c6679
- (void)sendRemoveSubgroupFromGroupEvents;	// IMP=0x00000000000c6595
- (void)sendAddSubgroupToGroupEvents;	// IMP=0x00000000000c64b1
- (void)sendRemoveMemberFromGroupEvents;	// IMP=0x00000000000c63cd
- (void)sendAddMemberToGroupEvents;	// IMP=0x00000000000c62e9
- (void)sendDeletedGroupEvents;	// IMP=0x00000000000c6208
- (void)sendUpdatedGroupEvents;	// IMP=0x00000000000c6127
- (void)sendAddedGroupEvents;	// IMP=0x00000000000c6043
- (void)sendDeletedContactEvents;	// IMP=0x00000000000c5f62
- (void)sendUpdatedContactEvents;	// IMP=0x00000000000c5e81
- (void)sendAddedContactEvents;	// IMP=0x00000000000c5d9d
- (id)run:(id *)arg1;	// IMP=0x00000000000c5cb5
- (id)initWithSaveRequest:(id)arg1 visitor:(id)arg2 factory:(id)arg3;	// IMP=0x00000000000c5bdd

@end

