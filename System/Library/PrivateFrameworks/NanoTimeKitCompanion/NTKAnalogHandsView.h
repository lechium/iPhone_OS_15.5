//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CALayer, CLKDevice, NSCalendar, NSDate, NSNumber, NSString, NSTimeZone, NSTimer, NTKColoringImageView, NTKHandView, UIColor;
@protocol NTKAnalogHandsViewDelegate;

@interface NTKAnalogHandsView : UIView <NTKTimeView>
{
    NTKColoringImageView *_colorTransitionSecondHandLowerView;	// 8 = 0x8
    NTKColoringImageView *_colorTransitionSecondHandUpperView;	// 16 = 0x10
    NTKColoringImageView *_colorTransitionSecondHandSmallCircleView;	// 24 = 0x18
    NTKColoringImageView *_colorTransitionSecondHandLargeCircleView;	// 32 = 0x20
    _Bool _animatingToNewDate;	// 40 = 0x28
    NSNumber *_displayLinkToken;	// 48 = 0x30
    NSTimer *_animationUpdateTimer;	// 56 = 0x38
    double _timeOffset;	// 64 = 0x40
    CALayer *_minuteHandTransitionBodyLayer;	// 72 = 0x48
    CALayer *_minuteHandTransitionStemLayer;	// 80 = 0x50
    CALayer *_minuteHandTransitionPegLayer;	// 88 = 0x58
    CALayer *_hourHandTransitionBodyLayer;	// 96 = 0x60
    CALayer *_hourHandTransitionStemLayer;	// 104 = 0x68
    _Bool _shadowCompositingEnabled;	// 112 = 0x70
    _Bool _useDirectionalShadows;	// 113 = 0x71
    UIView *_directionalShadowContainerView;	// 120 = 0x78
    _Bool _timeScrubbing;	// 128 = 0x80
    _Bool _frozen;	// 129 = 0x81
    _Bool _showDebugClientSideHands;	// 130 = 0x82
    _Bool _shouldRestoreSecondHandAfterScrubbing;	// 131 = 0x83
    CLKDevice *_device;	// 136 = 0x88
    NTKHandView *_hourHandView;	// 144 = 0x90
    NTKHandView *_minuteHandView;	// 152 = 0x98
    NTKHandView *_secondHandView;	// 160 = 0xa0
    double _secondHandDotDiameter;	// 168 = 0xa8
    double _minuteHandDotDiameter;	// 176 = 0xb0
    NSDate *_overrideDate;	// 184 = 0xb8
    NSCalendar *_calendar;	// 192 = 0xc0
    long long _dataMode;	// 200 = 0xc8
    UIColor *_inlayColor;	// 208 = 0xd0
    id <NTKAnalogHandsViewDelegate> _delegate;	// 216 = 0xd8
    NTKHandView *_hourHandView_clientSide;	// 224 = 0xe0
    NTKHandView *_minuteHandView_clientSide;	// 232 = 0xe8
    NTKHandView *_secondHandView_clientSide;	// 240 = 0xf0
    NSTimeZone *_timeZone;	// 248 = 0xf8
}

