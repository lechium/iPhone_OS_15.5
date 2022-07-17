//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIBackdropViewSettings;

__attribute__((visibility("hidden")))
@interface _UIBackdropViewSettingsCombiner
{
    _UIBackdropViewSettings *_inputSettingsA;	// 368 = 0x170
    _UIBackdropViewSettings *_inputSettingsB;	// 376 = 0x178
    double _weighting;	// 384 = 0x180
    _UIBackdropViewSettings *_outputSettingsA;	// 392 = 0x188
    _UIBackdropViewSettings *_outputSettingsB;	// 400 = 0x190
}

- (void).cxx_destruct;	// IMP=0x00000000000dfbf7
@property(retain, nonatomic) _UIBackdropViewSettings *outputSettingsB; // @synthesize outputSettingsB=_outputSettingsB;
@property(retain, nonatomic) _UIBackdropViewSettings *outputSettingsA; // @synthesize outputSettingsA=_outputSettingsA;
@property(nonatomic) double weighting; // @synthesize weighting=_weighting;
@property(retain, nonatomic) _UIBackdropViewSettings *inputSettingsB; // @synthesize inputSettingsB=_inputSettingsB;
@property(retain, nonatomic) _UIBackdropViewSettings *inputSettingsA; // @synthesize inputSettingsA=_inputSettingsA;
- (void)computeOutputSettingsUsingModel:(id)arg1;	// IMP=0x00000000000df525
- (_Bool)isBackdropVisible;	// IMP=0x00000000000df51d
- (_Bool)requiresBackdropLayer;	// IMP=0x00000000000df515
- (void)setRequiresColorStatistics:(_Bool)arg1;	// IMP=0x00000000000df4e4
- (void)copyAdditionalSettingsFromSettings:(id)arg1;	// IMP=0x00000000000df342
- (void)setDefaultValues;	// IMP=0x00000000000df30d

@end
