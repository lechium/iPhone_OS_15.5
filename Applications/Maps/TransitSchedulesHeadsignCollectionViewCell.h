//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface TransitSchedulesHeadsignCollectionViewCell : UICollectionViewCell
{
    UILabel *_headsignLabel;	// 8 = 0x8
    NSString *_headsign;	// 16 = 0x10
}

+ (id)cellIdentifier;	// IMP=0x00200000007a40f8
- (void).cxx_destruct;	// IMP=0x00200000007a41cc
@property(copy, nonatomic) NSString *headsign; // @synthesize headsign=_headsign;
- (void)updateStyling;	// IMP=0x00100000007a4146
- (void)setSelected:(_Bool)arg1;	// IMP=0x00100000007a4105
- (void)configureViews;	// IMP=0x00100000007a39d2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000007a3975
- (id)init;	// IMP=0x00100000007a3929

@end
