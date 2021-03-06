//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPDiagnosticsProvider-Protocol.h>
#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSystemReadyDelegate-Protocol.h>

@class HDSPApplicationWorkspaceMonitor, HDSPDevicePowerMonitor, HDSPDeviceUnlockMonitor, HDSPEnvironment, HDSPWatchOnWristMonitor, NSString;
@protocol HDSPSystemReadyDelegate, HDSPSystemReadyProvider;

@interface HDSPSystemMonitor : NSObject <HDSPSystemReadyDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware>
{
    _Bool _systemReady;	// 8 = 0x8
    struct os_unfair_lock_s _systemMonitorLock;	// 12 = 0xc
    HDSPEnvironment *_environment;	// 16 = 0x10
    id <HDSPSystemReadyDelegate> _delegate;	// 24 = 0x18
    HDSPDeviceUnlockMonitor *_deviceUnlockMonitor;	// 32 = 0x20
    HDSPDevicePowerMonitor *_devicePowerMonitor;	// 40 = 0x28
    HDSPApplicationWorkspaceMonitor *_applicationWorkspaceMonitor;	// 48 = 0x30
    HDSPWatchOnWristMonitor *_watchOnWristMonitor;	// 56 = 0x38
    id <HDSPSystemReadyProvider> _systemReadyProvider;	// 64 = 0x40
}

+ (id)_platformSpecificReadyProviderForEnvironment:(id)arg1;	// IMP=0x0000000000050ab5
- (void).cxx_destruct;	// IMP=0x0000000000051919
@property(readonly, nonatomic) struct os_unfair_lock_s systemMonitorLock; // @synthesize systemMonitorLock=_systemMonitorLock;
@property(readonly, nonatomic) _Bool systemReady; // @synthesize systemReady=_systemReady;
@property(readonly, nonatomic) id <HDSPSystemReadyProvider> systemReadyProvider; // @synthesize systemReadyProvider=_systemReadyProvider;
@property(readonly, nonatomic) HDSPWatchOnWristMonitor *watchOnWristMonitor; // @synthesize watchOnWristMonitor=_watchOnWristMonitor;
@property(readonly, nonatomic) HDSPApplicationWorkspaceMonitor *applicationWorkspaceMonitor; // @synthesize applicationWorkspaceMonitor=_applicationWorkspaceMonitor;
@property(readonly, nonatomic) HDSPDevicePowerMonitor *devicePowerMonitor; // @synthesize devicePowerMonitor=_devicePowerMonitor;
@property(readonly, nonatomic) HDSPDeviceUnlockMonitor *deviceUnlockMonitor; // @synthesize deviceUnlockMonitor=_deviceUnlockMonitor;
@property(nonatomic) __weak id <HDSPSystemReadyDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
- (id)diagnosticInfo;	// IMP=0x000000000005154c
- (id)diagnosticDescription;	// IMP=0x00000000000513a6
- (void)systemDidBecomeReady;	// IMP=0x0000000000051375
- (_Bool)isSystemReady;	// IMP=0x0000000000051179
- (void)environmentDidBecomeReady:(id)arg1;	// IMP=0x0000000000051173
- (void)environmentWillBecomeReady:(id)arg1;	// IMP=0x00000000000510a3
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000051037
- (id)initWithEnvironment:(id)arg1 watchOnWristMonitor:(id)arg2 devicePowerMonitor:(id)arg3 deviceUnlockMonitor:(id)arg4 systemReadyProvider:(id)arg5 applicationWorkspaceMonitor:(id)arg6;	// IMP=0x0000000000050e20
- (id)initWithEnvironment:(id)arg1 watchOnWristMonitor:(id)arg2 devicePowerMonitor:(id)arg3 deviceUnlockMonitor:(id)arg4;	// IMP=0x0000000000050cec
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0000000000050b02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

