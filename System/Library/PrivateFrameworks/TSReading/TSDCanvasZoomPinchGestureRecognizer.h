//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPinchGestureRecognizer.h>

@interface TSDCanvasZoomPinchGestureRecognizer : UIPinchGestureRecognizer
{
    _Bool mZoomTimedOut;	// 8 = 0x8
}

- (void)p_cancelAfterDelay;	// IMP=0x00000000001cb161
- (void)p_stopCancellationTimer;	// IMP=0x00000000001cb13b
- (void)p_startCancellationTimer;	// IMP=0x00000000001cb115
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001cb0b2
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001cb04f
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001cb013
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001caf9e
- (void)reset;	// IMP=0x00000000001caf55

@end

