//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXDatabase, NSString, NSURL;

@interface CXCallDirectoryStore : NSObject
{
    _Bool _temporary;	// 8 = 0x8
    CXDatabase *_database;	// 16 = 0x10
    long long _lastAddBlockingEntriesCount;	// 24 = 0x18
    NSString *_addBlockingEntriesInsertPhoneNumberBlockingEntrySQL;	// 32 = 0x20
    long long _lastRemoveBlockingEntriesCount;	// 40 = 0x28
    NSString *_removeBlockingEntriesSQL;	// 48 = 0x30
    long long _lastAddIdentificationEntriesCount;	// 56 = 0x38
    NSString *_addIdentificationEntriesInsertLabelsSQL;	// 64 = 0x40
    NSString *_addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL;	// 72 = 0x48
    long long _lastAddPhoneNumbersCount;	// 80 = 0x50
    NSString *_addPhoneNumbersSQL;	// 88 = 0x58
    long long _lastRemoveIdentificationEntriesCount;	// 96 = 0x60
    NSString *_removeIdentificationEntriesSQL;	// 104 = 0x68
}

+ (_Bool)initializeDatabaseIfNecessaryAtURL:(id)arg1 usingTemplateAtURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000153a8
+ (id)databaseTemplateURL;	// IMP=0x000000000001533d
+ (id)databaseURLUsingTemporaryDirectory:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000015137
- (void).cxx_destruct;	// IMP=0x000000000001aa14
@property(copy, nonatomic) NSString *removeIdentificationEntriesSQL; // @synthesize removeIdentificationEntriesSQL=_removeIdentificationEntriesSQL;
@property(nonatomic) long long lastRemoveIdentificationEntriesCount; // @synthesize lastRemoveIdentificationEntriesCount=_lastRemoveIdentificationEntriesCount;
@property(copy, nonatomic) NSString *addPhoneNumbersSQL; // @synthesize addPhoneNumbersSQL=_addPhoneNumbersSQL;
@property(nonatomic) long long lastAddPhoneNumbersCount; // @synthesize lastAddPhoneNumbersCount=_lastAddPhoneNumbersCount;
@property(copy, nonatomic) NSString *addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL; // @synthesize addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL=_addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL;
@property(copy, nonatomic) NSString *addIdentificationEntriesInsertLabelsSQL; // @synthesize addIdentificationEntriesInsertLabelsSQL=_addIdentificationEntriesInsertLabelsSQL;
@property(nonatomic) long long lastAddIdentificationEntriesCount; // @synthesize lastAddIdentificationEntriesCount=_lastAddIdentificationEntriesCount;
@property(copy, nonatomic) NSString *removeBlockingEntriesSQL; // @synthesize removeBlockingEntriesSQL=_removeBlockingEntriesSQL;
@property(nonatomic) long long lastRemoveBlockingEntriesCount; // @synthesize lastRemoveBlockingEntriesCount=_lastRemoveBlockingEntriesCount;
@property(copy, nonatomic) NSString *addBlockingEntriesInsertPhoneNumberBlockingEntrySQL; // @synthesize addBlockingEntriesInsertPhoneNumberBlockingEntrySQL=_addBlockingEntriesInsertPhoneNumberBlockingEntrySQL;
@property(nonatomic) long long lastAddBlockingEntriesCount; // @synthesize lastAddBlockingEntriesCount=_lastAddBlockingEntriesCount;
@property(nonatomic, getter=isTemporary) _Bool temporary; // @synthesize temporary=_temporary;
@property(retain, nonatomic) CXDatabase *database; // @synthesize database=_database;
- (_Bool)vacuumWithError:(id *)arg1;	// IMP=0x000000000001a89a
- (id)_sqlValuesListPlaceholderStringWithNumberOfEntries:(long long)arg1 entryString:(id)arg2;	// IMP=0x000000000001a7ec
- (id)_sqlStringListPlaceholderStringWithNumberOfEntries:(long long)arg1;	// IMP=0x000000000001a710
- (id)_storeIdentificationEntryWithExtensionBundleID:(id)arg1 localizedLabel:(id)arg2;	// IMP=0x000000000001a684
- (_Bool)_parseIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x000000000001a4bb
- (_Bool)_parseFirstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x000000000001a29c
- (id)_firstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001a163
- (id)_firstIdentificationEntryForSQL:(id)arg1 bindings:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001a017
- (id)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019f46
- (id)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019e4f
- (id)firstIdentificationEntriesForPhoneNumbers:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019d83
- (id)firstIdentificationEntryForPhoneNumber:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019cb8
- (_Bool)_containsBlockingEntryWithSQL:(id)arg1 bindings:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000019b40
- (_Bool)containsBlockingEntryForEnabledExtensionWithPhoneNumberInArray:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019a7b
- (_Bool)containsBlockingEntryForEnabledExtensionWithPhoneNumber:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000199c4
- (_Bool)containsBlockingEntryWithPhoneNumberInArray:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019904
- (_Bool)containsBlockingEntryWithPhoneNumber:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001984d
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00000000000197d0
- (_Bool)removeIdentificationEntriesForExtensionWithID:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000196eb
- (_Bool)_removeIdentificationEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id *)arg5;	// IMP=0x0000000000019460
- (_Bool)removeIdentificationEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000001923d
- (_Bool)_addPhoneNumbersWithEntryData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000018fd3
- (_Bool)_addIdentificationEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id *)arg5;	// IMP=0x0000000000018a6a
- (_Bool)addIdentificationEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000018847
- (long long)addLabel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001872d
- (long long)idForLabel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001856e
- (long long)idForPhoneNumber:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000018399
- (long long)idForExtensionWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000181da
- (long long)_findOrCreateIDForPhoneNumber:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000017fad
- (_Bool)addIdentificationEntryWithPhoneNumber:(long long)arg1 labelID:(long long)arg2 extensionID:(long long)arg3 error:(id *)arg4;	// IMP=0x0000000000017e3a
- (_Bool)removeBlockingEntriesForExtensionWithID:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000017d55
- (_Bool)_removeBlockingEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id *)arg5;	// IMP=0x0000000000017aca
- (_Bool)removeBlockingEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000000178a7
- (_Bool)_addBlockingEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id *)arg5;	// IMP=0x00000000000175dc
- (_Bool)addBlockingEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000000173b9
- (_Bool)addBlockingEntryWithPhoneNumber:(long long)arg1 extensionID:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000017343
- (id)_sqlBindingsForPrioritizedExtensionIdentifiers:(id)arg1 withPriorityOffset:(long long)arg2;	// IMP=0x0000000000017127
- (id)_sqlCaseMappingPlaceholderStringWithKeyColumnName:(id)arg1 defaultValue:(id)arg2 numberOfPairs:(unsigned long long)arg3;	// IMP=0x0000000000017055
- (_Bool)setPrioritizedExtensionIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000016d17
- (id)prioritizedExtensionIdentifiersWithError:(id *)arg1;	// IMP=0x0000000000016ba0
- (id)prioritizedExtensionsWithError:(id *)arg1;	// IMP=0x00000000000168b3
- (_Bool)_removeUnreferencedLabelsWithError:(id *)arg1;	// IMP=0x0000000000016859
- (_Bool)_removeUnreferencedPhoneNumbersWithError:(id *)arg1;	// IMP=0x00000000000167ff
- (_Bool)removeUnreferencedRecordsWithError:(id *)arg1;	// IMP=0x00000000000167c3
- (_Bool)setStateForAllExtensions:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000001668b
- (_Bool)setStateLastModifiedDate:(id)arg1 forExtensionWithID:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000000164ed
- (_Bool)setState:(long long)arg1 forExtensionWithID:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000016382
- (_Bool)setState:(long long)arg1 forExtensionWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000016224
- (_Bool)removeExtensionWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000160f0
- (long long)addExtensionWithIdentifier:(id)arg1 priority:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000015f8f
- (long long)addExtensionWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015e66
- (id)extensionWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015a8f
- (_Bool)containsExtensionWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000158d9
@property(readonly, nonatomic, getter=isCorrupt) _Bool corrupt;
- (long long)schemaVersionWithError:(id *)arg1;	// IMP=0x0000000000015694
@property(readonly, nonatomic) long long schemaVersion;
@property(readonly, nonatomic) NSURL *url;
- (id)description;	// IMP=0x000000000001505f
- (void)dealloc;	// IMP=0x0000000000014dd6
- (id)init;	// IMP=0x0000000000014dc8
- (id)initWithTemplateURL:(id)arg1 readOnly:(_Bool)arg2 temporary:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000014c70
- (id)initReadOnly:(_Bool)arg1 temporary:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000014be7
- (id)initForReadingAndWritingWithError:(id *)arg1;	// IMP=0x0000000000014bce
- (id)initForReadingWithError:(id *)arg1;	// IMP=0x0000000000014bb2

@end
