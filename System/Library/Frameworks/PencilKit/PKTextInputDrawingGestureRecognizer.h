//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

#import <PencilKit/PKDrawingGestureRecognizerProtocol-Protocol.h>
#import <PencilKit/PKTextInputDebugStateReporting-Protocol.h>

@class NSString, PKTextInputElement, UITouch;
@protocol PKDrawingGestureTarget, PKTextInputDrawingGestureRecognizerDelegate;

@interface PKTextInputDrawingGestureRecognizer : UIGestureRecognizer <PKDrawingGestureRecognizerProtocol, PKTextInputDebugStateReporting>
{
    _Bool _waitingForTargetElementSearch;	// 8 = 0x8
    _Bool _requiresTargetElementToBegin;	// 9 = 0x9
    _Bool _requiresPastTapToBegin;	// 10 = 0xa
    double _drawStartTime;	// 16 = 0x10
    double _touchesBeganTimestamp;	// 24 = 0x18
    struct CGPoint _drawTouchStartPoint;	// 32 = 0x20
    CDUnknownBlockType _timeoutBlock;	// 48 = 0x30
    CDUnknownBlockType _longPressTentativeBlock;	// 56 = 0x38
    CDUnknownBlockType _longPressSuccessBlock;	// 64 = 0x40
    CDUnknownBlockType _notMovingCancelBlock;	// 72 = 0x48
    CDUnknownBlockType _gestureEnvironmentResetTimeoutBlock;	// 80 = 0x50
    _Bool _drawingTargetIsDrawing;	// 88 = 0x58
    _Bool _isReplaying;	// 89 = 0x59
    unsigned long long _activeInputProperties;	// 96 = 0x60
    id <PKDrawingGestureTarget> drawingTarget;	// 104 = 0x68
    long long _strokeAcceptanceState;	// 112 = 0x70
    long long _longPressState;	// 120 = 0x78
    PKTextInputElement *_targetElement;	// 128 = 0x80
    UITouch *_drawingTouch;	// 136 = 0x88
    long long _panState;	// 144 = 0x90
    long long _panDirection;	// 152 = 0x98
}

