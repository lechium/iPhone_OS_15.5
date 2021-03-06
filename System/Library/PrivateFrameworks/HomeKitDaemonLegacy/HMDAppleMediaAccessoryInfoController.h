//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFWiFiManager, HMFWiFiNetworkInfo, NSNotificationCenter;
@protocol HMDAppleMediaAccessoryInfoControllerDataSource, OS_dispatch_queue;

@interface HMDAppleMediaAccessoryInfoController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <HMDAppleMediaAccessoryInfoControllerDataSource> _dataSource;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    HMFWiFiNetworkInfo *_lastWifiNetworkInfo;	// 32 = 0x20
    HMFWiFiManager *_wifiManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003e68dd
@property(retain) HMFWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(retain) HMFWiFiNetworkInfo *lastWifiNetworkInfo; // @synthesize lastWifiNetworkInfo=_lastWifiNetworkInfo;
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) __weak id <HMDAppleMediaAccessoryInfoControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_postUpdateWifiNetworkInfoIfDifferent:(id)arg1;	// IMP=0x00000000003e66e4
- (id)currentWifiNetworkInfo;	// IMP=0x00000000003e6615
- (void)handleCurrentNetworkChangedNotification:(id)arg1;	// IMP=0x00000000003e63ec
- (void)configure;	// IMP=0x00000000003e62e7
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2 notificationCenter:(id)arg3 wifiManager:(id)arg4;	// IMP=0x00000000003e620a

@end

