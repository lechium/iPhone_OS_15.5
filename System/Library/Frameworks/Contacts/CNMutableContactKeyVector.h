//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CNMutableContactKeyVector
{
}

+ (id)new;	// IMP=0x000000000008a8a5
+ (id)freezeIfClassIsImmutable:(id)arg1;	// IMP=0x000000000008a88f
- (id)freeze;	// IMP=0x000000000008b078
- (void)subtractKeys:(id)arg1;	// IMP=0x000000000008aeae
- (void)subtractKey:(id)arg1;	// IMP=0x000000000008ade4
- (void)minusKeyVector:(id)arg1;	// IMP=0x000000000008ad7b
- (void)addKey:(id)arg1;	// IMP=0x000000000008acb6
- (void)addKeys:(id)arg1;	// IMP=0x000000000008aaee
- (void)intersectKeyVector:(id)arg1;	// IMP=0x000000000008aa88
- (void)unionKeyVector:(id)arg1;	// IMP=0x000000000008aa22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008a957
- (id)initWithKeyVector:(id)arg1;	// IMP=0x000000000008a8c8
- (id)init;	// IMP=0x000000000008a8af

@end
