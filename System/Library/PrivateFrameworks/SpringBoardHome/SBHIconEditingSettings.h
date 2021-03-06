//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class PTOutlet;

@interface SBHIconEditingSettings : PTSettings
{
    _Bool _showIndexLabels;	// 8 = 0x8
    _Bool _showDragPlatterIconBorder;	// 9 = 0x9
    _Bool _waitForPause;	// 10 = 0xa
    PTOutlet *_resetHomeScreenLayoutOutlet;	// 16 = 0x10
    double _editingLiftDelay;	// 24 = 0x18
    double _longPressToEditDuration;	// 32 = 0x20
    double _defaultPauseDuration;	// 40 = 0x28
    double _fastEditingPauseDuration;	// 48 = 0x30
    double _defaultSpringDampingRatio;	// 56 = 0x38
    double _defaultSpringDuration;	// 64 = 0x40
    double _clusterFastestDuration;	// 72 = 0x48
    double _clusterSlowestDuration;	// 80 = 0x50
    double _clusterMiddleFastDuration;	// 88 = 0x58
    double _clusterMiddleSlowDuration;	// 96 = 0x60
    long long _overrideAnimationType;	// 104 = 0x68
}

+ (id)settingsControllerModule;	// IMP=0x000000000001193e
- (void).cxx_destruct;	// IMP=0x00000000000125e3
@property(nonatomic) long long overrideAnimationType; // @synthesize overrideAnimationType=_overrideAnimationType;
@property(nonatomic) double clusterMiddleSlowDuration; // @synthesize clusterMiddleSlowDuration=_clusterMiddleSlowDuration;
@property(nonatomic) double clusterMiddleFastDuration; // @synthesize clusterMiddleFastDuration=_clusterMiddleFastDuration;
@property(nonatomic) double clusterSlowestDuration; // @synthesize clusterSlowestDuration=_clusterSlowestDuration;
@property(nonatomic) double clusterFastestDuration; // @synthesize clusterFastestDuration=_clusterFastestDuration;
@property(nonatomic) double defaultSpringDuration; // @synthesize defaultSpringDuration=_defaultSpringDuration;
@property(nonatomic) double defaultSpringDampingRatio; // @synthesize defaultSpringDampingRatio=_defaultSpringDampingRatio;
@property(nonatomic) double fastEditingPauseDuration; // @synthesize fastEditingPauseDuration=_fastEditingPauseDuration;
@property(nonatomic) double defaultPauseDuration; // @synthesize defaultPauseDuration=_defaultPauseDuration;
@property(nonatomic) _Bool waitForPause; // @synthesize waitForPause=_waitForPause;
@property(nonatomic) double longPressToEditDuration; // @synthesize longPressToEditDuration=_longPressToEditDuration;
@property(nonatomic) double editingLiftDelay; // @synthesize editingLiftDelay=_editingLiftDelay;
@property(nonatomic) _Bool showDragPlatterIconBorder; // @synthesize showDragPlatterIconBorder=_showDragPlatterIconBorder;
@property(nonatomic) _Bool showIndexLabels; // @synthesize showIndexLabels=_showIndexLabels;
@property(retain, nonatomic) PTOutlet *resetHomeScreenLayoutOutlet; // @synthesize resetHomeScreenLayoutOutlet=_resetHomeScreenLayoutOutlet;
- (void)setDefaultValues;	// IMP=0x0000000000011817

@end

