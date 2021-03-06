//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDisplayType, HKGraphSeries, HKInteractiveChartDataFormatter, NSDictionary, NSString, UIColor;

@interface HKInteractiveChartDisplayType
{
    UIColor *_color;	// 8 = 0x8
    HKDisplayType *_baseDisplayType;	// 16 = 0x10
    HKGraphSeries *_mainGraphSeries;	// 24 = 0x18
    NSDictionary *_seriesForTimeScopeMapping;	// 32 = 0x20
    NSString *_specifiedDisplayName;	// 40 = 0x28
    NSString *_specifiedUnitName;	// 48 = 0x30
    HKInteractiveChartDataFormatter *_specifiedValueFormatter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001dee97
@property(readonly, nonatomic) HKInteractiveChartDataFormatter *specifiedValueFormatter; // @synthesize specifiedValueFormatter=_specifiedValueFormatter;
@property(readonly, nonatomic) NSString *specifiedUnitName; // @synthesize specifiedUnitName=_specifiedUnitName;
@property(readonly, nonatomic) NSString *specifiedDisplayName; // @synthesize specifiedDisplayName=_specifiedDisplayName;
@property(retain, nonatomic) NSDictionary *seriesForTimeScopeMapping; // @synthesize seriesForTimeScopeMapping=_seriesForTimeScopeMapping;
@property(readonly, nonatomic) HKGraphSeries *mainGraphSeries; // @synthesize mainGraphSeries=_mainGraphSeries;
@property(readonly, nonatomic) HKDisplayType *baseDisplayType; // @synthesize baseDisplayType=_baseDisplayType;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (long long)_internalDisplayTypeIdentifier;	// IMP=0x00000000001ded6a
- (id)description;	// IMP=0x00000000001decfe
- (id)hk_interactiveChartsFormatterForTimeScope:(long long)arg1;	// IMP=0x00000000001decae
- (id)colorWithDisplayCategoryController:(id)arg1;	// IMP=0x00000000001dec55
- (id)unitNameForValue:(id)arg1 unitPreferenceController:(id)arg2;	// IMP=0x00000000001dec40
- (id)displayName;	// IMP=0x00000000001dec2b
- (id)graphSeriesForTimeScope:(long long)arg1;	// IMP=0x00000000001deb5f
- (void)setIsCriticalForAutoscale:(_Bool)arg1;	// IMP=0x00000000001de8d4
- (id)_initWithDisplayName:(id)arg1 unitDisplayNameOverrides:(id)arg2 localizationTableOverride:(id)arg3 chartingRules:(id)arg4 unitName:(id)arg5 valueFormatter:(id)arg6 dataTypeCode:(long long)arg7 baseDisplayType:(id)arg8 mainGraphSeries:(id)arg9 seriesForTimeScopeMapping:(id)arg10;	// IMP=0x00000000001de502
- (id)initWithGraphSeries:(id)arg1 displayName:(id)arg2 unitName:(id)arg3 valueFormatter:(id)arg4 dataTypeCode:(long long)arg5;	// IMP=0x00000000001de4c8
- (id)initWithBaseDisplayType:(id)arg1 valueFormatter:(id)arg2 dataTypeCode:(long long)arg3 seriesForTimeScopeMapping:(id)arg4;	// IMP=0x00000000001de389
- (id)initWithGraphSeries:(id)arg1 baseDisplayType:(id)arg2 valueFormatter:(id)arg3 dataTypeCode:(long long)arg4;	// IMP=0x00000000001de24a
- (id)initWithGraphSeries:(id)arg1 baseDisplayType:(id)arg2 dataTypeCode:(long long)arg3;	// IMP=0x00000000001de123

@end

