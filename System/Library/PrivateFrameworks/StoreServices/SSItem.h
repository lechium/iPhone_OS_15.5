//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSURLConnectionRequestDelegate-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString, NSURL, SSItemImageCollection, SSItemOffer, SSURLConnectionRequest;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate>
{
    NSDate *_expirationDate;	// 8 = 0x8
    NSArray *_offers;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
    NSString *_tellAFriendBody;	// 32 = 0x20
    NSString *_tellAFriendBodyMIMEType;	// 40 = 0x28
    NSMutableArray *_tellAFriendHandlers;	// 48 = 0x30
    SSURLConnectionRequest *_tellAFriendRequest;	// 56 = 0x38
    NSString *_tellAFriendSubject;	// 64 = 0x40
}

@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)_tellAFriendDictionary;	// IMP=0x0000000000046bd9
- (id)_offers;	// IMP=0x0000000000046989
- (void)_finishTellAFriendLoadWithError:(id)arg1;	// IMP=0x000000000004682e
- (void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x0000000000046769
- (void)requestDidFinish:(id)arg1;	// IMP=0x000000000004674d
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000466fe
- (id)viewReviewsURL;	// IMP=0x00000000000466c5
- (id)videoDetails;	// IMP=0x00000000000466ac
- (id)softwareType;	// IMP=0x0000000000046693
- (id)shortDescription;	// IMP=0x000000000004667a
- (void)_setExpirationDate:(id)arg1;	// IMP=0x000000000004664c
- (id)seriesName;	// IMP=0x0000000000046633
- (id)sendGiftURL;	// IMP=0x00000000000465d8
- (id)seasonNumber;	// IMP=0x00000000000465bf
- (id)preOrderIdentifier;	// IMP=0x00000000000465a6
- (id)releaseDateString;	// IMP=0x000000000004658d
- (id)releaseDate;	// IMP=0x00000000000464d9
- (id)rawItemDictionary;	// IMP=0x00000000000464c2
- (id)podcastFeedURL;	// IMP=0x0000000000046489
- (id)podcastEpisodeGUID;	// IMP=0x0000000000046470
- (id)numberOfItemsInCollection;	// IMP=0x0000000000046457
- (id)numberOfCollectionsInCollectionGroup;	// IMP=0x000000000004643e
- (id)networkName;	// IMP=0x0000000000046425
- (id)mediaKind;	// IMP=0x000000000004619a
- (id)longDescription;	// IMP=0x0000000000046181
- (_Bool)isCompilation;	// IMP=0x0000000000046136
- (id)indexInCollection;	// IMP=0x000000000004611d
- (id)genreName;	// IMP=0x0000000000046104
- (id)genreIdentifier;	// IMP=0x00000000000460eb
- (id)episodeSortIdentifier;	// IMP=0x00000000000460d2
- (id)episodeIdentifier;	// IMP=0x00000000000460b9
- (id)contentRating;	// IMP=0x000000000004604b
- (id)composerName;	// IMP=0x0000000000046032
- (id)collectionName;	// IMP=0x0000000000046019
- (id)collectionIndexInCollectionGroup;	// IMP=0x0000000000046000
- (id)collectionIdentifier;	// IMP=0x0000000000045fe7
- (id)collectionArtistName;	// IMP=0x0000000000045fce
- (id)bundleVersion;	// IMP=0x0000000000045fb5
- (id)bundleIdentifier;	// IMP=0x0000000000045f9c
- (id)artistIdentifier;	// IMP=0x0000000000045f83
- (id)initWithItemDictionary:(id)arg1;	// IMP=0x0000000000045f2c
@property(readonly, copy) NSString *description;
- (id)priceDisplay;	// IMP=0x0000000000045e8c
- (id)playableMedia;	// IMP=0x0000000000045cf7
- (id)buyParameters;	// IMP=0x0000000000045ccc
@property(readonly, nonatomic) NSURL *viewItemURL;
- (id)valueForProperty:(id)arg1;	// IMP=0x0000000000045c6c
- (id)tweetURL;	// IMP=0x0000000000045bd5
- (id)tweetInitialText;	// IMP=0x0000000000045b44
@property(readonly, nonatomic) NSArray *thumbnailImages;
- (id)tellAFriendSubject;	// IMP=0x0000000000045a98
- (id)tellAFriendBodyURL;	// IMP=0x0000000000045a2b
- (id)tellAFriendBodyMIMEType;	// IMP=0x000000000004598b
- (id)tellAFriendBody;	// IMP=0x000000000004590a
- (id)relatedItemsForRelationType:(id)arg1;	// IMP=0x00000000000456e7
@property(readonly, nonatomic) long long numberOfUserRatings;
- (long long)numberOfPrintedPages;	// IMP=0x0000000000045651
- (void)loadTellAFriendMessageWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004544e
@property(readonly, nonatomic) NSNumber *ITunesStoreIdentifier;
@property(readonly, nonatomic) NSString *itemTitle;
- (id)itemOfferForIdentifier:(id)arg1;	// IMP=0x0000000000045221
@property(readonly, nonatomic) NSString *itemKind;
@property(readonly, nonatomic, getter=isHighDefinition) _Bool highDefinition;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
@property(readonly, nonatomic, getter=isGameCenterEnabled) _Bool gameCenterEnabled;
@property(readonly, nonatomic) SSItemImageCollection *imageCollection;
@property(readonly, nonatomic) SSItemOffer *defaultItemOffer;
@property(readonly, nonatomic) float averageUserRating;
@property(readonly, nonatomic) NSString *artistName;
@property(readonly, nonatomic) NSArray *allItemOffers;
- (void)dealloc;	// IMP=0x0000000000044a0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

