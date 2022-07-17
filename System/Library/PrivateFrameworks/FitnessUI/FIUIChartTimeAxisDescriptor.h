//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIChartAxisDescriptor-Protocol.h>

@class FIUIChartDateAnchorRule, NSArray, NSDateComponents, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIFont;

@interface FIUIChartTimeAxisDescriptor : NSObject <FIUIChartAxisDescriptor>
{
    NSArray *_cachedAxisLabels;	// 8 = 0x8
    NSArray *_cachedAxisSubLabels;	// 16 = 0x10
    NSMutableArray *_cachedAxisLabelColors;	// 24 = 0x18
    NSMutableDictionary *_hourMinuteFormatters;	// 32 = 0x20
    NSMutableDictionary *_hourFormatters;	// 40 = 0x28
    NSMutableDictionary *_weekdayFormatters;	// 48 = 0x30
    NSMutableDictionary *_dayFormatters;	// 56 = 0x38
    NSMutableDictionary *_monthFormatters;	// 64 = 0x40
    NSMutableDictionary *_yearFormatters;	// 72 = 0x48
    _Bool _hideClippedLabels;	// 80 = 0x50
    _Bool _forceAMPMOnFirstLabel;	// 81 = 0x51
    _Bool _useMinMaxLabelPlacement;	// 82 = 0x52
    _Bool _generateSubAxisDescriptorOnlyForNoonMidnight;	// 83 = 0x53
    _Bool _subAxisCapitalize;	// 84 = 0x54
    id _minValue;	// 88 = 0x58
    id _maxValue;	// 96 = 0x60
    unsigned long long _labelAlignment;	// 104 = 0x68
    unsigned long long _subLabelAlignment;	// 112 = 0x70
    UIFont *_labelFont;	// 120 = 0x78
    UIColor *_highlightedLabelColor;	// 128 = 0x80
    UIColor *_unhighlightedLabelColor;	// 136 = 0x88
    UIColor *_selectedLabelColor;	// 144 = 0x90
    double _axisDescriptorPadding;	// 152 = 0x98
    double _subAxisDescriptorPadding;	// 160 = 0xa0
    UIFont *_subLabelFont;	// 168 = 0xa8
    UIColor *_highlightedSubLabelColor;	// 176 = 0xb0
    UIColor *_unhighlightedSubLabelColor;	// 184 = 0xb8
    unsigned long long _textStyle;	// 192 = 0xc0
    NSDateComponents *_axisSpacing;	// 200 = 0xc8
    FIUIChartDateAnchorRule *_anchorRule;	// 208 = 0xd0
    unsigned long long _timeInterval;	// 216 = 0xd8
    unsigned long long _subTextStyle;	// 224 = 0xe0
    NSDateComponents *_subAxisSpacing;	// 232 = 0xe8
    FIUIChartDateAnchorRule *_subAnchorRule;	// 240 = 0xf0
    unsigned long long _subTimeInterval;	// 248 = 0xf8
    double _subAxisVerticalPadding;	// 256 = 0x100
    UIFont *_labelAMPMFont;	// 264 = 0x108
}

