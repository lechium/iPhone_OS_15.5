//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class SBPIPFadeInOutSettings, SBPIPFluidTransitionsSettings, SBPIPInteractionSettings, SBPIPShadowSettings, SBPIPSizingSettings, SBPIPStashVisualSettings;

@interface SBPIPSettings : PTSettings
{
    SBPIPStashVisualSettings *_stashVisualSettings;	// 8 = 0x8
    SBPIPInteractionSettings *_interactionSettings;	// 16 = 0x10
    SBPIPFluidTransitionsSettings *_fluidTransitionsSettings;	// 24 = 0x18
    SBPIPFadeInOutSettings *_fadeInOutSettings;	// 32 = 0x20
    SBPIPShadowSettings *_shadowSettings;	// 40 = 0x28
    SBPIPSizingSettings *_sizingSettings;	// 48 = 0x30
}

+ (id)settingsControllerModule;	// IMP=0x000000000067b8e9
- (void).cxx_destruct;	// IMP=0x000000000067bf87
@property(retain, nonatomic) SBPIPSizingSettings *sizingSettings; // @synthesize sizingSettings=_sizingSettings;
@property(retain, nonatomic) SBPIPShadowSettings *shadowSettings; // @synthesize shadowSettings=_shadowSettings;
@property(retain, nonatomic) SBPIPFadeInOutSettings *fadeInOutSettings; // @synthesize fadeInOutSettings=_fadeInOutSettings;
@property(retain, nonatomic) SBPIPFluidTransitionsSettings *fluidTransitionsSettings; // @synthesize fluidTransitionsSettings=_fluidTransitionsSettings;
@property(retain, nonatomic) SBPIPInteractionSettings *interactionSettings; // @synthesize interactionSettings=_interactionSettings;
@property(retain, nonatomic) SBPIPStashVisualSettings *stashVisualSettings; // @synthesize stashVisualSettings=_stashVisualSettings;

@end

