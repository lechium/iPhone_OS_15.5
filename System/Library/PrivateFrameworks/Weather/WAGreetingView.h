//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <Weather/WATodayModelObserver-Protocol.h>

@class NSMutableArray, NSString, UIColor, UIImageView, UILabel, WATodayAutoupdatingLocationModel;

@interface WAGreetingView : UIView <WATodayModelObserver>
{
    _Bool _isViewCreated;	// 8 = 0x8
    WATodayAutoupdatingLocationModel *_todayModel;	// 16 = 0x10
    UILabel *_natualLanguageDescriptionLabel;	// 24 = 0x18
    UIImageView *_conditionImageView;	// 32 = 0x20
    UILabel *_temperatureLabel;	// 40 = 0x28
    NSMutableArray *_constraints;	// 48 = 0x30
    UIColor *_labelColor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002dd1e
@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(nonatomic) _Bool isViewCreated; // @synthesize isViewCreated=_isViewCreated;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property(retain, nonatomic) UIImageView *conditionImageView; // @synthesize conditionImageView=_conditionImageView;
@property(retain, nonatomic) UILabel *natualLanguageDescriptionLabel; // @synthesize natualLanguageDescriptionLabel=_natualLanguageDescriptionLabel;
@property(retain, nonatomic) WATodayAutoupdatingLocationModel *todayModel; // @synthesize todayModel=_todayModel;
- (void)todayModel:(id)arg1 forecastWasUpdated:(id)arg2;	// IMP=0x000000000002dc0e
- (void)todayModelWantsUpdate:(id)arg1;	// IMP=0x000000000002dbfc
- (id)_conditionsImage;	// IMP=0x000000000002db51
- (id)_temperature;	// IMP=0x000000000002d9d6
- (void)updateView;	// IMP=0x000000000002d854
- (void)setupConstraints;	// IMP=0x000000000002cfb5
- (void)updateConstraints;	// IMP=0x000000000002cf74
- (void)createViews;	// IMP=0x000000000002cc6e
- (void)updateLabelColors;	// IMP=0x000000000002cbaa
- (void)_teardownWeatherModel;	// IMP=0x000000000002cb4d
- (void)_setupWeatherModel;	// IMP=0x000000000002ca65
- (void)dealloc;	// IMP=0x000000000002ca27
- (void)startService;	// IMP=0x000000000002c882
- (id)init;	// IMP=0x000000000002c7d9
- (id)initWithColor:(id)arg1;	// IMP=0x000000000002c75c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002c6a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

