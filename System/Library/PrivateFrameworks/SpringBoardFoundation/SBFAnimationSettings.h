//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

#import <SpringBoardFoundation/PTSettingsKeyPathObserver-Protocol.h>

@class BSAnimationSettings, NSString, PTFrameRateRangeSettings, PTPointSettings;

@interface SBFAnimationSettings : PTSettings <PTSettingsKeyPathObserver>
{
    BSAnimationSettings *_exportedSettings;	// 8 = 0x8
    long long _animationType;	// 16 = 0x10
    double _delay;	// 24 = 0x18
    unsigned long long _frameRate;	// 32 = 0x20
    unsigned long long _curve;	// 40 = 0x28
    PTPointSettings *_controlPoint1Settings;	// 48 = 0x30
    PTPointSettings *_controlPoint2Settings;	// 56 = 0x38
    PTFrameRateRangeSettings *_preferredFrameRateRange;	// 64 = 0x40
    double _duration;	// 72 = 0x48
    double _mass;	// 80 = 0x50
    double _stiffness;	// 88 = 0x58
    double _damping;	// 96 = 0x60
    double _epsilon;	// 104 = 0x68
    double _initialVelocity;	// 112 = 0x70
    double _speed;	// 120 = 0x78
}

+ (id)_moduleWithSectionTitle:(id)arg1 delay:(_Bool)arg2 frameRate:(_Bool)arg3;	// IMP=0x0000000000069eee
+ (id)_moduleWithSectionTitle:(id)arg1;	// IMP=0x0000000000069ed1
+ (id)settingsControllerModule;	// IMP=0x0000000000069eb8
+ (_Bool)ignoresKey:(id)arg1;	// IMP=0x00000000000696d4
- (void).cxx_destruct;	// IMP=0x000000000006aa4f
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) PTFrameRateRangeSettings *preferredFrameRateRange; // @synthesize preferredFrameRateRange=_preferredFrameRateRange;
@property(retain, nonatomic) PTPointSettings *controlPoint2Settings; // @synthesize controlPoint2Settings=_controlPoint2Settings;
@property(retain, nonatomic) PTPointSettings *controlPoint1Settings; // @synthesize controlPoint1Settings=_controlPoint1Settings;
@property(nonatomic) unsigned long long curve; // @synthesize curve=_curve;
@property(nonatomic) unsigned long long frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (id)BSAnimationSettings;	// IMP=0x0000000000069a92
@property(readonly, nonatomic) double calculatedDuration;
- (void)setFrameRateRange:(struct CAFrameRateRange)arg1 highFrameRateReason:(unsigned int)arg2;	// IMP=0x00000000000699e1
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;	// IMP=0x00000000000698e8
- (void)setDefaultValues;	// IMP=0x00000000000697c5
- (void)dealloc;	// IMP=0x0000000000069784
- (id)initWithDefaultValues;	// IMP=0x0000000000069735

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
