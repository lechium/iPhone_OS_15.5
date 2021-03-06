//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKInteractiveChartOverlayPredicate, NSDictionary;
@protocol HKOverlayRoomViewControllerIntegratedContextDelegate;

@interface HKOverlayRoomViewControllerDistributionContext
{
    long long _distributionStyle;	// 8 = 0x8
    id <HKOverlayRoomViewControllerIntegratedContextDelegate> _optionalDelegate;	// 16 = 0x10
    long long _options;	// 24 = 0x18
    HKInteractiveChartOverlayPredicate *_namedPredicate;	// 32 = 0x20
    NSDictionary *_styleToMetricColors;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000042829
@property(retain, nonatomic) NSDictionary *styleToMetricColors; // @synthesize styleToMetricColors=_styleToMetricColors;
@property(retain, nonatomic) HKInteractiveChartOverlayPredicate *namedPredicate; // @synthesize namedPredicate=_namedPredicate;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(nonatomic) __weak id <HKOverlayRoomViewControllerIntegratedContextDelegate> optionalDelegate; // @synthesize optionalDelegate=_optionalDelegate;
@property(nonatomic) long long distributionStyle; // @synthesize distributionStyle=_distributionStyle;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000425b9
- (id)_selectedMetricColorsForDistributionStyle:(long long)arg1;	// IMP=0x00000000000424e0
- (id)_computeTitleFromStyleAndPredicate;	// IMP=0x0000000000042248
- (id)_representativeDisplayTypeForStyle:(long long)arg1;	// IMP=0x0000000000042087
- (void)fetchCachedDataForTimeScope:(long long)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041f03
- (id)buildOverlayDisplayTypeForTimeScope:(long long)arg1;	// IMP=0x0000000000041d5d
- (id)buildContextItemWithValue:(id)arg1 unit:(id)arg2 valueContext:(id)arg3 forTimeScope:(long long)arg4;	// IMP=0x00000000000419fd
- (id)unitString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;	// IMP=0x00000000000418d3
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;	// IMP=0x000000000004143a
- (id)representativeDisplayType;	// IMP=0x0000000000041409
- (id)initWithStyle:(long long)arg1 namedPredicate:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 optionalDelegate:(id)arg5 options:(long long)arg6 mode:(long long)arg7;	// IMP=0x00000000000410f1

@end

