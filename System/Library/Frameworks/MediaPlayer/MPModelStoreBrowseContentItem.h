//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelAlbum, MPModelArtist, MPModelCurator, MPModelMediaClip, MPModelMovie, MPModelPlaylist, MPModelRadioStation, MPModelRecordLabel, MPModelSocialPerson, MPModelSong, MPModelTVEpisode, MPModelTVSeason, MPModelTVShow, MPModelTVShowCreator, NSString;

@interface MPModelStoreBrowseContentItem
{
}

+ (id)requiredStoreLibraryPersonalizationProperties;	// IMP=0x0000000000187a87
+ (id)__recordLabel_KEY;	// IMP=0x0000000000187a7a
+ (id)__showCreator_KEY;	// IMP=0x0000000000187a6d
+ (id)__show_KEY;	// IMP=0x0000000000187a60
+ (id)__season_KEY;	// IMP=0x0000000000187a53
+ (id)__episode_KEY;	// IMP=0x0000000000187a46
+ (id)__song_KEY;	// IMP=0x0000000000187a39
+ (id)__socialPerson_KEY;	// IMP=0x0000000000187a2c
+ (id)__radioStation_KEY;	// IMP=0x0000000000187a1f
+ (id)__playlist_KEY;	// IMP=0x0000000000187a12
+ (id)__movie_KEY;	// IMP=0x0000000000187a05
+ (id)__mediaClip_KEY;	// IMP=0x00000000001879f8
+ (id)__curator_KEY;	// IMP=0x00000000001879eb
+ (id)__artist_KEY;	// IMP=0x00000000001879de
+ (id)__album_KEY;	// IMP=0x00000000001879d1
+ (id)__artistUploadedContentType_KEY;	// IMP=0x00000000001879c4
+ (id)__detailedItemType_KEY;	// IMP=0x00000000001879b7
+ (id)__itemType_KEY;	// IMP=0x00000000001879aa
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;	// IMP=0x0000000000188304
- (id)relativeModelObjectForStoreLibraryPersonalization;	// IMP=0x00000000001882b4
- (id)personalizationScopedPropertiesForProperties:(id)arg1;	// IMP=0x0000000000188158
- (id)innerObject;	// IMP=0x000000000018804e

// Remaining properties
@property(retain, nonatomic) MPModelAlbum *album; // @dynamic album;
@property(retain, nonatomic) MPModelArtist *artist; // @dynamic artist;
@property(copy, nonatomic) NSString *artistUploadedContentType; // @dynamic artistUploadedContentType;
@property(retain, nonatomic) MPModelCurator *curator; // @dynamic curator;
@property(nonatomic) long long detailedItemType; // @dynamic detailedItemType;
@property(retain, nonatomic) MPModelTVEpisode *episode; // @dynamic episode;
@property(nonatomic) unsigned long long itemType; // @dynamic itemType;
@property(retain, nonatomic) MPModelMediaClip *mediaClip; // @dynamic mediaClip;
@property(retain, nonatomic) MPModelMovie *movie; // @dynamic movie;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @dynamic radioStation;
@property(retain, nonatomic) MPModelRecordLabel *recordLabel; // @dynamic recordLabel;
@property(retain, nonatomic) MPModelTVSeason *season; // @dynamic season;
@property(retain, nonatomic) MPModelTVShow *show; // @dynamic show;
@property(retain, nonatomic) MPModelTVShowCreator *showCreator; // @dynamic showCreator;
@property(retain, nonatomic) MPModelSocialPerson *socialPerson; // @dynamic socialPerson;
@property(retain, nonatomic) MPModelSong *song; // @dynamic song;

@end

