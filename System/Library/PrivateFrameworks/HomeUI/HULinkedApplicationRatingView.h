//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface HULinkedApplicationRatingView : UIView
{
    double _rating;	// 8 = 0x8
    NSArray *_starViews;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002c173d
@property(retain, nonatomic) NSArray *starViews; // @synthesize starViews=_starViews;
@property(nonatomic) double rating; // @synthesize rating=_rating;
- (void)updateStarViews;	// IMP=0x00000000002c13e1
- (void)setupConstraints;	// IMP=0x00000000002c1000
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002c0e35

@end

