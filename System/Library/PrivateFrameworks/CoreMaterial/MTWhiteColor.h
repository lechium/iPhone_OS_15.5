//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MTWhiteColor
{
    double _white;	// 16 = 0x10
    double _alpha;	// 24 = 0x18
}

@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) double white; // @synthesize white=_white;
- (id)_rgbColor;	// IMP=0x000000000000f07a
- (id)description;	// IMP=0x000000000000f025
- (struct CAColorMatrix)sourceOverColorMatrix;	// IMP=0x000000000000efef
- (id)colorBlendedWithColor:(id)arg1;	// IMP=0x000000000000eeab
- (id)colorWithAdditionalAlphaComponent:(double)arg1;	// IMP=0x000000000000ee7d
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x000000000000ee33
- (id)colorDescription;	// IMP=0x000000000000ed2f
- (struct CGColor *)CGColor;	// IMP=0x000000000000ec9b
- (id)_initWithDescription:(id)arg1;	// IMP=0x000000000000ea6f
- (id)_initWithCGColor:(struct CGColor *)arg1;	// IMP=0x000000000000e91b
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;	// IMP=0x000000000000e787

@end
