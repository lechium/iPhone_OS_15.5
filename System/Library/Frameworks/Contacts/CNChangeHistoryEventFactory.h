//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNChangeHistoryEventFactory : NSObject
{
}

- (id)differentMeCardEventWithContactIdentifier:(id)arg1;	// IMP=0x00000000000b6e55
- (id)preferredContactForImageEventWithPreferredContact:(id)arg1 unifiedContact:(id)arg2;	// IMP=0x00000000000b6de5
- (id)preferredContactForNameEventWithPreferredContact:(id)arg1 unifiedContact:(id)arg2;	// IMP=0x00000000000b6d75
- (id)unlinkContactEventWithContact:(id)arg1;	// IMP=0x00000000000b6d28
- (id)linkContactsEventWithFromContact:(id)arg1 toContact:(id)arg2 unifiedContact:(id)arg3;	// IMP=0x00000000000b6c93
- (id)removeSubgroupFromGroupEventWithSubgroup:(id)arg1 group:(id)arg2;	// IMP=0x00000000000b6c23
- (id)addSubgroupToGroupEventWithSubgroup:(id)arg1 group:(id)arg2;	// IMP=0x00000000000b6bb3
- (id)removeMemberFromGroupEventWithMember:(id)arg1 group:(id)arg2;	// IMP=0x00000000000b6b43
- (id)addMemberToGroupEventWithMember:(id)arg1 group:(id)arg2;	// IMP=0x00000000000b6ad3
- (id)deleteGroupEventWithGroupIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3;	// IMP=0x00000000000b6a3e
- (id)deleteGroupEventWithGroupIdentifier:(id)arg1;	// IMP=0x00000000000b69f1
- (id)updateGroupEventWithGroup:(id)arg1;	// IMP=0x00000000000b69a4
- (id)addGroupEventWithGroup:(id)arg1 containerIdentifier:(id)arg2;	// IMP=0x00000000000b6934
- (id)deleteContactEventWithContactIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3;	// IMP=0x00000000000b689f
- (id)deleteContactEventWithContactIdentifier:(id)arg1;	// IMP=0x00000000000b6852
- (id)updateContactEventWithContact:(id)arg1 imagesChanged:(_Bool)arg2;	// IMP=0x00000000000b67f6
- (id)updateContactEventWithContact:(id)arg1;	// IMP=0x00000000000b67a7
- (id)addContactEventWithContact:(id)arg1 containerIdentifier:(id)arg2;	// IMP=0x00000000000b6737
- (id)dropEverythingEvent;	// IMP=0x00000000000b671e

@end

