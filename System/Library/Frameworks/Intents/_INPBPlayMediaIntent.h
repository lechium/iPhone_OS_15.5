//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPlayMediaIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaItemValue, _INPBMediaSearch, _INPBPrivatePlayMediaIntentData, _INPBString, _INPBTimestamp;

@interface _INPBPlayMediaIntent : PBCodable <_INPBPlayMediaIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int parsecCategory:1;
        unsigned int playShuffled:1;
        unsigned int playbackQueueLocation:1;
        unsigned int playbackRepeatMode:1;
        unsigned int playbackSpeed:1;
        unsigned int resumePlayback:1;
    } _has;	// 8 = 0x8
    _Bool _playShuffled;	// 12 = 0xc
    _Bool _resumePlayback;	// 13 = 0xd
    int _parsecCategory;	// 16 = 0x10
    int _playbackQueueLocation;	// 20 = 0x14
    int _playbackRepeatMode;	// 24 = 0x18
    NSArray *_alternativeResults;	// 32 = 0x20
    NSArray *_audioSearchResults;	// 40 = 0x28
    _INPBString *_audiobookAuthor;	// 48 = 0x30
    _INPBString *_audiobookTitle;	// 56 = 0x38
    NSArray *_buckets;	// 64 = 0x40
    _INPBTimestamp *_expirationDate;	// 72 = 0x48
    NSArray *_hashedRouteUIDs;	// 80 = 0x50
    _INPBIntentMetadata *_intentMetadata;	// 88 = 0x58
    _INPBMediaItemValue *_mediaContainer;	// 96 = 0x60
    NSArray *_mediaItems;	// 104 = 0x68
    _INPBMediaSearch *_mediaSearch;	// 112 = 0x70
    _INPBString *_mediaUserContext;	// 120 = 0x78
    _INPBString *_musicArtistName;	// 128 = 0x80
    double _playbackSpeed;	// 136 = 0x88
    _INPBString *_playlistTitle;	// 144 = 0x90
    _INPBPrivatePlayMediaIntentData *_privatePlayMediaIntentData;	// 152 = 0x98
    NSString *_proxiedBundleIdentifier;	// 160 = 0xa0
    NSString *_recoID;	// 168 = 0xa8
    _INPBString *_showTitle;	// 176 = 0xb0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000021f0f1
