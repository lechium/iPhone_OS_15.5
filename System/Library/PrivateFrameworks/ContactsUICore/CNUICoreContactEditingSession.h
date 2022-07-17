//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNUICoreContactScratchpad, NSArray;

@interface CNUICoreContactEditingSession : NSObject
{
    CNUICoreContactScratchpad *_contactsAdded;	// 8 = 0x8
    CNUICoreContactScratchpad *_contactsUpdated;	// 16 = 0x10
    CNUICoreContactScratchpad *_contactsRemoved;	// 24 = 0x18
}

+ (_Bool)isEdiingStateOfContactValid:(long long)arg1;	// IMP=0x0000000000030970
- (void).cxx_destruct;	// IMP=0x000000000003236c
@property(retain, nonatomic) CNUICoreContactScratchpad *contactsRemoved; // @synthesize contactsRemoved=_contactsRemoved;
@property(retain, nonatomic) CNUICoreContactScratchpad *contactsUpdated; // @synthesize contactsUpdated=_contactsUpdated;
@property(retain, nonatomic) CNUICoreContactScratchpad *contactsAdded; // @synthesize contactsAdded=_contactsAdded;
- (id)description;	// IMP=0x000000000003216f
- (id)applyChangesToContacts:(id)arg1;	// IMP=0x0000000000031e43
- (id)generateSaveRequest;	// IMP=0x0000000000031b99
- (id)removedContactsMatchingContacts:(id)arg1;	// IMP=0x0000000000031a44
- (id)updatedContactsMatchingContacts:(id)arg1;	// IMP=0x00000000000318ef
- (id)addedContactsMatchingContacts:(id)arg1;	// IMP=0x0000000000031788
- (_Bool)containsRemovedContactMatchingContact:(id)arg1;	// IMP=0x00000000000316ba
- (_Bool)containsUpdatedContactMatchingContact:(id)arg1;	// IMP=0x00000000000315ec
- (_Bool)containsAddedContactMatchingContact:(id)arg1;	// IMP=0x000000000003151e
@property(readonly, nonatomic) NSArray *removedContacts;
@property(readonly, nonatomic) NSArray *updatedContacts;
@property(readonly, nonatomic) NSArray *addedContacts;
- (void)removeContacts:(id)arg1;	// IMP=0x0000000000030e80
- (void)updateContacts:(id)arg1;	// IMP=0x0000000000030985
- (void)verifyConsistencyOfEditingSessionForContact:(id)arg1;	// IMP=0x000000000003096a
- (_Bool)wasContactRemoved:(id)arg1;	// IMP=0x00000000000308f3
- (_Bool)wasContactUpdated:(id)arg1;	// IMP=0x000000000003087c
- (_Bool)wasContactAdded:(id)arg1;	// IMP=0x0000000000030805
- (_Bool)isContactUnseen:(id)arg1;	// IMP=0x000000000003071b
- (long long)editingStateOfContact:(id)arg1;	// IMP=0x00000000000305f4
- (void)addContacts:(id)arg1;	// IMP=0x000000000003017e
@property(readonly, nonatomic) _Bool inProgress;
- (id)init;	// IMP=0x000000000002ff7c

@end
