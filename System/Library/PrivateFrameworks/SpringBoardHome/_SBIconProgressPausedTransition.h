//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction;

@interface _SBIconProgressPausedTransition
{
    double _totalElapsedTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    CAMediaTimingFunction *_timingFunction;	// 24 = 0x18
    _Bool _toPaused;	// 32 = 0x20
    double _fraction;	// 40 = 0x28
}

+ (id)newTransitionToPaused:(_Bool)arg1;	// IMP=0x00000000001109a6
- (void).cxx_destruct;	// IMP=0x0000000000110dd7
- (void)_updateElapsedTimeFromFraction;	// IMP=0x0000000000110cd0
- (void)_updateTimingFunction;	// IMP=0x0000000000110c70
- (void)_updateView:(id)arg1;	// IMP=0x0000000000110b8b
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x0000000000110b68
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x0000000000110b41
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x0000000000110a99
- (void)updateToPaused:(_Bool)arg1;	// IMP=0x0000000000110a3e
- (id)_initToPaused:(_Bool)arg1;	// IMP=0x00000000001109cb

@end

