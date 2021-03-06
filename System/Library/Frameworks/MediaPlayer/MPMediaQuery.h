//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPPProtobufferCoding-Protocol.h>
#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPMediaItemCollection, MPMediaLibrary, MPMediaPlaylist, MPMediaQueryCriteria, MPMediaQuerySectionInfo, NSArray, NSDictionary, NSSet, NSString;

@interface MPMediaQuery : NSObject <MPPProtobufferCoding, NSSecureCoding, NSCopying>
{
    MPMediaLibrary *_mediaLibrary;	// 8 = 0x8
    MPMediaQueryCriteria *_criteria;	// 16 = 0x10
    int _isFilteringDisabled;	// 24 = 0x18
    NSArray *_staticEntities;	// 32 = 0x20
    long long _staticEntityType;	// 40 = 0x28
}

+ (id)playlistsRecentlyAddedQuery;	// IMP=0x00000000000ba561
+ (id)geniusMixesQuery;	// IMP=0x00000000000ba43d
+ (id)videoPodcastsQuery;	// IMP=0x00000000000ba369
+ (id)audioPodcastsQuery;	// IMP=0x00000000000ba2bd
+ (id)movieRentalsQuery;	// IMP=0x00000000000ba1d1
+ (id)moviesQuery;	// IMP=0x00000000000ba0b1
+ (id)homeVideosQuery;	// IMP=0x00000000000b9fdd
+ (id)tvShowsQuery;	// IMP=0x00000000000b9f09
+ (id)musicVideosQuery;	// IMP=0x00000000000b9e5d
+ (id)videosQuery;	// IMP=0x00000000000b9d89
+ (id)albumArtistsQuery;	// IMP=0x00000000000b9ccb
+ (_Bool)isFilteringDisabled;	// IMP=0x00000000000b9c2d
+ (void)setFilteringDisabled:(_Bool)arg1;	// IMP=0x00000000000b9b2e
+ (void)initFilteringDisabled;	// IMP=0x00000000000b9b0a
+ (id)genresQuery;	// IMP=0x00000000000b9a48
+ (id)composersQuery;	// IMP=0x00000000000b9986
+ (id)compilationsQuery;	// IMP=0x00000000000b9888
+ (id)audibleAudiobooksQuery;	// IMP=0x00000000000b97db
+ (id)audiobooksQuery;	// IMP=0x00000000000b96de
+ (id)videoITunesUQuery;	// IMP=0x00000000000b95f3
+ (id)ITunesUAudioQuery;	// IMP=0x00000000000b949d
+ (id)ITunesUQuery;	// IMP=0x00000000000b93b2
+ (id)podcastsQuery;	// IMP=0x00000000000b92c7
+ (id)playlistsQuery;	// IMP=0x00000000000b928f
+ (id)songsQuery;	// IMP=0x00000000000b91cd
+ (id)artistsQuery;	// IMP=0x00000000000b90cf
+ (id)albumsQuery;	// IMP=0x00000000000b900d
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b9005
+ (void)initialize;	// IMP=0x00000000000b8ff4
+ (id)playbackHistoryPlaylist;	// IMP=0x00000000001702eb
+ (id)currentDevicePurchasesPlaylist;	// IMP=0x000000000017020b
+ (id)activeGeniusPlaylist;	// IMP=0x000000000016ff96
- (void).cxx_destruct;	// IMP=0x00000000000b72dc
- (void)setCriteria:(id)arg1;	// IMP=0x00000000000b72a2
- (id)criteria;	// IMP=0x00000000000b7294
- (unsigned long long)_playlistItemPersistentIDForItemPersistentID:(unsigned long long)arg1;	// IMP=0x00000000000b7048
@property(readonly, nonatomic, getter=isPlaylistItemsQuery) _Bool playlistItemsQuery;
- (void)setStaticEntities:(id)arg1 entityType:(long long)arg2;	// IMP=0x00000000000b6f7c
- (void)_enumerateCollectionsInOrder:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b6e27
- (void)_enumerateCollectionPersistentIDsInOrder:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b6d49
- (void)_enumerateUnorderedCollectionPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6d32
- (void)_enumerateCollectionPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6d18
- (void)_enumerateUnorderedCollectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6d01
- (void)_enumerateCollectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6ce7
- (void)_enumerateItemPersistentIDsInOrder:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b6c09
- (void)_enumerateItemsInOrder:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b6ad1
- (void)_enumerateUnorderedItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6aba
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6aa0
- (void)_enumerateUnorderedItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6a89
- (void)_enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6a6f
- (_Bool)_isFilteringDisabled;	// IMP=0x00000000000b6a47
- (id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2;	// IMP=0x00000000000b6a2f
- (id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2;	// IMP=0x00000000000b6a1a
- (id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(long long)arg3;	// IMP=0x00000000000b6605
@property(readonly, nonatomic) NSArray *collectionSections;
@property(readonly, nonatomic) NSArray *itemSections;
@property(readonly, nonatomic) _Bool willGroupEntities;
- (unsigned long long)groupingThreshold;	// IMP=0x00000000000b64c4
@property(readonly, nonatomic) _Bool specifiesPlaylistItems;
@property(readonly, nonatomic) _Bool excludesEntitiesWithBlankNames;
@property(nonatomic) _Bool useSections;
@property(nonatomic) _Bool sortItems;
@property(readonly, nonatomic) long long _representativeCollectionGroupingType;
@property(readonly, nonatomic) MPMediaItemCollection *_representativeCollection;
- (void)_getRepresentativeCollectionGrouping:(long long *)arg1 propertyPredicate:(id *)arg2;	// IMP=0x00000000000b5faf
@property(copy, nonatomic, getter=_orderingDirectionMappings, setter=_setOrderingDirectionMappings:) NSDictionary *orderingDirectionMappings;
@property(copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray *orderingProperties;
@property(readonly, nonatomic) MPMediaQuerySectionInfo *collectionSectionInfo;
@property(readonly, nonatomic) MPMediaQuerySectionInfo *itemSectionInfo;
@property(readonly, nonatomic) NSArray *collectionPersistentIdentifiers;
@property(readonly, nonatomic) NSArray *itemPersistentIdentifiers;
@property(readonly, nonatomic) unsigned long long _countOfCollections;
@property(readonly, nonatomic) unsigned long long _countOfItems;
@property(readonly, nonatomic) _Bool _hasStaticEntities;
@property(readonly, nonatomic) _Bool _hasCollections;
@property(readonly, nonatomic) _Bool _hasItems;
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;
@property(nonatomic) _Bool ignoreRestrictionsPredicates;
@property(nonatomic) _Bool ignoreSystemFilterPredicates;
@property(nonatomic) _Bool includeEntitiesWithBlankNames;
@property(nonatomic) _Bool shouldIncludeNonLibraryEntities;
@property(nonatomic) unsigned long long entityLimit;
@property(nonatomic) long long groupingType;
@property(readonly, nonatomic) NSArray *collections;
@property(readonly, nonatomic) NSArray *items;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary;
- (void)removeFilterPredicate:(id)arg1;	// IMP=0x00000000000b56c0
- (void)addFilterPredicate:(id)arg1;	// IMP=0x00000000000b5598
@property(retain, nonatomic) NSSet *filterPredicates;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;	// IMP=0x00000000000b50eb
- (id)protobufferEncodableObject;	// IMP=0x00000000000b50d7
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;	// IMP=0x00000000000b473c
- (id)initWithProtobufferDecodableObject:(id)arg1;	// IMP=0x00000000000b4728
- (id)copyBySanitizingStaticEntities;	// IMP=0x00000000000b446f
- (id)copyByRemovingStaticEntities;	// IMP=0x00000000000b4410
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b43a1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b4147
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b3eaf
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b3dc9
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000000000b3c91
- (id)initWithEntities:(id)arg1 entityType:(long long)arg2;	// IMP=0x00000000000b3c22
- (id)initWithCriteria:(id)arg1 library:(id)arg2;	// IMP=0x00000000000b3b92
- (id)initWithFilterPredicates:(id)arg1 library:(id)arg2;	// IMP=0x00000000000b3b33
- (id)initWithFilterPredicates:(id)arg1;	// IMP=0x00000000000b3a74
@property(readonly, nonatomic) MPMediaItemCollection *collectionByJoiningCollections;
- (_Bool)_updatePredicateForProperty:(id)arg1 withPropertyPredicate:(id)arg2;	// IMP=0x000000000016fe62
- (void)setFilterPropertyPredicate:(id)arg1;	// IMP=0x000000000016fdea
- (void)setFilterPredicate:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000016fd90
- (void)removePredicatesForProperty:(id)arg1;	// IMP=0x000000000016fb89
- (id)predicateForProperty:(id)arg1;	// IMP=0x000000000016f996
@property(readonly, nonatomic) MPMediaPlaylist *containingPlaylist;
- (id)MPSD_mediaQueryForDownloadingEntities;	// IMP=0x0000000000305328
- (id)MPSD_mediaQueryForDownloadableEntities;	// IMP=0x0000000000304d7c
- (_Bool)MPSD_hasDownloadingEntities;	// IMP=0x0000000000304d38
- (_Bool)MPSD_hasDownloadableEntities;	// IMP=0x0000000000304cf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

