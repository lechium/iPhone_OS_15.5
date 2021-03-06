//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface CMColorProperty
{
    OITSUColor *wdValue;	// 16 = 0x10
}

+ (float)transformedAlphaFromOADColor:(id)arg1;	// IMP=0x000000000010d186
+ (id)cssStringFromOADColor:(id)arg1;	// IMP=0x000000000015fcca
+ (id)cssStringFromTSUColor:(id)arg1;	// IMP=0x00000000000a6578
+ (id)cssStringFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3;	// IMP=0x00000000000a6630
+ (id)nsColorFromShading:(id)arg1;	// IMP=0x000000000016976c
+ (id)nsColorFromOADColor:(id)arg1 state:(id)arg2;	// IMP=0x00000000000a5655
+ (id)nsColorFromOADFill:(id)arg1 state:(id)arg2;	// IMP=0x00000000000abf14
+ (id)cssStringFromOADGradientFill:(id)arg1 state:(id)arg2;	// IMP=0x000000000010b826
+ (struct CGColor *)copyCGColorFromOADFill:(id)arg1 state:(id)arg2;	// IMP=0x0000000000188c0d
+ (struct CGColor *)copyCGColorFromOADColor:(id)arg1 state:(id)arg2;	// IMP=0x00000000004630c8
+ (float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3;	// IMP=0x000000000016a558
+ (id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3;	// IMP=0x000000000016a17d
+ (id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2;	// IMP=0x000000000016a084
- (void).cxx_destruct;	// IMP=0x0000000000463295
- (id)cssStringForName:(id)arg1;	// IMP=0x00000000000f3ae1
- (id)cssString;	// IMP=0x00000000000f3b7a
- (_Bool)isEqualTo:(id)arg1;	// IMP=0x0000000000463220
- (id)initWithColor:(id)arg1;	// IMP=0x00000000000f3a13
- (id)value;	// IMP=0x000000000046320a

@end

