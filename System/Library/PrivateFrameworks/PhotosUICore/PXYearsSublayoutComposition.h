//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXYearsLayoutGenerator, PXYearsLayoutMetrics;

@interface PXYearsSublayoutComposition
{
    PXYearsLayoutGenerator *_layoutGenerator;	// 8 = 0x8
    PXYearsLayoutMetrics *_metrics;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000030dbba
@property(copy, nonatomic) PXYearsLayoutMetrics *metrics; // @synthesize metrics=_metrics;
- (struct UIEdgeInsets)sublayoutInsetsForStylableType:(long long)arg1;	// IMP=0x000000000030da35
@property(readonly, nonatomic) long long presentedNumberOfColumns;
- (id)configuredLayoutGenerator;	// IMP=0x000000000030d91e

@end