+ (long long)preferredCountOfInstancesToCache;	// IMP=0x00000000000a6a21
+ (double)minuteHandAngleForDate:(id)arg1;	// IMP=0x00000000000a24d0
+ (double)hourHandAngleForDate:(id)arg1;	// IMP=0x00000000000a23eb
- (void).cxx_destruct;	// IMP=0x00000000000a6f15
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) _Bool shouldRestoreSecondHandAfterScrubbing; // @synthesize shouldRestoreSecondHandAfterScrubbing=_shouldRestoreSecondHandAfterScrubbing;
@property(nonatomic) _Bool showDebugClientSideHands; // @synthesize showDebugClientSideHands=_showDebugClientSideHands;
@property(readonly, nonatomic) NTKHandView *secondHandView_clientSide; // @synthesize secondHandView_clientSide=_secondHandView_clientSide;
@property(readonly, nonatomic) NTKHandView *minuteHandView_clientSide; // @synthesize minuteHandView_clientSide=_minuteHandView_clientSide;
@property(readonly, nonatomic) NTKHandView *hourHandView_clientSide; // @synthesize hourHandView_clientSide=_hourHandView_clientSide;
@property(nonatomic) __weak id <NTKAnalogHandsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *inlayColor; // @synthesize inlayColor=_inlayColor;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
@property(nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(readonly, nonatomic) _Bool timeScrubbing; // @synthesize timeScrubbing=_timeScrubbing;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) NSDate *overrideDate; // @synthesize overrideDate=_overrideDate;
@property(nonatomic) double minuteHandDotDiameter; // @synthesize minuteHandDotDiameter=_minuteHandDotDiameter;
@property(nonatomic) double secondHandDotDiameter; // @synthesize secondHandDotDiameter=_secondHandDotDiameter;
@property(retain, nonatomic) NTKHandView *secondHandView; // @synthesize secondHandView=_secondHandView;
@property(retain, nonatomic) NTKHandView *minuteHandView; // @synthesize minuteHandView=_minuteHandView;
@property(retain, nonatomic) NTKHandView *hourHandView; // @synthesize hourHandView=_hourHandView;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void)_accessibilityInvalidateElements;	// IMP=0x00000000000a6d45
- (void)_repointDebugHandsToCurrentTime;	// IMP=0x00000000000a6c3a
- (void)_handleDisplayLink;	// IMP=0x00000000000a6c28
- (_Bool)_dontRepointDebugHands;	// IMP=0x00000000000a6bf7
@property(readonly, nonatomic) UIView *minuteHandDot;
@property(readonly, nonatomic) UIView *secondHandDot;
- (void)_deregisterFromDisplayLinkManager;	// IMP=0x00000000000a69a2
- (void)_enumerateSecondHandViewsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a6989
- (id)displayTime;	// IMP=0x00000000000a6970
- (void)_significantTimeChanged;	// IMP=0x00000000000a6475
- (void)setUseDirectionalShadows:(_Bool)arg1;	// IMP=0x00000000000a6340
- (void)_addHourMinuteHandsTransitionLayers;	// IMP=0x00000000000a5676
- (void)_removeHourMinuteHandsTransitionLayers;	// IMP=0x00000000000a55fa
- (void)_removeColorTransitionViews;	// IMP=0x00000000000a558f
- (void)applySecondHandColor:(id)arg1;	// IMP=0x00000000000a5535
- (void)applySecondHandTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;	// IMP=0x00000000000a4a6c
- (void)applyHourMinuteHandsTransitionFraction:(double)arg1 fromStrokeColor:(id)arg2 fromFillColor:(id)arg3 toStrokeColor:(id)arg4 toFillColor:(id)arg5;	// IMP=0x00000000000a4373
- (void)applyHourMinuteHandsStrokeColor:(id)arg1 fillColor:(id)arg2;	// IMP=0x00000000000a42a8
- (void)endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a3e86
- (void)scrubToDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000a3dc4
- (void)startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a3c82
- (_Bool)_canRunTimeAnimation;	// IMP=0x00000000000a3a76
- (void)_stopTimeAnimation;	// IMP=0x00000000000a37f5
- (void)_startNewTimeAnimation;	// IMP=0x00000000000a3256
- (double)_timeAnimationFramesPerSecondForDevice:(id)arg1;	// IMP=0x00000000000a3243
- (void)setTimeOffset:(double)arg1;	// IMP=0x00000000000a31db
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;	// IMP=0x00000000000a2f8e
- (_Bool)useDirectionalShadows;	// IMP=0x00000000000a2f86
- (_Bool)shadowCompositingEnabled;	// IMP=0x00000000000a2f7e
- (id)createSecondHandView;	// IMP=0x00000000000a2e80
- (id)createMinuteHandView;	// IMP=0x00000000000a2d73
- (id)createHourHandView;	// IMP=0x00000000000a2c75
- (id)secondHandConfiguration;	// IMP=0x00000000000a2c4e
- (id)minuteHandConfiguration;	// IMP=0x00000000000a2c27
- (id)hourHandConfiguration;	// IMP=0x00000000000a2c00
- (void)didMoveToWindow;	// IMP=0x00000000000a2b92
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000a2b6b
- (void)_enumerateShadowViews:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a2a58
- (void)_enumerateHandViews:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a29c1
- (void)layoutShadowViews;	// IMP=0x00000000000a272b
- (void)layoutHandViews;	// IMP=0x00000000000a2606
- (void)layoutSubviews;	// IMP=0x00000000000a25b0
- (void)dealloc;	// IMP=0x00000000000a235f
- (id)initForDevice:(id)arg1;	// IMP=0x00000000000a1be7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

