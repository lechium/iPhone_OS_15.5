//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface CNContactStoreFilter
{
    _Bool _isServerFilter;	// 8 = 0x8
    NSSet *_groupIdentifiers;	// 16 = 0x10
    NSSet *_containerIdentifiers;	// 24 = 0x18
}

+ (id)contactStoreFilterFromPreferencesWithContactStore:(id)arg1;	// IMP=0x00000000000f695b
+ (_Bool)getContainerIdentifiers:(id *)arg1 groupIdentifiers:(id *)arg2 serverFilter:(_Bool *)arg3 fromPreSundanceDictionary:(id)arg4 contactStore:(id)arg5;	// IMP=0x00000000000f62ab
+ (_Bool)getContainerIdentifiers:(id *)arg1 groupIdentifiers:(id *)arg2 serverFilter:(_Bool *)arg3 fromSundanceToOkemoAndAddressBookUIDictionary:(id)arg4 contactStore:(id)arg5;	// IMP=0x00000000000f5d58
+ (_Bool)getContainerIdentifiers:(id *)arg1 groupIdentifiers:(id *)arg2 serverFilter:(_Bool *)arg3 fromLegacyDictionary:(id)arg4 contactStore:(id)arg5;	// IMP=0x00000000000f5be7
- (void).cxx_destruct;	// IMP=0x00000000000f58f5
@property(nonatomic) _Bool isServerFilter; // @synthesize isServerFilter=_isServerFilter;
@property(retain, nonatomic) NSSet *containerIdentifiers; // @synthesize containerIdentifiers=_containerIdentifiers;
@property(retain, nonatomic) NSSet *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
- (void)saveToPreferencesWithContactStore:(id)arg1;	// IMP=0x00000000000f57bf
@property(readonly, nonatomic) _Bool showsEverything;
- (_Bool)supportsSections;	// IMP=0x00000000000f5759
- (id)predicate;	// IMP=0x00000000000f550e
- (id)description;	// IMP=0x00000000000f5476
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f524e
- (void)addAddressBookUIKeysToDictionaryRepresentation:(id)arg1 withAllContainers:(id)arg2 excludedContainers:(id)arg3 excludedGroups:(id)arg4;	// IMP=0x00000000000f509d
- (id)dictionaryRepresentationWithContactStore:(id)arg1;	// IMP=0x00000000000f4da2
- (id)dictionaryRepresentation;	// IMP=0x00000000000f4d56
- (id)initWithDictionaryRepresentation:(id)arg1 contactStore:(id)arg2;	// IMP=0x00000000000f48fa
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000f4896
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f47cc

@end

