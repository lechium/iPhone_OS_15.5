//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSLayoutYAxisAnchor
{
}

- (_Bool)isCompatibleWithAnchor:(id)arg1;	// IMP=0x0000000000031c5c
- (_Bool)validateOtherAttribute:(long long)arg1;	// IMP=0x0000000000031c23
- (id)constraintLessThanOrEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031c05
- (id)constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031be9
- (id)constraintEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031bd0
- (id)offsetBy:(double)arg1;	// IMP=0x0000000000023a33
- (id)offsetByDimension:(id)arg1;	// IMP=0x0000000000023a21
- (id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3;	// IMP=0x0000000000023a0f
- (id)distanceTo:(id)arg1;	// IMP=0x00000000000239fd
- (id)offsetTo:(id)arg1;	// IMP=0x00000000000239eb
- (id)anchorByOffsettingWithConstant:(double)arg1;	// IMP=0x00000000000239a6
- (id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x000000000002394f
- (id)anchorByOffsettingWithDimension:(id)arg1;	// IMP=0x0000000000023932
- (id)anchorWithOffsetToAnchor:(id)arg1;	// IMP=0x0000000000023913

@end

