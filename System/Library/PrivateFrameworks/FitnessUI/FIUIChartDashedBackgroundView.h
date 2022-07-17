//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIColor;

@interface FIUIChartDashedBackgroundView
{
    NSArray *_linePositions;	// 8 = 0x8
    _Bool _shouldCenterLines;	// 16 = 0x10
    unsigned long long _numLines;	// 24 = 0x18
    UIColor *_color;	// 32 = 0x20
    long long _direction;	// 40 = 0x28
    long long _lineType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000025fc8
@property(nonatomic) long long lineType; // @synthesize lineType=_lineType;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) _Bool shouldCenterLines; // @synthesize shouldCenterLines=_shouldCenterLines;
@property(nonatomic) unsigned long long numLines; // @synthesize numLines=_numLines;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000025a66
- (void)drawLine:(id)arg1 rect:(struct CGRect)arg2 context:(struct CGContext *)arg3;	// IMP=0x00000000000258ed
- (void)_updateLinePositions;	// IMP=0x0000000000025748
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000256bb

@end
