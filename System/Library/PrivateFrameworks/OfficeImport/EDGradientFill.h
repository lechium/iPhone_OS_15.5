//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EDGradientFill
{
    int mType;	// 16 = 0x10
    NSMutableDictionary *mStops;	// 24 = 0x18
    double mDegree;	// 32 = 0x20
    struct CGRect mFocusRect;	// 40 = 0x28
}

+ (id)gradientWithType:(int)arg1 degree:(double)arg2 focusRect:(struct CGRect)arg3 stops:(id)arg4 resources:(id)arg5;	// IMP=0x00000000003aa894
+ (id)gradientWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8;	// IMP=0x00000000003aa6b9
- (void).cxx_destruct;	// IMP=0x00000000003aa55e
- (id)colorForStopAtPosition:(id)arg1;	// IMP=0x00000000003aa531
- (struct CGRect)focusRect;	// IMP=0x00000000003aa511
- (id)stops;	// IMP=0x00000000003aa4fc
- (double)degree;	// IMP=0x00000000003aa4ea
- (int)type;	// IMP=0x00000000003aa4da
- (_Bool)isEmpty;	// IMP=0x00000000003aa4d2
- (unsigned long long)hash;	// IMP=0x00000000003aa49a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003aa41e
- (_Bool)isEqualToGradientFill:(id)arg1;	// IMP=0x00000000003aa35b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003aa2e2
- (id)initWithResources:(id)arg1;	// IMP=0x00000000003aa22f
- (void)setStopColor:(id)arg1 atPosition:(id)arg2;	// IMP=0x00000000003a8636
- (void)setStops:(id)arg1;	// IMP=0x00000000003a85e2
- (void)setFocusRect:(struct CGRect)arg1;	// IMP=0x00000000003a85c1
- (void)setDegree:(double)arg1;	// IMP=0x00000000003a85ac
- (void)setType:(int)arg1;	// IMP=0x00000000003a8599
- (id)initWithType:(int)arg1 degree:(double)arg2 focusRect:(struct CGRect)arg3 stops:(id)arg4 resources:(id)arg5;	// IMP=0x00000000003aa789
- (id)initWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8;	// IMP=0x00000000003aa571

@end

