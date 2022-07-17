//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface CNSaveRequest : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_addedContactsByIdentifier;	// 8 = 0x8
    NSMutableArray *_updatedContacts;	// 16 = 0x10
    NSMutableDictionary *_deletedContactsByIdentifier;	// 24 = 0x18
    NSString *_meCardIdentifier;	// 32 = 0x20
    NSMutableDictionary *_addedGroupsByIdentifier;	// 40 = 0x28
    NSMutableArray *_updatedGroups;	// 48 = 0x30
    NSMutableDictionary *_deletedGroupsByIdentifier;	// 56 = 0x38
    NSMutableDictionary *_addedMembersByGroupIdentifier;	// 64 = 0x40
    NSMutableDictionary *_removedMembersByGroupIdentifier;	// 72 = 0x48
    NSMutableDictionary *_addedSubgroupsByGroupIdentifier;	// 80 = 0x50
    NSMutableDictionary *_removedSubgroupsByGroupIdentifier;	// 88 = 0x58
    NSMutableDictionary *_addedContainersByIdentifier;	// 96 = 0x60
    NSMutableArray *_updatedContainers;	// 104 = 0x68
    NSMutableDictionary *_deletedContainersByIdentifier;	// 112 = 0x70
    NSMutableDictionary *_movedContainersByIdentifier;	// 120 = 0x78
    NSMutableDictionary *_addedAccountContainersByIdentifier;	// 128 = 0x80
    NSMutableDictionary *_defaultAccountContainersByIdentifier;	// 136 = 0x88
    NSMutableArray *_contactChangeRequests;	// 144 = 0x90
    NSMutableArray *_addedAccounts;	// 152 = 0x98
    NSMutableArray *_removedAccounts;	// 160 = 0xa0
    NSMutableArray *_linkRequests;	// 168 = 0xa8
    NSMutableArray *_unlinkRequests;	// 176 = 0xb0
    NSMutableArray *_preferredForNameRequests;	// 184 = 0xb8
    NSMutableArray *_preferredForImageRequests;	// 192 = 0xc0
    NSMutableDictionary *_parentRecordsByIdentifier;	// 200 = 0xc8
    _Bool _unsafeApplyChangesOnly;	// 208 = 0xd0
    _Bool _shouldRefetchContacts;	// 209 = 0xd1
    _Bool _ignoresGuardianRestrictions;	// 210 = 0xd2
    NSString *_transactionAuthor;	// 216 = 0xd8
    NSString *_saveRequestIdentifier;	// 224 = 0xe0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001146ae
