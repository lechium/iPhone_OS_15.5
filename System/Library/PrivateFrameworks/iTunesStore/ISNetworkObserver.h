//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/SSDownloadQueueObserver-Protocol.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver>
{
    NSString *_dataStatusIndicator;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    _Bool _isCellularRestricted;	// 24 = 0x18
    double _lastNetworkTypeChangeTime;	// 32 = 0x20
    unsigned int _networkReachabilityFlags;	// 40 = 0x28
    long long _networkUsageCount;	// 48 = 0x30
    long long _networkType;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 64 = 0x40
    NSMutableSet *_observedDownloadQueues;	// 72 = 0x48
    struct __SCNetworkReachability *_reachability;	// 80 = 0x50
    struct __CTServerConnection *_telephonyServer;	// 88 = 0x58
}

+ (void)setWiFiEnabled:(_Bool)arg1;	// IMP=0x000000000003b160
+ (void)setAirplaneModeEnabled:(_Bool)arg1;	// IMP=0x000000000003b15a
+ (void)set3GEnabled:(_Bool)arg1;	// IMP=0x000000000003b154
+ (_Bool)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned int)arg1;	// IMP=0x0000000000039fb6
+ (id)sharedInstance;	// IMP=0x0000000000038feb
- (long long)_setNetworkType:(long long)arg1;	// IMP=0x000000000003afd8
- (void)_reloadNetworkTypeWithReachabilityFlags:(unsigned int)arg1;	// IMP=0x000000000003aed8
- (void)_reloadNetworkType;	// IMP=0x000000000003aea8
- (void)_reloadDataStatusIndicator;	// IMP=0x000000000003ae30
- (void)_reloadCellularRestriction;	// IMP=0x000000000003ad51
- (void)_postUsageChangedToValue:(_Bool)arg1;	// IMP=0x000000000003acba
- (void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2;	// IMP=0x000000000003abe3
- (void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned int)arg1 toValue:(unsigned int)arg2;	// IMP=0x000000000003ab0e
- (_Bool)_ntsIsUsingNetwork;	// IMP=0x000000000003a9ec
- (long long)_networkTypeForReachabilityFlags:(unsigned int)arg1;	// IMP=0x000000000003a9e1
- (long long)_networkTypeFromDataIndicator:(id)arg1;	// IMP=0x000000000003a82b
- (id)_dataStatusIndicator;	// IMP=0x000000000003a7b1
- (unsigned int)_currentNetworkReachabilityFlags;	// IMP=0x000000000003a782
- (void)_copyConnectionDataStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a707
- (void)_handleTelephonyNotificationWithName:(struct __CFString *)arg1 userInfo:(struct __CFDictionary *)arg2;	// IMP=0x000000000003a69f
- (void)_telephonyRegistrationDidChangeNotification:(id)arg1;	// IMP=0x000000000003a614
- (void)_telephonyOperatorNameDidChangeNotification:(id)arg1;	// IMP=0x000000000003a589
- (void)_applicationForegroundNotification:(id)arg1;	// IMP=0x000000000003a50b
- (void)downloadQueueNetworkUsageChanged:(id)arg1;	// IMP=0x000000000003a4a4
- (void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;	// IMP=0x000000000003a49e
@property long long networkType;
- (void)reloadNetworkType;	// IMP=0x000000000003a33a
@property(readonly) NSString *phoneNumber;
@property(readonly) NSString *providerName;
@property(readonly) NSString *operatorName;
@property(readonly) NSString *modemRegistrationStatus;
@property(readonly) NSString *mobileSubscriberNetworkCode;
@property(readonly) NSString *mobileSubscriberCountryCode;
@property(readonly, getter=isWiFiEnabled) _Bool wifiEnabled;
- (_Bool)isCellularDataEnabledForBundleIdentifier:(id)arg1;	// IMP=0x000000000003a0bb
@property(readonly) NSString *dataStatusIndicator;
@property(readonly) _Bool shouldShowCellularAutomaticDownloadsSwitch;
@property(readonly) unsigned int networkReachabilityFlags;
@property(readonly) double lastNetworkTypeChangeTime;
@property(readonly, getter=isUsingNetwork) _Bool usingNetwork;
- (void)endUsingNetwork;	// IMP=0x0000000000039b7e
- (void)endObservingDownloadQueue:(id)arg1;	// IMP=0x0000000000039a05
- (id)copyValueForCarrierBundleKey:(id)arg1;	// IMP=0x000000000003948b
@property(readonly) NSString *connectionTypeHeader;
- (void)beginUsingNetwork;	// IMP=0x00000000000392cd
- (void)beginObservingDownloadQueue:(id)arg1;	// IMP=0x0000000000039092
- (void)dealloc;	// IMP=0x0000000000038e32
- (id)init;	// IMP=0x00000000000387ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

