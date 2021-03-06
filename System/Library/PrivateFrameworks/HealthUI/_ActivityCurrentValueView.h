//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HKActivitySummaryDataProvider, HKInteractiveChartAnnotationView, NSLayoutConstraint, _ActivityCurrentValueDataSource;

@interface _ActivityCurrentValueView : UIView
{
    HKInteractiveChartAnnotationView *_annotationView;	// 8 = 0x8
    _ActivityCurrentValueDataSource *_currentValueDataSource;	// 16 = 0x10
    HKActivitySummaryDataProvider *_activitySummaryDataProvider;	// 24 = 0x18
    NSLayoutConstraint *_leadingMarginConstraint;	// 32 = 0x20
    NSLayoutConstraint *_trailingMarginConstraint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002290a0
@property(retain, nonatomic) NSLayoutConstraint *trailingMarginConstraint; // @synthesize trailingMarginConstraint=_trailingMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingMarginConstraint; // @synthesize leadingMarginConstraint=_leadingMarginConstraint;
@property(retain, nonatomic) HKActivitySummaryDataProvider *activitySummaryDataProvider; // @synthesize activitySummaryDataProvider=_activitySummaryDataProvider;
@property(retain, nonatomic) _ActivityCurrentValueDataSource *currentValueDataSource; // @synthesize currentValueDataSource=_currentValueDataSource;
@property(readonly, nonatomic) HKInteractiveChartAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (id)_findFirstActivitySeriesInGraphView:(id)arg1;	// IMP=0x0000000000228ead
- (void)_updateForDayWithGraphView:(id)arg1;	// IMP=0x0000000000228c59
- (void)_updateWithGraphView:(id)arg1 forTimeScopeAboveDay:(long long)arg2;	// IMP=0x000000000022882a
- (void)layoutSubviews;	// IMP=0x00000000002286c5
- (void)updateWithGraphView:(id)arg1 timeScope:(long long)arg2;	// IMP=0x0000000000228663
- (id)initWithDisplayTypeController:(id)arg1 unitPreferenceController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewCallbacks:(id)arg4 activitySummaryDataProvider:(id)arg5 firstWeekday:(long long)arg6;	// IMP=0x00000000002284a5

@end

