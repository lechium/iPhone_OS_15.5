//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction;

@interface PXStoryTransitionRotate
{
    double _angle;	// 96 = 0x60
    CAMediaTimingFunction *_transformAnimationCurve;	// 104 = 0x68
    CAMediaTimingFunction *_effectAnimationCurve;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000016ec89
- (void)configureEffectForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000016e742
- (void)wasStopped;	// IMP=0x000000000016e5b5
- (void)timeDidChange;	// IMP=0x000000000016e158
- (double)clipAlphaForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000016e14a
- (void)_configureWithTransitionInfo:(CDStruct_cac3ced6)arg1;	// IMP=0x000000000016dffa
- (id)initWithTransitionInfo:(CDStruct_cac3ced6)arg1 effect:(id)arg2 auxiliaryEffect:(id)arg3;	// IMP=0x000000000016df7c
- (id)initWithTransitionInfo:(CDStruct_cac3ced6)arg1 event:(long long)arg2 clipLayouts:(id)arg3;	// IMP=0x000000000016defe

@end
