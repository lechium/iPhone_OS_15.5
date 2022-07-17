//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKGraphViewDelegate-Protocol.h>
#import <HealthUI/HKHistogramChartDataSourceDataFetchObserver-Protocol.h>
#import <HealthUI/HKLollipopDelegate-Protocol.h>

@class HKDisplayType, HKHealthStore, HKHistogramAnnotationViewDataSource, HKHistogramBarSeries, HKHistogramChartDataFormatter, HKHistogramChartDataSource, HKLollipopController, HKScalarGraphViewController, NSString, UILabel;

@interface HKHistogramChartViewController <HKGraphViewDelegate, HKLollipopDelegate, HKHistogramChartDataSourceDataFetchObserver>
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    double _minimumGraphViewHeight;	// 16 = 0x10
    UILabel *_headerLabel;	// 24 = 0x18
    HKScalarGraphViewController *_graphViewController;	// 32 = 0x20
    HKHistogramBarSeries *_histogramSeries;	// 40 = 0x28
    HKHistogramChartDataSource *_dataSource;	// 48 = 0x30
    HKHistogramChartDataFormatter *_dataFormatter;	// 56 = 0x38
    HKDisplayType *_displayType;	// 64 = 0x40
    HKHistogramAnnotationViewDataSource *_annotationViewDataSource;	// 72 = 0x48
    HKLollipopController *_lollipopController;	// 80 = 0x50
}

+ (id)defaultVerticalAxis;	// IMP=0x0000000000168d56
- (void).cxx_destruct;	// IMP=0x0000000000169cc5
@property(retain, nonatomic) HKLollipopController *lollipopController; // @synthesize lollipopController=_lollipopController;
@property(retain, nonatomic) HKHistogramAnnotationViewDataSource *annotationViewDataSource; // @synthesize annotationViewDataSource=_annotationViewDataSource;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) HKHistogramChartDataFormatter *dataFormatter; // @synthesize dataFormatter=_dataFormatter;
@property(retain, nonatomic) HKHistogramChartDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) HKHistogramBarSeries *histogramSeries; // @synthesize histogramSeries=_histogramSeries;
@property(retain, nonatomic) HKScalarGraphViewController *graphViewController; // @synthesize graphViewController=_graphViewController;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) double minimumGraphViewHeight; // @synthesize minimumGraphViewHeight=_minimumGraphViewHeight;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void)graphViewExternalSelectionEnd:(id)arg1;	// IMP=0x0000000000169b70
- (void)graphViewDidTapYAxis:(id)arg1;	// IMP=0x0000000000169b6a
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect)arg2;	// IMP=0x0000000000169b64
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(_Bool)arg3 changeContext:(long long)arg4;	// IMP=0x0000000000169b5e
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;	// IMP=0x0000000000169b58
- (void)graphViewSizeChanged:(id)arg1;	// IMP=0x0000000000169b52
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;	// IMP=0x0000000000169b4c
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;	// IMP=0x0000000000169b46
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;	// IMP=0x0000000000169b40
- (void)graphViewDidEndSelection:(id)arg1;	// IMP=0x0000000000169afe
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;	// IMP=0x000000000016999f
- (void)graphViewDidBeginSelection:(id)arg1;	// IMP=0x0000000000169999
- (_Bool)graphViewPointSelectionDifferentiatesSeriesGroups:(id)arg1;	// IMP=0x0000000000169991
- (id)seriesSelectionLineColorForGraphView:(id)arg1;	// IMP=0x0000000000169910
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;	// IMP=0x0000000000169885
- (long long)stackCountForGraphView:(id)arg1;	// IMP=0x000000000016987a
- (void)updateAnnotationDataSource:(id)arg1 pointContexts:(id)arg2;	// IMP=0x0000000000169808
- (void)didCompleteFetchForDataSource:(id)arg1;	// IMP=0x000000000016948e
- (id)_displayDescriptionForDataSource:(id)arg1;	// IMP=0x0000000000169354
- (id)_descriptionDateFormatter;	// IMP=0x00000000001692fc
- (void)_pinView:(id)arg1 toParentView:(id)arg2;	// IMP=0x0000000000169094
- (void)viewDidLoad;	// IMP=0x00000000001685d3
- (id)initWithHealthStore:(id)arg1 dataSource:(id)arg2 dataFormatter:(id)arg3 minimumGraphViewHeight:(double)arg4;	// IMP=0x000000000016844a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
