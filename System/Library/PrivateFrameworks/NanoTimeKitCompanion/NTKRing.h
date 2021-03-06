//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NTKRing : NSObject
{
    double _fillFraction;	// 8 = 0x8
    double _strokeWidth;	// 16 = 0x10
    double _backgroundRingAlpha;	// 24 = 0x18
    double _radius;	// 32 = 0x20
    long long _ringStyle;	// 40 = 0x28
}

+ (id)_fillFractionStringForFillFraction:(float)arg1 withFormatter:(id)arg2;	// IMP=0x00000000001cc8ae
+ (id)fillFractionStringWithSymbolForFillFraction:(float)arg1;	// IMP=0x00000000001cc821
+ (id)fillFractionStringForFillFraction:(float)arg1;	// IMP=0x00000000001cc770
@property long long ringStyle; // @synthesize ringStyle=_ringStyle;
@property double radius; // @synthesize radius=_radius;
@property double backgroundRingAlpha; // @synthesize backgroundRingAlpha=_backgroundRingAlpha;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property double fillFraction; // @synthesize fillFraction=_fillFraction;
- (double)_validFillFraction:(double)arg1;	// IMP=0x00000000001cc751
- (id)fillFractionStringWithSymbol;	// IMP=0x00000000001cc730
- (id)fillFractionString;	// IMP=0x00000000001cc70f
- (void)fillFraction:(double)arg1;	// IMP=0x00000000001cc6ed
- (id)ringImage;	// IMP=0x00000000001cc4bf
- (id)initWithFillFraction:(double)arg1 style:(long long)arg2 radius:(double)arg3 strokeWidth:(double)arg4;	// IMP=0x00000000001cc42d
- (id)initWithFillFraction:(double)arg1 style:(long long)arg2;	// IMP=0x00000000001cc415
- (id)init;	// IMP=0x00000000001cc3f8

@end

