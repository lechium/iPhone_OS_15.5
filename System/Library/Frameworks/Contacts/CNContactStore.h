//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContainerCache, CNResult, CNiOSAddressBook, CNiOSAddressBookDataMapper, NSData;

@interface CNContactStore : NSObject
{
    CNContainerCache *_containerCache;	// 8 = 0x8
}

+ (long long)authorizationStatusForEntityType:(long long)arg1 assumedIdentity:(id)arg2;	// IMP=0x0000000000069e58
+ (_Bool)isAccessRestrictedForEntityType:(long long)arg1;	// IMP=0x0000000000069e17
+ (id)standardLabelsForPropertyWithKey:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000069950
+ (id)standardLabelsForPropertyWithKey:(id)arg1;	// IMP=0x000000000006993c
+ (long long)authorizationStatusForEntityType:(long long)arg1;	// IMP=0x0000000000067149
+ (id)internalIdentifierFromContactIdentifier:(id)arg1;	// IMP=0x0000000000066a97
+ (id)storeIdentifierFromContactIdentifier:(id)arg1;	// IMP=0x0000000000066a26
+ (id)contactIdentifierFromInternalIdentifier:(id)arg1;	// IMP=0x0000000000066959
+ (id)storeInfoClasses;	// IMP=0x0000000000066951
+ (Class)storeClassWithIdentifier:(id)arg1;	// IMP=0x0000000000066919
+ (id)storeIdentifier;	// IMP=0x00000000000668d6
+ (id)storeWithEnvironment:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000006687e
+ (id)storeWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000066813
+ (void)initialize;	// IMP=0x00000000000667cd
+ (id)storeWithDelegateInfo:(id)arg1;	// IMP=0x00000000000285bd
+ (id)storeForFamilyMember:(id)arg1;	// IMP=0x000000000002849d
+ (_Bool)eraseAllDataAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000048332
+ (_Bool)eraseAllDataAtLocationWithName:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000482c9
+ (_Bool)isXPCDataMapperStore:(id)arg1;	// IMP=0x00000000000a5cb7
+ (id)contactStoreForPublicAddressBook:(void *)arg1;	// IMP=0x00000000000e865a
+ (id)_contactStoreForPublicAddressBook:(void *)arg1;	// IMP=0x0000000000104786
- (void).cxx_destruct;	// IMP=0x000000000006a164
- (_Bool)hasAccountFirstSyncCompleted;	// IMP=0x000000000006a0c4
- (id)authorizedKeysForContactKeys:(id)arg1;	// IMP=0x0000000000069fb0
- (void)requestAuthorization:(long long)arg1 entityType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000069ed6
- (id)individualContactCountWithError:(id *)arg1;	// IMP=0x0000000000069e0a
- (_Bool)verifyChangeHistoryForClientIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069e02
- (id)latestConsumedChangeHistoryAnchorForClientIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069dfa
- (_Bool)executeChangeHistoryClearRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069df2
- (_Bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000069d41
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069d39
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000069d31
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069d1a
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000069d12
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069cfb
@property(readonly, copy, nonatomic) CNResult *currentHistoryAnchor;
@property(readonly, copy, nonatomic) NSData *currentHistoryToken;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;	// IMP=0x0000000000069c7c
- (id)contactWithMatchingDictionary:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0000000000069bf0
- (id)matchingDictionaryForContact:(id)arg1;	// IMP=0x0000000000069be8
- (id)descriptorForRequiredKeysForMatchingDictionary;	// IMP=0x0000000000069bb6
- (id)userActivityUserInfoForContact:(id)arg1;	// IMP=0x0000000000069bae
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0000000000069ba6
- (id)descriptorForRequiredKeysForUserActivityUserInfo;	// IMP=0x0000000000069b74
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000069b21
- (_Bool)setDefaultAccountIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069ace
- (_Bool)resetSortDataIfNeededWithError:(id *)arg1;	// IMP=0x0000000000069a7b
- (id)mainContactStore;	// IMP=0x0000000000069a2a
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069a22
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069934
- (_Bool)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id *)arg4;	// IMP=0x000000000006992c
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006991f
- (id)unifiedContactCountWithError:(id *)arg1;	// IMP=0x0000000000069912
- (int)saveSequenceCount;	// IMP=0x0000000000069907
- (id)identifierWithError:(id *)arg1;	// IMP=0x00000000000698ff
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000698f7
- (id)executeFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000069517
- (id)enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069435
- (id)enumeratorForContactFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000691f8
- (id)countForFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000068f24
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000068b53
- (_Bool)hasMultipleGroupsOrAccounts;	// IMP=0x0000000000068b4b
- (id)defaultContainerIdentifier;	// IMP=0x0000000000068b43
- (_Bool)supportsSaveRequest:(id)arg1;	// IMP=0x0000000000068a31
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000068a17
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 authorizationContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000068a0f
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000068a07
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000689ff
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000689f7
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000689ef
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000689e7
- (id)groupWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000689df
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000689d7
- (_Bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068989
- (_Bool)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068865
- (_Bool)enumerateContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068087
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006807f
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000068077
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000068024
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000067fd1
- (id)unifiedMeContactMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000067ee0
- (id)unifiedMeContactMatchingEmailAddresses:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000067bfe
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000067bf4
- (id)_ios_meContactWithKeysToFetch:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000067bea
- (id)unifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000067987
- (id)_ios_meContactIdentifierWithError:(id *)arg1;	// IMP=0x0000000000067937
- (id)meContactIdentifiers:(id *)arg1;	// IMP=0x0000000000067920
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000672fc
- (id)requestAccessForEntityType:(long long)arg1;	// IMP=0x00000000000672ca
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006718e
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000066d12
- (id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2 managedConfiguration:(id)arg3;	// IMP=0x0000000000066bf8
- (id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000066be3
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0000000000066bcc
- (id)init;	// IMP=0x0000000000066b0e
- (id)synchronousRemoteObjectProxyForContactsXPCService;	// IMP=0x00000000000a5d74
- (id)verifyIndexWithError:(id *)arg1;	// IMP=0x00000000000a5a68
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000000a59ae
@property(readonly, nonatomic) CNiOSAddressBook *addressBook;
@property(readonly, nonatomic) CNiOSAddressBookDataMapper *iOSMapper;
- (_Bool)setDefaultContainer:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c9b3e
- (id)labeledValueFromMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3;	// IMP=0x00000000000e84c9
- (int)multiValueIdentifierFromLabeledValue:(id)arg1;	// IMP=0x00000000000e84b4
- (void *)personFromContact:(id)arg1;	// IMP=0x00000000000e81fb
- (id)contactIdentifierFromPersonID:(int)arg1;	// IMP=0x00000000000e8113
- (id)contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;	// IMP=0x00000000000e8101
- (id)_contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;	// IMP=0x00000000000e7ee6
- (id)contactFromPerson:(void *)arg1 keysToFetch:(id)arg2 mutable:(_Bool)arg3;	// IMP=0x00000000000e7ecd
- (id)contactFromPerson:(void *)arg1 keysToFetch:(id)arg2;	// IMP=0x00000000000e7eb1
- (id)contactFromPersonID:(int)arg1;	// IMP=0x00000000000e7d7c
- (id)contactFromPerson:(void *)arg1 mutable:(_Bool)arg2;	// IMP=0x00000000000e7c3e
- (id)contactFromPerson:(void *)arg1;	// IMP=0x00000000000e7c2a
- (id)contactIdentifierFromPublicPersonID:(int)arg1;	// IMP=0x00000000000e867e
- (id)contactFromPublicPersonID:(int)arg1 keysToFetch:(id)arg2;	// IMP=0x00000000000e866c
- (id)labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3;	// IMP=0x00000000000e8648
- (int)publicMultiValueIdentifierFromLabeledValue:(id)arg1;	// IMP=0x00000000000e8636
- (void *)publicABPersonFromContact:(id)arg1 publicAddressBook:(const void **)arg2;	// IMP=0x00000000000e8624
- (id)contactFromPublicABPerson:(void *)arg1 keysToFetch:(id)arg2;	// IMP=0x00000000000e8612
- (id)contactsMatchingPropertiesOfContact:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000f58a9
- (id)_executeFetchRequestsWithInfos:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000f551a
- (id)_fetchRequestInfosForEmailOrPhoneForContact:(id)arg1;	// IMP=0x00000000000f51a6
- (id)_labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3;	// IMP=0x0000000000104703
- (int)_publicMultiValueIdentifierFromLabeledValue:(id)arg1;	// IMP=0x00000000001046be
- (void *)_publicABPersonFromContact:(id)arg1 publicAddressBook:(const void **)arg2;	// IMP=0x000000000010466a
- (id)_contactFromPublicABPerson:(void *)arg1 keysToFetch:(id)arg2;	// IMP=0x0000000000104565
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001254da

@end
