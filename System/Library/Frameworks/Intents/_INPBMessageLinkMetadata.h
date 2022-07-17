//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBMessageLinkMetadata-Protocol.h>

@class NSArray, NSString, _INPBDateTime;

@interface _INPBMessageLinkMetadata : PBCodable <_INPBMessageLinkMetadata, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int linkMediaType:1;
    } _has;	// 8 = 0x8
    int _linkMediaType;	// 12 = 0xc
    NSString *_albumArtist;	// 16 = 0x10
    NSString *_albumName;	// 24 = 0x18
    NSString *_appleTvSubtitle;	// 32 = 0x20
    NSString *_appleTvTitle;	// 40 = 0x28
    NSString *_artistGenre;	// 48 = 0x30
    NSString *_artistName;	// 56 = 0x38
    NSString *_audioBookAuthor;	// 64 = 0x40
    NSString *_audioBookName;	// 72 = 0x48
    NSString *_audioBookNarrator;	// 80 = 0x50
    NSString *_bookAuthor;	// 88 = 0x58
    NSString *_bookName;	// 96 = 0x60
    NSString *_creator;	// 104 = 0x68
    NSString *_iTunesStoreFrontIdentifier;	// 112 = 0x70
    NSString *_iTunesStoreIdentifier;	// 120 = 0x78
    NSArray *_iconURLs;	// 128 = 0x80
    NSArray *_imageURLs;	// 136 = 0x88
    NSString *_itemType;	// 144 = 0x90
    NSString *_movieBundleGenre;	// 152 = 0x98
    NSString *_movieBundleName;	// 160 = 0xa0
    NSString *_movieGenre;	// 168 = 0xa8
    NSString *_movieName;	// 176 = 0xb0
    NSString *_musicVideoArtist;	// 184 = 0xb8
    NSString *_musicVideoName;	// 192 = 0xc0
    NSString *_originalURL;	// 200 = 0xc8
    NSString *_playlistCurator;	// 208 = 0xd0
    NSString *_playlistName;	// 216 = 0xd8
    NSString *_podcastArtist;	// 224 = 0xe0
    NSString *_podcastEpisodeArtist;	// 232 = 0xe8
    NSString *_podcastEpisodeName;	// 240 = 0xf0
    NSString *_podcastEpisodePodcastName;	// 248 = 0xf8
    _INPBDateTime *_podcastEpisodeReleaseDate;	// 256 = 0x100
    NSString *_podcastName;	// 264 = 0x108
    NSString *_radioCurator;	// 272 = 0x110
    NSString *_radioName;	// 280 = 0x118
    NSString *_siteName;	// 288 = 0x120
    NSString *_softwareGenre;	// 296 = 0x128
    NSString *_softwareName;	// 304 = 0x130
    NSString *_softwarePlatform;	// 312 = 0x138
    NSString *_songAlbum;	// 320 = 0x140
    NSString *_songArtist;	// 328 = 0x148
    NSString *_songTitle;	// 336 = 0x150
    NSString *_summary;	// 344 = 0x158
    NSString *_title;	// 352 = 0x160
    NSString *_tvEpisodeEpisodeName;	// 360 = 0x168
    NSString *_tvEpisodeGenre;	// 368 = 0x170
    NSString *_tvEpisodeSeasonName;	// 376 = 0x178
    NSString *_tvSeasonGenre;	// 384 = 0x180
    NSString *_tvSeasonName;	// 392 = 0x188
    NSString *_tvShowName;	// 400 = 0x190
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000037bf7c
- (void).cxx_destruct;	// IMP=0x000000000037ae0f
@property(copy, nonatomic) NSString *tvShowName; // @synthesize tvShowName=_tvShowName;
@property(copy, nonatomic) NSString *tvSeasonName; // @synthesize tvSeasonName=_tvSeasonName;
@property(copy, nonatomic) NSString *tvSeasonGenre; // @synthesize tvSeasonGenre=_tvSeasonGenre;
@property(copy, nonatomic) NSString *tvEpisodeSeasonName; // @synthesize tvEpisodeSeasonName=_tvEpisodeSeasonName;
@property(copy, nonatomic) NSString *tvEpisodeGenre; // @synthesize tvEpisodeGenre=_tvEpisodeGenre;
@property(copy, nonatomic) NSString *tvEpisodeEpisodeName; // @synthesize tvEpisodeEpisodeName=_tvEpisodeEpisodeName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *songTitle; // @synthesize songTitle=_songTitle;
@property(copy, nonatomic) NSString *songArtist; // @synthesize songArtist=_songArtist;
@property(copy, nonatomic) NSString *songAlbum; // @synthesize songAlbum=_songAlbum;
@property(copy, nonatomic) NSString *softwarePlatform; // @synthesize softwarePlatform=_softwarePlatform;
@property(copy, nonatomic) NSString *softwareName; // @synthesize softwareName=_softwareName;
@property(copy, nonatomic) NSString *softwareGenre; // @synthesize softwareGenre=_softwareGenre;
@property(copy, nonatomic) NSString *siteName; // @synthesize siteName=_siteName;
@property(copy, nonatomic) NSString *radioName; // @synthesize radioName=_radioName;
@property(copy, nonatomic) NSString *radioCurator; // @synthesize radioCurator=_radioCurator;
@property(copy, nonatomic) NSString *podcastName; // @synthesize podcastName=_podcastName;
@property(retain, nonatomic) _INPBDateTime *podcastEpisodeReleaseDate; // @synthesize podcastEpisodeReleaseDate=_podcastEpisodeReleaseDate;
@property(copy, nonatomic) NSString *podcastEpisodePodcastName; // @synthesize podcastEpisodePodcastName=_podcastEpisodePodcastName;
@property(copy, nonatomic) NSString *podcastEpisodeName; // @synthesize podcastEpisodeName=_podcastEpisodeName;
@property(copy, nonatomic) NSString *podcastEpisodeArtist; // @synthesize podcastEpisodeArtist=_podcastEpisodeArtist;
@property(copy, nonatomic) NSString *podcastArtist; // @synthesize podcastArtist=_podcastArtist;
@property(copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(copy, nonatomic) NSString *playlistCurator; // @synthesize playlistCurator=_playlistCurator;
@property(copy, nonatomic) NSString *originalURL; // @synthesize originalURL=_originalURL;
@property(copy, nonatomic) NSString *musicVideoName; // @synthesize musicVideoName=_musicVideoName;
@property(copy, nonatomic) NSString *musicVideoArtist; // @synthesize musicVideoArtist=_musicVideoArtist;
@property(copy, nonatomic) NSString *movieName; // @synthesize movieName=_movieName;
@property(copy, nonatomic) NSString *movieGenre; // @synthesize movieGenre=_movieGenre;
@property(copy, nonatomic) NSString *movieBundleName; // @synthesize movieBundleName=_movieBundleName;
@property(copy, nonatomic) NSString *movieBundleGenre; // @synthesize movieBundleGenre=_movieBundleGenre;
@property(nonatomic) int linkMediaType; // @synthesize linkMediaType=_linkMediaType;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(copy, nonatomic) NSArray *iconURLs; // @synthesize iconURLs=_iconURLs;
@property(copy, nonatomic) NSString *iTunesStoreIdentifier; // @synthesize iTunesStoreIdentifier=_iTunesStoreIdentifier;
@property(copy, nonatomic) NSString *iTunesStoreFrontIdentifier; // @synthesize iTunesStoreFrontIdentifier=_iTunesStoreFrontIdentifier;
@property(copy, nonatomic) NSString *creator; // @synthesize creator=_creator;
@property(copy, nonatomic) NSString *bookName; // @synthesize bookName=_bookName;
@property(copy, nonatomic) NSString *bookAuthor; // @synthesize bookAuthor=_bookAuthor;
@property(copy, nonatomic) NSString *audioBookNarrator; // @synthesize audioBookNarrator=_audioBookNarrator;
@property(copy, nonatomic) NSString *audioBookName; // @synthesize audioBookName=_audioBookName;
@property(copy, nonatomic) NSString *audioBookAuthor; // @synthesize audioBookAuthor=_audioBookAuthor;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *artistGenre; // @synthesize artistGenre=_artistGenre;
@property(copy, nonatomic) NSString *appleTvTitle; // @synthesize appleTvTitle=_appleTvTitle;
@property(copy, nonatomic) NSString *appleTvSubtitle; // @synthesize appleTvSubtitle=_appleTvSubtitle;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *albumArtist; // @synthesize albumArtist=_albumArtist;
- (id)dictionaryRepresentation;	// IMP=0x0000000000379574
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000037600b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003754f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000375464
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000375365
- (void)writeTo:(id)arg1;	// IMP=0x00000000003744f5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003744e8
@property(readonly, nonatomic) _Bool hasTvShowName;
@property(readonly, nonatomic) _Bool hasTvSeasonName;
@property(readonly, nonatomic) _Bool hasTvSeasonGenre;
@property(readonly, nonatomic) _Bool hasTvEpisodeSeasonName;
@property(readonly, nonatomic) _Bool hasTvEpisodeGenre;
@property(readonly, nonatomic) _Bool hasTvEpisodeEpisodeName;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasSummary;
@property(readonly, nonatomic) _Bool hasSongTitle;
@property(readonly, nonatomic) _Bool hasSongArtist;
@property(readonly, nonatomic) _Bool hasSongAlbum;
@property(readonly, nonatomic) _Bool hasSoftwarePlatform;
@property(readonly, nonatomic) _Bool hasSoftwareName;
@property(readonly, nonatomic) _Bool hasSoftwareGenre;
@property(readonly, nonatomic) _Bool hasSiteName;
@property(readonly, nonatomic) _Bool hasRadioName;
@property(readonly, nonatomic) _Bool hasRadioCurator;
@property(readonly, nonatomic) _Bool hasPodcastName;
@property(readonly, nonatomic) _Bool hasPodcastEpisodeReleaseDate;
@property(readonly, nonatomic) _Bool hasPodcastEpisodePodcastName;
@property(readonly, nonatomic) _Bool hasPodcastEpisodeName;
@property(readonly, nonatomic) _Bool hasPodcastEpisodeArtist;
@property(readonly, nonatomic) _Bool hasPodcastArtist;
@property(readonly, nonatomic) _Bool hasPlaylistName;
@property(readonly, nonatomic) _Bool hasPlaylistCurator;
@property(readonly, nonatomic) _Bool hasOriginalURL;
@property(readonly, nonatomic) _Bool hasMusicVideoName;
@property(readonly, nonatomic) _Bool hasMusicVideoArtist;
@property(readonly, nonatomic) _Bool hasMovieName;
@property(readonly, nonatomic) _Bool hasMovieGenre;
@property(readonly, nonatomic) _Bool hasMovieBundleName;
@property(readonly, nonatomic) _Bool hasMovieBundleGenre;
- (int)StringAsLinkMediaType:(id)arg1;	// IMP=0x0000000000373960
- (id)linkMediaTypeAsString:(int)arg1;	// IMP=0x000000000037376b
@property(nonatomic) _Bool hasLinkMediaType;
@property(readonly, nonatomic) _Bool hasItemType;
- (id)imageURLAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003736ab
@property(readonly, nonatomic) unsigned long long imageURLsCount;
- (void)addImageURL:(id)arg1;	// IMP=0x0000000000373614
- (void)clearImageURLs;	// IMP=0x00000000003735f7
- (id)iconURLAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003735a6
@property(readonly, nonatomic) unsigned long long iconURLsCount;
- (void)addIconURL:(id)arg1;	// IMP=0x000000000037350f
- (void)clearIconURLs;	// IMP=0x00000000003734f2
@property(readonly, nonatomic) _Bool hasITunesStoreIdentifier;
@property(readonly, nonatomic) _Bool hasITunesStoreFrontIdentifier;
@property(readonly, nonatomic) _Bool hasCreator;
@property(readonly, nonatomic) _Bool hasBookName;
@property(readonly, nonatomic) _Bool hasBookAuthor;
@property(readonly, nonatomic) _Bool hasAudioBookNarrator;
@property(readonly, nonatomic) _Bool hasAudioBookName;
@property(readonly, nonatomic) _Bool hasAudioBookAuthor;
@property(readonly, nonatomic) _Bool hasArtistName;
@property(readonly, nonatomic) _Bool hasArtistGenre;
@property(readonly, nonatomic) _Bool hasAppleTvTitle;
@property(readonly, nonatomic) _Bool hasAppleTvSubtitle;
@property(readonly, nonatomic) _Bool hasAlbumName;
@property(readonly, nonatomic) _Bool hasAlbumArtist;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
