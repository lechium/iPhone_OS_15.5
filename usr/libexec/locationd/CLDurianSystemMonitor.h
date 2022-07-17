//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CLDurianSystemMonitorDelegate, CLIntersiloUniverse, CLRoutineMonitorServiceProtocol;

@interface CLDurianSystemMonitor : NSObject
{
    struct unique_ptr<CLAppMonitor_Type::Client, std::default_delete<CLAppMonitor_Type::Client>> _appMonitorClient;	// 8 = 0x8
    struct unique_ptr<CLDaemonStatus_Type::Client, std::default_delete<CLDaemonStatus_Type::Client>> _daemonStatusClient;	// 16 = 0x10
    struct unique_ptr<CLWifiService_Type::Client, std::default_delete<CLWifiService_Type::Client>> _wifiServiceClient;	// 24 = 0x18
    _Bool _btStreaming;	// 32 = 0x20
    _Bool _wifiNetworkCritical;	// 33 = 0x21
    int _isCoexImpacted;	// 36 = 0x24
    _Bool _isAssociatedTo2GHzWiFi;	// 40 = 0x28
    int _audioStreamNotificationToken;	// 44 = 0x2c
    id <CLRoutineMonitorServiceProtocol> _routineMonitor;	// 48 = 0x30
    _Bool valid;	// 56 = 0x38
    id <CLDurianSystemMonitorDelegate> _delegate;	// 64 = 0x40
    id <CLIntersiloUniverse> _universe;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x0020000000a3f05c
- (void).cxx_destruct;	// IMP=0x0010000000a3f001
@property(retain) id <CLIntersiloUniverse> universe; // @synthesize universe=_universe;
@property(nonatomic) id <CLDurianSystemMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool valid; // @synthesize valid;
- (void)fetchLOIVisitAtStart;	// IMP=0x0010000000a3ebf3
- (void)onVisit:(id)arg1;	// IMP=0x0010000000a3ea6d
- (void)_onWifiServiceNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000a3e944
- (void)_onDaemonStatusNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x0010000000a3e66c
- (void)_onAppMonitorNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000a3e533
- (void)_unregisterForNotifications;	// IMP=0x0010000000a3e443
- (void)_registerForNotifications;	// IMP=0x0010000000a3df58
- (void)_checkAudioStreamState;	// IMP=0x0010000000a3de65
- (void)_recomputeCoexImpactedStateAndNotifyClients;	// IMP=0x0010000000a3dd28
@property(readonly) int coexImpactState;
- (void)dealloc;	// IMP=0x0010000000a3dcc5
- (id)initWithUniverse:(id)arg1;	// IMP=0x0010000000a3dbcb
- (id)init;	// IMP=0x0010000000a3dba0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
