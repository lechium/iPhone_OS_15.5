//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ABSAddressBookContextStorage, ABSBulkFaultHandler, ABSChangeCallbacks, CNContactStore, CNFuture;

@interface ABSAddressBook : NSObject
{
    ABSAddressBookContextStorage *_contacts;	// 8 = 0x8
    ABSChangeCallbacks *_changeCallbacks;	// 16 = 0x10
    CNFuture *_storeFuture;	// 24 = 0x18
    ABSBulkFaultHandler *_faultHandler;	// 32 = 0x20
    ABSAddressBookContextStorage *_groups;	// 40 = 0x28
    ABSAddressBookContextStorage *_sources;	// 48 = 0x30
}

+ (void)callLocalChangeCallbacks:(_Bool)arg1;	// IMP=0x00000000000187f1
+ (void)requestAccessWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000186af
+ (long long)authorizationStatus;	// IMP=0x000000000001867e
+ (id)localizedLabelForLabel:(id)arg1;	// IMP=0x000000000001355f
+ (_Bool)eraseAllDataAtLocationName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011765
+ (void)ABInitialize;	// IMP=0x0000000000011329
+ (void)initialize;	// IMP=0x00000000000112e2
- (void).cxx_destruct;	// IMP=0x0000000000018a27
@property(retain, nonatomic) ABSAddressBookContextStorage *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) ABSAddressBookContextStorage *groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) ABSBulkFaultHandler *faultHandler; // @synthesize faultHandler=_faultHandler;
@property(readonly, nonatomic) CNFuture *storeFuture; // @synthesize storeFuture=_storeFuture;
@property(readonly) ABSChangeCallbacks *changeCallbacks; // @synthesize changeCallbacks=_changeCallbacks;
@property(retain, nonatomic) ABSAddressBookContextStorage *contacts; // @synthesize contacts=_contacts;
- (int)saveSequenceCount;	// IMP=0x000000000001896a
- (id)uniqueDatabaseVersionIdentifier;	// IMP=0x000000000001889c
- (id)groupsInSource:(id)arg1;	// IMP=0x00000000000184c5
- (void)updateFetchingAllPropertiesForGroups:(id)arg1;	// IMP=0x0000000000018052
- (id)groupWithRecordID:(int)arg1;	// IMP=0x0000000000017d93
- (long long)groupCount;	// IMP=0x0000000000017cfe
- (id)allGroups;	// IMP=0x00000000000177db
- (_Bool)removeMember:(id)arg1 fromGroup:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001766c
- (_Bool)addMember:(id)arg1 toGroup:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000017460
- (void)updateFetchingAllPropertiesForSources:(id)arg1;	// IMP=0x0000000000017142
- (id)sourceForRecord:(id)arg1;	// IMP=0x0000000000016f9b
- (id)localSource;	// IMP=0x0000000000016f12
- (id)defaultSource;	// IMP=0x0000000000016dd9
- (id)allSources;	// IMP=0x0000000000016dc5
- (id)sourceWithRecordID:(int)arg1;	// IMP=0x0000000000016d3e
- (id)_sourcesPreferringExistingRecordsFetchedWithPredicate:(id)arg1;	// IMP=0x0000000000016be3
- (_Bool)unlinkPerson:(id)arg1;	// IMP=0x0000000000016ab5
- (_Bool)linkPerson:(id)arg1 toPerson:(id)arg2;	// IMP=0x0000000000016944
- (id)peopleLinkedToPerson:(id)arg1;	// IMP=0x000000000001680c
- (id)mePerson;	// IMP=0x000000000001674d
- (id)peopleMatchingNameString:(id)arg1;	// IMP=0x0000000000016501
- (id)peopleInGroup:(id)arg1 sortOrder:(unsigned int)arg2;	// IMP=0x0000000000016216
- (id)peopleInSource:(id)arg1 sortOrder:(unsigned int)arg2;	// IMP=0x0000000000016110
- (id)_peoplePreferringExistingRecordsForFetchRequest:(id)arg1;	// IMP=0x0000000000015dcc
- (id)_resultRecordsFromFetchedCNImpls:(id)arg1 mergedWithStorage:(id)arg2 creationBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000159ad
- (void)completePerson:(id)arg1 withKeysToFetch:(id)arg2;	// IMP=0x0000000000015927
- (void)updatePeople:(id)arg1 refetchingProperties:(id)arg2;	// IMP=0x00000000000152d0
- (id)contactsWithIdentifiers:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0000000000015127
- (id)findPersonMatchingPhoneNumber:(id)arg1 country:(id)arg2;	// IMP=0x0000000000014fad
- (id)findPersonMatchingEmailAddress:(id)arg1;	// IMP=0x0000000000014eee
- (id)findPersonMatchingURL:(id)arg1;	// IMP=0x0000000000014e2f
- (id)personWithRecordID:(int)arg1;	// IMP=0x0000000000014a49
- (id)peopleWithCNIdentifiers:(id)arg1;	// IMP=0x000000000001408d
- (id)allPeople;	// IMP=0x0000000000013a65
- (long long)personCount;	// IMP=0x00000000000135f2
- (void)unregisterExternalChangeCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x000000000001350e
- (void)registerExternalChangeCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x0000000000013489
- (void)revert;	// IMP=0x00000000000133e1
@property(readonly) _Bool hasUnsavedChanges;
- (_Bool)save:(id *)arg1;	// IMP=0x0000000000011b2b
- (_Bool)removeRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011a57
- (_Bool)recordUpdated:(id)arg1;	// IMP=0x00000000000119af
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011891
- (id)_storageForRecordClass:(Class)arg1;	// IMP=0x00000000000117da
@property(readonly, nonatomic) CNContactStore *store;
- (unsigned long long)_cfTypeID;	// IMP=0x000000000001177e
- (id)initWithSettings:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011483
- (id)initWithOptions:(id)arg1 policy:(int)arg2 error:(id *)arg3;	// IMP=0x00000000000113f7
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011371
- (id)init;	// IMP=0x000000000001132f

@end

