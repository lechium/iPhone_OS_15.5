//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COSActivityGoalView, COSActivityLevelView, FIUIFormattingManager, FIUIUnitManager, HKHealthStore, HKQuantity, NSArray, NSString, OBBoldTrayButton, UIScrollView;

@interface COSActivitySetupViewController
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    FIUIUnitManager *_unitManager;	// 16 = 0x10
    FIUIFormattingManager *_formattingManager;	// 24 = 0x18
    long long _activityMoveMode;	// 32 = 0x20
    UIScrollView *_scrollView;	// 40 = 0x28
    NSArray *_activityLevels;	// 48 = 0x30
    HKQuantity *_newDailyMoveGoal;	// 56 = 0x38
    OBBoldTrayButton *_continueButton;	// 64 = 0x40
    COSActivityLevelView *_activityLevelView;	// 72 = 0x48
    COSActivityGoalView *_currentlyPresentedView;	// 80 = 0x50
    COSActivityGoalView *_moveGoalView;	// 88 = 0x58
    COSActivityGoalView *_exerciseGoalView;	// 96 = 0x60
    COSActivityGoalView *_standGoalView;	// 104 = 0x68
    double _maxHeaderViewHeight;	// 112 = 0x70
    double *_headerHeights;	// 120 = 0x78
    int _currentPageIndex;	// 128 = 0x80
    NSArray *_pageTitles;	// 136 = 0x88
    NSArray *_pageDetailTexts;	// 144 = 0x90
    HKQuantity *_newDailyExerciseGoal;	// 152 = 0x98
    HKQuantity *_newDailyStandGoal;	// 160 = 0xa0
    _Bool _isTinkerPaired;	// 168 = 0xa8
    _Bool _isWheelchairUser;	// 169 = 0xa9
    _Bool _isRTL;	// 170 = 0xaa
}

- (void).cxx_destruct;	// IMP=0x00200000001216e2
- (id)tapToRadarMetadata;	// IMP=0x00100000001216b4
- (void)_loadExerciseAndStandGoalViews;	// IMP=0x0010000000120e28
- (void)_configureBuilderForMoveTime:(id)arg1;	// IMP=0x0010000000120d7c
- (id)currentStandGoal;	// IMP=0x0010000000120d5f
- (id)currentExerciseGoal;	// IMP=0x0010000000120d42
- (id)currentMoveGoal;	// IMP=0x0010000000120d25
- (void)_setActivityLevel:(id)arg1 activityMoveMode:(long long)arg2;	// IMP=0x0010000000120be5
- (id)activityLevelForSegmentedControlIndex:(long long)arg1;	// IMP=0x0010000000120b86
- (void)_activityLevelPresetChanged:(id)arg1;	// IMP=0x0010000000120ae5
- (id)_activityLevelView;	// IMP=0x00100000001209f4
- (void)setActivityLevels:(id)arg1 activityMoveMode:(long long)arg2;	// IMP=0x0010000000120949
- (void)tappedContinue:(id)arg1;	// IMP=0x00100000001200a3
- (id)healthStore;	// IMP=0x001000000012002a
- (id)_formattingManager;	// IMP=0x001000000011ff9c
- (id)_unitManager;	// IMP=0x001000000011ff0e
- (void)_storeGoals;	// IMP=0x001000000011f8dd
- (void)_configureBuilder:(id)arg1 forMoveUnit:(id)arg2;	// IMP=0x001000000011f83e
- (id)_createGoalViewWithFrame:(struct CGRect)arg1 builderBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000011f7a1
- (void)_loadMoveGoalView;	// IMP=0x001000000011f2e7
- (void)alignGoalViews;	// IMP=0x001000000011f11a
- (_Bool)shouldAccountForHeaderHeight;	// IMP=0x001000000011efec
- (void)updateHeaderViewContent;	// IMP=0x001000000011eefd
- (void)computeMaxYForGoalViews;	// IMP=0x001000000011ec1b
- (void)viewWillLayoutSubviews;	// IMP=0x001000000011e79c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000011e753
- (void)viewDidLoad;	// IMP=0x001000000011dc9a
- (void)generateHeaders;	// IMP=0x001000000011d6a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

