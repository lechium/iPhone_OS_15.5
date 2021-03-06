//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SKFollowPath
{
    struct SKCFollowPath *_mycaction;	// 8 = 0x8
    struct CGPath *_cgPath;	// 16 = 0x10
}

+ (id)followPath:(struct CGPath *)arg1 asOffset:(_Bool)arg2 orientToPath:(_Bool)arg3 speed:(double)arg4;	// IMP=0x00000000000681cf
+ (id)followPath:(struct CGPath *)arg1 speed:(double)arg2;	// IMP=0x00000000000680ed
+ (id)followPath:(struct CGPath *)arg1 asOffset:(_Bool)arg2 orientToPath:(_Bool)arg3 duration:(double)arg4;	// IMP=0x0000000000068039
+ (id)followPath:(struct CGPath *)arg1 duration:(double)arg2;	// IMP=0x0000000000067f90
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000679f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000686df
- (id)reversedAction;	// IMP=0x000000000006834b
- (void)dealloc;	// IMP=0x00000000000682bf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000067c32
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000067acf
- (id)init;	// IMP=0x00000000000679f8

@end

