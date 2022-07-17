//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSNumber, NSString;

@interface PLGenericAlbumJournalEntryPayload
{
}

+ (id)nonPersistedModelPropertiesDescription;	// IMP=0x00000000003419c6
+ (id)modelPropertiesDescription;	// IMP=0x0000000000341585
- (_Bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;	// IMP=0x0000000000341308
@property(readonly, nonatomic) NSString *importedByBundleIdentifier;
@property(readonly, nonatomic) NSDate *creationDate;
@property(retain, nonatomic) NSData *userQueryData;
@property(readonly, nonatomic) NSString *importSessionID;
@property(readonly, nonatomic) NSString *customKeyAssetUUID;
@property(readonly, nonatomic) int customSortKey;
@property(readonly, nonatomic) _Bool customSortAscending;
@property(readonly, nonatomic) _Bool isInTrash;
@property(readonly, nonatomic) _Bool isPrototype;
@property(readonly, nonatomic) _Bool isPinned;
@property(readonly, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *cloudGUID;
- (void)updateAlbum:(id)arg1 includePendingChanges:(_Bool)arg2;	// IMP=0x0000000000340c6d
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;	// IMP=0x0000000000340c65
- (void)appendAttributeKey:(id)arg1 value:(id)arg2 toDescriptionBuilder:(id)arg3;	// IMP=0x0000000000340b6c
- (_Bool)updatePayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 withManagedObject:(id)arg3 forPayloadProperty:(id)arg4;	// IMP=0x0000000000340998

@end
