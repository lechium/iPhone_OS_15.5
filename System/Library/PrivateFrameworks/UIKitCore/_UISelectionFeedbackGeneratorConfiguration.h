//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UISelectionFeedbackGeneratorConfiguration
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_feedback;	// 8 = 0x8
    double _minimumInterval;	// 16 = 0x10
    double _maxSpeed;	// 24 = 0x18
    double _slowAudioVolume;	// 32 = 0x20
    double _fastAudioVolume;	// 40 = 0x28
    double _slowHapticVolume;	// 48 = 0x30
    double _fastHapticVolume;	// 56 = 0x38
}

+ (id)pickerConfiguration;	// IMP=0x000000000063f9e2
+ (id)strongConfiguration;	// IMP=0x000000000063f8fa
+ (id)lightConfiguration;	// IMP=0x000000000063f812
+ (id)defaultConfiguration;	// IMP=0x000000000063f72a
- (void).cxx_destruct;	// IMP=0x000000000063fe14
@property(nonatomic) double fastHapticVolume; // @synthesize fastHapticVolume=_fastHapticVolume;
@property(nonatomic) double slowHapticVolume; // @synthesize slowHapticVolume=_slowHapticVolume;
@property(nonatomic) double fastAudioVolume; // @synthesize fastAudioVolume=_fastAudioVolume;
@property(nonatomic) double slowAudioVolume; // @synthesize slowAudioVolume=_slowAudioVolume;
@property(nonatomic) double maxSpeed; // @synthesize maxSpeed=_maxSpeed;
@property(nonatomic) double minimumInterval; // @synthesize minimumInterval=_minimumInterval;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback; // @synthesize feedback=_feedback;
- (id)feedbackKeyPaths;	// IMP=0x000000000063fc02
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000063fb8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000063fb49

@end

