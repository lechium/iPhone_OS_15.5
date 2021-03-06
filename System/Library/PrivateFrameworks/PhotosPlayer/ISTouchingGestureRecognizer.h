//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@interface ISTouchingGestureRecognizer : UIGestureRecognizer
{
    _Bool _requireSingleTouch;	// 8 = 0x8
    double _minimumTouchDuration;	// 16 = 0x10
    double _maximumTouchMovement;	// 24 = 0x18
    double _distanceFromInitialPoint;	// 32 = 0x20
    unsigned long long __touchCount;	// 40 = 0x28
    unsigned long long __beginRequestID;	// 48 = 0x30
    struct CGPoint __initialPointInView;	// 56 = 0x38
}

@property(nonatomic, setter=_setInitialPointInView:) struct CGPoint _initialPointInView; // @synthesize _initialPointInView=__initialPointInView;
@property(nonatomic, setter=_setBeginRequestID:) unsigned long long _beginRequestID; // @synthesize _beginRequestID=__beginRequestID;
@property(nonatomic, setter=_setTouchCount:) unsigned long long _touchCount; // @synthesize _touchCount=__touchCount;
@property(readonly, nonatomic) double distanceFromInitialPoint; // @synthesize distanceFromInitialPoint=_distanceFromInitialPoint;
@property(nonatomic) double maximumTouchMovement; // @synthesize maximumTouchMovement=_maximumTouchMovement;
@property(nonatomic) _Bool requireSingleTouch; // @synthesize requireSingleTouch=_requireSingleTouch;
@property(nonatomic) double minimumTouchDuration; // @synthesize minimumTouchDuration=_minimumTouchDuration;
- (void)_updateDistanceFromInitialPoint;	// IMP=0x0000000000022929
- (void)reset;	// IMP=0x00000000000228c5
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000022869
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000022835
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000022801
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000022792
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002275e
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000226d6
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000226a2
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002266e
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002263a
- (void)_beginWithRequestID:(unsigned long long)arg1;	// IMP=0x00000000000225fd
- (void)_decrementTouchesBy:(unsigned long long)arg1;	// IMP=0x00000000000223e5
- (void)_incrementTouchesBy:(unsigned long long)arg1;	// IMP=0x000000000002233e
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000222e6

@end

