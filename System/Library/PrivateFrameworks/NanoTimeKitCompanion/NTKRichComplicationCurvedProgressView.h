//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKRichComplicationCurveView;

@interface NTKRichComplicationCurvedProgressView
{
    double _curveWidth;	// 8 = 0x8
    long long _progressFillStyle;	// 16 = 0x10
    NTKRichComplicationCurveView *_backgroundView;	// 24 = 0x18
    NTKRichComplicationCurveView *_foregroundView;	// 32 = 0x20
    _Bool _clockwise;	// 40 = 0x28
    double _beginAngle;	// 48 = 0x30
    double _endAngle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000300b57
@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double beginAngle; // @synthesize beginAngle=_beginAngle;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;	// IMP=0x0000000000300a9a
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;	// IMP=0x0000000000300a24
- (id)filterForView:(id)arg1 style:(long long)arg2;	// IMP=0x00000000003009c0
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2;	// IMP=0x00000000003008ef
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1;	// IMP=0x0000000000300842
- (void)setProgress:(double)arg1;	// IMP=0x00000000003007c7
- (id)initWithFamily:(long long)arg1 curveWidth:(double)arg2 padding:(double)arg3 beginAngle:(double)arg4 endAngle:(double)arg5 forDevice:(id)arg6 withFilterStyle:(long long)arg7 progressFillStyle:(long long)arg8;	// IMP=0x0000000000300430

@end
