//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUtilities/AXNamedReplayableGesture.h>

@interface AXNamedReplayableGesture (AXPIAdditions)
+ (void)_addFingerPoints:(id)arg1 toReplayableGesture:(id)arg2 atTime:(double)arg3;	// IMP=0x000000000000e8d6
+ (void)_addAllFingerPointsForPoint:(struct CGPoint)arg1 numberOfFingers:(unsigned long long)arg2 toReplayableGesture:(id)arg3 atTime:(double)arg4;	// IMP=0x000000000000e834
+ (id)_pinchGestureWithCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 radiusDelta:(double)arg3 angleDelta:(double)arg4 startingWidth:(double)arg5;	// IMP=0x000000000000dfec
+ (id)rotateLeftGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000000dfc9
+ (id)rotateRightGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000000dfa6
+ (id)pinchOutGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000000df7e
+ (id)pinchInGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000000df56
+ (id)forceTouchGestureAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000000dd66
+ (id)scrollGestureFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 duration:(double)arg3;	// IMP=0x000000000000db38
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 numberOfFingers:(unsigned long long)arg3 initialHoldDuration:(double)arg4;	// IMP=0x000000000000d642
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x000000000000d62d
+ (id)flickGestureStartingAtPoint:(struct CGPoint)arg1 endingAtPoint:(struct CGPoint)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x000000000000d52f
+ (id)flickGestureAtPoint:(struct CGPoint)arg1 angle:(double)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x000000000000d4c3
+ (id)holdGestureAtPoint:(struct CGPoint)arg1 withDuration:(double)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x000000000000d28d
+ (id)longPressGestureAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000000d26e
+ (id)_tapGestureAtPoint:(struct CGPoint)arg1 isDoubleTap:(_Bool)arg2 numberOfFingers:(unsigned long long)arg3 force:(double)arg4;	// IMP=0x000000000000cfc8
+ (id)tapGestureAtPoint:(struct CGPoint)arg1 isDoubleTap:(_Bool)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x000000000000cfb0
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2;	// IMP=0x000000000000cf99
+ (id)flickGestureAtPoint:(struct CGPoint)arg1 angle:(double)arg2;	// IMP=0x000000000000cf82
+ (id)tapGestureAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000000cf69
@end
