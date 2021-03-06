//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSTimer;

@interface SBHomeButtonPressSpeedMesaUnlockTrigger
{
    BSTimer *_slowPressTimer;	// 8 = 0x8
    _Bool _bioUnlockOccurred;	// 16 = 0x10
    _Bool _buttonIsDown;	// 17 = 0x11
    _Bool _fingerIsOn;	// 18 = 0x12
    _Bool _timerFired;	// 19 = 0x13
    double _slowPressDuration;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005165eb
@property(retain, nonatomic, getter=_slowPressTimer, setter=_setSlowPressTimer:) BSTimer *slowPressTimer; // @synthesize slowPressTimer=_slowPressTimer;
@property(nonatomic) double slowPressDuration; // @synthesize slowPressDuration=_slowPressDuration;
- (_Bool)_isPrimed;	// IMP=0x00000000000cdda2
- (void)_evaluateUnlock;	// IMP=0x00000000000af781
- (_Bool)_isTimerRunning;	// IMP=0x00000000000cdd8d
- (void)_timerFired;	// IMP=0x00000000000af9e5
- (void)_cancelTimer;	// IMP=0x00000000000aed79
- (void)_startTimer;	// IMP=0x00000000000aecbe
- (void)fingerOff;	// IMP=0x00000000000bb866
- (void)menuButtonUp;	// IMP=0x00000000000af6f9
- (void)menuButtonDown;	// IMP=0x00000000000aec2a
- (void)screenOff;	// IMP=0x00000000000cb40c
- (_Bool)bioUnlock;	// IMP=0x00000000000cdc3f
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000516463
- (id)description;	// IMP=0x000000000051644f
- (id)init;	// IMP=0x00000000005163a0

@end

