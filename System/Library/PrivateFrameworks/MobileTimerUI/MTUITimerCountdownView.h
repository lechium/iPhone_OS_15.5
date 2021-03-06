//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, UIColor;

@interface MTUITimerCountdownView : UIView
{
    double _remainingTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    CAShapeLayer *_backgroundCircleLayer;	// 32 = 0x20
    CAShapeLayer *_countdownCircleLayer;	// 40 = 0x28
    UIColor *_barColor;	// 48 = 0x30
    UIColor *_backgroundBarColor;	// 56 = 0x38
    double _barWidth;	// 64 = 0x40
    CALayer *_mainLayer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001078f
@property(retain) CALayer *mainLayer; // @synthesize mainLayer=_mainLayer;
@property double barWidth; // @synthesize barWidth=_barWidth;
@property(retain) UIColor *backgroundBarColor; // @synthesize backgroundBarColor=_backgroundBarColor;
@property(retain) UIColor *barColor; // @synthesize barColor=_barColor;
@property(retain) CAShapeLayer *countdownCircleLayer; // @synthesize countdownCircleLayer=_countdownCircleLayer;
@property(retain) CAShapeLayer *backgroundCircleLayer; // @synthesize backgroundCircleLayer=_backgroundCircleLayer;
@property long long state; // @synthesize state=_state;
@property double duration; // @synthesize duration=_duration;
@property double remainingTime; // @synthesize remainingTime=_remainingTime;
- (_Bool)isStarted;	// IMP=0x0000000000010601
- (void)resume;	// IMP=0x000000000001043a
- (void)stop;	// IMP=0x00000000000103e4
- (void)pause;	// IMP=0x0000000000010316
- (double)angleForValue:(double)arg1 total:(double)arg2;	// IMP=0x00000000000102fc
- (double)degToRad:(double)arg1;	// IMP=0x00000000000102e6
- (void)start;	// IMP=0x000000000001011d
- (void)setAnimationRemainingTime:(double)arg1 totalTime:(double)arg2;	// IMP=0x000000000000fd01
- (void)setupBackgroundCircle;	// IMP=0x000000000000f94f
- (void)layoutSubviews;	// IMP=0x000000000000f65f
- (id)initWithBarColor:(id)arg1 backgroundBarColor:(id)arg2 barWidth:(double)arg3 remainingTime:(double)arg4 duration:(double)arg5;	// IMP=0x000000000000f5fe
- (id)initWithBarColor:(id)arg1 backgroundBarColor:(id)arg2 barWidth:(double)arg3;	// IMP=0x000000000000f549

@end

