//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HMPoint, NSMutableArray, UIImageView;
@protocol HUCameraActivityZoneCanvasDelegate;

@interface HUCameraActivityZoneCanvasView : UIView
{
    _Bool _displaysInclusionZones;	// 8 = 0x8
    _Bool _editingActivityZone;	// 9 = 0x9
    id <HUCameraActivityZoneCanvasDelegate> _delegate;	// 16 = 0x10
    NSMutableArray *_activityZones;	// 24 = 0x18
    NSMutableArray *_currentActivityZone;	// 32 = 0x20
    UIImageView *_canvasView;	// 40 = 0x28
    long long _currentTouchPointIndex;	// 48 = 0x30
    HMPoint *_startingTouchPoint;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000437a31
@property(retain, nonatomic) HMPoint *startingTouchPoint; // @synthesize startingTouchPoint=_startingTouchPoint;
@property(nonatomic) long long currentTouchPointIndex; // @synthesize currentTouchPointIndex=_currentTouchPointIndex;
@property(retain, nonatomic) UIImageView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) NSMutableArray *currentActivityZone; // @synthesize currentActivityZone=_currentActivityZone;
@property(nonatomic, getter=isEditingActivityZone) _Bool editingActivityZone; // @synthesize editingActivityZone=_editingActivityZone;
@property(nonatomic) _Bool displaysInclusionZones; // @synthesize displaysInclusionZones=_displaysInclusionZones;
@property(readonly, nonatomic) NSMutableArray *activityZones; // @synthesize activityZones=_activityZones;
@property(nonatomic) __weak id <HUCameraActivityZoneCanvasDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_addTouchpointAtPoint:(struct CGPoint)arg1 inContext:(struct CGContext *)arg2 withRed:(double)arg3 green:(double)arg4 blue:(double)arg5;	// IMP=0x0000000000437752
- (struct CGPoint)_hmPointToCGPoint:(id)arg1;	// IMP=0x00000000004376d2
- (struct CGPoint)_normalizedPointForPoint:(struct CGPoint)arg1;	// IMP=0x000000000043764b
- (void)_handleEndForGesture:(id)arg1;	// IMP=0x00000000004371ae
- (void)_handleChangeForGesture:(id)arg1;	// IMP=0x000000000043702f
- (void)_handleBeginForGesture:(id)arg1;	// IMP=0x0000000000436e1d
- (void)didPan:(id)arg1;	// IMP=0x0000000000436dc5
- (void)didTap:(id)arg1;	// IMP=0x000000000043647e
- (void)preventAttemptToMovePoint;	// IMP=0x0000000000436388
- (_Bool)currentZonesIntersectPoint:(struct CGPoint)arg1;	// IMP=0x00000000004362e2
- (_Bool)currentZonesIntersectSegmentFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x0000000000435e72
- (_Bool)isValidPointInView:(struct CGPoint)arg1;	// IMP=0x0000000000435e3f
@property(readonly, nonatomic) _Bool isCreatingActivityZone;
- (id)selectedActivityZoneAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000435d11
- (id)activityZoneContainingPoint:(struct CGPoint)arg1;	// IMP=0x0000000000435a8c
- (void)clearActivityZone;	// IMP=0x00000000004358cc
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000004358c4
- (void)_displayMenuForActivityZone:(id)arg1;	// IMP=0x000000000043572a
- (void)_editActivityZone:(id)arg1;	// IMP=0x0000000000435477
- (void)_finishEditingCurrentActivityZone;	// IMP=0x0000000000435419
- (void)_prepCurrentActivityZoneForDeselection;	// IMP=0x000000000043518b
- (void)_resetCanvasAndCurrentZone;	// IMP=0x000000000043512b
- (id)_hmPointForTapPoint:(struct CGPoint)arg1;	// IMP=0x0000000000434f6d
- (void)createActivityZone;	// IMP=0x0000000000434d2d
- (_Bool)canCreateActivityZone;	// IMP=0x000000000043499e
- (void)loadActivityZones:(id)arg1;	// IMP=0x00000000004347e2
- (void)_drawTouchPoints;	// IMP=0x0000000000434403
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000004342be
- (void)_drawPolygonWithMaskPath:(id)arg1;	// IMP=0x0000000000433f19
- (void)updateAfterVideoBoundsChange;	// IMP=0x0000000000433eeb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000433c44

@end
