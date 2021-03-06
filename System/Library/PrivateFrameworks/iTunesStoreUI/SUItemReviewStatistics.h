//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSString;

@interface SUItemReviewStatistics : NSObject <NSCopying>
{
    float _averageUserRating;	// 8 = 0x8
    long long _numberOfUserRatings;	// 16 = 0x10
    NSString *_numberOfUserRatingsString;	// 24 = 0x18
    long long _numberOfUserReviews;	// 32 = 0x20
    NSString *_numberOfUserReviewsString;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *numberOfUserReviewsString; // @synthesize numberOfUserReviewsString=_numberOfUserReviewsString;
@property(nonatomic) long long numberOfUserReviews; // @synthesize numberOfUserReviews=_numberOfUserReviews;
@property(copy, nonatomic) NSString *numberOfUserRatingsString; // @synthesize numberOfUserRatingsString=_numberOfUserRatingsString;
@property(nonatomic) long long numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(nonatomic) float averageUserRating; // @synthesize averageUserRating=_averageUserRating;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e4817
- (void)dealloc;	// IMP=0x00000000000e47cd
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e4610

@end

