//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSLanguageCodeUpdateMonitorImpl
{
    int _notifyToken;	// 8 = 0x8
}

- (void)notifySiriLanguageCodeChanged:(id)arg1;	// IMP=0x0020000000032952
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x00100000000328d0
- (void)_didReceiveLanguageCodeUpdate;	// IMP=0x0010000000032777
- (void)_stopMonitoring;	// IMP=0x00100000000326d9
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000032618
- (id)init;	// IMP=0x00100000000325d6

@end
