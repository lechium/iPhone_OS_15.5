//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MUPlaceRatingReviewTitleBuilder : NSObject
{
    _Bool _supportsRatings;	// 8 = 0x8
    _Bool _supportsReviews;	// 9 = 0x9
    _Bool _supportsGuides;	// 10 = 0xa
}

@property(nonatomic) _Bool supportsGuides; // @synthesize supportsGuides=_supportsGuides;
@property(nonatomic) _Bool supportsReviews; // @synthesize supportsReviews=_supportsReviews;
@property(nonatomic) _Bool supportsRatings; // @synthesize supportsRatings=_supportsRatings;
- (id)buildTitleString;	// IMP=0x0000000000030bfe
@property(readonly, nonatomic) unsigned long long titleType;

@end
