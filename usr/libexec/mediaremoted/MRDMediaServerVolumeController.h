//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MRDMediaServerVolumeController
{
    float _volumeValue;	// 8 = 0x8
    float _volumeLimit;	// 12 = 0xc
    _Bool _deviceEnforcesEUVolumeLimit;	// 16 = 0x10
    unsigned long long _warningState;	// 24 = 0x18
    _Bool _volumeLimitDataInitialized;	// 32 = 0x20
}

- (void)_postVolumeDidChange:(float)arg1;	// IMP=0x00200000000cd598
- (void)_internalSetVolumeValue:(float)arg1;	// IMP=0x00100000000cd467
- (void)_updateVolumeValueCache;	// IMP=0x00100000000cd3e3
- (float)_volumeFromAVController;	// IMP=0x00100000000cd184
- (void)_avSessionMediaServicesResetNotification:(id)arg1;	// IMP=0x00100000000cd0fd
- (void)_EUVolumeLimitEnforcedDidChange:(id)arg1;	// IMP=0x00100000000cd032
- (void)_EUVolumeLimitDidChange:(id)arg1;	// IMP=0x00100000000ccf90
- (void)_systemMuteDidChange:(id)arg1;	// IMP=0x00100000000ccf7e
- (void)_systemVolumeDidChange:(id)arg1;	// IMP=0x00100000000ccccf
- (void)_initializeVolumeLimitDataIfNecessary;	// IMP=0x00100000000ccb37
- (void)_tearDownNotifications;	// IMP=0x00100000000cca01
- (void)_setupNotifications;	// IMP=0x00100000000cc4c7
- (id)_mediaServerController;	// IMP=0x00100000000cc4ac
- (_Bool)adjustVolumeWithStepAmount:(float)arg1 error:(id *)arg2;	// IMP=0x00100000000cc48e
- (_Bool)setVolume:(float)arg1 error:(id *)arg2;	// IMP=0x00100000000cc32d
- (unsigned long long)warningState;	// IMP=0x00100000000cc305
- (float)volumeLimit;	// IMP=0x00100000000cc2dc
- (_Bool)volumeWarningEnabled;	// IMP=0x00100000000cc2b5
- (float)currentVolume;	// IMP=0x00100000000cc28c
- (void)dealloc;	// IMP=0x00100000000cc217
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x00100000000cc145

@end
