//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HKReferenceRangeDotView, HKReferenceRangeViewConfiguration, HKReferenceRangeViewData, NSString, UIFont, UILabel;

@interface HKReferenceRangeView : UIView
{
    double _lowValueXPosition;	// 8 = 0x8
    double _highValueXPosition;	// 16 = 0x10
    double _currentValueXPosition;	// 24 = 0x18
    long long _valueDirection;	// 32 = 0x20
    double _intrinsicHeight;	// 40 = 0x28
    _Bool _showOutOfRangeIndicator;	// 48 = 0x30
    HKReferenceRangeViewConfiguration *_configuration;	// 56 = 0x38
    NSString *_multiValueSeparator;	// 64 = 0x40
    HKReferenceRangeViewData *_data;	// 72 = 0x48
    UIView *_referenceRangeView;	// 80 = 0x50
    UIView *_referenceRangeContainerView;	// 88 = 0x58
    HKReferenceRangeDotView *_currentValueView;	// 96 = 0x60
    UILabel *_lowValueLabel;	// 104 = 0x68
    UILabel *_highValueLabel;	// 112 = 0x70
    UILabel *_currentValueLabel;	// 120 = 0x78
    UIFont *_dynamicTypeAnchorFont;	// 128 = 0x80
    UIFont *_valueFont;	// 136 = 0x88
    UIFont *_overriddenValueFont;	// 144 = 0x90
    UIFont *_unitFont;	// 152 = 0x98
    UILabel *_outOfRangeLabel;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000000f4972
@property(retain, nonatomic) UILabel *outOfRangeLabel; // @synthesize outOfRangeLabel=_outOfRangeLabel;
@property(retain, nonatomic) UIFont *unitFont; // @synthesize unitFont=_unitFont;
@property(retain, nonatomic) UIFont *overriddenValueFont; // @synthesize overriddenValueFont=_overriddenValueFont;
@property(retain, nonatomic) UIFont *valueFont; // @synthesize valueFont=_valueFont;
@property(retain, nonatomic) UIFont *dynamicTypeAnchorFont; // @synthesize dynamicTypeAnchorFont=_dynamicTypeAnchorFont;
@property(retain, nonatomic) UILabel *currentValueLabel; // @synthesize currentValueLabel=_currentValueLabel;
@property(retain, nonatomic) UILabel *highValueLabel; // @synthesize highValueLabel=_highValueLabel;
@property(retain, nonatomic) UILabel *lowValueLabel; // @synthesize lowValueLabel=_lowValueLabel;
@property(retain, nonatomic) HKReferenceRangeDotView *currentValueView; // @synthesize currentValueView=_currentValueView;
@property(retain, nonatomic) UIView *referenceRangeContainerView; // @synthesize referenceRangeContainerView=_referenceRangeContainerView;
@property(retain, nonatomic) UIView *referenceRangeView; // @synthesize referenceRangeView=_referenceRangeView;
@property(copy, nonatomic) HKReferenceRangeViewData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *multiValueSeparator; // @synthesize multiValueSeparator=_multiValueSeparator;
@property(readonly, nonatomic) HKReferenceRangeViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_outOfRangeColor;	// IMP=0x00000000000f478f
- (id)_configuredPreferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;	// IMP=0x00000000000f46ca
- (id)_generateMultilineAttributedValueStringForOriginalString:(id)arg1;	// IMP=0x00000000000f458d
- (id)_generateAttributedValueStringWithOverrideColor:(id)arg1;	// IMP=0x00000000000f40d1
- (void)_applyNormalizedValuesToView;	// IMP=0x00000000000f3c71
- (void)_normalizeValuesIfNeeded;	// IMP=0x00000000000f380d
- (void)_setupSubviews;	// IMP=0x00000000000f2e63
- (void)_updateContainerBorderColors;	// IMP=0x00000000000f2d6e
- (_Bool)_hasReferenceRange;	// IMP=0x00000000000f2c97
- (void)updateWithData:(id)arg1;	// IMP=0x00000000000f2c4b
- (void)_layoutCurrentValueOnly;	// IMP=0x00000000000f2a9b
- (struct CGRect)_assureLabelFrameWithinBounds:(struct CGRect)arg1;	// IMP=0x00000000000f2995
- (void)_layoutFullReferenceRange;	// IMP=0x00000000000f177f
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000000f1729
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000f1649
- (void)layoutSubviews;	// IMP=0x00000000000f1459
- (id)unitLabelFont;	// IMP=0x00000000000f139b
- (id)valueLabelFont;	// IMP=0x00000000000f128f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000f0f8e
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000f0f45
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;	// IMP=0x00000000000f0e9a

@end
