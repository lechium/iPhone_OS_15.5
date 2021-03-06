//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HULegibilityLabel, NSString, UIColor, UIImageView;

@interface HUCameraStatusOverlayView : UIView
{
    _Bool _isDisplayingForSingleCamera;	// 8 = 0x8
    _Bool _didUpdateConstraints;	// 9 = 0x9
    NSString *_statusString;	// 16 = 0x10
    UIColor *_statusColor;	// 24 = 0x18
    NSString *_statusImageName;	// 32 = 0x20
    HULegibilityLabel *_statusLabel;	// 40 = 0x28
    UIImageView *_statusIndicatorImageView;	// 48 = 0x30
    UIImageView *_alertBadge;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003baf9d
@property(retain, nonatomic) UIImageView *alertBadge; // @synthesize alertBadge=_alertBadge;
@property(nonatomic) _Bool didUpdateConstraints; // @synthesize didUpdateConstraints=_didUpdateConstraints;
@property(retain, nonatomic) UIImageView *statusIndicatorImageView; // @synthesize statusIndicatorImageView=_statusIndicatorImageView;
@property(retain, nonatomic) HULegibilityLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) _Bool isDisplayingForSingleCamera; // @synthesize isDisplayingForSingleCamera=_isDisplayingForSingleCamera;
@property(retain, nonatomic) NSString *statusImageName; // @synthesize statusImageName=_statusImageName;
@property(retain, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
- (id)_chevronImage;	// IMP=0x00000000003bae3d
- (id)_exclamationImage;	// IMP=0x00000000003badae
- (void)updateStatusLabelBounds;	// IMP=0x00000000003ba95b
- (void)setBadgeStatus:(unsigned long long)arg1;	// IMP=0x00000000003ba764
- (void)updateStatusForPlaybackEngine:(id)arg1;	// IMP=0x00000000003ba434
- (void)layoutSubviews;	// IMP=0x00000000003b9b1e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003b980a

@end