- (void).cxx_destruct;	// IMP=0x0000000000118f66
@property(nonatomic) _Bool ignoresGuardianRestrictions; // @synthesize ignoresGuardianRestrictions=_ignoresGuardianRestrictions;
@property(readonly, copy, nonatomic) NSDictionary *deletedContactsByIdentifier; // @synthesize deletedContactsByIdentifier=_deletedContactsByIdentifier;
@property(readonly, copy, nonatomic) NSString *saveRequestIdentifier; // @synthesize saveRequestIdentifier=_saveRequestIdentifier;
@property(readonly, copy, nonatomic) NSArray *removedAccounts; // @synthesize removedAccounts=_removedAccounts;
@property(readonly, copy, nonatomic) NSArray *addedAccounts; // @synthesize addedAccounts=_addedAccounts;
@property(nonatomic) _Bool shouldRefetchContacts; // @synthesize shouldRefetchContacts=_shouldRefetchContacts;
@property(copy, nonatomic) NSString *transactionAuthor; // @synthesize transactionAuthor=_transactionAuthor;
@property(nonatomic) _Bool unsafeApplyChangesOnly; // @synthesize unsafeApplyChangesOnly=_unsafeApplyChangesOnly;
@property(copy, nonatomic) NSString *changeHistoryClientIdentifier;
@property(nonatomic) _Bool ignoresParentalRestrictions;
@property(readonly, copy, nonatomic) NSArray *allAccountIdentifierStrings;
- (id)allAccountIdentifiers;	// IMP=0x0000000000118b2c
- (id)allContainerIdentifierStrings:(_Bool *)arg1;	// IMP=0x00000000001189bd
- (id)allContainerIdentifiers:(_Bool *)arg1;	// IMP=0x0000000000118545
@property(readonly, copy, nonatomic) NSArray *allContainers;
@property(readonly, copy, nonatomic) NSArray *allContactIdentifiers;
@property(readonly, copy, nonatomic) NSArray *allContacts;
@property(readonly, copy, nonatomic) NSArray *allGroupIdentifiers;
@property(readonly, copy, nonatomic) NSArray *allGroups;
- (id)groupWithRemovedSubgroupForGroupIdentifier:(id)arg1;	// IMP=0x00000000001172e6
- (id)groupWithAddedSubgroupForGroupIdentifier:(id)arg1;	// IMP=0x00000000001172cd
- (id)groupWithRemovedMemberForGroupIdentifier:(id)arg1;	// IMP=0x00000000001172b4
- (id)groupWithAddedMemberForGroupIdentifier:(id)arg1;	// IMP=0x000000000011729b
- (void)removeAccount:(id)arg1;	// IMP=0x0000000000117231
- (void)addAccount:(id)arg1;	// IMP=0x00000000001171c7
- (void)preferLinkedContactForImage:(id)arg1 inUnifiedContact:(id)arg2;	// IMP=0x0000000000117011
- (void)preferLinkedContactForName:(id)arg1 inUnifiedContact:(id)arg2;	// IMP=0x0000000000116e5b
- (void)unlinkContact:(id)arg1;	// IMP=0x0000000000116bb2
- (void)linkContact:(id)arg1 toContact:(id)arg2;	// IMP=0x0000000000116985
@property(readonly, copy, nonatomic) NSArray *contactChangeRequests;
- (void)updateContainer:(id)arg1;	// IMP=0x000000000011694e
- (void)deleteContainer:(id)arg1;	// IMP=0x00000000001168a2
- (void)moveContainer:(id)arg1 toContainerWithIdentifier:(id)arg2;	// IMP=0x0000000000116788
- (void)setContainer:(id)arg1 asDefaultContainerOfAccountWithIdentifier:(id)arg2;	// IMP=0x0000000000116686
- (void)addContainer:(id)arg1 toAccountWithIdentifier:(id)arg2;	// IMP=0x0000000000116503
- (void)addContainer:(id)arg1 toContainerWithIdentifier:(id)arg2;	// IMP=0x0000000000116373
@property(readonly, copy, nonatomic) NSDictionary *movedContainersByParentContainerIdentifier;
@property(readonly, copy, nonatomic) NSArray *updatedContainers;
@property(readonly, copy, nonatomic) NSArray *deletedContainers;
@property(readonly, copy, nonatomic) NSDictionary *defaultAccountContainersByAccountIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *addedAccountContainersByParentContainerIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *addedContainersByParentContainerIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *removedSubgroupsByGroupIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *addedSubgroupsByGroupIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *removedMembersByGroupIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *addedMembersByGroupIdentifier;
@property(readonly, copy, nonatomic) NSArray *deletedGroups;
@property(readonly, copy, nonatomic) NSArray *updatedGroups;
@property(readonly, copy, nonatomic) NSDictionary *addedGroupsByContainerIdentifier;
@property(readonly, copy, nonatomic) NSString *meCardIdentifier;
@property(readonly, copy, nonatomic) NSArray *deletedContacts;
@property(readonly, copy, nonatomic) NSArray *updatedContacts;
@property(readonly, copy, nonatomic) NSDictionary *addedContactsByContainerIdentifier;
- (id)_dictionaryOfArraysFromDictionaryOfDictionaries:(id)arg1;	// IMP=0x00000000001160b3
- (id)flattenedDictionaryForDictionaryOfTuples:(id)arg1;	// IMP=0x0000000000115f01
- (void)removeSubgroup:(id)arg1 fromGroup:(id)arg2;	// IMP=0x0000000000115bf9
- (void)addSubgroup:(id)arg1 toGroup:(id)arg2;	// IMP=0x00000000001158f1
- (void)removeMember:(id)arg1 fromGroup:(id)arg2;	// IMP=0x00000000001155e9
- (void)addMember:(id)arg1 toGroup:(id)arg2;	// IMP=0x00000000001152e1
- (void)deleteGroup:(id)arg1;	// IMP=0x000000000011517a
- (void)updateGroup:(id)arg1;	// IMP=0x00000000001150d2
- (void)addGroup:(id)arg1 toContainerWithIdentifier:(id)arg2;	// IMP=0x0000000000114e9a
- (void)setMeCardIdentifier:(id)arg1;	// IMP=0x0000000000114e44
- (void)deleteContact:(id)arg1;	// IMP=0x0000000000114d98
- (void)updateContact:(id)arg1;	// IMP=0x0000000000114cf0
- (void)addContact:(id)arg1 toContainerWithIdentifier:(id)arg2;	// IMP=0x0000000000114ab2
- (void)queueUpdatedObject:(id)arg1 intoArray:(id)arg2;	// IMP=0x0000000000114a25
- (void)_insertContact:(id)arg1 intoDictionary:(id)arg2 complementDictionary:(id)arg3;	// IMP=0x00000000001146be
@property(readonly, copy, nonatomic) NSString *storeIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011444a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001136ab
- (id)init;	// IMP=0x0000000000113376
- (void)withDifferentMeCard:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5b3e
- (void)withEachContactPreferredForImage:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5a13
- (void)withEachContactPreferredForName:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c58e8
- (void)withEachUnlinkedContact:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c583b
- (void)withEachLinkedContact:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5710
- (void)withEachSubgroupRemovedFromGroup:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5565
- (void)withEachSubgroupAddedToGroup:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c53ba
- (void)withEachMemberRemovedFromGroup:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c520f
- (void)withEachMemberAddedToGroup:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5064
- (void)withEachDeletedGroup:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4fb7
- (void)withEachUpdatedGroup:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4f0a
- (void)withEachAddedGroup:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4db2
- (void)withEachDeletedContact:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4d05
- (void)withEachUpdatedContact:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4c58
- (void)withEachAddedContact:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4b00
- (void)acceptChangeHistoryEventVisitor:(id)arg1;	// IMP=0x00000000000c4a65
- (void)setLinkIdentifier:(id)arg1 forContact:(id)arg2;	// IMP=0x00000000001190c5

@end
