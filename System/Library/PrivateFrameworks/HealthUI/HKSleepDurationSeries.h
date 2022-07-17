//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKLineSeriesPointMarkerStyle, HKStrokeStyle, NSArray, UIImage;

@interface HKSleepDurationSeries
{
    UIImage *_goalLineMarkerImage;	// 8 = 0x8
    _Bool _extendGoalLineToAxis;	// 16 = 0x10
    _Bool _hideInBedData;	// 17 = 0x11
    _Bool _hideAsleepData;	// 18 = 0x12
    NSArray *_defaultFillStyles;	// 24 = 0x18
    NSArray *_highlightedFillStyles;	// 32 = 0x20
    NSArray *_inactiveFillStyles;	// 40 = 0x28
    HKStrokeStyle *_goalLineStrokeStyle;	// 48 = 0x30
    HKLineSeriesPointMarkerStyle *_goalLineMarkerStyle;	// 56 = 0x38
    CDUnknownBlockType _startOfDayTransform;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001410da
@property(nonatomic) _Bool hideAsleepData; // @synthesize hideAsleepData=_hideAsleepData;
@property(nonatomic) _Bool hideInBedData; // @synthesize hideInBedData=_hideInBedData;
@property(copy, nonatomic) CDUnknownBlockType startOfDayTransform; // @synthesize startOfDayTransform=_startOfDayTransform;
@property(nonatomic) _Bool extendGoalLineToAxis; // @synthesize extendGoalLineToAxis=_extendGoalLineToAxis;
@property(retain, nonatomic) HKLineSeriesPointMarkerStyle *goalLineMarkerStyle; // @synthesize goalLineMarkerStyle=_goalLineMarkerStyle;
@property(copy, nonatomic) HKStrokeStyle *goalLineStrokeStyle; // @synthesize goalLineStrokeStyle=_goalLineStrokeStyle;
@property(copy, nonatomic) NSArray *inactiveFillStyles; // @synthesize inactiveFillStyles=_inactiveFillStyles;
@property(copy, nonatomic) NSArray *highlightedFillStyles; // @synthesize highlightedFillStyles=_highlightedFillStyles;
@property(copy, nonatomic) NSArray *defaultFillStyles; // @synthesize defaultFillStyles=_defaultFillStyles;
- (id)_stringForDuration:(double)arg1;	// IMP=0x0000000000140f27
- (id)_durationShortFormatter;	// IMP=0x0000000000140e97
- (id)_durationAbbreviatedFormatter;	// IMP=0x0000000000140e07
- (void)_addGoalAnnotationAtLocation:(double)arg1;	// IMP=0x0000000000140c0e
- (void)_addAnnotationForValue:(double)arg1;	// IMP=0x00000000001409d5
- (_Bool)_dataIsHidden:(long long)arg1;	// IMP=0x00000000001409a8
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000014078d
- (void)_drawGoalLineMarkers:(id)arg1 context:(struct CGContext *)arg2;	// IMP=0x0000000000140596
- (void)_drawGoalLinePath:(id)arg1 context:(struct CGContext *)arg2;	// IMP=0x00000000001404e9
- (_Bool)_currentGoal:(id)arg1 differentFrom:(id)arg2;	// IMP=0x000000000014046f
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform)arg3 context:(struct CGContext *)arg4 axisRect:(struct CGRect)arg5;	// IMP=0x000000000013f42a
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;	// IMP=0x000000000013f394
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect)arg2 minimumSpacing:(double)arg3;	// IMP=0x000000000013f33e
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;	// IMP=0x000000000013ec39
- (void)clearCaches;	// IMP=0x000000000013e91e
- (_Bool)supportsMultiTouchSelection;	// IMP=0x000000000013e89b
- (void)_rebuildPointMarkerImages;	// IMP=0x000000000013e7ef
- (id)init;	// IMP=0x000000000013e75b

@end
