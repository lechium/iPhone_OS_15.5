//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface _UIFocusAnimationConfiguration : NSObject <NSCopying>
{
    double _focusingBaseDuration;	// 8 = 0x8
    double _unfocusingBaseDuration;	// 16 = 0x10
    unsigned long long _animationOptions;	// 24 = 0x18
    double _focusingDurationScaleFactorLowerBound;	// 32 = 0x20
    double _focusingDurationScaleFactorUpperBound;	// 40 = 0x28
    double _unfocusingDurationScaleFactorLowerBound;	// 48 = 0x30
    double _unfocusingDurationScaleFactorUpperBound;	// 56 = 0x38
    double _minimumFocusDuration;	// 64 = 0x40
    double _unfocusingRepositionBaseDuration;	// 72 = 0x48
    double _unfocusingBackgroundFadeDurationPercentage;	// 80 = 0x50
    double _focusingDelay;	// 88 = 0x58
}

+ (id)configurationWithStyle:(long long)arg1;	// IMP=0x0000000000673e42
@property(nonatomic) double focusingDelay; // @synthesize focusingDelay=_focusingDelay;
@property(nonatomic) double unfocusingBackgroundFadeDurationPercentage; // @synthesize unfocusingBackgroundFadeDurationPercentage=_unfocusingBackgroundFadeDurationPercentage;
@property(nonatomic) double unfocusingRepositionBaseDuration; // @synthesize unfocusingRepositionBaseDuration=_unfocusingRepositionBaseDuration;
@property(nonatomic) double minimumFocusDuration; // @synthesize minimumFocusDuration=_minimumFocusDuration;
@property(nonatomic) double unfocusingDurationScaleFactorUpperBound; // @synthesize unfocusingDurationScaleFactorUpperBound=_unfocusingDurationScaleFactorUpperBound;
@property(nonatomic) double unfocusingDurationScaleFactorLowerBound; // @synthesize unfocusingDurationScaleFactorLowerBound=_unfocusingDurationScaleFactorLowerBound;
@property(nonatomic) double focusingDurationScaleFactorUpperBound; // @synthesize focusingDurationScaleFactorUpperBound=_focusingDurationScaleFactorUpperBound;
@property(nonatomic) double focusingDurationScaleFactorLowerBound; // @synthesize focusingDurationScaleFactorLowerBound=_focusingDurationScaleFactorLowerBound;
@property(nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
@property(nonatomic) double unfocusingBaseDuration; // @synthesize unfocusingBaseDuration=_unfocusingBaseDuration;
@property(nonatomic) double focusingBaseDuration; // @synthesize focusingBaseDuration=_focusingBaseDuration;
- (double)_unfocusingRepositionVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;	// IMP=0x0000000000674482
- (double)_unfocusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;	// IMP=0x0000000000674426
- (double)_focusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;	// IMP=0x00000000006743ca
- (double)_defaultVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;	// IMP=0x00000000006742b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000067415f
- (id)init;	// IMP=0x0000000000674115

@end

