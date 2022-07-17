//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface ICCircleLayer : CALayer
{
    double _strokeWidth;	// 8 = 0x8
    struct CGColor *_strokeColor;	// 16 = 0x10
    struct CGColor *_fillColor;	// 24 = 0x18
}

@property(retain, nonatomic) struct CGColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) struct CGColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x00000000000e9fb5

@end
