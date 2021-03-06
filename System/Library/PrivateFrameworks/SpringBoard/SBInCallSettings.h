//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBInCallSettings : PTSettings
{
    SBFFluidBehaviorSettings *_transientOverlayFadeInSettings;	// 8 = 0x8
    SBFFluidBehaviorSettings *_transientOverlayFadeOutSettings;	// 16 = 0x10
}

+ (id)settingsControllerModule;	// IMP=0x00000000001b9ffb
- (void).cxx_destruct;	// IMP=0x00000000001ba275
@property(retain, nonatomic) SBFFluidBehaviorSettings *transientOverlayFadeOutSettings; // @synthesize transientOverlayFadeOutSettings=_transientOverlayFadeOutSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *transientOverlayFadeInSettings; // @synthesize transientOverlayFadeInSettings=_transientOverlayFadeInSettings;
- (void)setDefaultValues;	// IMP=0x00000000001b9f53

@end

