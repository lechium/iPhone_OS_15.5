//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MDLAnimatedScalar
{
}

- (unsigned long long)getDoubleArray:(double *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x0000000000410738
- (unsigned long long)getFloatArray:(float *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000041062f
- (void)resetWithDoubleArray:(const double *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000410550
- (void)resetWithFloatArray:(const float *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000410471
- (double)doubleAtTime:(double)arg1;	// IMP=0x000000000041027f
- (float)floatAtTime:(double)arg1;	// IMP=0x0000000000410084
- (void)setDouble:(double)arg1 atTime:(double)arg2;	// IMP=0x000000000040ff57
- (void)setFloat:(float)arg1 atTime:(double)arg2;	// IMP=0x000000000040fe2a
- (void)resetWithUsdAttribute:(const void *)arg1 timeScale:(double)arg2 time:(double)arg3;	// IMP=0x000000000040fd43
- (void)resetWithUsdAttribute:(const void *)arg1 timeScale:(double)arg2;	// IMP=0x000000000040faf6
- (struct VtValue)defaultVtValue;	// IMP=0x000000000040f9fd
- (unsigned long long)precision;	// IMP=0x000000000040f950
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040f921

@end
