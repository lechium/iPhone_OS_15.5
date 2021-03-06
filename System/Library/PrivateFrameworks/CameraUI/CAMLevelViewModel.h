//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMLevelViewModel
{
    long long _currentIndicatorMode;	// 8 = 0x8
    double _currentIndicatorAlpha;	// 16 = 0x10
    double _desiredUpdateInterval;	// 24 = 0x18
    long long __desiredIndicatorMode;	// 32 = 0x20
    double __desiredModeBeganTime;	// 40 = 0x28
    struct UIOffset _currentIndicatorOffset;	// 48 = 0x30
}

@property(nonatomic, setter=_setDesiredModeBeganTime:) double _desiredModeBeganTime; // @synthesize _desiredModeBeganTime=__desiredModeBeganTime;
@property(nonatomic, setter=_setDesiredIndicatorMode:) long long _desiredIndicatorMode; // @synthesize _desiredIndicatorMode=__desiredIndicatorMode;
@property(nonatomic, setter=_setDesiredUpdateInterval:) double desiredUpdateInterval; // @synthesize desiredUpdateInterval=_desiredUpdateInterval;
@property(nonatomic, setter=_setCurrentIndicatorOffset:) struct UIOffset currentIndicatorOffset; // @synthesize currentIndicatorOffset=_currentIndicatorOffset;
@property(nonatomic, setter=_setCurrentIndicatorAlpha:) double currentIndicatorAlpha; // @synthesize currentIndicatorAlpha=_currentIndicatorAlpha;
@property(nonatomic, setter=_setCurrentIndicatorMode:) long long currentIndicatorMode; // @synthesize currentIndicatorMode=_currentIndicatorMode;
- (id)mutableChangeObject;	// IMP=0x000000000012ac58
- (long long)_hysteresisModeForDesiredMode:(long long)arg1;	// IMP=0x000000000012aa7c
- (double)_hysteresisAlphaForDesiredAlpha:(double)arg1 fromCurrentAlpha:(double)arg2;	// IMP=0x000000000012aa42
- (void)_updateFlatModeWithRoll:(float)arg1 pitch:(float)arg2 magnitude:(float)arg3;	// IMP=0x000000000012a7e8
- (void)_updateModeNone;	// IMP=0x000000000012a768
- (void)applyDeviceMotion:(id)arg1;	// IMP=0x000000000012a698

@end

