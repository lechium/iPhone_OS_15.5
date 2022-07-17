//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKGraphViewDelegate-Protocol.h>

@class HKGraphView, NSString;
@protocol HKGraphViewControllerDelegate, HKGraphViewDelegate;

@interface HKGraphViewController <HKGraphViewDelegate>
{
    HKGraphView *_graphView;	// 8 = 0x8
    id <HKGraphViewDelegate> _graphViewDelegateProxy;	// 16 = 0x10
    id <HKGraphViewControllerDelegate> _delegate;	// 24 = 0x18
    long long _dateZoom;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004d520
@property(readonly, nonatomic) long long dateZoom; // @synthesize dateZoom=_dateZoom;
@property(nonatomic) __weak id <HKGraphViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <HKGraphViewDelegate> graphViewDelegateProxy; // @synthesize graphViewDelegateProxy=_graphViewDelegateProxy;
@property(readonly, nonatomic) HKGraphView *graphView; // @synthesize graphView=_graphView;
- (void)graphViewExternalSelectionEnd:(id)arg1;	// IMP=0x000000000004d447
- (void)graphView:(id)arg1 startupTime:(long long)arg2;	// IMP=0x000000000004d3e4
- (void)graphViewDidTapYAxis:(id)arg1;	// IMP=0x000000000004d387
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect)arg2;	// IMP=0x000000000004d316
- (id)seriesSelectionLineColorForGraphView:(id)arg1;	// IMP=0x000000000004d2a9
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(_Bool)arg3 changeContext:(long long)arg4;	// IMP=0x000000000004d21d
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;	// IMP=0x000000000004d1a9
- (void)graphViewSizeChanged:(id)arg1;	// IMP=0x000000000004d14c
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;	// IMP=0x000000000004d0d3
- (long long)stackCountForGraphView:(id)arg1;	// IMP=0x000000000004d072
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;	// IMP=0x000000000004cffd
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;	// IMP=0x000000000004cf79
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;	// IMP=0x000000000004ceed
- (void)graphViewDidEndSelection:(id)arg1;	// IMP=0x000000000004ce90
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;	// IMP=0x000000000004ce1b
- (void)graphViewDidBeginSelection:(id)arg1;	// IMP=0x000000000004cdbe
- (_Bool)graphViewPointSelectionDifferentiatesSeriesGroups:(id)arg1;	// IMP=0x000000000004cd5d
- (void)setDetailView:(id)arg1;	// IMP=0x000000000004cd40
- (id)initWithGraphView:(id)arg1 dateZoom:(long long)arg2;	// IMP=0x000000000004cc92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
