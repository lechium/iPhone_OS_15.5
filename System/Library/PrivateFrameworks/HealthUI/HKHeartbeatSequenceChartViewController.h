//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKAxis, NSDate, NSMutableArray;

@interface HKHeartbeatSequenceChartViewController
{
    NSDate *_startDate;	// 8 = 0x8
    NSMutableArray *_sequenceDataSources;	// 16 = 0x10
    NSMutableArray *_graphSeries;	// 24 = 0x18
    HKAxis *_commonVerticalAxis;	// 32 = 0x20
    double _initialXAxisOffset;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000193a3c
@property(nonatomic) double initialXAxisOffset; // @synthesize initialXAxisOffset=_initialXAxisOffset;
@property(retain, nonatomic) HKAxis *commonVerticalAxis; // @synthesize commonVerticalAxis=_commonVerticalAxis;
@property(retain, nonatomic) NSMutableArray *graphSeries; // @synthesize graphSeries=_graphSeries;
@property(retain, nonatomic) NSMutableArray *sequenceDataSources; // @synthesize sequenceDataSources=_sequenceDataSources;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)graphViewSizeChanged:(id)arg1;	// IMP=0x0000000000193986
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;	// IMP=0x0000000000193971
- (long long)stackCountForGraphView:(id)arg1;	// IMP=0x0000000000193966
- (id)_verticalNumericalAxis;	// IMP=0x000000000019360c
- (id)_heartbeatSequenceSeriesForSource:(id)arg1 axis:(id)arg2 color:(id)arg3 lineWidth:(double)arg4 markerRadius:(double)arg5 dashStyle:(long long)arg6 annotate:(_Bool)arg7;	// IMP=0x0000000000193058
- (void)_recomputeAxisRanges;	// IMP=0x0000000000192b6f
- (void)_adjustGraphViewOptions;	// IMP=0x0000000000192b1b
- (void)addSequenceData:(id)arg1 color:(id)arg2 lineWidth:(double)arg3 markerRadius:(double)arg4 dashStyle:(long long)arg5 annotate:(_Bool)arg6;	// IMP=0x000000000019296a
- (void)addSequenceData:(id)arg1;	// IMP=0x00000000001928f3
- (void)viewWillLayoutSubviews;	// IMP=0x000000000019280b
- (void)viewDidLoad;	// IMP=0x00000000001927b5
- (id)initWithMinimumHeight:(double)arg1 startDate:(id)arg2;	// IMP=0x000000000019268f
- (id)initWithMinimumHeight:(double)arg1;	// IMP=0x000000000019267b

@end
