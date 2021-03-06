//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIImage, UIImageView, WALegibilityLabel, WATodayPadViewStyle, _UILegibilitySettings;

@interface WATodayPadView : UIView
{
    WATodayPadViewStyle *_style;	// 8 = 0x8
    NSArray *_constraints;	// 16 = 0x10
    UIImageView *_conditionsImageView;	// 24 = 0x18
    WALegibilityLabel *_temperatureLabel;	// 32 = 0x20
    WALegibilityLabel *_locationLabel;	// 40 = 0x28
    WALegibilityLabel *_conditionsLabel;	// 48 = 0x30
    _UILegibilitySettings *_legibilitySettings;	// 56 = 0x38
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x000000000005a26f
- (void).cxx_destruct;	// IMP=0x000000000005bbd5
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) WALegibilityLabel *conditionsLabel; // @synthesize conditionsLabel=_conditionsLabel;
@property(retain, nonatomic) WALegibilityLabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) WALegibilityLabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property(retain, nonatomic) UIImageView *conditionsImageView; // @synthesize conditionsImageView=_conditionsImageView;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(copy, nonatomic) WATodayPadViewStyle *style; // @synthesize style=_style;
- (void)_setupConstraintsForViews;	// IMP=0x000000000005b083
- (void)updateForChangedSettings:(id)arg1;	// IMP=0x000000000005ad08
@property(copy, nonatomic) UIImage *conditionsImage;
@property(copy, nonatomic) NSString *conditionsLine;
@property(copy, nonatomic) NSString *locationName;
@property(copy, nonatomic) NSString *temperature;
- (void)sizeToFit;	// IMP=0x000000000005a737
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000005a6ae
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005a277

@end

