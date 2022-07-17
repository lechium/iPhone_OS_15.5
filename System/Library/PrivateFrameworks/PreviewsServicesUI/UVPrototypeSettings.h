//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface UVPrototypeSettings : PTSettings
{
    _Bool _showDebugUI;	// 8 = 0x8
    _Bool _forceMetricsView;	// 9 = 0x9
    double _crashFadeOutOpacity;	// 16 = 0x10
    double _crashAnimationDuration;	// 24 = 0x18
}

+ (id)settingsControllerModule;	// IMP=0x0000000000004799
@property(nonatomic) double crashAnimationDuration; // @synthesize crashAnimationDuration=_crashAnimationDuration;
@property(nonatomic) double crashFadeOutOpacity; // @synthesize crashFadeOutOpacity=_crashFadeOutOpacity;
@property(nonatomic) _Bool forceMetricsView; // @synthesize forceMetricsView=_forceMetricsView;
@property(nonatomic) _Bool showDebugUI; // @synthesize showDebugUI=_showDebugUI;
- (void)setDefaultValues;	// IMP=0x000000000000473d

@end
