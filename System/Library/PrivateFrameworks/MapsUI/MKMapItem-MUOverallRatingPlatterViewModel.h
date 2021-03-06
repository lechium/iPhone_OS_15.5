//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKMapItem.h>

#import <MapsUI/MUOverallRatingPlatterViewModel-Protocol.h>
#import <MapsUI/MUPlaceTileViewModel-Protocol.h>
#import <MapsUI/MUTransitStationSummary-Protocol.h>

@class NSAttributedString, NSString, UIImage;

@interface MKMapItem (MUOverallRatingPlatterViewModel) <MUOverallRatingPlatterViewModel, MUTransitStationSummary, MUPlaceTileViewModel>
@property(readonly, nonatomic) NSAttributedString *attributionText;
@property(readonly, nonatomic) unsigned long long numberOfVotes;
@property(readonly, nonatomic) double rating;
@property(readonly, nonatomic) UIImage *artworkImage;
@property(readonly, nonatomic) NSString *stationCategory;
@property(readonly, nonatomic) NSString *stationTitle;
@property(readonly, nonatomic) unsigned long long expectedNumberOfFooterLines;
- (id)footerAttributedStringForFont:(id)arg1;	// IMP=0x000000000006e4f1
- (id)subtitleAttributedStringForFont:(id)arg1;	// IMP=0x000000000006e4e9
@property(readonly, nonatomic) UIImage *badgeIcon;
@property(readonly, nonatomic) UIImage *fallbackImage;
- (void)fetchImageTilewWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006dfac
- (id)tileSubtitle;	// IMP=0x000000000006df9a
@property(readonly, nonatomic) NSString *tileName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

