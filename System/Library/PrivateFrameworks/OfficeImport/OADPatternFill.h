//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADColor, OADPattern;

__attribute__((visibility("hidden")))
@interface OADPatternFill
{
    OADColor *mFgColor;	// 24 = 0x18
    OADColor *mBgColor;	// 32 = 0x20
    OADPattern *mPattern;	// 40 = 0x28
}

+ (id)defaultProperties;	// IMP=0x0000000000154b2e
- (void).cxx_destruct;	// IMP=0x00000000003176d4
- (id)namedImageDataWithBlipCollection:(id)arg1;	// IMP=0x0000000000317384
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000155038
- (unsigned long long)hash;	// IMP=0x0000000000155114
- (void)setStyleColor:(id)arg1;	// IMP=0x00000000003172aa
- (void)setColor:(id)arg1;	// IMP=0x0000000000317297
- (_Bool)isPatternOverridden;	// IMP=0x0000000000317270
- (void)setPattern:(id)arg1;	// IMP=0x0000000000154e00
- (id)pattern;	// IMP=0x0000000000317226
- (_Bool)isBgColorOverridden;	// IMP=0x00000000003171ff
- (void)setBgColor:(id)arg1;	// IMP=0x0000000000154e2b
- (id)bgColor;	// IMP=0x00000000003171b5
- (_Bool)isFgColorOverridden;	// IMP=0x000000000031718e
- (void)setFgColor:(id)arg1;	// IMP=0x0000000000154e16
- (id)fgColor;	// IMP=0x0000000000317144
- (void)removeUnnecessaryOverrides;	// IMP=0x0000000000316c2c
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x0000000000316746
- (_Bool)isAnythingOverridden;	// IMP=0x00000000003166cc
- (void)setParent:(id)arg1;	// IMP=0x0000000000154e3f
- (id)initWithDefaults;	// IMP=0x0000000000154b5e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000316560

@end

