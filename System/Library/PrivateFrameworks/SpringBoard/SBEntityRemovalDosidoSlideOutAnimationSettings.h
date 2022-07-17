//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalDosidoDefaultAnimationSettings, SBFFluidBehaviorSettings;

@interface SBEntityRemovalDosidoSlideOutAnimationSettings : PTSettings
{
    double _fromViewSlideOutAnimationDelay;	// 8 = 0x8
    double _fromViewSlideOutHeightOffsetMultiplier;	// 16 = 0x10
    SBFFluidBehaviorSettings *_fromViewSlideOutAnimationSettings;	// 24 = 0x18
    SBEntityRemovalDosidoDefaultAnimationSettings *_defaultAnimationSettings;	// 32 = 0x20
}

+ (id)settingsControllerModule;	// IMP=0x000000000026e39a
- (void).cxx_destruct;	// IMP=0x000000000026e77f
@property(retain, nonatomic) SBEntityRemovalDosidoDefaultAnimationSettings *defaultAnimationSettings; // @synthesize defaultAnimationSettings=_defaultAnimationSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *fromViewSlideOutAnimationSettings; // @synthesize fromViewSlideOutAnimationSettings=_fromViewSlideOutAnimationSettings;
@property(nonatomic) double fromViewSlideOutHeightOffsetMultiplier; // @synthesize fromViewSlideOutHeightOffsetMultiplier=_fromViewSlideOutHeightOffsetMultiplier;
@property(nonatomic) double fromViewSlideOutAnimationDelay; // @synthesize fromViewSlideOutAnimationDelay=_fromViewSlideOutAnimationDelay;
- (void)setDefaultValues;	// IMP=0x000000000026e1db

@end
