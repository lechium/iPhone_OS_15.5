//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TSDSmartStroke
{
    NSString *mStrokeName;	// 8 = 0x8
    double mDeprecatedPatternOffsetDistance;	// 16 = 0x10
}

+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;	// IMP=0x0000000000205c61
+ (Class)classForName:(id)arg1;	// IMP=0x0000000000205b19
@property(readonly, nonatomic) double deprecatedPatternOffsetDistance; // @synthesize deprecatedPatternOffsetDistance=mDeprecatedPatternOffsetDistance;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;	// IMP=0x000000000020617b
- (long long)mixingTypeWithObject:(id)arg1;	// IMP=0x0000000000206097
- (_Bool)shouldAntialiasDefeat;	// IMP=0x000000000020608f
- (unsigned long long)hash;	// IMP=0x0000000000206039
- (_Bool)canDrawWithOtherStroke:(id)arg1;	// IMP=0x0000000000205ff2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000205f51
- (_Bool)canApplyDirectlyToRepRenderable;	// IMP=0x0000000000205f3c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000205e78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000205db4
- (void)dealloc;	// IMP=0x0000000000205d72
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6;	// IMP=0x0000000000205d52
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;	// IMP=0x0000000000205ce4
@property(readonly, copy, nonatomic) NSString *strokeName;

@end

