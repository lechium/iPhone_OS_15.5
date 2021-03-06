//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSNetworkAvailabilityMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000f6897
- (void)_notifyObserver:(id)arg1 withNetworkAvailability:(_Bool)arg2;	// IMP=0x00000000000f6ccf
- (void)_didReceivedNetworkAvailabilityChangedNotification:(_Bool)arg1;	// IMP=0x00000000000f6c5d
- (void)_availabilityChanged;	// IMP=0x00000000000f6bbf
- (void)_stopMonitoring;	// IMP=0x00000000000f6b16
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000000000f69a6
- (_Bool)isAvailable;	// IMP=0x00000000000f692e
- (id)init;	// IMP=0x00000000000f68ec

@end

