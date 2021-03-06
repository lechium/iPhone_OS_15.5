//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookLibraryCore/NSCopying-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSLock, NSMutableDictionary, NSNumber, NSString, NSURL;

@interface BLDownloadMetadata : NSObject <NSCopying>
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    long long _keyStyle;	// 16 = 0x10
    NSLock *_lock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000c98e
- (id)_valueForFirstAvailableTopLevelKey:(id)arg1;	// IMP=0x000000000000c7ca
- (id)_urlValueForValue:(id)arg1;	// IMP=0x000000000000c736
- (id)_thumbnailArtworkImage;	// IMP=0x000000000000c698
- (id)_stringValueForValue:(id)arg1;	// IMP=0x000000000000c60b
- (void)_setValueCopy:(id)arg1 forMetadataKey:(id)arg2;	// IMP=0x000000000000c59b
- (void)_setValue:(id)arg1 forTopLevelKey:(id)arg2;	// IMP=0x000000000000c4e4
- (id)_releaseDateValue;	// IMP=0x000000000000c4bf
- (id)_newDateFormatter;	// IMP=0x000000000000c434
- (id)_newImageCollectionWithURLString:(id)arg1;	// IMP=0x000000000000c332
- (id)_dateValueForValue:(id)arg1;	// IMP=0x000000000000c279
- (id)_assetDictionary;	// IMP=0x000000000000bb73
- (id)valueForMetadataKey:(id)arg1;	// IMP=0x000000000000bb5d
- (id)valueForFirstAvailableKey:(id)arg1;	// IMP=0x000000000000b92b
@property(retain) NSArray *sinfs;
@property _Bool shouldDownloadAutomatically;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;	// IMP=0x000000000000b6ae
@property(retain) NSString *appleID;
@property(copy) id requiredDeviceCapabilities;
@property(copy) NSNumber *requestPersistentID;
@property(retain) NSString *releaseDateString;
@property(getter=isRedownloadDownload) _Bool redownloadDownload;
@property(copy) NSString *redownloadActionParameters;
@property(retain) NSURL *primaryAssetURL;
@property unsigned long long preOrderIdentifier;
@property(copy) NSString *preferredAssetFlavor;
- (void)setPublicationVersion:(id)arg1;	// IMP=0x000000000000b25b
@property(copy) NSString *pageProgressionDirection;
- (void)setMD5HashStrings:(id)arg1 numberOfBytesToHash:(id)arg2;	// IMP=0x000000000000b073
@property long long keyStyle;
@property(retain) NSString *fileExtension;
@property(retain) NSData *epubRightsData;
- (void)setDownloadPermalink:(id)arg1;	// IMP=0x000000000000afe2
@property(retain) NSString *downloadKey;
@property(retain) NSDictionary *dictionary;
@property(retain) NSString *copyright;
@property(retain) NSURL *cancelDownloadURL;
@property(getter=isAutomaticDownload) _Bool automaticDownload;
- (id)publicationVersion;	// IMP=0x000000000000aa4a
@property(readonly) NSNumber *numberOfBytesToHash;
@property(readonly) NSArray *MD5HashStrings;
@property(readonly) NSNumber *downloaderAccountIdentifier;
- (id)movementCount;	// IMP=0x000000000000a298
- (id)movementNumber;	// IMP=0x000000000000a232
- (id)movementName;	// IMP=0x000000000000a1cc
- (id)workName;	// IMP=0x000000000000a166
- (_Bool)isMusicShow;	// IMP=0x000000000000a0fa
- (id)showComposer;	// IMP=0x000000000000a094
- (id)viewStoreItemURL;	// IMP=0x000000000000a02a
- (id)videoDetailsDictionary;	// IMP=0x0000000000009fc4
- (id)variantIdentifier;	// IMP=0x0000000000009f66
@property(retain) NSString *transactionIdentifier;
@property(retain) NSString *title;
@property(retain) NSURL *thumbnailImageURL;
- (id)thumbnailImageCollection;	// IMP=0x0000000000009cea
@property(retain) NSString *subtitle;
@property(retain) NSString *sortTitle;
@property(retain) NSString *sortCollectionName;
@property(retain) NSString *sortArtistName;
@property(copy) NSString *shortDescription;
- (void)setViewStoreItemURL:(id)arg1;	// IMP=0x0000000000009a93
- (void)setVideoDetailsDictionary:(id)arg1;	// IMP=0x0000000000009a7a
- (void)setVariantIdentifier:(id)arg1;	// IMP=0x0000000000009a61
- (void)setThumbnailNewsstandBindingType:(id)arg1;	// IMP=0x000000000000997a
- (void)setThumbnailNewsstandBindingEdge:(id)arg1;	// IMP=0x0000000000009961
- (void)setLongSeasonDescription:(id)arg1;	// IMP=0x00000000000098d2
- (void)setSeriesName:(id)arg1;	// IMP=0x00000000000098b9
- (void)setSharedResource:(_Bool)arg1;	// IMP=0x000000000000985f
- (void)setSeasonNumber:(id)arg1;	// IMP=0x0000000000009846
- (void)setMusicShow:(_Bool)arg1;	// IMP=0x00000000000097ec
- (void)setSample:(_Bool)arg1;	// IMP=0x0000000000009792
@property(copy) NSNumber *rentalID;
- (void)setRental:(_Bool)arg1;	// IMP=0x000000000000971f
@property(retain) NSNumber *releaseYear;
@property(retain) NSDate *releaseDate;
- (void)setPurchaseDate:(id)arg1;	// IMP=0x0000000000009682
- (void)setPodcastType:(id)arg1;	// IMP=0x0000000000009669
- (void)setPodcastFeedURL:(id)arg1;	// IMP=0x0000000000009613
- (void)setPodcastEpisodeGUID:(id)arg1;	// IMP=0x00000000000095fa
- (void)setRacGUID:(id)arg1;	// IMP=0x00000000000095a4
- (void)setNumberOfItemsInCollection:(id)arg1;	// IMP=0x000000000000953c
- (void)setNumberOfCollectionsInCollectionGroup:(id)arg1;	// IMP=0x00000000000094d4
- (void)setNetworkName:(id)arg1;	// IMP=0x00000000000094bb
@property(copy) NSString *longDescription;
@property(retain) NSURL *launchExtrasUrl;
@property(retain) NSString *kind;
@property unsigned long long itemIdentifier;
- (void)setIndexInCollection:(id)arg1;	// IMP=0x0000000000009306
@property(copy) NSURL *hlsPlaylistURL;
- (void)setHighDefinition:(_Bool)arg1;	// IMP=0x0000000000009256
@property unsigned long long genreIdentifier;
@property(retain) NSString *genre;
@property(retain) NSURL *fullSizeImageURL;
- (void)setExplicitContent:(_Bool)arg1;	// IMP=0x0000000000009115
- (void)setEpisodeSortIdentifier:(id)arg1;	// IMP=0x00000000000090fc
- (void)setEpisodeIdentifier:(id)arg1;	// IMP=0x00000000000090e3
- (void)setDurationInMilliseconds:(id)arg1;	// IMP=0x00000000000090ca
- (void)setContentRating:(id)arg1;	// IMP=0x0000000000009074
- (void)setComposerName:(id)arg1;	// IMP=0x000000000000905b
- (void)setComposerIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000008fe5
@property(getter=isDeviceBasedVPP) _Bool deviceBasedVPP;
- (void)setCompilation:(_Bool)arg1;	// IMP=0x0000000000008f31
- (void)setCollectionName:(id)arg1;	// IMP=0x0000000000008ec9
- (void)setCollectionIndexInCollectionGroup:(id)arg1;	// IMP=0x0000000000008e61
- (void)setCollectionIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000008deb
- (void)setCollectionArtistName:(id)arg1;	// IMP=0x0000000000008dd2
- (void)setCloudIdentifier:(id)arg1;	// IMP=0x0000000000008db9
- (void)setBundleIdentifier:(id)arg1;	// IMP=0x0000000000008da0
- (void)setBetaExternalVersionIdentifier:(id)arg1;	// IMP=0x0000000000008d87
@property(copy) NSString *artistName;
@property unsigned long long artistIdentifier;
- (id)longSeasonDescription;	// IMP=0x0000000000008c43
- (id)seriesName;	// IMP=0x0000000000008bc0
- (id)seasonNumber;	// IMP=0x0000000000008b5a
- (id)purchaseDate;	// IMP=0x00000000000089c2
@property(readonly) NSDictionary *primaryAssetDictionary;
- (id)podcastType;	// IMP=0x00000000000088ea
- (id)podcastFeedURL;	// IMP=0x0000000000008880
- (id)podcastEpisodeGUID;	// IMP=0x000000000000881a
- (id)racGUID;	// IMP=0x0000000000008771
- (id)numberOfItemsInCollection;	// IMP=0x0000000000008703
- (id)numberOfCollectionsInCollectionGroup;	// IMP=0x0000000000008695
- (id)networkName;	// IMP=0x000000000000862f
- (_Bool)isSharedResource;	// IMP=0x000000000000841b
- (_Bool)isSample;	// IMP=0x00000000000083af
- (_Bool)isRental;	// IMP=0x0000000000008343
- (_Bool)isHighDefinition;	// IMP=0x00000000000082d7
@property(readonly, getter=hasHDR) _Bool HDR;
- (_Bool)isExplicitContent;	// IMP=0x00000000000081fa
- (_Bool)isCompilation;	// IMP=0x0000000000008122
- (id)indexInCollection;	// IMP=0x00000000000080b4
- (id)episodeSortIdentifier;	// IMP=0x0000000000007db2
- (id)episodeIdentifier;	// IMP=0x0000000000007d48
- (id)durationInMilliseconds;	// IMP=0x0000000000007ce2
- (id)downloadPermalink;	// IMP=0x0000000000007c7c
- (id)contentRating;	// IMP=0x0000000000007bfd
- (id)composerName;	// IMP=0x0000000000007b97
- (unsigned long long)composerIdentifier;	// IMP=0x0000000000007b49
- (id)collectionName;	// IMP=0x0000000000007adb
- (id)collectionIndexInCollectionGroup;	// IMP=0x0000000000007a6d
- (unsigned long long)collectionIdentifier;	// IMP=0x0000000000007a1f
- (id)collectionArtistName;	// IMP=0x00000000000079b9
- (id)cloudIdentifier;	// IMP=0x000000000000794b
- (id)bundleIdentifier;	// IMP=0x00000000000078dd
- (id)betaExternalVersionIdentifier;	// IMP=0x000000000000787f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000773f
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000076ad
- (id)init;	// IMP=0x0000000000007699

@end

