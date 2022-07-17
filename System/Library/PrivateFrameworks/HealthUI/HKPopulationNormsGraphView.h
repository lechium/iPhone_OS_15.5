//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HKPopulationNormsChartGridView, NSMutableArray, NSNumber, NSString, UIColor, UIFont, UILabel;

@interface HKPopulationNormsGraphView : UIView
{
    double _maxChartYValue;	// 8 = 0x8
    double _minChartYValue;	// 16 = 0x10
    NSString *_ySeriesTitle;	// 24 = 0x18
    NSString *_xSeriesTitle;	// 32 = 0x20
    UIFont *_seriesTitleFont;	// 40 = 0x28
    UIColor *_highlightedSegmentColor;	// 48 = 0x30
    UILabel *_ySeriesTitleLabel;	// 56 = 0x38
    UILabel *_xSeriesTitleLabel;	// 64 = 0x40
    NSMutableArray *_ageBucketBarViews;	// 72 = 0x48
    HKPopulationNormsChartGridView *_gridView;	// 80 = 0x50
    NSNumber *_currentViewWidth;	// 88 = 0x58
    unsigned long long _sexSegmentIndex;	// 96 = 0x60
    unsigned long long _classificationIndex;	// 104 = 0x68
    UIView *_latestSampleHighlightView;	// 112 = 0x70
    NSNumber *_ageBucketIndex;	// 120 = 0x78
    NSNumber *_latestSampleValue;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000012e741
@property(retain, nonatomic) NSNumber *latestSampleValue; // @synthesize latestSampleValue=_latestSampleValue;
@property(retain, nonatomic) NSNumber *ageBucketIndex; // @synthesize ageBucketIndex=_ageBucketIndex;
@property(retain, nonatomic) UIView *latestSampleHighlightView; // @synthesize latestSampleHighlightView=_latestSampleHighlightView;
@property(nonatomic) unsigned long long classificationIndex; // @synthesize classificationIndex=_classificationIndex;
@property(nonatomic) unsigned long long sexSegmentIndex; // @synthesize sexSegmentIndex=_sexSegmentIndex;
@property(retain, nonatomic) NSNumber *currentViewWidth; // @synthesize currentViewWidth=_currentViewWidth;
@property(retain, nonatomic) HKPopulationNormsChartGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) NSMutableArray *ageBucketBarViews; // @synthesize ageBucketBarViews=_ageBucketBarViews;
@property(retain, nonatomic) UILabel *xSeriesTitleLabel; // @synthesize xSeriesTitleLabel=_xSeriesTitleLabel;
@property(retain, nonatomic) UILabel *ySeriesTitleLabel; // @synthesize ySeriesTitleLabel=_ySeriesTitleLabel;
@property(readonly, nonatomic) UIColor *highlightedSegmentColor; // @synthesize highlightedSegmentColor=_highlightedSegmentColor;
@property(readonly, nonatomic) UIFont *seriesTitleFont; // @synthesize seriesTitleFont=_seriesTitleFont;
@property(copy, nonatomic) NSString *xSeriesTitle; // @synthesize xSeriesTitle=_xSeriesTitle;
@property(copy, nonatomic) NSString *ySeriesTitle; // @synthesize ySeriesTitle=_ySeriesTitle;
@property(nonatomic) double minChartYValue; // @synthesize minChartYValue=_minChartYValue;
@property(nonatomic) double maxChartYValue; // @synthesize maxChartYValue=_maxChartYValue;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000012e4eb
- (void)layoutSubviews;	// IMP=0x000000000012e12b
- (void)updateWithUserAgeBucketIndex:(id)arg1 userLatestSampleValue:(id)arg2;	// IMP=0x000000000012e0b1
- (void)_updateUserValueChartPointIfNecessary;	// IMP=0x000000000012de48
- (void)updateWithFlattenedLevelsByAgeBucket:(id)arg1 currentClassificationIndex:(unsigned long long)arg2;	// IMP=0x000000000012d037
- (unsigned long long)_highlightIndexForClassificationIndex:(unsigned long long)arg1 numberOfSegments:(unsigned long long)arg2;	// IMP=0x000000000012d01f
- (id)initWithMaxYValue:(double)arg1 minYValue:(double)arg2 YSeriesTitle:(id)arg3 XSeriesTitle:(id)arg4 highlightedSegmentColor:(id)arg5;	// IMP=0x000000000012ce56

@end
