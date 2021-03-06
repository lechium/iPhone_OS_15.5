//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIActivityIndicatorView, UIImageView;

@interface HKDataMetadataWorkoutRouteCell : UITableViewCell
{
    UIImageView *_routeImageView;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicator;	// 16 = 0x10
    NSLayoutConstraint *_heightConstraint;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007f466
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *routeImageView; // @synthesize routeImageView=_routeImageView;
- (void)setRouteImage:(id)arg1;	// IMP=0x000000000007f323
- (void)setupConstraints;	// IMP=0x000000000007edd1
- (id)init;	// IMP=0x000000000007ec7d

@end

