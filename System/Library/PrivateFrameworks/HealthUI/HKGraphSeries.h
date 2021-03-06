//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartCachePriorityDelegate-Protocol.h>
#import <HealthUI/HKGraphSeriesDataSourceDelegate-Protocol.h>

@class HKAxis, HKGraphSeriesDataSource, HKValueRange, NSArray, NSMutableDictionary, NSString, NSUUID, UIColor, UIView;
@protocol HKAxisAccessoryViewDelegate, HKGraphSeriesAxisAnnotation, HKGraphSeriesAxisScalingRule, HKSeriesDelegate;

@interface HKGraphSeries : NSObject <HKGraphSeriesDataSourceDelegate, HKChartCachePriorityDelegate>
{
    _Bool _dirty;	// 8 = 0x8
    CDStruct_f3788345 _selectedPathRange;	// 16 = 0x10
    NSMutableDictionary *_cachedCoordinateListsByBlockPath;	// 64 = 0x40
    NSMutableDictionary *_cachedDataBlocksByBlockPath;	// 72 = 0x48
    HKValueRange *_closestXCoordinateRange;	// 80 = 0x50
    HKValueRange *_visibleValueRange;	// 88 = 0x58
    _Bool _allowsSelection;	// 96 = 0x60
    _Bool _adjustYAxisForLabels;	// 97 = 0x61
    _Bool _isCriticalForAutoscale;	// 98 = 0x62
    _Bool _wantsRoundingDuringYRangeExpansion;	// 99 = 0x63
    HKGraphSeriesDataSource *_dataSource;	// 104 = 0x68
    NSArray *_titleLegendEntries;	// 112 = 0x70
    NSArray *_detailLegendEntries;	// 120 = 0x78
    id <HKSeriesDelegate> _delegate;	// 128 = 0x80
    id <HKGraphSeriesAxisAnnotation> _axisAnnotationDelegate;	// 136 = 0x88
    id <HKAxisAccessoryViewDelegate> _yAxisAccessoryViewDelegate;	// 144 = 0x90
    double _alpha;	// 152 = 0x98
    double _offscreenIndicatorAlpha;	// 160 = 0xa0
    NSUUID *_UUID;	// 168 = 0xa8
    id _seriesDataSourceContext;	// 176 = 0xb0
    HKAxis *_yAxis;	// 184 = 0xb8
    id <HKGraphSeriesAxisScalingRule> _axisScalingRule;	// 192 = 0xc0
    UIView *_cachedYAxisAccessoryView;	// 200 = 0xc8
    UIColor *_offScreenIndicatorColor;	// 208 = 0xd0
}

