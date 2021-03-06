//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaItem, NSDate, NSNumber, NSObject, NSString, NSURL, VUIMediaItemCredits;
@protocol VUIMediaEntityIdentifier;

@interface VUIMediaItem
{
    NSNumber *_isPlayable;	// 8 = 0x8
    NSString *_seasonCanonicalID;	// 16 = 0x10
    NSString *_showCanonicalID;	// 24 = 0x18
}

+ (id)keyPathsForValuesAffectingPlayedState;	// IMP=0x00000000001a453a
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000000001a4444
+ (id)_mediaItemWithMPMediaItem:(id)arg1;	// IMP=0x00000000001a40e1
- (void).cxx_destruct;	// IMP=0x00000000001a4f77
@property(readonly, copy, nonatomic) NSString *showCanonicalID; // @synthesize showCanonicalID=_showCanonicalID;
@property(readonly, copy, nonatomic) NSString *seasonCanonicalID; // @synthesize seasonCanonicalID=_seasonCanonicalID;
@property(readonly, copy, nonatomic) NSNumber *isPlayable; // @synthesize isPlayable=_isPlayable;
- (id)description;	// IMP=0x00000000001a45ec
@property(readonly, nonatomic) MPMediaItem *mediaPlayerMediaItem;
@property(readonly, nonatomic) _Bool renewsOfflineKeysAutomatically;
@property(readonly, nonatomic) _Bool allowsManualDownloadRenewal;
@property(readonly, copy, nonatomic) NSDate *availabilityEndDate;
@property(readonly, copy, nonatomic) NSDate *downloadExpirationDate;
@property(copy, nonatomic) NSNumber *bookmark;
@property(copy, nonatomic) NSNumber *playCount;
@property(copy, nonatomic) NSNumber *hasBeenPlayed;
@property(readonly, copy, nonatomic) NSDate *rentalExpirationDate;
@property(readonly, copy, nonatomic) NSNumber *rentalPlaybackDuration;
@property(readonly, copy, nonatomic) VUIMediaItemCredits *credits;
@property(readonly, copy, nonatomic) NSString *studio;
@property(readonly, copy, nonatomic) NSNumber *episodeIndexInSeries;
@property(readonly, copy, nonatomic) NSNumber *fractionalEpisodeNumber;
@property(readonly, copy, nonatomic) NSNumber *episodeNumber;
@property(readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *seasonIdentifier;
@property(readonly, copy, nonatomic) NSString *seasonTitle;
@property(readonly, copy, nonatomic) NSURL *extrasURL;
@property(readonly, copy, nonatomic) NSString *previewFrameImageIdentifier;
- (id)lastPlayedDate;	// IMP=0x00000000001a420d
- (id)modifiedDate;	// IMP=0x00000000001a41f4
- (id)creationDate;	// IMP=0x00000000001a41db
@property(readonly, copy, nonatomic) NSNumber *duration;
@property(readonly, copy, nonatomic) NSNumber *assetType;

@end