+ (id)_systemGestureClassesToAvoid;	// IMP=0x00000000002604e0
- (void).cxx_destruct;	// IMP=0x000000000026131b
@property(nonatomic, setter=_setPanDirection:) long long panDirection; // @synthesize panDirection=_panDirection;
@property(nonatomic, setter=_setPanState:) long long panState; // @synthesize panState=_panState;
@property(retain, nonatomic) UITouch *drawingTouch; // @synthesize drawingTouch=_drawingTouch;
@property(nonatomic) _Bool isReplaying; // @synthesize isReplaying=_isReplaying;
@property(retain, nonatomic) PKTextInputElement *targetElement; // @synthesize targetElement=_targetElement;
@property(nonatomic, setter=_setLongPressState:) long long longPressState; // @synthesize longPressState=_longPressState;
@property(nonatomic, setter=_setStrokeAcceptanceState:) long long strokeAcceptanceState; // @synthesize strokeAcceptanceState=_strokeAcceptanceState;
@property(nonatomic, setter=_setDrawingTargetIsDrawing:) _Bool drawingTargetIsDrawing; // @synthesize drawingTargetIsDrawing=_drawingTargetIsDrawing;
@property(nonatomic) __weak id <PKDrawingGestureTarget> drawingTarget; // @synthesize drawingTarget;
@property(readonly, nonatomic) unsigned long long activeInputProperties; // @synthesize activeInputProperties=_activeInputProperties;
- (void)_replayDrawingCancelled;	// IMP=0x0000000000261118
- (void)_replayDrawingEnded;	// IMP=0x000000000026103e
- (void)_replayDrawingMoved:(CDStruct_6422aa5d)arg1;	// IMP=0x0000000000260f69
- (void)_replayDrawingBegan:(CDStruct_6422aa5d)arg1;	// IMP=0x0000000000260e60
- (void)reportDebugStateDescription:(CDUnknownBlockType)arg1;	// IMP=0x0000000000260b4c
- (void)cancelDrawing;	// IMP=0x0000000000260ac9
- (void)_drawingEnded;	// IMP=0x0000000000260a3b
- (void)_drawingMoved:(id)arg1;	// IMP=0x00000000002609b2
- (void)_drawingBegan;	// IMP=0x0000000000260921
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;	// IMP=0x00000000002605db
- (void)reset;	// IMP=0x0000000000260202
- (void)end;	// IMP=0x00000000002601f0
- (void)cancel;	// IMP=0x00000000002600c1
- (void)_endDrawing;	// IMP=0x00000000002600aa
- (void)_cancelOrFailGesture;	// IMP=0x0000000000260028
- (void)_acceptStrokeTimeoutTriggered;	// IMP=0x000000000025fff8
- (void)_cancelScheduledStrokeAcceptanceBlock;	// IMP=0x000000000025ffbe
- (void)_cancelNotMovingCancellationBlock;	// IMP=0x000000000025ff84
- (void)_evaluateCancelIfNotMoving;	// IMP=0x000000000025fd62
- (void)_updateStrokeAcceptanceStateUseTimestampFromTouch:(_Bool)arg1;	// IMP=0x000000000025f89c
- (void)_evaluateMovingToBeganStateUseTimestampFromTouch:(_Bool)arg1;	// IMP=0x000000000025f302
- (void)_beginDrawingIfNeeded;	// IMP=0x000000000025f292
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;	// IMP=0x000000000025f220
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000025ee70
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000025ecf3
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000025eb24
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000025e5b4
- (void)_updatePanStateForCandidateElements:(id)arg1;	// IMP=0x000000000025e34d
- (long long)_panDirectionForTouch:(id)arg1;	// IMP=0x000000000025e260
- (void)_updatePanGestureStateForTouch:(id)arg1;	// IMP=0x000000000025e0c7
- (_Bool)_hasMovedPastScrollThresholdForTouch:(id)arg1;	// IMP=0x000000000025e004
- (_Bool)_hasMovedPastMinimumPanThresholdForTouch:(id)arg1;	// IMP=0x000000000025df96
- (void)_cancelLongPressTimerBlocks;	// IMP=0x000000000025df09
- (void)_updateLongPressValidityForTouch:(id)arg1;	// IMP=0x000000000025de92
- (void)_longPressSuccessTimerFired;	// IMP=0x000000000025ddfd
- (void)_longPressTentativeTimerFired;	// IMP=0x000000000025dd25
- (void)_scheduleLongPressTimerBlocks;	// IMP=0x000000000025da97
- (_Bool)_isValidLongPressOverDuration:(double)arg1;	// IMP=0x000000000025da23
- (_Bool)_isWithinLongPressDistanceForTouch:(id)arg1;	// IMP=0x000000000025d9b5
- (_Bool)_isValidLongPress;	// IMP=0x000000000025d939
- (void)_enumerateTouchesForUpdateWithEvent:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000025d72a
- (_Bool)hasMovedPastTapUseTimestampFromTouch:(_Bool)arg1;	// IMP=0x000000000025d5b7
@property(readonly, copy) NSString *description;
- (_Bool)_gestureStartedInsideTargetElement;	// IMP=0x000000000025d39c
- (double)timeIntervalSinceTouchesBeganForTouch:(id)arg1;	// IMP=0x000000000025d31e
- (double)timeIntervalSinceStartOfGesture;	// IMP=0x000000000025d2da
- (double)_distanceFromStartPositionForTouch:(id)arg1;	// IMP=0x000000000025d28d
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x000000000025d234
- (void)finishedElementFindingWithElement:(id)arg1 candidateElements:(id)arg2;	// IMP=0x000000000025d019
- (void)setState:(long long)arg1;	// IMP=0x000000000025cc35
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000025cba4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PKTextInputDrawingGestureRecognizerDelegate> delegate; // @dynamic delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

