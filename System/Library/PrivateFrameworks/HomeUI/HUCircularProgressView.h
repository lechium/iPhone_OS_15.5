//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface HUCircularProgressView : UIView
{
    _Bool _progressFillCounterClockwise;	// 8 = 0x8
    _Bool _removeProgressBarOnCompletion;	// 9 = 0x9
    double _baseLayerStrokeLineWidth;	// 16 = 0x10
    UIColor *_baseLayerStrokeLineColor;	// 24 = 0x18
    double _progressLayerStrokeLineWidth;	// 32 = 0x20
    UIColor *_progressLayerStrokeLineColor;	// 40 = 0x28
    unsigned long long _lineCapStyle;	// 48 = 0x30
    unsigned long long _progressBarFillDirection;	// 56 = 0x38
    double _avatarDiameter;	// 64 = 0x40
    double _radius;	// 72 = 0x48
    double _startAngle;	// 80 = 0x50
    double _endAngle;	// 88 = 0x58
    CAShapeLayer *_progressShapeLayer;	// 96 = 0x60
    CAShapeLayer *_baseLayer;	// 104 = 0x68
    double _fromValue;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000021556d
@property(nonatomic) double fromValue; // @synthesize fromValue=_fromValue;
@property(retain, nonatomic) CAShapeLayer *baseLayer; // @synthesize baseLayer=_baseLayer;
@property(retain, nonatomic) CAShapeLayer *progressShapeLayer; // @synthesize progressShapeLayer=_progressShapeLayer;
@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double avatarDiameter; // @synthesize avatarDiameter=_avatarDiameter;
@property(nonatomic) _Bool removeProgressBarOnCompletion; // @synthesize removeProgressBarOnCompletion=_removeProgressBarOnCompletion;
@property(nonatomic) unsigned long long progressBarFillDirection; // @synthesize progressBarFillDirection=_progressBarFillDirection;
@property(nonatomic) unsigned long long lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property(retain, nonatomic) UIColor *progressLayerStrokeLineColor; // @synthesize progressLayerStrokeLineColor=_progressLayerStrokeLineColor;
@property(nonatomic) double progressLayerStrokeLineWidth; // @synthesize progressLayerStrokeLineWidth=_progressLayerStrokeLineWidth;
@property(retain, nonatomic) UIColor *baseLayerStrokeLineColor; // @synthesize baseLayerStrokeLineColor=_baseLayerStrokeLineColor;
@property(nonatomic) double baseLayerStrokeLineWidth; // @synthesize baseLayerStrokeLineWidth=_baseLayerStrokeLineWidth;
@property(nonatomic) _Bool progressFillCounterClockwise; // @synthesize progressFillCounterClockwise=_progressFillCounterClockwise;
- (id)_progressBarFillDirection;	// IMP=0x0000000000215358
- (id)_lineCapStyle;	// IMP=0x000000000021531b
- (void)updateProgressTo:(double)arg1 animationDuration:(float)arg2;	// IMP=0x00000000002150e6
- (void)updateProgressBy:(double)arg1 animationDuration:(float)arg2;	// IMP=0x0000000000214eaf
- (void)layoutSubviews;	// IMP=0x00000000002147fe
- (id)initWithRadius:(double)arg1 startAngle:(double)arg2 endAngle:(double)arg3 progress:(double)arg4;	// IMP=0x000000000021478c
- (id)initWithRadius:(double)arg1;	// IMP=0x0000000000214680

@end

