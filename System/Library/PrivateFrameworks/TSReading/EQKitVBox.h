//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface EQKitVBox
{
    unsigned long long mPivotIndex;	// 88 = 0x58
}

@property(readonly, nonatomic) unsigned long long pivotIndex; // @synthesize pivotIndex=mPivotIndex;
- (struct CGRect)p_cacheErasableBounds;	// IMP=0x000000000000f34a
- (void)p_cacheDimensionsForHeight:(double *)arg1 depth:(double *)arg2 width:(double *)arg3;	// IMP=0x000000000000f199
- (id)description;	// IMP=0x000000000000f0db
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;	// IMP=0x000000000000ee76
- (_Bool)appendOpticalAlignToSpec:(void *)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000000ec4c
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000000ea34
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e964
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e8fa
- (id)init;	// IMP=0x000000000000e8e4
- (id)initWithChildBoxes:(id)arg1;	// IMP=0x000000000000e8d0
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2;	// IMP=0x000000000000e88c

@end

