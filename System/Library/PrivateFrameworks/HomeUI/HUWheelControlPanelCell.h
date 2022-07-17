//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUWheelControlViewDelegate-Protocol.h>

@class HUWheelControlPopUpButton, HUWheelControlView, NSArray, NSFormatter, NSNumber, NSString, UILabel, UIView;

@interface HUWheelControlPanelCell <HUWheelControlViewDelegate>
{
    _Bool _wheelViewVisible;	// 8 = 0x8
    HUWheelControlView *_wheelView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_detailLabel;	// 32 = 0x20
    UIView *_separatorView;	// 40 = 0x28
    NSArray *_staticConstraints;	// 48 = 0x30
    NSArray *_dynamicConstraints;	// 56 = 0x38
    HUWheelControlPopUpButton *_wheelButton;	// 64 = 0x40
    NSNumber *_minValue;	// 72 = 0x48
    NSNumber *_maxValue;	// 80 = 0x50
    NSNumber *_stepValue;	// 88 = 0x58
    NSFormatter *_valueFormatter;	// 96 = 0x60
    NSArray *_wheelValues;	// 104 = 0x68
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00000000004764e0
- (void).cxx_destruct;	// IMP=0x00000000004788d5
@property(retain, nonatomic) NSArray *wheelValues; // @synthesize wheelValues=_wheelValues;
@property(retain, nonatomic) NSFormatter *valueFormatter; // @synthesize valueFormatter=_valueFormatter;
@property(retain, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(retain, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property(retain, nonatomic) HUWheelControlPopUpButton *wheelButton; // @synthesize wheelButton=_wheelButton;
@property(retain, nonatomic) NSArray *dynamicConstraints; // @synthesize dynamicConstraints=_dynamicConstraints;
@property(retain, nonatomic) NSArray *staticConstraints; // @synthesize staticConstraints=_staticConstraints;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool wheelViewVisible; // @synthesize wheelViewVisible=_wheelViewVisible;
@property(retain, nonatomic) HUWheelControlView *wheelView; // @synthesize wheelView=_wheelView;
- (id)_defaultStepValue;	// IMP=0x000000000047879c
- (id)_defaultMinValue;	// IMP=0x000000000047878f
- (id)_defaultMaxValue;	// IMP=0x0000000000478782
- (id)_defaultValueFormatter;	// IMP=0x000000000047874d
- (void)_generateWheelValuesWithMinValue:(double)arg1 maxValue:(double)arg2 stepValue:(double)arg3;	// IMP=0x00000000004785fe
- (void)wheelControlView:(id)arg1 didUpdateValue:(id)arg2;	// IMP=0x00000000004780d7
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x0000000000477b34
- (void)prepareForReuse;	// IMP=0x0000000000477af4
- (void)layoutSubviews;	// IMP=0x0000000000477a61
- (void)updateConstraints;	// IMP=0x0000000000476ba5
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *titleText;
- (id)allControlViews;	// IMP=0x000000000047679d
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000004764e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
