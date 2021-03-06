//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHDChart, NSData;

__attribute__((visibility("hidden")))
@interface EBEscherShape
{
    NSData *mChartData;	// 32 = 0x20
    _Bool mShowLegend;	// 40 = 0x28
    CHDChart *mChart;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000039f01d
- (void)setChart:(id)arg1;	// IMP=0x000000000039efcc
- (id)chart;	// IMP=0x000000000039efb7
- (void)setShowLegend:(_Bool)arg1;	// IMP=0x000000000039efa7
- (_Bool)showLegend;	// IMP=0x000000000039ef97
- (void)setChartData:(id)arg1;	// IMP=0x000000000039ef83
- (id)chartData;	// IMP=0x000000000039ef6e

@end

