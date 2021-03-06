//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIFamilyMemberDowntimeContactDataSource : NSObject
{
    _Bool _isShowingFamilyMemberContacts;	// 8 = 0x8
    _Bool _meContactNeedsUpdate;	// 9 = 0x9
    NSString *_filterString;	// 16 = 0x10
    CNContactStore *_store;	// 24 = 0x18
    CNContact *_meContact;	// 32 = 0x20
    NSArray *_familyMembers;	// 40 = 0x28
    NSArray *_filteredSections;	// 48 = 0x30
    NSArray *_sections;	// 56 = 0x38
    NSMutableArray *_selectedContactItems;	// 64 = 0x40
    NSArray *_requiredKeys;	// 72 = 0x48
}

+ (_Bool)isErrorPossiblyRelatedToExtraStores:(id)arg1;	// IMP=0x000000000002f304
- (void).cxx_destruct;	// IMP=0x000000000002ea28
@property(readonly, nonatomic) NSArray *requiredKeys; // @synthesize requiredKeys=_requiredKeys;
@property(retain, nonatomic) NSMutableArray *selectedContactItems; // @synthesize selectedContactItems=_selectedContactItems;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *filteredSections; // @synthesize filteredSections=_filteredSections;
@property(retain, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(nonatomic) _Bool meContactNeedsUpdate; // @synthesize meContactNeedsUpdate=_meContactNeedsUpdate;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(nonatomic) _Bool isShowingFamilyMemberContacts; // @synthesize isShowingFamilyMemberContacts=_isShowingFamilyMemberContacts;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (id)preferredForNameMeContactWithKeysToFetch:(id)arg1;	// IMP=0x000000000002e5aa
- (id)preferredForNameMeContactIdentifier;	// IMP=0x000000000002e4e2
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(_Bool)arg2 keysToFetch:(id)arg3;	// IMP=0x000000000002e1b5
- (id)labelForFamilyMember:(id)arg1;	// IMP=0x000000000002e0ef
- (void)postProcessForFamilyMembersWithContacts:(id)arg1;	// IMP=0x000000000002daa5
- (void)_loadAllContactsIfNeeded;	// IMP=0x000000000002d8e9
- (void)filterSectionsForString:(id)arg1;	// IMP=0x000000000002d51e
- (void)setContactItemSelected:(_Bool)arg1 forIndexPath:(id)arg2;	// IMP=0x000000000002d409
- (id)selectedContacts;	// IMP=0x000000000002d3b2
- (id)contactItemForIndexPath:(id)arg1;	// IMP=0x000000000002d2da
- (long long)numberOfRowsInSection:(long long)arg1;	// IMP=0x000000000002d255
- (long long)numberOfSections;	// IMP=0x000000000002d226
- (id)titleForSection:(long long)arg1;	// IMP=0x000000000002d1d2
- (long long)sortOrder;	// IMP=0x000000000002d187
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d150
- (id)initWithStore:(id)arg1 familyMembers:(id)arg2 requiredKeys:(id)arg3;	// IMP=0x000000000002d05d

@end

