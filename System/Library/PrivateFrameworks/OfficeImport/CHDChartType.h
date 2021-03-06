//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDChart, CHDDataLabel, CHDSeriesCollection, EDCollection;

__attribute__((visibility("hidden")))
@interface CHDChartType : NSObject
{
    CHDChart *mChart;	// 8 = 0x8
    EDCollection *mAxisIds;	// 16 = 0x10
    CHDSeriesCollection *mSeries;	// 24 = 0x18
    CHDDataLabel *mDefaultDataLabel;	// 32 = 0x20
    _Bool mVaryColors;	// 40 = 0x28
}

+ (_Bool)is3DType;	// IMP=0x000000000022ffd9
+ (id)chartTypeWithChart:(id)arg1;	// IMP=0x000000000020ee97
- (void).cxx_destruct;	// IMP=0x0000000000393b98
- (id)description;	// IMP=0x0000000000393b5a
- (id)defaultTitleWithResources:(id)arg1;	// IMP=0x00000000002435e8
- (int)defaultLabelPosition;	// IMP=0x0000000000393b3b
- (_Bool)isHorizontal;	// IMP=0x000000000018e660
- (void)setVaryColors:(_Bool)arg1;	// IMP=0x000000000017d976
- (_Bool)isVaryColors;	// IMP=0x00000000001f13c5
- (id)contentFormat;	// IMP=0x0000000000393ae4
- (void)setDefaultDataLabel:(id)arg1;	// IMP=0x0000000000180695
- (id)defaultDataLabel;	// IMP=0x0000000000393ad6
- (void)setSeriesCollection:(id)arg1;	// IMP=0x00000000001f36e1
- (unsigned long long)categoryCount;	// IMP=0x000000000022d3d5
- (unsigned long long)seriesCount;	// IMP=0x0000000000215677
- (id)seriesCollection;	// IMP=0x000000000017fe87
- (id)axisForClass:(Class)arg1;	// IMP=0x000000000039394b
- (void)switchAxes:(id)arg1;	// IMP=0x000000000039372f
- (id)axes;	// IMP=0x0000000000185d0a
- (_Bool)isPlotedOnSecondaryAxis;	// IMP=0x0000000000393537
- (id)axisIds;	// IMP=0x000000000017d97f
- (id)chart;	// IMP=0x0000000000181214
- (id)initWithChart:(id)arg1;	// IMP=0x000000000017d62e

@end

