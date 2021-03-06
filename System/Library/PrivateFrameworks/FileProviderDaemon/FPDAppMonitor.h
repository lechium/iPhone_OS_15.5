//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPAppRegistry, FPDServer, NSDictionary;
@protocol OS_dispatch_queue;

@interface FPDAppMonitor : NSObject
{
    NSDictionary *_defaultProviderByAppBundleID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 16 = 0x10
    int _didChangeProvidersToken;	// 24 = 0x18
    int _didChangeDefaultProviderToken;	// 28 = 0x1c
    _Bool _monitoring;	// 32 = 0x20
    FPAppRegistry *_appRegistry;	// 40 = 0x28
    FPDServer *_server;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000037c42
@property(readonly, nonatomic) __weak FPDServer *server; // @synthesize server=_server;
@property(readonly, copy, nonatomic) FPAppRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property(getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
- (void)_updateDefaultProviderByAppBundleID;	// IMP=0x0000000000037b67
- (id)_updateDefaultProviderDomainID;	// IMP=0x00000000000377ef
- (void)_didChangeDefaultSaveLocationInUserDefaults;	// IMP=0x00000000000373d6
- (void)_didChangeListOfProviders;	// IMP=0x0000000000037054
- (void)_didChangeLocale:(id)arg1;	// IMP=0x0000000000036c3f
- (void)_didUnregisterApps:(id)arg1;	// IMP=0x0000000000036aef
- (void)_didRegisterApps:(id)arg1;	// IMP=0x000000000003679a
- (int)_registerForNotification:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003671a
- (id)_appMetadataIfMonitoringIsNeeded:(id)arg1;	// IMP=0x00000000000365b1
- (void)_populateListOfMonitoredApps;	// IMP=0x0000000000036325
- (void)dumpStateTo:(id)arg1;	// IMP=0x0000000000035fa3
- (void)stopMonitoring;	// IMP=0x0000000000035e32
- (void)startMonitoring;	// IMP=0x0000000000035b89
- (id)initWithServer:(id)arg1;	// IMP=0x0000000000035a71

@end