+ (void)drawInnerDotMarkerInContext:(struct CGContext *)arg1 outColor:(struct CGColor *)arg2 inColor:(struct CGColor *)arg3 x:(double)arg4 y:(double)arg5 radius:(double)arg6;	// IMP=0x0000000000261bb8
+ (void)drawFilledMarkerInContext:(struct CGContext *)arg1 color:(struct CGColor *)arg2 x:(double)arg3 y:(double)arg4 radius:(double)arg5;	// IMP=0x0000000000261b4e
- (void).cxx_destruct;	// IMP=0x0000000000262007
@property(retain, nonatomic) UIColor *offScreenIndicatorColor; // @synthesize offScreenIndicatorColor=_offScreenIndicatorColor;
@property(retain, nonatomic) UIView *cachedYAxisAccessoryView; // @synthesize cachedYAxisAccessoryView=_cachedYAxisAccessoryView;
@property(retain, nonatomic) id <HKGraphSeriesAxisScalingRule> axisScalingRule; // @synthesize axisScalingRule=_axisScalingRule;
@property(retain, nonatomic) HKAxis *yAxis; // @synthesize yAxis=_yAxis;
@property(nonatomic) _Bool wantsRoundingDuringYRangeExpansion; // @synthesize wantsRoundingDuringYRangeExpansion=_wantsRoundingDuringYRangeExpansion;
@property(nonatomic) _Bool isCriticalForAutoscale; // @synthesize isCriticalForAutoscale=_isCriticalForAutoscale;
@property(retain, nonatomic) id seriesDataSourceContext; // @synthesize seriesDataSourceContext=_seriesDataSourceContext;
@property(nonatomic) _Bool adjustYAxisForLabels; // @synthesize adjustYAxisForLabels=_adjustYAxisForLabels;
@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) double offscreenIndicatorAlpha; // @synthesize offscreenIndicatorAlpha=_offscreenIndicatorAlpha;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) __weak id <HKAxisAccessoryViewDelegate> yAxisAccessoryViewDelegate; // @synthesize yAxisAccessoryViewDelegate=_yAxisAccessoryViewDelegate;
@property(nonatomic) __weak id <HKGraphSeriesAxisAnnotation> axisAnnotationDelegate; // @synthesize axisAnnotationDelegate=_axisAnnotationDelegate;
@property(nonatomic) __weak id <HKSeriesDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *detailLegendEntries; // @synthesize detailLegendEntries=_detailLegendEntries;
@property(retain, nonatomic) NSArray *titleLegendEntries; // @synthesize titleLegendEntries=_titleLegendEntries;
@property(retain, nonatomic) HKGraphSeriesDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (struct CGRect)backgroundRectFromStringRect:(struct CGRect)arg1 forFont:(id)arg2;	// IMP=0x0000000000261d52
- (struct CGRect)adjustRect:(struct CGRect)arg1 forFont:(id)arg2;	// IMP=0x0000000000261c7a
- (_Bool)untransformedChartPointsForTimeScope:(long long)arg1 range:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002616cf
- (id)findVisibleBlockCoordinatesForChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 xAxisTransform:(struct CGAffineTransform)arg5;	// IMP=0x000000000026125d
- (double)distanceFromTouchPoint:(struct CGPoint)arg1 inChartRect:(struct CGRect)arg2 xAxis:(id)arg3 zoomScale:(double)arg4 contentOffset:(struct CGPoint)arg5 xAxisTransform:(struct CGAffineTransform)arg6;	// IMP=0x00000000002610a0
- (void)deselectPath;	// IMP=0x000000000026104b
- (void)selectPathsinPathRange:(CDStruct_f3788345)arg1 coordinateRange:(id)arg2;	// IMP=0x0000000000260f9f
- (_Bool)isHighlighted;	// IMP=0x0000000000260f61
- (id)closestXCoordinateRange;	// IMP=0x0000000000260f53
- (CDStruct_f3788345)selectedPathRange;	// IMP=0x0000000000260f33
- (void)layoutOverlayInteractiveViews:(id)arg1 seriesOverlayData:(id)arg2 overlayRect:(struct CGRect)arg3;	// IMP=0x0000000000260f2d
- (id)overlayInteractiveViewsWithDelegate:(id)arg1;	// IMP=0x0000000000260f25
- (void)drawOverlayInContext:(struct CGContext *)arg1 seriesOverlayData:(id)arg2;	// IMP=0x0000000000260f1f
- (id)overlayIdentifier;	// IMP=0x0000000000260f17
- (long long)overlayType;	// IMP=0x0000000000260f0f
- (void)updateLegendsForTimeScope:(long long)arg1 range:(id)arg2;	// IMP=0x0000000000260f09
- (id)marginsForYAxis:(id)arg1 chartRect:(struct CGRect)arg2;	// IMP=0x0000000000260ef3
- (_Bool)supportsMultiTouchSelection;	// IMP=0x00000000002c970b
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;	// IMP=0x00000000002c96e4
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;	// IMP=0x00000000002c96c0
- (void)clearCaches;	// IMP=0x0000000000260eed
- (_Bool)isRangeHighPriority:(id)arg1;	// IMP=0x0000000000260e76
- (id)_dataBlockForBlockPath:(CDStruct_6ca94699)arg1;	// IMP=0x0000000000260d8e
- (id)_coordinatesForBlockPath:(CDStruct_6ca94699)arg1 xAxis:(id)arg2;	// IMP=0x0000000000260cc0
- (void)_cacheCoordinates:(id)arg1 forBlockPath:(CDStruct_6ca94699)arg2;	// IMP=0x0000000000260c2f
- (id)_cachedCoordinatesForBlockPath:(CDStruct_6ca94699)arg1;	// IMP=0x0000000000260bc8
- (id)_coordinateListsWithXValueRange:(id)arg1 xAxis:(id)arg2 zoomLevel:(long long)arg3;	// IMP=0x0000000000260a10
- (void)_enumeratePathIndexesInValueRange:(id)arg1 zoomLevel:(long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000002608c6
- (id)_coordinateListsForGeneratorWithXAxis:(id)arg1 zoomScale:(double)arg2 chartRect:(struct CGRect)arg3 contentOffset:(struct CGPoint)arg4;	// IMP=0x00000000002607ca
- (id)_visibleXValueRangeWithAxis:(id)arg1 chartRect:(struct CGRect)arg2 contentOffset:(struct CGPoint)arg3 zoomScale:(double)arg4;	// IMP=0x000000000026065e
- (void)_setDirtyWithNewData:(_Bool)arg1;	// IMP=0x0000000000260508
- (void)dataSourceDidUpdateCache:(id)arg1;	// IMP=0x00000000002604bb
- (_Bool)configureYAxisAccessoryViewForDateRange:(id)arg1 timeScope:(long long)arg2;	// IMP=0x000000000026040e
- (struct UIEdgeInsets)yAxisAccessoryViewEdgeInsets;	// IMP=0x0000000000260380
- (struct CGSize)yAxisAccessoryViewSize;	// IMP=0x0000000000260300
- (void)enumerateCoordinatesInChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 xAxisTransform:(struct CGAffineTransform)arg5 roundToViewScale:(_Bool)arg6 exclusionOptions:(long long)arg7 block:(CDUnknownBlockType)arg8;	// IMP=0x000000000025fdba
- (_Bool)containsCoordinatesInChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 xAxisTransform:(struct CGAffineTransform)arg5;	// IMP=0x000000000025fc85
- (struct CGAffineTransform)coordinateTransformForChartRect:(struct CGRect)arg1 xAxisTransform:(struct CGAffineTransform)arg2;	// IMP=0x000000000025fb0b
- (void)drawWithChartRect:(struct CGRect)arg1 seriesCoordinates:(id)arg2 zoomLevelConfiguration:(id)arg3 coordinateTransform:(struct CGAffineTransform)arg4 inContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;	// IMP=0x000000000025f9a3
- (struct CGAffineTransform)coordinateTransformFromXAxisTransform:(struct CGAffineTransform)arg1 chartRect:(struct CGRect)arg2;	// IMP=0x000000000025f955
- (id)seriesCoordinatesWithXAxis:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4;	// IMP=0x000000000025f725
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;	// IMP=0x00000000002c9699
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;	// IMP=0x00000000002c9672
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;	// IMP=0x000000000025f71d
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;	// IMP=0x000000000025f708
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;	// IMP=0x00000000002c964a
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;	// IMP=0x00000000002c9622
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;	// IMP=0x00000000002c95fa
- (struct UIEdgeInsets)virtualMarginInsets;	// IMP=0x000000000025f661
- (id)_clipYAxisValueRangeIfNecessary:(id)arg1;	// IMP=0x000000000025f3d1
- (id)valueRangeForYAxisWithXAxisRange:(id)arg1 dateZoom:(long long)arg2 chartRect:(struct CGRect)arg3;	// IMP=0x000000000025e80b
- (_Bool)hasAnyDataLoadedInXAxisRange:(id)arg1 dateZoom:(long long)arg2 chartRect:(struct CGRect)arg3;	// IMP=0x000000000025e6af
- (id)_expandYRange:(id)arg1 withXRange:(id)arg2 dateZoom:(long long)arg3 chartRect:(struct CGRect)arg4;	// IMP=0x000000000025e1ae
- (void)updateForAutoscale:(id)arg1;	// IMP=0x000000000025e16a
- (_Bool)shouldInvertAxis;	// IMP=0x000000000025e162
- (id)visibleValueRange;	// IMP=0x000000000025e136
- (void)dealloc;	// IMP=0x000000000025e045
- (id)init;	// IMP=0x000000000025df36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

