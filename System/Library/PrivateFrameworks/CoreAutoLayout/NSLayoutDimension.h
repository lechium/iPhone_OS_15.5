//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSLayoutDimension
{
}

- (_Bool)isCompatibleWithAnchor:(id)arg1;	// IMP=0x0000000000031f21
- (_Bool)validateOtherAttribute:(long long)arg1;	// IMP=0x0000000000031f07
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000031eac
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000031e53
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000031dfd
- (id)constraintLessThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000031dc9
- (id)constraintGreaterThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000031d97
- (id)constraintEqualToConstant:(double)arg1;	// IMP=0x0000000000031d68
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031d14
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031cc2
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031c73
- (id)ruleLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;	// IMP=0x0000000000005bca
- (id)ruleGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;	// IMP=0x0000000000005bb2
- (id)ruleEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;	// IMP=0x0000000000005b9a
- (id)ruleGreaterThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000005b7e
- (id)ruleLessThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000005b62
- (id)ruleEqualToConstant:(double)arg1;	// IMP=0x0000000000005b46
- (id)minusDimension:(id)arg1;	// IMP=0x0000000000023901
- (id)plusDimension:(id)arg1;	// IMP=0x00000000000238ef
- (id)plus:(double)arg1;	// IMP=0x00000000000238dd
- (id)times:(double)arg1;	// IMP=0x00000000000238cb
- (id)anchorBySubtractingDimension:(id)arg1;	// IMP=0x0000000000023888
- (id)anchorByAddingDimension:(id)arg1;	// IMP=0x000000000002384d
- (id)anchorByAddingConstant:(double)arg1;	// IMP=0x0000000000023805
- (id)anchorByMultiplyingByConstant:(double)arg1;	// IMP=0x00000000000237c2

@end

