//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer;

__attribute__((visibility("hidden")))
@interface _UISystemGestureGateGestureRecognizer
{
    unsigned char _systemGestureGateType;	// 16 = 0x10
    unsigned int _systemGesturesRecognitionPossible:1;	// 17 = 0x11
    unsigned int _waitingForSystemGestureStateNotification:1;	// 17 = 0x11
    double _lastTouchTime;	// 24 = 0x18
    NSTimer *_delayTimeoutTimer;	// 32 = 0x20
}

+ (_Bool)_shouldDefaultToTouches;	// IMP=0x00000000007d3c99
- (id)_gateGestureTypeString;	// IMP=0x00000000007d428a
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000007d4284
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000007d427c
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x00000000007d4267
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;	// IMP=0x00000000007d4241
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000007d422f
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000007d3f79
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000007d3ca1
- (void)_timeOut;	// IMP=0x00000000007d3c5c
- (void)_systemGestureStateChanged:(id)arg1;	// IMP=0x00000000007d3b65
- (void)_resetGestureRecognizer;	// IMP=0x00000000007d3abe
- (void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)arg1;	// IMP=0x00000000007d396f
- (void)setDelaysTouchesEnded:(_Bool)arg1;	// IMP=0x00000000007d3837
- (void)setDelaysTouchesBegan:(_Bool)arg1;	// IMP=0x00000000007d36ff
- (void)dealloc;	// IMP=0x00000000007d3675
- (id)initWithWindow:(id)arg1 type:(unsigned char)arg2;	// IMP=0x00000000007d358b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007d355c
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000007d352d

@end

