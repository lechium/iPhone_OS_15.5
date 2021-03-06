//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMeasurement, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface DirectionsElevationLabelView : UIView
{
    long long _style;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    NSMeasurement *_elevation;	// 32 = 0x20
}

+ (id)_formatter;	// IMP=0x0040000000180fca
- (void).cxx_destruct;	// IMP=0x0020000000181ac8
@property(copy, nonatomic) NSMeasurement *elevation; // @synthesize elevation=_elevation;
- (void)_refreshLabel;	// IMP=0x001000000018179f
- (void)setFont:(id)arg1 color:(id)arg2;	// IMP=0x0010000000181631
- (void)setFont:(id)arg1;	// IMP=0x00100000001815b1
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000001810ac
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000181098

@end

