//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface HKElectrocardiogramAxisOptions : NSObject
{
    _Bool _scaleMetricsAutomatically;	// 8 = 0x8
    UIFont *_axisLabelFont;	// 16 = 0x10
    UIColor *_lineColor;	// 24 = 0x18
    UIColor *_axisLabelTextColor;	// 32 = 0x20
    double _lineWidth;	// 40 = 0x28
    double _axisLineToLabelSpacing;	// 48 = 0x30
    double _topBaselineMargin;	// 56 = 0x38
    double _bottomBaselineMargin;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000983bd
@property(readonly, nonatomic) double bottomBaselineMargin; // @synthesize bottomBaselineMargin=_bottomBaselineMargin;
@property(readonly, nonatomic) double topBaselineMargin; // @synthesize topBaselineMargin=_topBaselineMargin;
@property(readonly, nonatomic) double axisLineToLabelSpacing; // @synthesize axisLineToLabelSpacing=_axisLineToLabelSpacing;
@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) UIColor *axisLabelTextColor; // @synthesize axisLabelTextColor=_axisLabelTextColor;
@property(readonly, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(readonly, nonatomic) _Bool scaleMetricsAutomatically; // @synthesize scaleMetricsAutomatically=_scaleMetricsAutomatically;
@property(readonly, nonatomic) UIFont *axisLabelFont; // @synthesize axisLabelFont=_axisLabelFont;
- (id)initWithAxisLabelFont:(id)arg1 axisLabelTextColor:(id)arg2 scaleMetricsAutomatically:(_Bool)arg3 lineColor:(id)arg4 lineWidth:(double)arg5 axisLineToLabelSpacing:(double)arg6 topBaselineMargin:(double)arg7 bottomBaselineMargin:(double)arg8;	// IMP=0x0000000000098268

@end
