//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelGenre, NSDate;

@interface MPModelArtist
{
}

+ (id)__classicalExperienceAvailable_KEY;	// IMP=0x0000000000087cfa
+ (id)__libraryAddedDate_KEY;	// IMP=0x0000000000087ced
+ (id)__albumCount_KEY;	// IMP=0x0000000000087ce0
+ (id)__songCount_KEY;	// IMP=0x0000000000087cd3
+ (id)__genre_KEY;	// IMP=0x0000000000087cc6
+ (id)__editorialArtworkCatalogBlock_KEY;	// IMP=0x0000000000087cb9
+ (id)__artworkCatalogBlock_KEY;	// IMP=0x0000000000087cac
+ (id)__hasBiography_KEY;	// IMP=0x0000000000087c9f
+ (id)kindWithAlbumKind:(id)arg1;	// IMP=0x0000000000087c86
+ (long long)genericObjectType;	// IMP=0x000000000020b85a
- (id)editorialArtworkCatalog;	// IMP=0x0000000000087c2e
- (id)artworkCatalog;	// IMP=0x0000000000087bd6

// Remaining properties
@property(nonatomic) long long albumCount; // @dynamic albumCount;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(nonatomic, getter=isClassicalExperienceAvailable) _Bool classicalExperienceAvailable; // @dynamic classicalExperienceAvailable;
@property(copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @dynamic editorialArtworkCatalogBlock;
@property(copy, nonatomic) MPModelGenre *genre; // @dynamic genre;
@property(nonatomic) _Bool hasBiography; // @dynamic hasBiography;
@property(copy, nonatomic) NSDate *libraryAddedDate; // @dynamic libraryAddedDate;
@property(nonatomic) long long songCount; // @dynamic songCount;

@end
