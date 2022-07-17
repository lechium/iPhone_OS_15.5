//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface RMDARC4RandomSource
{
    struct Arc4State *_state;	// 8 = 0x8
    NSData *_seed;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000004303
- (void)dropValuesWithCount:(unsigned long long)arg1;	// IMP=0x00000000000042b5
- (_Bool)nextBool;	// IMP=0x0000000000004267
- (float)nextUniform;	// IMP=0x00000000000041e4
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;	// IMP=0x00000000000040da
- (long long)nextInt;	// IMP=0x0000000000004053
- (unsigned long long)nextBits:(int)arg1;	// IMP=0x0000000000003f77
@property(copy, nonatomic) NSData *seed;
- (void)dealloc;	// IMP=0x0000000000003e31
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003d6f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003c49
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003be1
- (id)initWithSeed:(id)arg1;	// IMP=0x0000000000003b27
- (id)init;	// IMP=0x0000000000003a5b

@end
