//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSSearchableIndex, NSString;

@interface ML3UpdateSpotlightIndexOperation
{
    CSSearchableIndex *_index;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    unsigned long long _bundle;	// 24 = 0x18
    unsigned long long _batchCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000189a42
@property(nonatomic) unsigned long long batchCount; // @synthesize batchCount=_batchCount;
@property(nonatomic) unsigned long long bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
- (_Bool)_verifyLibraryConnectionAndAttributesProperties:(id *)arg1;	// IMP=0x00000000001898d2
- (id)_queryForPlaylistsContainingMusicShowsMissedByQuery:(id)arg1 inContainerPIDs:(id)arg2;	// IMP=0x0000000000189300
- (id)_createSearchableItemsForPlaylistsWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000189085
- (id)_createSearchableItemsForTracksWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000188d27
- (id)_createSearchableItemsWithPersistentIDs:(id)arg1 entityType:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000001880ec
- (_Bool)_enumerateSearchableItemsWithPersistentIDs:(id)arg1 entityType:(long long)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000187c1e
- (_Bool)_batchIndexWithTrackPersistentIDsToUpdate:(id)arg1 playlistsPersistentIDsToUpdateSet:(id)arg2 entityStringsToDelete:(id)arg3 currentRevision:(id)arg4 targetRevision:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000187464
- (_Bool)_indexTracksWithPersistentIDs:(id)arg1 playlistsWithPersistentIDs:(id)arg2 error:(id *)arg3;	// IMP=0x000000000018711c
- (_Bool)_deleteIndexedItemsWithEntityStringIDs:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000186ebe
- (_Bool)_deleteAllIndexedItemsWithError:(id *)arg1;	// IMP=0x0000000000186cb6
- (_Bool)_indexItemsFromLibrarySinceRevision:(long long)arg1 targetRevision:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000001865fd
- (_Bool)_updateIndexedItemsWithIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001861ad
- (_Bool)_execute:(id *)arg1;	// IMP=0x0000000000185266
- (unsigned long long)type;	// IMP=0x000000000018525b

@end

