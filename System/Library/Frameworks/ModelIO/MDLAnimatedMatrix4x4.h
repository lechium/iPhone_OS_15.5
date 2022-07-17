//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MDLAnimatedMatrix4x4
{
}

- (unsigned long long)getDouble4x4Array:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x00000000004163e5
- (unsigned long long)getFloat4x4Array:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x00000000004162be
- (void)resetWithDouble4x4Array:(const CDStruct_14d5dc5e *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000041611d
- (void)resetWithFloat4x4Array:(const CDStruct_14d5dc5e *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000415fd9
- (CDStruct_14d5dc5e)double4x4AtTime:(double)arg1;	// IMP=0x0000000000415b47
- (CDStruct_14d5dc5e)float4x4AtTime:(double)arg1;	// IMP=0x0000000000415823
- (void)setDouble4x4:(CDStruct_14d5dc5e)arg1 atTime:(double)arg2;	// IMP=0x0000000000415632
- (void)setFloat4x4:(CDStruct_14d5dc5e)arg1 atTime:(double)arg2;	// IMP=0x00000000004154a2
- (void)resetWithUsdAttribute:(const void *)arg1 timeScale:(double)arg2 time:(double)arg3;	// IMP=0x00000000004153bb
- (void)resetWithUsdAttribute:(const void *)arg1 timeScale:(double)arg2;	// IMP=0x000000000041516e
- (struct VtValue)defaultVtValue;	// IMP=0x0000000000415013
- (unsigned long long)precision;	// IMP=0x0000000000414ee2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000414eb3

@end
