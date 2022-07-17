//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartAnnotationViewDataSource-Protocol.h>

@class HKActivityRingView, HKActivitySummary, HKDateCache, HKDisplayTypeController, HKUnitPreferenceController, NSString, UIView, _HKWheelchairUseCharacteristicCache;

@interface HKActivitySummaryAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>
{
    _Bool _currentValueViewContext;	// 8 = 0x8
    HKActivitySummary *_activitySummary;	// 16 = 0x10
    long long _timeScope;	// 24 = 0x18
    HKDisplayTypeController *_displayTypeController;	// 32 = 0x20
    HKUnitPreferenceController *_unitController;	// 40 = 0x28
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;	// 48 = 0x30
    HKDateCache *_dateCache;	// 56 = 0x38
    UIView *_ringContainer;	// 64 = 0x40
    HKActivityRingView *_ringView;	// 72 = 0x48
    long long _firstWeekday;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000016373b
@property(readonly, nonatomic) long long firstWeekday; // @synthesize firstWeekday=_firstWeekday;
@property(retain, nonatomic) HKActivityRingView *ringView; // @synthesize ringView=_ringView;
@property(retain, nonatomic) UIView *ringContainer; // @synthesize ringContainer=_ringContainer;
@property(nonatomic) _Bool currentValueViewContext; // @synthesize currentValueViewContext=_currentValueViewContext;
@property(retain, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(retain, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache; // @synthesize wheelchairUseCharacteristicCache=_wheelchairUseCharacteristicCache;
@property(retain, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) HKActivitySummary *activitySummary; // @synthesize activitySummary=_activitySummary;
- (id)_valueWithTitle:(id)arg1 attributedValue:(id)arg2 valueAsNumber:(id)arg3;	// IMP=0x000000000016358b
- (id)descriptionsForActivitySummary;	// IMP=0x0000000000163379
- (id)_bodyColor;	// IMP=0x000000000016332d
- (id)_columnViewWithTitle:(id)arg1 titleColor:(id)arg2 body:(id)arg3 bodyColor:(id)arg4 alignment:(long long)arg5;	// IMP=0x00000000001630ff
- (id)_weekContainingDateComponents:(id)arg1 calendar:(id)arg2 timeScope:(long long)arg3;	// IMP=0x0000000000162f09
- (id)_dateTextForDateComponents:(id)arg1 calendar:(id)arg2 timeScope:(long long)arg3;	// IMP=0x0000000000162e65
- (id)_dateColumnWithDateComponents:(id)arg1 calendar:(id)arg2 orientation:(long long)arg3;	// IMP=0x0000000000162d0c
- (id)_ringColumn;	// IMP=0x0000000000162ae7
- (id)_valueUnitAttributedStringWithValueString:(id)arg1 unitString:(id)arg2;	// IMP=0x0000000000162749
- (id)_percentStringWithQuantity:(id)arg1 goalQuantity:(id)arg2;	// IMP=0x00000000001625ba
- (id)_moveColumnAsNumber;	// IMP=0x0000000000162542
- (id)_moveColumnValueString;	// IMP=0x00000000001624ca
- (id)_moveColumn;	// IMP=0x0000000000162452
- (id)_moveTimeColumn;	// IMP=0x000000000016234c
- (id)_moveTimeColumnAsNumber;	// IMP=0x000000000016229a
- (id)_moveTimeColumnValueString;	// IMP=0x000000000016203f
- (id)_energyColumn;	// IMP=0x0000000000161f54
- (id)_energyColumnAsNumber;	// IMP=0x0000000000161e26
- (id)_energyColumnValueString;	// IMP=0x0000000000161c20
- (id)activityMoveTitle;	// IMP=0x0000000000161bc4
- (id)_exerciseColumn;	// IMP=0x0000000000161ad9
- (id)_exerciseColumnAsNumber;	// IMP=0x0000000000161a27
- (id)_exerciseColumnValueString;	// IMP=0x00000000001618b3
- (id)activityExerciseTitle;	// IMP=0x0000000000161857
- (id)_standColumn;	// IMP=0x000000000016176c
- (id)_standColumnAsNumber;	// IMP=0x00000000001616ba
- (id)_standColumnValueString;	// IMP=0x0000000000161546
- (id)activityStandTitle;	// IMP=0x0000000000161460
- (_Bool)_hasRingView;	// IMP=0x00000000001613e0
- (_Bool)showSeparators;	// IMP=0x00000000001613d8
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;	// IMP=0x0000000000161356
- (long long)numberOfValuesForAnnotationView:(id)arg1;	// IMP=0x000000000016134b
- (id)leftMarginViewWithOrientation:(long long)arg1;	// IMP=0x0000000000161307
- (id)dateViewWithOrientation:(long long)arg1;	// IMP=0x0000000000161251
- (id)initWithDisplayTypeController:(id)arg1 unitController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 dateCache:(id)arg4 currentValueViewContext:(_Bool)arg5 firstWeekday:(long long)arg6;	// IMP=0x0000000000161160

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
