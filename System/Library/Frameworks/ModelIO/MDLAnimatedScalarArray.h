//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MDLAnimatedScalarArray
{
    unsigned long long _elementCount;	// 40 = 0x28
}

@property(nonatomic) unsigned long long elementCount; // @synthesize elementCount=_elementCount;
- (unsigned long long)getDoubleArray:(double *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000040bc90
- (unsigned long long)getFloatArray:(float *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000040ba87
- (void)resetWithDoubleArray:(const double *)arg1 count:(unsigned long long)arg2 atTimes:(const double *)arg3 count:(unsigned long long)arg4;	// IMP=0x000000000040b881
- (void)resetWithFloatArray:(const float *)arg1 count:(unsigned long long)arg2 atTimes:(const double *)arg3 count:(unsigned long long)arg4;	// IMP=0x000000000040b67b
- (unsigned long long)getDoubleArray:(double *)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;	// IMP=0x000000000040b267
- (unsigned long long)getFloatArray:(float *)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;	// IMP=0x000000000040abdc
- (void)setDoubleArray:(const double *)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;	// IMP=0x000000000040a9bb
- (void)setFloatArray:(const float *)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;	// IMP=0x000000000040a18e
- (void)resetWithUsdAttribute:(const void *)arg1 timeScale:(double)arg2 time:(double)arg3;	// IMP=0x000000000040a0a7
- (void)resetWithUsdAttribute:(const void *)arg1 timeScale:(double)arg2;	// IMP=0x0000000000409c8a
- (struct VtValue)defaultVtValue;	// IMP=0x0000000000409a99
- (unsigned long long)precision;	// IMP=0x00000000004099e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000409990
- (id)initWithElementCount:(unsigned long long)arg1;	// IMP=0x0000000000409930

@end