+ (unsigned long long)_spacingIntervalFromAxisSpacing:(id)arg1;	// IMP=0x0000000000047114
- (void).cxx_destruct;	// IMP=0x00000000000478d5
@property(retain, nonatomic) UIFont *labelAMPMFont; // @synthesize labelAMPMFont=_labelAMPMFont;
@property(nonatomic) double subAxisVerticalPadding; // @synthesize subAxisVerticalPadding=_subAxisVerticalPadding;
@property(nonatomic) _Bool subAxisCapitalize; // @synthesize subAxisCapitalize=_subAxisCapitalize;
@property(nonatomic) _Bool generateSubAxisDescriptorOnlyForNoonMidnight; // @synthesize generateSubAxisDescriptorOnlyForNoonMidnight=_generateSubAxisDescriptorOnlyForNoonMidnight;
@property(nonatomic) unsigned long long subTimeInterval; // @synthesize subTimeInterval=_subTimeInterval;
@property(retain, nonatomic) FIUIChartDateAnchorRule *subAnchorRule; // @synthesize subAnchorRule=_subAnchorRule;
@property(retain, nonatomic) NSDateComponents *subAxisSpacing; // @synthesize subAxisSpacing=_subAxisSpacing;
@property(nonatomic) unsigned long long subTextStyle; // @synthesize subTextStyle=_subTextStyle;
@property(nonatomic) _Bool useMinMaxLabelPlacement; // @synthesize useMinMaxLabelPlacement=_useMinMaxLabelPlacement;
@property(nonatomic) _Bool forceAMPMOnFirstLabel; // @synthesize forceAMPMOnFirstLabel=_forceAMPMOnFirstLabel;
@property(nonatomic) unsigned long long timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) FIUIChartDateAnchorRule *anchorRule; // @synthesize anchorRule=_anchorRule;
@property(retain, nonatomic) NSDateComponents *axisSpacing; // @synthesize axisSpacing=_axisSpacing;
@property(nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) UIColor *unhighlightedSubLabelColor; // @synthesize unhighlightedSubLabelColor=_unhighlightedSubLabelColor;
@property(retain, nonatomic) UIColor *highlightedSubLabelColor; // @synthesize highlightedSubLabelColor=_highlightedSubLabelColor;
@property(retain, nonatomic) UIFont *subLabelFont; // @synthesize subLabelFont=_subLabelFont;
@property(nonatomic) _Bool hideClippedLabels; // @synthesize hideClippedLabels=_hideClippedLabels;
@property(nonatomic) double subAxisDescriptorPadding; // @synthesize subAxisDescriptorPadding=_subAxisDescriptorPadding;
@property(nonatomic) double axisDescriptorPadding; // @synthesize axisDescriptorPadding=_axisDescriptorPadding;
@property(retain, nonatomic) UIColor *selectedLabelColor; // @synthesize selectedLabelColor=_selectedLabelColor;
@property(retain, nonatomic) UIColor *unhighlightedLabelColor; // @synthesize unhighlightedLabelColor=_unhighlightedLabelColor;
@property(retain, nonatomic) UIColor *highlightedLabelColor; // @synthesize highlightedLabelColor=_highlightedLabelColor;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(nonatomic) unsigned long long subLabelAlignment; // @synthesize subLabelAlignment=_subLabelAlignment;
@property(nonatomic) unsigned long long labelAlignment; // @synthesize labelAlignment=_labelAlignment;
@property(retain, nonatomic) id maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) id minValue; // @synthesize minValue=_minValue;
- (Class)expectedDataType;	// IMP=0x0000000000047617
- (id)textForSubLabelAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000475b8
- (id)positionForSubLabelAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000047559
- (unsigned long long)numSubLabels;	// IMP=0x0000000000047507
- (id)axisSubLabels;	// IMP=0x00000000000474bf
- (id)_subLabelAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000047452
- (void)selectLabel:(_Bool)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000004737a
- (id)textForLabelAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004732a
- (id)positionForLabelAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000472da
- (unsigned long long)numLabels;	// IMP=0x0000000000047296
- (id)axisLabels;	// IMP=0x0000000000047265
- (id)_labelAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000047206
- (id)_stringFromDate:(id)arg1 withTimeInterval:(unsigned long long)arg2 textStyle:(unsigned long long)arg3 forceAMPM:(_Bool)arg4;	// IMP=0x0000000000046ecb
- (id)_startDateFromTimeInterval:(unsigned long long)arg1;	// IMP=0x0000000000046e3a
- (id)_subLabelsForSpacingInterval:(unsigned long long)arg1 withSpacing:(id)arg2 textStyle:(unsigned long long)arg3;	// IMP=0x0000000000046b6d
- (id)_newSubLabelFromDate:(id)arg1 withTimeInterval:(unsigned long long)arg2 textStyle:(unsigned long long)arg3;	// IMP=0x0000000000046a86
- (long long)_hourComponentFromDate:(id)arg1;	// IMP=0x00000000000469e8
- (id)_labelsForSpacingInterval:(unsigned long long)arg1 withSpacing:(id)arg2 textStyle:(unsigned long long)arg3;	// IMP=0x00000000000465d8
- (_Bool)_validateProperties;	// IMP=0x00000000000463c7
- (void)_generateAxisSubLabels;	// IMP=0x0000000000046340
- (void)_generateAxisLabels;	// IMP=0x00000000000462b9
- (void)_clearFormatters;	// IMP=0x000000000004625f
- (void)_clearCache;	// IMP=0x0000000000046217
- (void)invalidateCaches;	// IMP=0x00000000000461d0
- (id)yearFormatter:(unsigned long long)arg1;	// IMP=0x0000000000045fd0
- (id)monthFormatter:(unsigned long long)arg1;	// IMP=0x0000000000045e3f
- (id)weekdayFormatter:(unsigned long long)arg1;	// IMP=0x0000000000045cca
- (id)dayFormatter:(unsigned long long)arg1;	// IMP=0x0000000000045b6c
- (id)hourFormatter:(unsigned long long)arg1;	// IMP=0x0000000000045690
- (id)_hourMinuteFormatterWithTextStyle:(unsigned long long)arg1;	// IMP=0x000000000004554d
- (id)init;	// IMP=0x0000000000045328

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id highlightedValue;
@property(nonatomic) double shadowBlur;
@property(retain, nonatomic) UIColor *shadowColor;
@property(nonatomic) struct CGSize shadowOffset;
@property(readonly) Class superclass;

@end
