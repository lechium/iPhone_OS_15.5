//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class CCUISensorActivityData, NSString, UIImageView, UILabel, UIView;

@interface CCUISensorStatusButton : UIButton
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    CCUISensorActivityData *_sensorActivityData;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    UIView *_indicatorView;	// 32 = 0x20
    UIImageView *_settingsLaunchIndicatorImageView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001997b
@property(retain, nonatomic) UIImageView *settingsLaunchIndicatorImageView; // @synthesize settingsLaunchIndicatorImageView=_settingsLaunchIndicatorImageView;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(copy, nonatomic) CCUISensorActivityData *sensorActivityData; // @synthesize sensorActivityData=_sensorActivityData;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)_fontForTitleLabel;	// IMP=0x00000000000198ad
- (id)_rightChevronImage;	// IMP=0x000000000001978e
- (id)_micIndicatorImage;	// IMP=0x0000000000019724
- (id)_cameraIndicatorImage;	// IMP=0x00000000000196ba
- (id)_plainCircleImage;	// IMP=0x0000000000019650
- (id)_imageSymbolConfiguration;	// IMP=0x00000000000195e8
- (double)_indicatorsWidth;	// IMP=0x0000000000019503
- (id)sensorDescription;	// IMP=0x0000000000019408
- (void)_layoutSettingsLaunchIndicatorImageView;	// IMP=0x0000000000019246
- (void)_layoutDescriptionLabelIfNecessary;	// IMP=0x0000000000018fdf
- (void)_layoutIndicatorViewIfNecessary;	// IMP=0x0000000000018e7e
- (void)_configureSettingsLaunchIndicatorImageView;	// IMP=0x0000000000018dbd
- (void)_configureDescriptionLabelIfNecessary;	// IMP=0x0000000000018c50
- (void)_configureIndicatorViewIfNecessary;	// IMP=0x0000000000018907
- (_Bool)scalesLargeContentImage;	// IMP=0x00000000000188ff
- (id)largeContentTitle;	// IMP=0x00000000000188e2
- (_Bool)showsLargeContentViewer;	// IMP=0x00000000000188da
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000018825
- (void)layoutSubviews;	// IMP=0x000000000001879b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000186c8
- (id)initWithSensorActivityData:(id)arg1;	// IMP=0x0000000000018612

@end

