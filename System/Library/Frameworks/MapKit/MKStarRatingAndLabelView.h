//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface MKStarRatingAndLabelView : UIView
{
}

+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 showReviewsOrTips:(_Bool)arg4 showNumberOfReviews:(_Bool)arg5 ratingStyle:(long long)arg6 theme:(id)arg7;	// IMP=0x000000000028d87e
+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 showReviewsOrTips:(_Bool)arg4 theme:(id)arg5;	// IMP=0x000000000028d85c
+ (id)ratingAndReviewsAsAttributedString:(double)arg1 style:(long long)arg2 font:(id)arg3 numberOfReviews:(unsigned long long)arg4 textColor:(id)arg5 theme:(id)arg6;	// IMP=0x000000000028d4ef
+ (id)reviewsString:(unsigned long long)arg1 providerName:(id)arg2;	// IMP=0x000000000028d307

@end
