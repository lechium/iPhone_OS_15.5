//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class CKActionMenuGestureVelocitySample;

@interface CKActionMenuGestureRecognizer : UILongPressGestureRecognizer
{
    CKActionMenuGestureVelocitySample *_velocitySample;	// 8 = 0x8
    CKActionMenuGestureVelocitySample *_previousVelocitySample;	// 16 = 0x10
    double _lastTouchTime;	// 24 = 0x18
    struct CGPoint _lastScreenLocation;	// 32 = 0x20
}

+ (id)actionMenuGestureRecognizer;	// IMP=0x00000000002c7253
- (void).cxx_destruct;	// IMP=0x00000000002f029c
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2;	// IMP=0x00000000002f014b
- (struct CGPoint)velocityInView:(id)arg1;	// IMP=0x00000000002f009b
- (void)setAllowableMovement:(double)arg1;	// IMP=0x00000000002f0095
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;	// IMP=0x00000000002f008f
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002efebf
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002efd92
- (void)reset;	// IMP=0x00000000002efd17
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000002efc6e

@end
