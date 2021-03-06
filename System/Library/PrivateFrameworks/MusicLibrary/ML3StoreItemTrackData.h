//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDateFormatter;

@interface ML3StoreItemTrackData : NSObject
{
    NSArray *_lookupItems;	// 8 = 0x8
    NSData *_trackData;	// 16 = 0x10
    NSArray *_parsedStoreItemsImportProperties;	// 24 = 0x18
    NSDateFormatter *_storePlatformDateFormatter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000011b7fc
- (id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2;	// IMP=0x000000000011b442
- (id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1;	// IMP=0x000000000011b3cf
- (id)_bestAlbumArtworkImageURLFromStoreArtworkVariants:(id)arg1;	// IMP=0x000000000011b35c
- (_Bool)_platformMetadataItemIsMovieKind:(id)arg1;	// IMP=0x000000000011b2f5
- (_Bool)_platformMetadataItemIsTVShowKind:(id)arg1;	// IMP=0x000000000011b28e
- (_Bool)_platformMetadataItemIsVideoKind:(id)arg1;	// IMP=0x000000000011b22e
- (_Bool)_platformMetadataItemIsAUCVideoKind:(id)arg1;	// IMP=0x000000000011b1c7
- (_Bool)_platformMetadataItemIsAUCAudioKind:(id)arg1;	// IMP=0x000000000011b160
- (_Bool)_platformMetadataItemIsAUCKind:(id)arg1;	// IMP=0x000000000011b100
- (_Bool)_platformMetadataItemIsMusicVideoKind:(id)arg1;	// IMP=0x000000000011b099
- (_Bool)_platformMetadataItemIsSongKind:(id)arg1;	// IMP=0x000000000011b032
- (_Bool)_platformMetadataItemIsMusicKind:(id)arg1;	// IMP=0x000000000011afd2
- (_Bool)_platformMetadataItem:(id)arg1 matchesKind:(id)arg2;	// IMP=0x000000000011af12
- (id)_allSongItemsFromCollectionLookupItem:(id)arg1;	// IMP=0x000000000011a682
- (id)_allSongItemsFromLookupItems:(id)arg1;	// IMP=0x000000000011a4c3
- (double)_songDurationFromOffersArray:(id)arg1;	// IMP=0x000000000011a1c2
- (id)_lookupItemArtworksForArtworkDictionaries:(id)arg1;	// IMP=0x0000000000119f40
- (long long)_episodeTypeFromVideoSubTypeString:(id)arg1;	// IMP=0x0000000000119e61
- (id)_artworkTokenForItemWithCollectionID:(long long)arg1 itemID:(long long)arg2;	// IMP=0x0000000000119dbb
- (id)_artworkTokenFromLookupItem:(id)arg1;	// IMP=0x0000000000119d48
- (id)_importDictionaryForLookupItem:(id)arg1 parentCollectionCache:(id)arg2;	// IMP=0x0000000000117e69
- (id)_parentDictForItemAlbumId:(id)arg1;	// IMP=0x0000000000117bb9
- (id)_storeItemsImportPropertiesFromTrackData:(id)arg1;	// IMP=0x0000000000117a6f
- (id)_storeItemsImportPropertiesFromLookupItems:(id)arg1;	// IMP=0x00000000001176a9
- (id)_storePlatformDateFormatter;	// IMP=0x0000000000117656
@property(readonly, nonatomic) unsigned long long trackCount;
@property(readonly, nonatomic) NSArray *parsedStoreItemsImportProperties;
@property(readonly, nonatomic) NSData *trackData;
- (id)initWithTrackData:(id)arg1;	// IMP=0x000000000011745e
- (id)initWithLookupItems:(id)arg1;	// IMP=0x00000000001173eb

@end

