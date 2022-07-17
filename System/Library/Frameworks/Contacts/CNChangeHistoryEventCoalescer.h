//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNChangeHistoryEventVisitorPrivate-Protocol.h>

@class CNMutableOrderedDictionary, NSArray, NSMutableArray, NSString;

@interface CNChangeHistoryEventCoalescer : NSObject <CNChangeHistoryEventVisitorPrivate>
{
    NSMutableArray *_controlEvents;	// 8 = 0x8
    CNMutableOrderedDictionary *_addedContacts;	// 16 = 0x10
    CNMutableOrderedDictionary *_updatedContacts;	// 24 = 0x18
    CNMutableOrderedDictionary *_deletedContacts;	// 32 = 0x20
    CNMutableOrderedDictionary *_addedGroups;	// 40 = 0x28
    CNMutableOrderedDictionary *_updatedGroups;	// 48 = 0x30
    CNMutableOrderedDictionary *_deletedGroups;	// 56 = 0x38
    NSMutableArray *_contactLinkingEvents;	// 64 = 0x40
    NSMutableArray *_groupMembershipEvents;	// 72 = 0x48
    NSMutableArray *_otherContactEvents;	// 80 = 0x50
}

+ (id)coalesceEvents:(id)arg1;	// IMP=0x000000000000a8bd
+ (id)coalescingLog;	// IMP=0x000000000000a861
- (void).cxx_destruct;	// IMP=0x000000000000bec0
- (void)visitDifferentMeCardEvent:(id)arg1;	// IMP=0x000000000000beaa
- (void)visitPreferredContactForNameEvent:(id)arg1;	// IMP=0x000000000000be94
- (void)visitPreferredContactForImageEvent:(id)arg1;	// IMP=0x000000000000be7e
- (void)visitUnlinkContactEvent:(id)arg1;	// IMP=0x000000000000be68
- (void)visitLinkContactsEvent:(id)arg1;	// IMP=0x000000000000be52
- (void)visitRemoveSubgroupFromGroupEvent:(id)arg1;	// IMP=0x000000000000be3c
- (void)visitAddSubgroupToGroupEvent:(id)arg1;	// IMP=0x000000000000be26
- (void)visitRemoveMemberFromGroupEvent:(id)arg1;	// IMP=0x000000000000be10
- (void)visitAddMemberToGroupEvent:(id)arg1;	// IMP=0x000000000000bdfa
- (void)visitDeleteGroupEvent:(id)arg1;	// IMP=0x000000000000bbaa
- (void)visitUpdateGroupEvent:(id)arg1;	// IMP=0x000000000000b8aa
- (void)visitAddGroupEvent:(id)arg1;	// IMP=0x000000000000b58e
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x000000000000b350
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x000000000000b050
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x000000000000ad27
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x000000000000ad11
@property(readonly) NSArray *events;
- (id)init;	// IMP=0x000000000000aa38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
