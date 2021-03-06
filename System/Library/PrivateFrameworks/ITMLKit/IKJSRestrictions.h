//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSRestrictions-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSRestrictions-Protocol.h>
#import <ITMLKit/_IKJSRestrictionsProxy-Protocol.h>

@class NSString;

@interface IKJSRestrictions <NSObject, IKJSRestrictions, _IKJSRestrictionsProxy, _IKJSRestrictions>
{
}

+ (id)restrictionsDidChangeNotificationName;	// IMP=0x0000000000023ae3
- (id)_contentRestrictionsCountryCode;	// IMP=0x00000000000241b7
- (id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3;	// IMP=0x000000000002400c
@property(readonly, nonatomic) _Bool allowsShowingUndownloadedMovies;
@property(readonly, nonatomic) _Bool allowsShowingUndownloadedTVShows;
@property(readonly, nonatomic) _Bool allowsITunes;
@property(readonly, nonatomic) _Bool allowsMusicVideos;
@property(readonly, nonatomic) _Bool allowsExplicit;
@property(readonly, nonatomic) _Bool allowsErotica;
@property(readonly, nonatomic) _Bool allowArtistActivity;
- (id)maxTVShowRatingForCountry:(id)arg1;	// IMP=0x0000000000023d74
- (id)maxMovieRatingForCountry:(id)arg1;	// IMP=0x0000000000023d4b
@property(readonly, nonatomic) _Bool appAnalyticsAllowed;
@property(readonly, nonatomic) _Bool appInstallationAllowed;
@property(readonly, nonatomic) NSString *maxAppRating;
@property(readonly, nonatomic) long long maxTVShowRank;
@property(readonly, nonatomic) long long maxMovieRank;
@property(readonly, nonatomic) long long maxAppRank;
- (id)asPrivateIKJSRestrictions;	// IMP=0x0000000000023ab0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

