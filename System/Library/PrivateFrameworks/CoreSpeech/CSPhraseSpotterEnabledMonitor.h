//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSPhraseSpotterEnabledMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isPhraseSpotterEnabled;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00000000000daa8d
- (void)_phraseSpotterEnabledDidChange;	// IMP=0x00000000000dad7d
- (_Bool)_checkPhraseSpotterEnabled;	// IMP=0x00000000000dac9b
- (_Bool)isEnabled;	// IMP=0x00000000000dac8b
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x00000000000dac21
- (void)_didReceivePhraseSpotterSettingChangedInQueue:(_Bool)arg1;	// IMP=0x00000000000dabaf
- (void)_stopMonitoring;	// IMP=0x00000000000dab87
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000000000dab21
- (id)init;	// IMP=0x00000000000daae2

@end

