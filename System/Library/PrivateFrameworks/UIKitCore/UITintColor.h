//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UITintColor
{
}

- (id)colorSpaceName;	// IMP=0x0000000000806413
- (_Bool)_isDeepColor;	// IMP=0x000000000080636c
- (_Bool)isPatternColor;	// IMP=0x00000000008062c5
- (double)alphaComponent;	// IMP=0x000000000080621e
- (struct CGColor *)CGColor;	// IMP=0x0000000000806171
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x000000000080609c
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000805fc7
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x0000000000805f0c
- (void)setStroke;	// IMP=0x0000000000805e6f
- (void)setFill;	// IMP=0x0000000000805dd2
- (void)set;	// IMP=0x0000000000805d35
- (unsigned long long)hash;	// IMP=0x0000000000805d1b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000805d10
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000805cc5
- (id)_resolvedColorWithTraitCollection:(id)arg1;	// IMP=0x0000000000805b9a
- (_Bool)_isDynamicTintColor;	// IMP=0x0000000000805b92
- (id)init;	// IMP=0x0000000000805b3f

@end
