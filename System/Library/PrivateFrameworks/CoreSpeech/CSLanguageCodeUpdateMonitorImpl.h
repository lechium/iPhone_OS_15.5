//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSLanguageCodeUpdateMonitorImpl
{
    int _notifyToken;	// 8 = 0x8
}

- (void)notifySiriLanguageCodeChanged:(id)arg1;	// IMP=0x00000000000aae1c
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x00000000000aad9a
- (void)_didReceiveLanguageCodeUpdate;	// IMP=0x00000000000aac41
- (void)_stopMonitoring;	// IMP=0x00000000000aaba3
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000000000aaae2
- (id)init;	// IMP=0x00000000000aaaa0

@end

