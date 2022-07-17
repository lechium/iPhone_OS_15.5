//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MobileTimerUI/MTClock-Protocol.h>

@class NSCalendar, NSDate, NSTimeZone, UIImage, UIImageView;

@interface MTUIAnalogClockView : UIView <MTClock>
{
    long long _runMode;	// 8 = 0x8
    UIImage *_faceDayImage;	// 16 = 0x10
    UIImage *_faceNightImage;	// 24 = 0x18
    UIImageView *_faceView;	// 32 = 0x20
    UIView *_dayHands[3];	// 40 = 0x28
    UIView *_nightHands[3];	// 64 = 0x40
    UIImageView *_middleDotDay;	// 88 = 0x58
    UIImageView *_middleDotNight;	// 96 = 0x60
    UIImageView *_middleRedDot;	// 104 = 0x68
    NSDate *_time;	// 112 = 0x70
    _Bool _nighttime;	// 120 = 0x78
    double _seconds;	// 128 = 0x80
    int _flutterIndex;	// 136 = 0x88
    _Bool _isRenderStateStale;	// 140 = 0x8c
    NSCalendar *_calendar;	// 144 = 0x90
    _Bool _minuteHourAnimationTriggered;	// 152 = 0x98
}

+ (id)imageInBundleForName:(id)arg1;	// IMP=0x000000000000cb7e
+ (id)overSecondHandDotImage;	// IMP=0x000000000000cb06
+ (id)makeOverSecondHandDotImage;	// IMP=0x000000000000ca90
+ (id)overHourHandDotForDayTime:(_Bool)arg1;	// IMP=0x000000000000ca0d
+ (id)overHourHandDotImageForDaytime:(_Bool)arg1;	// IMP=0x000000000000c983
+ (id)makeDotImageSize:(double)arg1 color:(id)arg2;	// IMP=0x000000000000c7f9
+ (id)clockHand:(long long)arg1 daytime:(_Bool)arg2;	// IMP=0x000000000000c770
+ (id)makeClockHand:(long long)arg1 daytime:(_Bool)arg2;	// IMP=0x000000000000c4de
+ (id)clockFaceForDaytime:(_Bool)arg1 ignoreCache:(_Bool)arg2;	// IMP=0x000000000000c44f
+ (id)clockFaceForDaytime:(_Bool)arg1;	// IMP=0x000000000000c43b
+ (void)adjustNumberalCenter:(struct CGPoint *)arg1 forNumeralIndex:(long long)arg2;	// IMP=0x000000000000c435
+ (id)makeClockFaceForDaytime:(_Bool)arg1;	// IMP=0x000000000000bbce
+ (id)imageForType:(int)arg1 dayTime:(_Bool)arg2 generation:(CDUnknownBlockType)arg3 ignoreCache:(_Bool)arg4;	// IMP=0x000000000000b7b1
+ (id)imageForType:(int)arg1 dayTime:(_Bool)arg2 generation:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b79c
+ (_Bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(_Bool)arg2;	// IMP=0x000000000000b794
+ (id)imageCacheNameForType:(int)arg1 daytime:(_Bool)arg2;	// IMP=0x000000000000b5ff
+ (struct CGPoint)shadowRotationalCenterForHand:(long long)arg1;	// IMP=0x000000000000b5cd
+ (struct CGPoint)handRotationalCenterForHand:(long long)arg1;	// IMP=0x000000000000b4e4
+ (id)shadowInfoAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000b4a3
+ (struct CGSize)clockSize;	// IMP=0x000000000000b488
+ (double)overSecondHandDotSize;	// IMP=0x000000000000b46d
+ (double)overHourHandDotSize;	// IMP=0x000000000000b452
+ (_Bool)hasOverSecondHandDot;	// IMP=0x000000000000b44a
+ (_Bool)hasOverHourHandDot;	// IMP=0x000000000000b442
+ (double)antialiasPaddingRatio;	// IMP=0x000000000000b434
+ (struct UIEdgeInsets)shadowInsets;	// IMP=0x000000000000b416
+ (_Bool)doesFaceHaveShadow;	// IMP=0x000000000000b40e
+ (id)numeralFont;	// IMP=0x000000000000b3d4
+ (double)numeralInset;	// IMP=0x000000000000b3b9
+ (id)nightTimeSecondHandColor;	// IMP=0x000000000000b3a0
+ (id)dayTimeSecondHandColor;	// IMP=0x000000000000b387
+ (id)nightTimeMinuteHandColor;	// IMP=0x000000000000b36e
+ (id)dayTimeMinuteHandColor;	// IMP=0x000000000000b355
+ (id)nightTimeHourHandColor;	// IMP=0x000000000000b33c
+ (id)dayTimeHourHandColor;	// IMP=0x000000000000b323
+ (id)overSecondHandDotColor;	// IMP=0x000000000000b30a
+ (id)nightTimeOverHourHandDotColor;	// IMP=0x000000000000b2f1
+ (id)dayTimeOverHourHandDotColor;	// IMP=0x000000000000b2d8
+ (id)nightTimeFaceColor;	// IMP=0x000000000000b2bf
+ (id)nightTimeTextColor;	// IMP=0x000000000000b2a6
+ (id)dayTimeFaceColor;	// IMP=0x000000000000b28d
+ (id)dayTimeTextColor;	// IMP=0x000000000000b274
+ (id)resourcePath;	// IMP=0x000000000000b26c
+ (long long)style;	// IMP=0x000000000000b25f
+ (double)hourHandWidth;	// IMP=0x000000000000b208
+ (double)minuteHandWidth;	// IMP=0x000000000000b1b1
+ (double)secondHandWidth;	// IMP=0x000000000000b15a
+ (double)hourHandLength;	// IMP=0x000000000000b13f
+ (double)minuteHandLength;	// IMP=0x000000000000b124
+ (double)secondHandOverhangLength;	// IMP=0x000000000000b109
+ (double)secondHandMainLength;	// IMP=0x000000000000b0ee
+ (double)secondHandLength;	// IMP=0x000000000000b0af
+ (double)faceRadius;	// IMP=0x000000000000b0a6
+ (id)analogClockWithStyle:(long long)arg1;	// IMP=0x000000000000b084
+ (struct UIEdgeInsets)insetsForStyle:(long long)arg1;	// IMP=0x000000000000b038
+ (struct CGSize)sizeForStyle:(long long)arg1;	// IMP=0x000000000000b00d
+ (void)unregisterSweepingClock:(id)arg1;	// IMP=0x000000000000acce
+ (void)unregisterTickingClock:(id)arg1;	// IMP=0x000000000000abf9
+ (void)unregisterClock:(id)arg1;	// IMP=0x000000000000aba6
+ (void)registerSweepingClock:(id)arg1;	// IMP=0x000000000000a8ed
+ (void)registerTickingClock:(id)arg1;	// IMP=0x000000000000a73d
+ (void)registerClock:(id)arg1;	// IMP=0x000000000000a6ea
+ (_Bool)isClockRegistered:(id)arg1;	// IMP=0x000000000000a688
+ (void)updateTimeForAllSweeping;	// IMP=0x000000000000a2f7
+ (void)updateFlutterForAllTicking;	// IMP=0x000000000000a2ab
+ (void)updateTimeForAllTicking;	// IMP=0x000000000000a0ac
+ (id)cacheVersionHash;	// IMP=0x0000000000009ef1
+ (id)cacheVersionedPath;	// IMP=0x0000000000009e71
+ (id)cacheTopLevelPath;	// IMP=0x0000000000009d8b
+ (void)initialize;	// IMP=0x0000000000009a36
+ (Class)classForStyle:(long long)arg1;	// IMP=0x00000000000099cc
- (void).cxx_destruct;	// IMP=0x000000000000dfcd
@property(readonly, nonatomic, getter=isNighttime) _Bool nighttime; // @synthesize nighttime=_nighttime;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) UIImageView *faceView; // @synthesize faceView=_faceView;
@property(nonatomic) long long runMode; // @synthesize runMode=_runMode;
- (void)handleLocaleChange;	// IMP=0x000000000000dea6
- (void)stop;	// IMP=0x000000000000de8a
- (void)start;	// IMP=0x000000000000de1a
@property(readonly, nonatomic, getter=isStarted) _Bool started;
@property(retain, nonatomic) NSTimeZone *timeZone;
- (void)setTime:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000da7b
@property(readonly, nonatomic) long long minute;
@property(readonly, nonatomic) long long hour;
- (void)updateTimeAnimated:(_Bool)arg1;	// IMP=0x000000000000d7de
- (void)updateTime;	// IMP=0x000000000000d7c7
- (void)setNighttime:(_Bool)arg1;	// IMP=0x000000000000d650
- (void)updateFlutter;	// IMP=0x000000000000d5cd
- (void)setHandAngle:(double)arg1 forHandIndex:(long long)arg2;	// IMP=0x000000000000d568
- (void)updateTimeContinuously:(long long)arg1;	// IMP=0x000000000000d551
- (void)setHandTransformForHandIndex:(long long)arg1;	// IMP=0x000000000000d32c
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000000d312
@property(readonly, nonatomic) long long style;
- (id)init;	// IMP=0x000000000000cc6f
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000000cc0e
- (double)coarseUpdateInterval;	// IMP=0x000000000000b5f1
- (double)updateInterval;	// IMP=0x000000000000b5e3

@end
