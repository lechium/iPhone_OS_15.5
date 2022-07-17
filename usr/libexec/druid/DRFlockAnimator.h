//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DRFlockLayoutOutput;

@interface DRFlockAnimator : NSObject
{
    _Bool _badgeAppeared;	// 8 = 0x8
    DRFlockLayoutOutput *_lastLayout;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002308a
@property(nonatomic) _Bool badgeAppeared; // @synthesize badgeAppeared=_badgeAppeared;
@property(retain, nonatomic) DRFlockLayoutOutput *lastLayout; // @synthesize lastLayout=_lastLayout;
- (void)_runWithoutRetargeting:(id)arg1;	// IMP=0x0010000000022f6c
- (void)_runAnimatableWithOneToOneTracking:(id)arg1 response:(double)arg2;	// IMP=0x0010000000022dd6
- (void)_runAnimatableWithOneToOneTracking:(id)arg1;	// IMP=0x0010000000022d9b
- (void)_runAnimatableWithBarelyBouncyAnimation:(id)arg1;	// IMP=0x0010000000022a34
- (void)_runAnimatableWithBouncyAnimation:(id)arg1 response:(double)arg2;	// IMP=0x00100000000226b1
- (void)_runAnimatableWithBouncyAnimation:(id)arg1;	// IMP=0x0010000000022676
- (void)_runBadgeLayout:(id)arg1 bouncy:(_Bool)arg2 slowOffset:(_Bool)arg3;	// IMP=0x001000000002233f
- (void)animateFlockLayoutOutput:(id)arg1;	// IMP=0x0010000000021da6

@end
