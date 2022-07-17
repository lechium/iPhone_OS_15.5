//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class UIColor;

@interface HKStrokeStyle : NSObject <NSCopying>
{
    int _lineCap;	// 8 = 0x8
    int _lineJoin;	// 12 = 0xc
    int _blendMode;	// 16 = 0x10
    UIColor *_strokeColor;	// 24 = 0x18
    double _lineWidth;	// 32 = 0x20
    long long _dashStyle;	// 40 = 0x28
}

+ (id)strokeStyleWithColor:(id)arg1 lineWidth:(double)arg2;	// IMP=0x000000000028912c
- (void).cxx_destruct;	// IMP=0x00000000002893da
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) long long dashStyle; // @synthesize dashStyle=_dashStyle;
@property(nonatomic) int lineJoin; // @synthesize lineJoin=_lineJoin;
@property(nonatomic) int lineCap; // @synthesize lineCap=_lineCap;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(copy, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void)applyToContext:(struct CGContext *)arg1 dashPhase:(double)arg2;	// IMP=0x000000000028928c
- (void)applyToContext:(struct CGContext *)arg1;	// IMP=0x0000000000289277
- (id)init;	// IMP=0x0000000000289226
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000289199

@end
