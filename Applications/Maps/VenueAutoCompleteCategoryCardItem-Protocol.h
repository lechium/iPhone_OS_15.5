//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VenueCardItem-Protocol.h"

@class GEOSearchCategory;
@protocol GEOVenueIdentifier;

@protocol VenueAutoCompleteCategoryCardItem <VenueCardItem>
@property(readonly, nonatomic) GEOSearchCategory *venueSearchCategory;
@property(readonly, nonatomic) id <GEOVenueIdentifier> venueIdentifier;
@end