+ (Class)mediaItemsType;	// IMP=0x000000000021f0e0
+ (Class)hashedRouteUIDsType;	// IMP=0x000000000021f0cf
+ (Class)bucketType;	// IMP=0x000000000021f0be
+ (Class)audioSearchResultsType;	// IMP=0x000000000021f0ad
+ (Class)alternativeResultsType;	// IMP=0x000000000021f09c
- (void).cxx_destruct;	// IMP=0x000000000021e360
@property(retain, nonatomic) _INPBString *showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) _Bool resumePlayback; // @synthesize resumePlayback=_resumePlayback;
@property(copy, nonatomic) NSString *recoID; // @synthesize recoID=_recoID;
@property(copy, nonatomic) NSString *proxiedBundleIdentifier; // @synthesize proxiedBundleIdentifier=_proxiedBundleIdentifier;
@property(retain, nonatomic) _INPBPrivatePlayMediaIntentData *privatePlayMediaIntentData; // @synthesize privatePlayMediaIntentData=_privatePlayMediaIntentData;
@property(retain, nonatomic) _INPBString *playlistTitle; // @synthesize playlistTitle=_playlistTitle;
@property(nonatomic) double playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property(nonatomic) int playbackRepeatMode; // @synthesize playbackRepeatMode=_playbackRepeatMode;
@property(nonatomic) int playbackQueueLocation; // @synthesize playbackQueueLocation=_playbackQueueLocation;
@property(nonatomic) _Bool playShuffled; // @synthesize playShuffled=_playShuffled;
@property(nonatomic) int parsecCategory; // @synthesize parsecCategory=_parsecCategory;
@property(retain, nonatomic) _INPBString *musicArtistName; // @synthesize musicArtistName=_musicArtistName;
@property(retain, nonatomic) _INPBString *mediaUserContext; // @synthesize mediaUserContext=_mediaUserContext;
@property(retain, nonatomic) _INPBMediaSearch *mediaSearch; // @synthesize mediaSearch=_mediaSearch;
@property(copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) _INPBMediaItemValue *mediaContainer; // @synthesize mediaContainer=_mediaContainer;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *hashedRouteUIDs; // @synthesize hashedRouteUIDs=_hashedRouteUIDs;
@property(retain, nonatomic) _INPBTimestamp *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSArray *buckets; // @synthesize buckets=_buckets;
@property(retain, nonatomic) _INPBString *audiobookTitle; // @synthesize audiobookTitle=_audiobookTitle;
@property(retain, nonatomic) _INPBString *audiobookAuthor; // @synthesize audiobookAuthor=_audiobookAuthor;
@property(copy, nonatomic) NSArray *audioSearchResults; // @synthesize audioSearchResults=_audioSearchResults;
@property(copy, nonatomic) NSArray *alternativeResults; // @synthesize alternativeResults=_alternativeResults;
- (id)dictionaryRepresentation;	// IMP=0x000000000021d0eb
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021b763
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021b1df
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000021b14d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021b04e
- (void)writeTo:(id)arg1;	// IMP=0x000000000021a62d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000021a620
@property(readonly, nonatomic) _Bool hasShowTitle;
@property(nonatomic) _Bool hasResumePlayback;
@property(readonly, nonatomic) _Bool hasRecoID;
@property(readonly, nonatomic) _Bool hasProxiedBundleIdentifier;
@property(readonly, nonatomic) _Bool hasPrivatePlayMediaIntentData;
@property(readonly, nonatomic) _Bool hasPlaylistTitle;
@property(nonatomic) _Bool hasPlaybackSpeed;
- (int)StringAsPlaybackRepeatMode:(id)arg1;	// IMP=0x000000000021a3e9
- (id)playbackRepeatModeAsString:(int)arg1;	// IMP=0x000000000021a383
@property(nonatomic) _Bool hasPlaybackRepeatMode;
- (int)StringAsPlaybackQueueLocation:(id)arg1;	// IMP=0x000000000021a274
- (id)playbackQueueLocationAsString:(int)arg1;	// IMP=0x000000000021a1f4
@property(nonatomic) _Bool hasPlaybackQueueLocation;
@property(nonatomic) _Bool hasPlayShuffled;
- (int)StringAsParsecCategory:(id)arg1;	// IMP=0x0000000000219ff8
- (id)parsecCategoryAsString:(int)arg1;	// IMP=0x0000000000219f3a
@property(nonatomic) _Bool hasParsecCategory;
@property(readonly, nonatomic) _Bool hasMusicArtistName;
@property(readonly, nonatomic) _Bool hasMediaUserContext;
@property(readonly, nonatomic) _Bool hasMediaSearch;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000219e48
@property(readonly, nonatomic) unsigned long long mediaItemsCount;
- (void)addMediaItems:(id)arg1;	// IMP=0x0000000000219db1
- (void)clearMediaItems;	// IMP=0x0000000000219d94
@property(readonly, nonatomic) _Bool hasMediaContainer;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (id)hashedRouteUIDsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000219cf1
@property(readonly, nonatomic) unsigned long long hashedRouteUIDsCount;
- (void)addHashedRouteUIDs:(id)arg1;	// IMP=0x0000000000219c5a
- (void)clearHashedRouteUIDs;	// IMP=0x0000000000219c3d
@property(readonly, nonatomic) _Bool hasExpirationDate;
- (id)bucketAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000219bc3
@property(readonly, nonatomic) unsigned long long bucketsCount;
- (void)addBucket:(id)arg1;	// IMP=0x0000000000219b2c
- (void)clearBuckets;	// IMP=0x0000000000219b0f
@property(readonly, nonatomic) _Bool hasAudiobookTitle;
@property(readonly, nonatomic) _Bool hasAudiobookAuthor;
- (id)audioSearchResultsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000219a6c
@property(readonly, nonatomic) unsigned long long audioSearchResultsCount;
- (void)addAudioSearchResults:(id)arg1;	// IMP=0x00000000002199d5
- (void)clearAudioSearchResults;	// IMP=0x00000000002199b8
- (id)alternativeResultsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000219967
@property(readonly, nonatomic) unsigned long long alternativeResultsCount;
- (void)addAlternativeResults:(id)arg1;	// IMP=0x00000000002198d0
- (void)clearAlternativeResults;	// IMP=0x00000000002198b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
